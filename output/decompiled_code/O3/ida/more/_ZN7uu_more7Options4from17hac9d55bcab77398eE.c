__int64 __fastcall uu_more::Options::from(__int64 a1, __int64 a2)
{
  __int16 v2; // r12
  __int64 v3; // r13
  int one; // eax
  __int64 v5; // rbp
  __int64 v6; // r13
  char v7; // r15
  char v8; // al
  bool v9; // cl
  unsigned __int64 v10; // rsi
  char v12; // [rsp+6h] [rbp-112h]
  char flag; // [rsp+7h] [rbp-111h]
  const char *v14; // [rsp+8h] [rbp-110h] BYREF
  __int64 v15; // [rsp+10h] [rbp-108h]
  int v16; // [rsp+1Ch] [rbp-FCh]
  char **v17; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v18; // [rsp+28h] [rbp-F0h]
  _QWORD *v19; // [rsp+30h] [rbp-E8h]
  __int64 v20; // [rsp+38h] [rbp-E0h]
  __int64 v21; // [rsp+40h] [rbp-D8h]
  _QWORD v22[4]; // [rsp+50h] [rbp-C8h] BYREF
  _OWORD v23[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+90h] [rbp-88h]
  char **v25; // [rsp+98h] [rbp-80h]
  _OWORD v26[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v27; // [rsp+C0h] [rbp-58h]
  __int64 v28; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+D0h] [rbp-48h]
  _QWORD *v30; // [rsp+D8h] [rbp-40h]
  __int64 v31; // [rsp+E0h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v23, a2, aLines, 5LL);
  v14 = aLines;
  v15 = 5LL;
  if ( LODWORD(v23[0]) != 2 )
    goto LABEL_21;
  v3 = *((_QWORD *)&v23[0] + 1);
  if ( *((_QWORD *)&v23[0] + 1) )
    v2 = **((_WORD **)&v23[0] + 1);
  one = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v23, a2, aNumber, 6LL);
  v14 = aNumber;
  v15 = 6LL;
  if ( LODWORD(v23[0]) != 2 )
    goto LABEL_21;
  v5 = *((_QWORD *)&v23[0] + 1);
  if ( *((_QWORD *)&v23[0] + 1) )
    one = (unsigned __int16)**((_WORD **)&v23[0] + 1);
  v16 = one;
  v31 = v3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v23, a2, aFromLine, 9LL);
  v14 = aFromLine;
  v15 = 9LL;
  if ( LODWORD(v23[0]) != 2 )
    goto LABEL_21;
  v6 = *((_QWORD *)&v23[0] + 1);
  if ( *((_QWORD *)&v23[0] + 1) )
    v29 = **((_QWORD **)&v23[0] + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v23, a2, aPattern, 7LL);
  v14 = aPattern;
  v15 = 7LL;
  if ( LODWORD(v23[0]) != 2 )
  {
LABEL_21:
    v27 = v24;
    v26[1] = v23[1];
    v26[0] = v23[0];
    v22[0] = &v14;
    v22[1] = <&T as core::fmt::Display>::fmt;
    v22[2] = v26;
    v22[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v17 = &anon_d58bd02a723bd021606085005bc52729_7_llvm_16558445346262642515;
    v18 = 2LL;
    v21 = 0LL;
    v19 = v22;
    v20 = 2LL;
    core::panicking::panic_fmt(&v17, &anon_d58bd02a723bd021606085005bc52729_9_llvm_16558445346262642515);
  }
  if ( *((_QWORD *)&v23[0] + 1) )
    <alloc::string::String as core::clone::Clone>::clone(&v17);
  else
    v17 = (char **)0x8000000000000000LL;
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aCleanPrint, 11LL);
  v25 = v17;
  v28 = v18;
  v30 = v19;
  v12 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aPrintOver, 10LL);
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSilent, 6LL);
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a2, aSqueeze, 7LL);
  v9 = v2 != 0;
  if ( !v31 )
  {
    v9 = v5 != 0 && (_WORD)v16 != 0;
    v2 = v16;
  }
  v10 = 0LL;
  if ( v29 >= 2 )
    v10 = v29 - 1;
  if ( !v6 )
    v10 = 0LL;
  *(_BYTE *)(a1 + 36) = flag;
  *(_QWORD *)(a1 + 24) = v10;
  *(_WORD *)(a1 + 32) = v9;
  *(_WORD *)(a1 + 34) = v2 + 1;
  *(_QWORD *)a1 = v25;
  *(_QWORD *)(a1 + 8) = v28;
  *(_QWORD *)(a1 + 16) = v30;
  *(_BYTE *)(a1 + 37) = v12;
  *(_BYTE *)(a1 + 38) = v7;
  *(_BYTE *)(a1 + 39) = v8;
  return a1;
}
