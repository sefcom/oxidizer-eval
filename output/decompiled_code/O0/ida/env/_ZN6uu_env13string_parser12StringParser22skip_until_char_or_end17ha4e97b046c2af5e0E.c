__int64 __fastcall uu_env::string_parser::StringParser::skip_until_char_or_end(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 v10; // r12
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  bool v13; // cf
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r12
  __int64 v16; // r14
  __int64 result; // rax
  _QWORD v18[3]; // [rsp+8h] [rbp-50h] BYREF
  __int128 v19; // [rsp+20h] [rbp-38h]

  LODWORD(v18[0]) = 0;
  core::char::methods::encode_utf8_raw(a2, v18, 4LL);
  if ( v3 != 1 )
    core::option::unwrap_failed(&anon_1c6f9a5923c36a430a7b9bb24b2ecad8_64_llvm_11312083278200569487);
  v4 = a1[3];
  if ( v4 < 0 )
    core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_3_llvm_18365996230866053775, 71LL);
  if ( v4 )
  {
    v5 = a1[2];
    v6 = 0LL;
    while ( v6 + v5 )
    {
      if ( LOBYTE(v18[0]) == *(_BYTE *)(v6 + v5) )
      {
        if ( v6 >= v4 )
          core::panicking::panic_nounwind(anon_052fca71c90c2392f068f97c2252574e_5_llvm_18365996230866053775, 104LL);
        v13 = __CFADD__(a1[4], v6);
        v14 = a1[4] + v6;
        if ( v13 )
          core::panicking::panic_const::panic_const_add_overflow(&anon_1c6f9a5923c36a430a7b9bb24b2ecad8_65_llvm_11312083278200569487);
        a1[4] = v14;
        v15 = a1[1];
        v13 = v15 < v14;
        v10 = v15 - v14;
        if ( v13 )
        {
          v18[0] = &anon_2e379de88427cfdda108dad8baf8b250_39_llvm_16806681140142669859;
          v18[1] = 1LL;
          v18[2] = 8LL;
          v19 = 0LL;
          core::panicking::panic_fmt(v18, &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_69_llvm_11312083278200569487);
        }
        v16 = *a1;
        core::slice::raw::from_raw_parts::precondition_check(*a1, 1LL, 1LL, v14);
        v9 = v14 + v16;
        v11 = v9;
        v12 = v10;
        goto LABEL_13;
      }
      if ( v4 == ++v6 )
        break;
    }
  }
  v7 = *a1;
  v8 = a1[1];
  a1[4] = v8;
  core::slice::raw::from_raw_parts::precondition_check(v7, 1LL, 1LL, v8);
  v9 = v8 + v7;
  v10 = 0LL;
  v11 = v9;
  v12 = 0LL;
LABEL_13:
  result = core::slice::raw::from_raw_parts::precondition_check(v11, 1LL, 1LL, v12);
  a1[2] = v9;
  a1[3] = v10;
  return result;
}
