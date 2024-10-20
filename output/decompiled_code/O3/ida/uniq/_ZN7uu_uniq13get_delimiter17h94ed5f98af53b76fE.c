char __fastcall uu_uniq::get_delimiter(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  char result; // al
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // [rsp+0h] [rbp-C8h] BYREF
  int *v9; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+10h] [rbp-B8h]
  char **v11; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+20h] [rbp-A8h]
  __int64 *v13; // [rsp+28h] [rbp-A0h]
  __int128 v14; // [rsp+30h] [rbp-98h]
  _QWORD v15[4]; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v16[2]; // [rsp+68h] [rbp-60h] BYREF
  __int64 v17; // [rsp+88h] [rbp-40h]
  _OWORD v18[2]; // [rsp+90h] [rbp-38h] BYREF
  __int64 v19; // [rsp+B0h] [rbp-18h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v16,
    a1,
    anon_f9427813c0255ce4c25516664eb43cb9_8_llvm_11736109415790202195,
    12LL);
  v9 = (int *)anon_f9427813c0255ce4c25516664eb43cb9_8_llvm_11736109415790202195;
  v10 = 12LL;
  if ( LODWORD(v16[0]) != 2 )
    goto LABEL_23;
  v1 = *((_QWORD *)&v16[0] + 1);
  if ( *((_QWORD *)&v16[0] + 1) )
    goto LABEL_5;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v16,
    a1,
    &anon_f9427813c0255ce4c25516664eb43cb9_17_llvm_11736109415790202195,
    5LL);
  v9 = &anon_f9427813c0255ce4c25516664eb43cb9_17_llvm_11736109415790202195;
  v10 = 5LL;
  if ( LODWORD(v16[0]) != 2 )
  {
LABEL_23:
    v19 = v17;
    v18[1] = v16[1];
    v18[0] = v16[0];
    v15[0] = &v9;
    v15[1] = <&T as core::fmt::Display>::fmt;
    v15[2] = v18;
    v15[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v11 = &anon_91813ef2801f4d1d4cad4af8ef82e3d6_4_llvm_14928124353916811356;
    v12 = 2LL;
    v13 = v15;
    v14 = 2uLL;
    core::panicking::panic_fmt(&v11, &anon_91813ef2801f4d1d4cad4af8ef82e3d6_6_llvm_14928124353916811356);
  }
  v1 = *((_QWORD *)&v16[0] + 1);
  if ( *((_QWORD *)&v16[0] + 1) )
  {
LABEL_5:
    v2 = *(_QWORD *)(v1 + 8);
    switch ( *(_QWORD *)(v1 + 16) )
    {
      case 4LL:
        if ( *(_DWORD *)v2 == 1752461154 )
          return 3;
        result = 4;
        if ( *(_DWORD *)v2 != 1701736302 )
        {
LABEL_24:
          v11 = &off_F2D08;
          v12 = 1LL;
          v13 = &v8;
          v14 = 0LL;
          core::panicking::panic_fmt(&v11, &off_F2D18);
        }
        return result;
      case 6LL:
        if ( *(_DWORD *)v2 ^ 0x65707061 | *(unsigned __int16 *)(v2 + 4) ^ 0x646E )
          goto LABEL_24;
        result = 0;
        break;
      case 7LL:
        result = 1;
        if ( *(_DWORD *)v2 ^ 0x70657270 | *(_DWORD *)(v2 + 3) ^ 0x646E6570 )
          goto LABEL_24;
        return result;
      case 8LL:
        result = 2;
        if ( *(_QWORD *)v2 != 0x6574617261706573LL )
          goto LABEL_24;
        return result;
      default:
        goto LABEL_24;
    }
    return result;
  }
  v4 = *(_QWORD *)(a1 + 16);
  result = 4;
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = 16 * v4;
    v7 = 0LL;
    while ( *(_QWORD *)(v5 + v7 + 8) != 5LL
         || anon_f9427813c0255ce4c25516664eb43cb9_17_llvm_11736109415790202195 ^ **(_DWORD **)(v5 + v7) | *(_BYTE *)(*(_QWORD *)(v5 + v7) + 4LL) ^ 0x70 )
    {
      v7 += 16LL;
      if ( v6 == v7 )
        return result;
    }
    return 2;
  }
  return result;
}
