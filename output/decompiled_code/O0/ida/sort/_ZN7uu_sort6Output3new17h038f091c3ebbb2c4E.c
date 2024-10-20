__int64 __fastcall uu_sort::Output::new(__int64 a1, const void *a2, size_t a3)
{
  int v3; // ebp
  void *v4; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // r13
  void *v8; // rbp
  _OWORD *v9; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  void *v14; // [rsp+8h] [rbp-A0h]
  __int64 v15; // [rsp+10h] [rbp-98h] BYREF
  int v16; // [rsp+18h] [rbp-90h]
  __int16 v17; // [rsp+1Ch] [rbp-8Ch]
  __int128 v18; // [rsp+20h] [rbp-88h] BYREF
  void *dest[2]; // [rsp+30h] [rbp-78h]
  __int128 v20; // [rsp+40h] [rbp-68h]
  __int128 v21; // [rsp+50h] [rbp-58h]
  _DWORD v22[2]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v23; // [rsp+68h] [rbp-40h]
  __int64 v24; // [rsp+70h] [rbp-38h]

  v6 = 0x8000000000000000LL;
  if ( !a2 )
  {
LABEL_9:
    *(_QWORD *)a1 = v6;
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = a3;
    *(_DWORD *)(a1 + 24) = v3;
    return a1;
  }
  v15 = 0x1B600000000LL;
  v16 = 256;
  v17 = 1;
  std::fs::OpenOptions::_open(v22, &v15, a2, a3);
  if ( !v22[0] )
  {
    v3 = v22[1];
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v18, a3, 0LL);
    v6 = *((_QWORD *)&v18 + 1);
    if ( (_QWORD)v18 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v18 + 1), dest[0]);
    v4 = dest[0];
    core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest[0], 1LL, 1LL, a3);
    memcpy(v4, a2, a3);
    goto LABEL_9;
  }
  v7 = v23;
  v24 = v23;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v18, a3, 0LL);
  v14 = (void *)*((_QWORD *)&v18 + 1);
  if ( (_QWORD)v18 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v18 + 1), dest[0]);
  v8 = dest[0];
  core::intrinsics::copy_nonoverlapping::precondition_check(a2, dest[0], 1LL, 1LL, a3);
  memcpy(v8, a2, a3);
  LOBYTE(v18) = 1;
  *((_QWORD *)&v18 + 1) = v7;
  dest[0] = v14;
  dest[1] = v8;
  *(_QWORD *)&v20 = a3;
  v9 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
  if ( !v9 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v10 = v18;
  v11 = *(_OWORD *)dest;
  v12 = v20;
  v9[3] = v21;
  v9[2] = v12;
  v9[1] = v11;
  *v9 = v10;
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = &anon_106514630be1c9ef1de9e84b8238e531_22_llvm_16179947721019886102;
  *(_QWORD *)a1 = 0x8000000000000001LL;
  return a1;
}
