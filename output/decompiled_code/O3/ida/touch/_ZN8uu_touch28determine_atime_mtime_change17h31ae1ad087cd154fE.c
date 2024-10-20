__int64 __fastcall uu_touch::determine_atime_mtime_change(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  void *v5; // r14
  char is_contained_in; // bp
  unsigned int v7; // ecx
  char flag; // al
  bool v9; // zf
  _QWORD v11[2]; // [rsp+8h] [rbp-D0h] BYREF
  _QWORD v12[4]; // [rsp+18h] [rbp-C0h] BYREF
  _OWORD v13[2]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-80h]
  _QWORD v15[6]; // [rsp+60h] [rbp-78h] BYREF
  _OWORD v16[2]; // [rsp+90h] [rbp-48h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( !v1 )
    goto LABEL_15;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = 16 * v1;
  v4 = 0LL;
  while ( *(_QWORD *)(v2 + v4 + 8) != 4LL
       || **(_DWORD **)(v2 + v4) != *(_DWORD *)anon_a8009f0f96d850c1c46a2cf3287456a4_24_llvm_17503802422331354604 )
  {
    v4 += 16LL;
    if ( v3 == v4 )
      goto LABEL_15;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    v13,
    a1,
    anon_a8009f0f96d850c1c46a2cf3287456a4_24_llvm_17503802422331354604,
    4LL);
  v11[0] = anon_a8009f0f96d850c1c46a2cf3287456a4_24_llvm_17503802422331354604;
  v11[1] = 4LL;
  if ( LODWORD(v13[0]) != 2 )
  {
    v17 = v14;
    v16[1] = v13[1];
    v16[0] = v13[0];
    v12[0] = v11;
    v12[1] = <&T as core::fmt::Display>::fmt;
    v12[2] = v16;
    v12[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v15[0] = &anon_baab62fa9d6ba0389a8386834aaa7826_3_llvm_3656620608646900075;
    v15[1] = 2LL;
    v15[4] = 0LL;
    v15[2] = v12;
    v15[3] = 2LL;
    core::panicking::panic_fmt(v15, &anon_baab62fa9d6ba0389a8386834aaa7826_5_llvm_3656620608646900075);
  }
  if ( !*((_QWORD *)&v13[0] + 1) )
  {
LABEL_15:
    is_contained_in = 2;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             a1,
                             anon_a8009f0f96d850c1c46a2cf3287456a4_20_llvm_17503802422331354604,
                             6LL) )
    {
      flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
               a1,
               anon_a8009f0f96d850c1c46a2cf3287456a4_21_llvm_17503802422331354604,
               12LL);
      is_contained_in = 0;
      goto LABEL_21;
    }
LABEL_16:
    v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
           a1,
           anon_a8009f0f96d850c1c46a2cf3287456a4_21_llvm_17503802422331354604,
           12LL);
    flag = 1;
    if ( (_BYTE)v7 )
    {
      is_contained_in = 1;
    }
    else
    {
      v9 = is_contained_in == 0;
      is_contained_in = 1;
      if ( !v9 )
        return 0;
    }
LABEL_21:
    LOBYTE(v7) = 2 - (flag & (is_contained_in == 0));
    return v7;
  }
  v5 = *(void **)(*((_QWORD *)&v13[0] + 1) + 8LL);
  is_contained_in = 1;
  if ( !(unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(aAccess, 6uLL, v5)
    && !(unsigned __int8)<&str as core::str::pattern::Pattern>::is_contained_in(aAtime, 5uLL, v5) )
  {
    is_contained_in = <&str as core::str::pattern::Pattern>::is_contained_in(aUse, 3uLL, v5);
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          a1,
                          anon_a8009f0f96d850c1c46a2cf3287456a4_20_llvm_17503802422331354604,
                          6LL) )
    goto LABEL_16;
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         a1,
         anon_a8009f0f96d850c1c46a2cf3287456a4_21_llvm_17503802422331354604,
         12LL);
  flag = 1;
  if ( (_BYTE)v7 )
    goto LABEL_21;
  v7 = 0;
  v9 = is_contained_in == 0;
  is_contained_in = 0;
  if ( v9 )
    goto LABEL_21;
  return v7;
}
