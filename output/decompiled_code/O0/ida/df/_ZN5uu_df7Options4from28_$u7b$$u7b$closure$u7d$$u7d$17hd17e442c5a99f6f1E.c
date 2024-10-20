__int64 __fastcall uu_df::Options::from::{{closure}}(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v4; // xmm0
  __int64 v5; // rax
  __int128 v6; // xmm0
  _QWORD v8[2]; // [rsp+8h] [rbp-120h] BYREF
  _QWORD v9[4]; // [rsp+18h] [rbp-110h] BYREF
  __int128 v10; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v11; // [rsp+48h] [rbp-E0h]
  _QWORD v12[6]; // [rsp+50h] [rbp-D8h] BYREF
  _OWORD v13[4]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+C8h] [rbp-60h] BYREF
  __int128 v15; // [rsp+D0h] [rbp-58h]
  __int128 v16; // [rsp+E0h] [rbp-48h]
  __int128 v17; // [rsp+F0h] [rbp-38h]
  __int128 v18; // [rsp+100h] [rbp-28h]

  if ( *(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a3 == 1LL )
    {
      v4 = *(_OWORD *)(a3 + 8);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
      *(_OWORD *)(a1 + 8) = v4;
      v5 = 1LL;
    }
    else
    {
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
        &v14,
        a2,
        anon_6295e1784fd24e8d722933e78c148adb_65_llvm_17845274406068090511,
        9LL);
      v8[0] = anon_6295e1784fd24e8d722933e78c148adb_65_llvm_17845274406068090511;
      v8[1] = 9LL;
      if ( v14 )
      {
        v13[3] = v18;
        v13[2] = v17;
        v13[1] = v16;
        v13[0] = v15;
        v9[0] = v8;
        v9[1] = <&T as core::fmt::Display>::fmt;
        v9[2] = v13;
        v9[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
        v12[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
        v12[1] = 2LL;
        v12[4] = 0LL;
        v12[2] = v9;
        v12[3] = 2LL;
        core::panicking::panic_fmt(v12, &anon_6295e1784fd24e8d722933e78c148adb_121_llvm_17845274406068090511);
      }
      if ( !(_QWORD)v15 )
        core::option::unwrap_failed(&anon_6295e1784fd24e8d722933e78c148adb_122_llvm_17845274406068090511);
      <alloc::string::String as core::clone::Clone>::clone(&v10, v15);
      *(_QWORD *)(a1 + 24) = v11;
      *(_OWORD *)(a1 + 8) = v10;
      v5 = 0LL;
    }
  }
  else
  {
    v6 = *(_OWORD *)(a3 + 8);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a3 + 24);
    *(_OWORD *)(a1 + 8) = v6;
    v5 = 2LL;
  }
  *(_QWORD *)a1 = v5;
  if ( *(_QWORD *)a3 >= 2uLL )
    core::ptr::drop_in_place<uucore::parser::parse_size::ParseSizeError>(a3);
  return a1;
}
