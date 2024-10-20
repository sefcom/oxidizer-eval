__int64 __fastcall uu_wc::Settings::new(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r12
  _BYTE *v4; // rcx
  bool v5; // zf
  __int64 v6; // rax
  __int64 v7; // rcx
  char v8; // dl
  int v9; // ecx
  int v10; // eax
  char v11; // r12
  char v12; // r13
  char v13; // bp
  char v14; // al
  char v15; // di
  char v17; // [rsp+4h] [rbp-104h]
  __int64 v18; // [rsp+8h] [rbp-100h]
  _BYTE *v19; // [rsp+10h] [rbp-F8h]
  const char *v20; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v21; // [rsp+20h] [rbp-E8h]
  char **v22; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v23; // [rsp+30h] [rbp-D8h]
  _QWORD *v24; // [rsp+38h] [rbp-D0h]
  __int128 v25; // [rsp+40h] [rbp-C8h]
  _QWORD v26[4]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v27[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v28; // [rsp+98h] [rbp-70h]
  __int64 flag; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v30; // [rsp+A8h] [rbp-60h]
  _OWORD v31[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v32; // [rsp+D0h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v27,
    a2,
    anon_777bb9d9a47a4fd760482fbc11f41de2_4_llvm_10162994613922154447,
    11LL);
  v20 = anon_777bb9d9a47a4fd760482fbc11f41de2_4_llvm_10162994613922154447;
  v21 = 11LL;
  if ( LODWORD(v27[0]) != 2 )
    goto LABEL_28;
  v3 = 0x8000000000000000LL;
  if ( *((_QWORD *)&v27[0] + 1) )
  {
    v4 = *(_BYTE **)(*((_QWORD *)&v27[0] + 1) + 8LL);
    if ( *(_QWORD *)(*((_QWORD *)&v27[0] + 1) + 16LL) == 1LL )
    {
      v5 = *v4 == 45;
      if ( *v4 == 45 )
        v4 = 0LL;
      v19 = v4;
      if ( v5 )
        v3 = 0x8000000000000001LL;
      v18 = 1LL;
    }
    else
    {
      v18 = *(_QWORD *)(*((_QWORD *)&v27[0] + 1) + 16LL);
      v19 = *(_BYTE **)(*((_QWORD *)&v27[0] + 1) + 8LL);
    }
  }
  else
  {
    v3 = 0x8000000000000002LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v27,
    a2,
    anon_777bb9d9a47a4fd760482fbc11f41de2_7_llvm_10162994613922154447,
    5LL);
  v20 = anon_777bb9d9a47a4fd760482fbc11f41de2_7_llvm_10162994613922154447;
  v21 = 5LL;
  if ( LODWORD(v27[0]) != 2 )
  {
LABEL_28:
    v32 = v28;
    v31[1] = v27[1];
    v31[0] = v27[0];
    v26[0] = &v20;
    v26[1] = <&T as core::fmt::Display>::fmt;
    v26[2] = v31;
    v26[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v22 = &anon_44bf7aff6ac5828708c3812483f5a592_3_llvm_11061933974019956137;
    v23 = 2LL;
    v24 = v26;
    v25 = 2uLL;
    core::panicking::panic_fmt(&v22, &anon_44bf7aff6ac5828708c3812483f5a592_5_llvm_11061933974019956137);
  }
  v30 = v3;
  if ( !*((_QWORD *)&v27[0] + 1) )
  {
    v17 = 0;
    goto LABEL_24;
  }
  v6 = *(_QWORD *)(*((_QWORD *)&v27[0] + 1) + 8LL);
  v7 = *(_QWORD *)(*((_QWORD *)&v27[0] + 1) + 16LL);
  switch ( v7 )
  {
    case 6LL:
      v9 = *(_DWORD *)v6 ^ 0x61776C61;
      v10 = *(unsigned __int16 *)(v6 + 4) ^ 0x7379;
      v8 = 1;
      break;
    case 5LL:
      v9 = *(_DWORD *)v6 ^ 0x6576656E;
      v10 = *(unsigned __int8 *)(v6 + 4) ^ 0x72;
      v8 = 3;
      break;
    case 4LL:
      if ( *(_DWORD *)v6 == 1869903201 )
      {
        v8 = 0;
      }
      else
      {
        v8 = 2;
        if ( *(_DWORD *)v6 != 2037149295 )
        {
LABEL_29:
          v22 = &off_F3270;
          v23 = 1LL;
          v24 = v31;
          v25 = 0LL;
          core::panicking::panic_fmt(&v22, &off_F3280);
        }
      }
      goto LABEL_23;
    default:
      goto LABEL_29;
  }
  if ( v9 | v10 )
    goto LABEL_29;
LABEL_23:
  v17 = v8;
LABEL_24:
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a2,
           anon_777bb9d9a47a4fd760482fbc11f41de2_2_llvm_10162994613922154447,
           5LL);
  v11 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_777bb9d9a47a4fd760482fbc11f41de2_3_llvm_10162994613922154447,
          5LL);
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_777bb9d9a47a4fd760482fbc11f41de2_5_llvm_10162994613922154447,
          5LL);
  v13 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_777bb9d9a47a4fd760482fbc11f41de2_8_llvm_10162994613922154447,
          5LL);
  v14 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          a2,
          anon_777bb9d9a47a4fd760482fbc11f41de2_6_llvm_10162994613922154447,
          15LL);
  v15 = flag;
  if ( v11 + (_BYTE)flag + v14 + v12 == -v13 )
  {
    v15 = 1;
    v11 = 0;
    v12 = 1;
    v13 = 1;
    v14 = 0;
  }
  *(_QWORD *)a1 = v30;
  *(_QWORD *)(a1 + 8) = v19;
  *(_QWORD *)(a1 + 16) = v18;
  *(_BYTE *)(a1 + 24) = v15;
  *(_BYTE *)(a1 + 25) = v11;
  *(_BYTE *)(a1 + 26) = v12;
  *(_BYTE *)(a1 + 27) = v13;
  *(_BYTE *)(a1 + 28) = v14;
  *(_BYTE *)(a1 + 29) = v17;
  return a1;
}
