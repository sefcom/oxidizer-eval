char __fastcall uu_uniq::get_delimiter(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  char result; // al
  char v5; // [rsp+8h] [rbp-140h] BYREF
  const char *v6; // [rsp+10h] [rbp-138h] BYREF
  __int64 v7; // [rsp+18h] [rbp-130h]
  const char **v8; // [rsp+20h] [rbp-128h] BYREF
  __int64 (__fastcall *v9)(); // [rsp+28h] [rbp-120h]
  __int128 *v10; // [rsp+30h] [rbp-118h]
  __int64 (__fastcall *v11)(); // [rsp+38h] [rbp-110h]
  char **v12; // [rsp+40h] [rbp-108h] BYREF
  __int64 v13; // [rsp+48h] [rbp-100h]
  const char ***v14; // [rsp+50h] [rbp-F8h]
  __int64 v15; // [rsp+58h] [rbp-F0h]
  __int64 v16; // [rsp+60h] [rbp-E8h]
  __int128 v17; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v18; // [rsp+80h] [rbp-C8h]
  __int128 v19; // [rsp+90h] [rbp-B8h]
  __int128 v20; // [rsp+A0h] [rbp-A8h]
  __int64 v21; // [rsp+B8h] [rbp-90h] BYREF
  __int128 v22; // [rsp+C0h] [rbp-88h]
  __int128 v23; // [rsp+D0h] [rbp-78h]
  __int128 v24; // [rsp+E0h] [rbp-68h]
  __int128 v25; // [rsp+F0h] [rbp-58h]
  _QWORD v26[3]; // [rsp+100h] [rbp-48h] BYREF
  __int128 v27; // [rsp+118h] [rbp-30h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v21,
    a1,
    anon_260c126feb8ab3c2b694f5739f14195b_22_llvm_4342503802335753491,
    12LL);
  v6 = anon_260c126feb8ab3c2b694f5739f14195b_22_llvm_4342503802335753491;
  v7 = 12LL;
  if ( v21 )
  {
    v20 = v25;
    v19 = v24;
    v18 = v23;
    v17 = v22;
    v8 = &v6;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = &v17;
    v11 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v12 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v13 = 2LL;
    v16 = 0LL;
    v14 = &v8;
    v15 = 2LL;
    core::panicking::panic_fmt(&v12, &off_11CB90);
  }
  v1 = v22;
  if ( (_QWORD)v22 )
    goto LABEL_5;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v21,
    a1,
    anon_260c126feb8ab3c2b694f5739f14195b_31_llvm_4342503802335753491,
    5LL);
  v6 = anon_260c126feb8ab3c2b694f5739f14195b_31_llvm_4342503802335753491;
  v7 = 5LL;
  if ( v21 )
  {
    v20 = v25;
    v19 = v24;
    v18 = v23;
    v17 = v22;
    v8 = &v6;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = &v17;
    v11 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v12 = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v13 = 2LL;
    v16 = 0LL;
    v14 = &v8;
    v15 = 2LL;
    core::panicking::panic_fmt(&v12, &anon_4784efbbf149eb02086b863395927e8b_73_llvm_16157676363122483068);
  }
  v1 = v22;
  if ( (_QWORD)v22 )
  {
LABEL_5:
    v2 = *(_QWORD *)(v1 + 8);
    if ( !v2 || (v3 = *(_QWORD *)(v1 + 16), v3 < 0) )
      core::panicking::panic_nounwind(anon_2b0791c695ceb2ee6d0f035c0283b4dc_21_llvm_18417733653787042214, 162LL);
    switch ( v3 )
    {
      case 4LL:
        if ( *(_DWORD *)v2 == 1752461154 )
          return 3;
        result = 4;
        if ( *(_DWORD *)v2 != 1701736302 )
        {
LABEL_22:
          v26[0] = &off_11CBA8;
          v26[1] = 1LL;
          v26[2] = &v5;
          v27 = 0LL;
          core::panicking::panic_fmt(v26, &off_11CBB8);
        }
        return result;
      case 6LL:
        if ( *(_DWORD *)v2 ^ 0x65707061 | *(unsigned __int16 *)(v2 + 4) ^ 0x646E )
          goto LABEL_22;
        result = 0;
        break;
      case 7LL:
        result = 1;
        if ( *(_DWORD *)v2 ^ 0x70657270 | *(_DWORD *)(v2 + 3) ^ 0x646E6570 )
          goto LABEL_22;
        return result;
      case 8LL:
        result = 2;
        if ( *(_QWORD *)v2 != 0x6574617261706573LL )
          goto LABEL_22;
        return result;
      default:
        goto LABEL_22;
    }
  }
  else
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_contains_id(
      &v21,
      a1,
      anon_260c126feb8ab3c2b694f5739f14195b_31_llvm_4342503802335753491,
      5LL);
    v6 = anon_260c126feb8ab3c2b694f5739f14195b_31_llvm_4342503802335753491;
    v7 = 5LL;
    if ( (v21 & 1) != 0 )
    {
      v20 = v25;
      v19 = v24;
      v18 = v23;
      v17 = v22;
      v8 = &v6;
      v9 = <&T as core::fmt::Display>::fmt;
      v10 = &v17;
      v11 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
      v12 = &anon_4999ac20243338206a266e5086c65117_158_llvm_11097290929893828502;
      v13 = 2LL;
      v16 = 0LL;
      v14 = &v8;
      v15 = 2LL;
      core::panicking::panic_fmt(&v12, &anon_21d6120f1bf3ae8083dd7bd30f6eb60d_413_llvm_13186119769495240950);
    }
    return 2 * ((v21 & 0x100) == 0) + 2;
  }
  return result;
}
