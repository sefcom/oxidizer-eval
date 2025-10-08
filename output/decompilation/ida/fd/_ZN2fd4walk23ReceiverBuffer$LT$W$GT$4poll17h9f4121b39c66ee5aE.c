__int64 __fastcall fd::walk::ReceiverBuffer<W>::poll(_QWORD *a1)
{
  _BYTE *v1; // r12
  __int64 v3; // rax
  int v4; // eax
  __int64 *v5; // r13
  _BYTE *v6; // r15
  _BYTE *v7; // r14
  __int64 *v8; // r15
  char v9; // r13
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  bool v12; // zf
  _BYTE v13[8]; // [rsp+10h] [rbp-408h] BYREF
  __int64 v14; // [rsp+18h] [rbp-400h]
  _BYTE v15[32]; // [rsp+20h] [rbp-3F8h] BYREF
  _BYTE v16[312]; // [rsp+40h] [rbp-3D8h] BYREF
  __int64 v17; // [rsp+178h] [rbp-2A0h] BYREF
  __int128 v18; // [rsp+180h] [rbp-298h]
  __int128 v19; // [rsp+190h] [rbp-288h]
  __int128 v20; // [rsp+1A0h] [rbp-278h]
  __int64 v21; // [rsp+1B0h] [rbp-268h]
  _BYTE src[248]; // [rsp+1B8h] [rbp-260h] BYREF
  _QWORD v23[45]; // [rsp+2B0h] [rbp-168h] BYREF

  fd::walk::ReceiverBuffer<W>::recv((__int64)v13, a1);
  if ( v13[0] == 1 )
  {
    if ( v13[1] )
      return fd::walk::ReceiverBuffer<W>::stop(a1);
    v4 = fd::walk::ReceiverBuffer<W>::stream(a1);
    if ( (_BYTE)v4 == 6 )
    {
LABEL_10:
      LOBYTE(v1) = 6;
      return (unsigned int)v1;
    }
LABEL_8:
    LODWORD(v1) = v4;
    return (unsigned int)v1;
  }
  <fd::walk::Batch as core::iter::traits::collect::IntoIterator>::into_iter(v15, v14);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v17, v15);
  v3 = v17;
  if ( v17 == 5 )
  {
LABEL_5:
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::walk::WorkerResult>>(v15);
    if ( *((_BYTE *)a1 + 128) != 1 )
      goto LABEL_10;
    if ( !(unsigned __int8)crossbeam_channel::channel::Receiver<T>::is_empty(*a1, a1[1]) )
      goto LABEL_10;
    v4 = fd::walk::ReceiverBuffer<W>::flush(a1);
    if ( (_BYTE)v4 == 6 )
      goto LABEL_10;
    goto LABEL_8;
  }
  v5 = &v17;
  v6 = v15;
  while ( v3 == 4 )
  {
    *(_QWORD *)&v16[48] = v21;
    *(_OWORD *)&v16[32] = v20;
    *(_OWORD *)&v16[16] = v19;
    *(_OWORD *)v16 = v18;
    if ( *(_BYTE *)(a1[12] + 486LL) )
    {
      <T as alloc::string::SpecToString>::spec_to_string(v23, v16);
      fd::error::print_error((__int64)v23);
    }
    core::ptr::drop_in_place<ignore::Error>(v16);
LABEL_13:
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v5, v6);
    v3 = v17;
    if ( v17 == 5 )
      goto LABEL_5;
  }
  v23[0] = v3;
  v23[7] = v21;
  *(_OWORD *)&v23[5] = v20;
  *(_OWORD *)&v23[3] = v19;
  *(_OWORD *)&v23[1] = v18;
  memcpy(&v23[8], src, 0xF8uLL);
  if ( *(_BYTE *)(a1[12] + 484LL) )
  {
    LOBYTE(v1) = 1;
    goto LABEL_28;
  }
  v7 = v6;
  v8 = v5;
  v9 = *((_BYTE *)a1 + 128);
  if ( v9 == 1 )
  {
    LODWORD(v1) = fd::walk::ReceiverBuffer<W>::print(a1, v23);
    if ( (_BYTE)v1 != 6 )
      goto LABEL_28;
  }
  else
  {
    v1 = v16;
    memcpy(v16, v23, sizeof(v16));
    alloc::vec::Vec<T,A>::push(a1 + 7, v16);
    if ( a1[9] >= 0x3E9uLL )
    {
      LODWORD(v1) = fd::walk::ReceiverBuffer<W>::stream(a1);
      if ( (_BYTE)v1 != 6 )
        goto LABEL_29;
    }
  }
  v10 = a1[12];
  v11 = a1[15] + 1LL;
  a1[15] = v11;
  if ( (*(_BYTE *)(v10 + 32) & 1) == 0 || v11 < *(_QWORD *)(v10 + 40) )
  {
    v12 = v9 == 0;
    v5 = v8;
    v6 = v7;
    if ( !v12 )
      core::ptr::drop_in_place<fd::dir_entry::DirEntry>(v23);
    goto LABEL_13;
  }
  LODWORD(v1) = fd::walk::ReceiverBuffer<W>::stop(a1);
  if ( v9 )
LABEL_28:
    core::ptr::drop_in_place<fd::dir_entry::DirEntry>(v23);
LABEL_29:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fd::walk::WorkerResult>>(v15);
  return (unsigned int)v1;
}