__int64 __fastcall uu_dd::blocks::unblock::{{closure}}(__int64 a1, __int64 a2, _QWORD *a3, char *a4, __int64 a5)
{
  __int64 v7; // rcx
  signed __int64 v8; // r15
  __int64 v10; // r13
  void *v11; // r13
  signed __int64 v12; // r15
  signed __int64 v13; // r15

  if ( a5 < 0 )
    core::panicking::panic_nounwind(anon_03cf1666c72ffecffa9b2ee592f2558f_6_llvm_12236334141226123511, 71LL);
  v7 = a5 + 1;
  do
  {
    if ( v7 == 1 )
    {
      v12 = a3[2];
      if ( v12 != *a3 )
        goto LABEL_13;
      goto LABEL_12;
    }
    v8 = v7 - 1;
  }
  while ( a4[v7-- - 2] == 32 );
  if ( v8 - 1 >= (unsigned __int64)a5 )
    core::panicking::panic_nounwind(anon_7bf17358f8e033a0017788a0b3f72e05_19_llvm_2099831596196026068, 104LL);
  if ( v8 < 0 )
    core::panicking::panic_nounwind(anon_9b87b42699a6e8db798014e3917c8532_16_llvm_5650560785558774950, 71LL);
  core::slice::raw::from_raw_parts::precondition_check(a4, 1LL, 1LL, v8);
  v10 = a3[2];
  if ( *a3 - v10 < (unsigned __int64)v8 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a3, a3[2], v8);
    v10 = a3[2];
  }
  v11 = (void *)(a3[1] + v10);
  core::intrinsics::copy_nonoverlapping::precondition_check(a4, v11, 1LL, 1LL, v8);
  memcpy(v11, a4, v8);
  v12 = a3[2] + v8;
  a3[2] = v12;
  if ( v12 == *a3 )
LABEL_12:
    alloc::raw_vec::RawVec<T,A>::grow_one(a3);
LABEL_13:
  *(_BYTE *)(a3[1] + v12) = 10;
  v13 = v12 + 1;
  a3[2] = v13;
  *(_QWORD *)(a1 + 16) = v13;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  return a1;
}
