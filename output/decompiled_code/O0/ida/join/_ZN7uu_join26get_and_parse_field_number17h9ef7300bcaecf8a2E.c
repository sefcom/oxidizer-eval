_QWORD *__fastcall uu_join::get_and_parse_field_number(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+8h] [rbp-100h] BYREF
  _QWORD v8[4]; // [rsp+18h] [rbp-F0h] BYREF
  _QWORD v9[6]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v10; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v11; // [rsp+70h] [rbp-98h]
  __int128 v12; // [rsp+80h] [rbp-88h]
  __int128 v13; // [rsp+90h] [rbp-78h]
  __int128 v14; // [rsp+A0h] [rbp-68h]
  _OWORD v15[5]; // [rsp+B0h] [rbp-58h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10, a2, a3, 1LL);
  v7[0] = a3;
  v7[1] = 1LL;
  if ( v10 )
  {
    v15[3] = v14;
    v15[2] = v13;
    v15[1] = v12;
    v15[0] = v11;
    v8[0] = v7;
    v8[1] = <&T as core::fmt::Display>::fmt;
    v8[2] = v15;
    v8[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v9[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v9[1] = 2LL;
    v9[4] = 0LL;
    v9[2] = v8;
    v9[3] = 2LL;
    core::panicking::panic_fmt(v9, &off_1312F8);
  }
  if ( (_QWORD)v11 )
  {
    if ( !*(_QWORD *)(v11 + 8) || *(__int64 *)(v11 + 16) < 0 )
      core::panicking::panic_nounwind(anon_88bd953382d64e16d63aef396fcf2aa0_53_llvm_18377431372254846744, 162LL);
    uu_join::parse_field_number(&v10);
    if ( v10 )
    {
      v4 = v11;
      a1[1] = v10;
      a1[2] = v4;
      *a1 = 1LL;
    }
    else
    {
      v5 = v11;
      a1[1] = 1LL;
      a1[2] = v5;
      *a1 = 0LL;
    }
  }
  else
  {
    *(_OWORD *)a1 = 0LL;
  }
  return a1;
}
