char *__fastcall uu_paste::DelimiterState::write_delimiter(_QWORD *a1, _QWORD *a2)
{
  char *result; // rax
  signed __int64 v3; // r14
  const void *v4; // r15
  __int64 v5; // r12
  void *v6; // r12
  _QWORD *v7; // r13
  _QWORD *v8; // rax
  signed __int64 v9; // r14
  const void *v10; // r15
  __int64 v11; // r12
  void *v12; // r12

  result = (char *)*a1;
  if ( !*a1 )
    return result;
  if ( result == (_BYTE *)&dword_0 + 1 )
  {
    v3 = a1[2];
    if ( v3 >= 0 )
    {
      v4 = (const void *)a1[1];
      core::slice::raw::from_raw_parts::precondition_check(v4, 1LL, 1LL, v3);
      v5 = a2[2];
      if ( *a2 - v5 < (unsigned __int64)v3 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, a2[2], v3);
        v5 = a2[2];
      }
      v6 = (void *)(a2[1] + v5);
      core::intrinsics::copy_nonoverlapping::precondition_check(v4, v6, 1LL, 1LL, v3);
      result = (char *)memcpy(v6, v4, v3);
      a2[2] += v3;
      return result;
    }
LABEL_16:
    core::panicking::panic_nounwind(anon_9b87b42699a6e8db798014e3917c8532_16_llvm_5650560785558774950, 71LL);
  }
  v7 = (_QWORD *)a1[7];
  if ( v7 == (_QWORD *)a1[8] || (a1[7] = v7 + 2, !v7) )
  {
    v7 = (_QWORD *)a1[5];
    v8 = (_QWORD *)a1[6];
    a1[7] = v7;
    a1[8] = v8;
    if ( v7 == v8 || (a1[7] = v7 + 2, !v7) )
      core::option::unwrap_failed(&off_102A50);
  }
  v9 = v7[1];
  if ( v9 < 0 )
    goto LABEL_16;
  v10 = (const void *)*v7;
  core::slice::raw::from_raw_parts::precondition_check(*v7, 1LL, 1LL, v7[1]);
  v11 = a2[2];
  if ( *a2 - v11 < (unsigned __int64)v9 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a2, a2[2], v9);
    v11 = a2[2];
  }
  v12 = (void *)(a2[1] + v11);
  core::intrinsics::copy_nonoverlapping::precondition_check(v10, v12, 1LL, 1LL, v9);
  result = (char *)memcpy(v12, v10, v9);
  a2[2] += v9;
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v7;
  return result;
}
