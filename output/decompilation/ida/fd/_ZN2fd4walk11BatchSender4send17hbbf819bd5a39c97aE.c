__int64 __fastcall fd::walk::BatchSender::send(_QWORD *a1, const void *a2)
{
  __int64 v2; // r14
  volatile signed __int64 **v3; // r12
  char v4; // dl
  unsigned __int8 v5; // bp
  __int64 v6; // r14
  char v7; // dl
  _QWORD *v8; // rbx
  bool v9; // of
  __int64 v10; // rt0
  __int64 v11; // rax
  _QWORD dest[45]; // [rsp+10h] [rbp-168h] BYREF

  v2 = fd::walk::Batch::lock(a1[2]);
  v3 = (volatile signed __int64 **)(a1 + 2);
  v5 = v4 & 1;
  if ( __OFSUB__(0LL, *(_QWORD *)(v2 + 8)) || *(_QWORD *)(v2 + 24) >= a1[3] )
  {
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<crossbeam_channel::flavors::zero::Inner>>(v2, v5);
    v6 = fd::walk::Batch::new();
    core::ptr::drop_in_place<fd::walk::Batch>(a1 + 2);
    *v3 = (volatile signed __int64 *)v6;
    v2 = fd::walk::Batch::lock(v6);
    v5 = v7 & 1;
    if ( *(_QWORD *)(v2 + 8) == 0x8000000000000000LL )
      core::option::unwrap_failed(&off_4025B8);
  }
  v8 = dest;
  memcpy(dest, a2, 0x138uLL);
  alloc::vec::Vec<T,A>::push(v2 + 8, dest);
  v9 = __OFSUB__(*(_QWORD *)(v2 + 24), 1LL);
  if ( *(_QWORD *)(v2 + 24) != 1LL )
    goto LABEL_8;
  v10 = _InterlockedIncrement64(*v3);
  if ( (v10 < 0) ^ v9 | (v10 == 0) )
    BUG();
  v11 = crossbeam_channel::channel::Sender<T>::send(*a1, a1[1]);
  if ( v11 )
  {
    dest[0] = v11;
    core::ptr::drop_in_place<crossbeam_channel::err::SendError<fd::walk::Batch>>(dest);
    LOBYTE(v8) = 1;
  }
  else
  {
LABEL_8:
    LODWORD(v8) = 0;
  }
  core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<crossbeam_channel::flavors::zero::Inner>>(v2, v5);
  return (unsigned int)v8;
}