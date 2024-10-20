__int64 __fastcall uu_ls::dired::calculate_and_update_positions(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // r12
  __int64 v5; // rcx
  bool v6; // cf
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r15
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rcx

  result = a1[1];
  if ( !result || (result & 7) != 0 || (v4 = a1[2], v4 >> 59) )
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  if ( v4 )
  {
    v5 = *(_QWORD *)(16 * v4 + result - 16);
    v6 = __CFADD__(v5, 2LL);
    v7 = v5 + 2;
    if ( v6 )
      core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_52_llvm_11807341281290569930);
    v8 = v7 + a2;
    if ( __CFADD__(v7, a2) )
LABEL_16:
      core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_50_llvm_11807341281290569930);
  }
  else
  {
    v8 = a2 + 2;
    if ( a2 >= 0xFFFFFFFFFFFFFFFELL )
      goto LABEL_16;
  }
  v6 = __CFADD__(v8, 2LL);
  v9 = v8 + 2;
  if ( v6 )
    goto LABEL_16;
  v10 = v9 + a3;
  if ( __CFADD__(v9, a3) )
    core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_51_llvm_11807341281290569930);
  v11 = a1[6];
  v6 = __CFADD__(v11, v9);
  v12 = v11 + v9;
  if ( v6 )
    core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_53_llvm_11807341281290569930);
  v6 = __CFADD__(v11, v10);
  v13 = v11 + v10;
  if ( v6 )
    core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_54_llvm_11807341281290569930);
  if ( v4 == *a1 )
  {
    alloc::raw_vec::RawVec<T,A>::grow_one(a1);
    result = a1[1];
  }
  v14 = 16 * v4;
  *(_QWORD *)(result + v14) = v12;
  *(_QWORD *)(result + v14 + 8) = v13;
  a1[2] = v4 + 1;
  a1[6] = 0LL;
  return result;
}
