__int64 __fastcall uu_env::string_parser::StringParser::substring(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  bool v4; // cf
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbx
  char **v12; // [rsp+8h] [rbp-50h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  __int64 v14; // [rsp+18h] [rbp-40h]
  __int128 v15; // [rsp+20h] [rbp-38h]

  v2 = a1[1];
  v3 = *a2;
  v4 = v2 < *a2;
  v5 = v2 - *a2;
  if ( v4 )
  {
    v12 = &anon_2e379de88427cfdda108dad8baf8b250_39_llvm_16806681140142669859;
    v13 = 1LL;
    v14 = 8LL;
    v15 = 0LL;
    core::panicking::panic_fmt(&v12, &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_66_llvm_11312083278200569487);
  }
  v6 = *a1;
  core::slice::raw::from_raw_parts::precondition_check(*a1, 1LL, 1LL, v3);
  v7 = v3 + v6;
  core::slice::raw::from_raw_parts::precondition_check(v7, 1LL, 1LL, v5);
  v8 = a2[1];
  v4 = v8 < *a2;
  v9 = v8 - *a2;
  if ( v4 )
    core::panicking::panic_const::panic_const_sub_overflow(&anon_1c6f9a5923c36a430a7b9bb24b2ecad8_67_llvm_11312083278200569487);
  v4 = v5 < v9;
  v10 = v5 - v9;
  if ( v4 )
  {
    v12 = &anon_2e379de88427cfdda108dad8baf8b250_39_llvm_16806681140142669859;
    v13 = 1LL;
    v14 = 8LL;
    v15 = 0LL;
    core::panicking::panic_fmt(&v12, &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_68_llvm_11312083278200569487);
  }
  core::slice::raw::from_raw_parts::precondition_check(v7, 1LL, 1LL, v9);
  core::slice::raw::from_raw_parts::precondition_check(v7 + v9, 1LL, 1LL, v10);
  return v7;
}
