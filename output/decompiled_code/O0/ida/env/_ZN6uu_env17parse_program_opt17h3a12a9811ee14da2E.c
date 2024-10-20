_OWORD *__fastcall uu_env::parse_program_opt(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  _OWORD *result; // rax
  __int64 v8; // rbx
  void *v9; // r14
  __int128 v10; // xmm0
  __int128 v11; // [rsp+8h] [rbp-40h] BYREF
  __int128 v12; // [rsp+18h] [rbp-30h]

  if ( *(_BYTE *)(a1 + 153) )
  {
    v3 = *(_QWORD *)(a1 + 88);
    if ( v3 == *(_QWORD *)(a1 + 72) )
    {
      v4 = a3;
      alloc::raw_vec::RawVec<T,A>::grow_one(a1 + 72);
      a3 = v4;
    }
    v5 = *(_QWORD *)(a1 + 80);
    v6 = 16 * v3;
    *(_QWORD *)(v5 + v6) = a2;
    *(_QWORD *)(v5 + v6 + 8) = a3;
    *(_QWORD *)(a1 + 88) = v3 + 1;
    return 0LL;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v11, 39LL, 0LL);
    v8 = *((_QWORD *)&v11 + 1);
    if ( (_QWORD)v11 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v11 + 1), v12);
    v9 = (void *)v12;
    core::intrinsics::copy_nonoverlapping::precondition_check(&xmmword_26209, v12, 1LL, 1LL, 39LL);
    qmemcpy(v9, "cannot specify --null (-0) with command", 39);
    *(_QWORD *)&v11 = v8;
    *((_QWORD *)&v11 + 1) = v9;
    *(_QWORD *)&v12 = 39LL;
    DWORD2(v12) = 125;
    result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v10 = v11;
    result[1] = v12;
    *result = v10;
  }
  return result;
}
