char __fastcall uu_touch::determine_atime_mtime_change(__int64 a1)
{
  __int64 v1; // rax
  char v2; // bp
  char v3; // r14
  char v4; // cl
  char v5; // al
  char flag; // cl
  bool v7; // zf
  _BYTE v9[72]; // [rsp+0h] [rbp-48h] BYREF

  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::contains_id(
                          a1,
                          anon_32920fb0992448a71939038bdb7f69c7_28_llvm_16001827659566714888,
                          4LL) )
  {
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
      v9,
      a1,
      anon_32920fb0992448a71939038bdb7f69c7_28_llvm_16001827659566714888,
      4LL);
    v1 = clap_builder::parser::error::MatchesError::unwrap(
           anon_32920fb0992448a71939038bdb7f69c7_28_llvm_16001827659566714888,
           4LL,
           v9);
    if ( v1 )
    {
      v2 = uu_touch::determine_atime_mtime_change::{{closure}}(*(_QWORD *)(v1 + 8), *(_QWORD *)(v1 + 16));
      if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                              a1,
                              anon_32920fb0992448a71939038bdb7f69c7_24_llvm_16001827659566714888,
                              6LL) )
      {
        v3 = v2;
        goto LABEL_6;
      }
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a1,
               anon_32920fb0992448a71939038bdb7f69c7_25_llvm_16001827659566714888,
               12LL);
      v5 = 1;
      if ( flag )
        return 2 - (v5 != 0 && v2 == 0);
      v5 = v2 ^ 1;
      if ( v2 )
        goto LABEL_13;
LABEL_10:
      v2 = 0;
      return 2 - (v5 != 0 && v2 == 0);
    }
  }
  v3 = 2;
  if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                           a1,
                           anon_32920fb0992448a71939038bdb7f69c7_24_llvm_16001827659566714888,
                           6LL) )
  {
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a1,
           anon_32920fb0992448a71939038bdb7f69c7_25_llvm_16001827659566714888,
           12LL);
    goto LABEL_10;
  }
LABEL_6:
  v4 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         a1,
         anon_32920fb0992448a71939038bdb7f69c7_25_llvm_16001827659566714888,
         12LL);
  v5 = 1;
  v2 = 1;
  if ( v4 )
    return 2 - (v5 != 0 && v2 == 0);
  if ( v3 == 2 )
    return 0;
  v5 = v3 ^ 1;
LABEL_13:
  v2 = 1;
  v7 = v5 == 0;
  v5 = 1;
  if ( !v7 )
    return 2 - (v5 != 0 && v2 == 0);
  return 0;
}
