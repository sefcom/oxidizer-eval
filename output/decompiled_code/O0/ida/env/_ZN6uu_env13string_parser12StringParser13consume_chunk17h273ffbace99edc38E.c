__int64 __fastcall uu_env::string_parser::StringParser::consume_chunk(__int64 a1, _QWORD *a2)
{
  char v2; // bp
  __int64 v3; // rax
  __int64 v4; // r12
  bool v5; // cf
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r13
  int v11; // ecx
  __int64 v13; // [rsp+0h] [rbp-88h]
  __int64 v14; // [rsp+8h] [rbp-80h] BYREF
  __int64 v15; // [rsp+10h] [rbp-78h]
  char v16; // [rsp+18h] [rbp-70h]
  _BYTE v17[7]; // [rsp+19h] [rbp-6Fh]
  __int64 v18; // [rsp+20h] [rbp-68h]
  _QWORD v19[3]; // [rsp+28h] [rbp-60h] BYREF
  __int128 v20; // [rsp+40h] [rbp-48h]

  uu_env::string_parser::StringParser::get_chunk_with_length_at((__int64)&v14, a2, a2[4]);
  v2 = v16;
  if ( v14 )
  {
    *(_QWORD *)(a1 + 8) = v15;
    *(_BYTE *)(a1 + 16) = v2 & 1;
    v3 = 1LL;
  }
  else
  {
    v4 = a2[4];
    v5 = __CFADD__(v18, v4);
    v6 = v18 + v4;
    if ( v5 )
      core::panicking::panic_const::panic_const_add_overflow(&anon_1c6f9a5923c36a430a7b9bb24b2ecad8_60_llvm_11312083278200569487);
    v13 = v15;
    a2[4] = v6;
    v7 = a2[1];
    v5 = v7 < v6;
    v8 = v7 - v6;
    if ( v5 )
    {
      v19[0] = &anon_2e379de88427cfdda108dad8baf8b250_39_llvm_16806681140142669859;
      v19[1] = 1LL;
      v19[2] = 8LL;
      v20 = 0LL;
      core::panicking::panic_fmt(v19, &anon_1c6f9a5923c36a430a7b9bb24b2ecad8_69_llvm_11312083278200569487);
    }
    v9 = *a2;
    core::slice::raw::from_raw_parts::precondition_check(*a2, 1LL, 1LL, v6);
    v10 = v6 + v9;
    core::slice::raw::from_raw_parts::precondition_check(v10, 1LL, 1LL, v8);
    a2[2] = v10;
    a2[3] = v8;
    *(_QWORD *)(a1 + 8) = v13;
    *(_BYTE *)(a1 + 16) = v2;
    v11 = *(_DWORD *)&v17[3];
    *(_DWORD *)(a1 + 17) = *(_DWORD *)v17;
    *(_DWORD *)(a1 + 20) = v11;
    v3 = 0LL;
  }
  *(_QWORD *)a1 = v3;
  return a1;
}
