__int64 __fastcall uu_ls::dired::calculate_subdired(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v4; // rcx
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rax
  bool v8; // cf
  __int64 v9; // r15
  _QWORD *v10; // rdi
  __int64 result; // rax
  __int64 v12; // rcx

  v2 = a1[1];
  if ( !v2 || (v2 & 7) != 0 || (v4 = a1[2], v4 >> 59) )
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  if ( v4 )
  {
    if ( *(_QWORD *)(16 * v4 + v2 - 8) == -1LL )
      core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_28_llvm_11807341281290569930);
    v5 = *(_QWORD *)(16 * v4 + v2 - 8) + 3LL;
    if ( (unsigned __int64)(*(_QWORD *)(16 * v4 + v2 - 8) + 1LL) >= 0xFFFFFFFFFFFFFFFELL )
LABEL_14:
      core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_34_llvm_11807341281290569930);
  }
  else
  {
    v5 = 2LL;
  }
  v6 = a1[5];
  v7 = 2 * (unsigned int)(v6 != 0);
  v8 = __CFADD__(v7, v5);
  v9 = v7 + v5;
  if ( v8 )
    goto LABEL_14;
  if ( __CFADD__(v9, a2) )
    core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_35_llvm_11807341281290569930);
  v10 = a1 + 3;
  if ( v6 == a1[3] )
    alloc::raw_vec::RawVec<T,A>::grow_one(v10);
  result = a1[4];
  v12 = 16 * v6;
  *(_QWORD *)(result + v12) = v9;
  *(_QWORD *)(result + v12 + 8) = v9 + a2;
  a1[5] = v6 + 1;
  return result;
}
