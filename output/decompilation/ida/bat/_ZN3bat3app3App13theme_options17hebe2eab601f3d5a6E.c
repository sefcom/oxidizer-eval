unsigned __int64 __fastcall bat::app::App::theme_options(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 result; // rax
  _BYTE v7[24]; // [rsp+0h] [rbp-A8h]
  _BYTE v8[40]; // [rsp+18h] [rbp-90h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp-68h] BYREF
  __int128 v10; // [rsp+48h] [rbp-60h]
  __int128 v11; // [rsp+58h] [rbp-50h] BYREF
  __int64 v12; // [rsp+68h] [rbp-40h]
  __int128 v13; // [rsp+70h] [rbp-38h]

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v8, a2, aTheme, 5LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aTheme, 5LL, v8);
  if ( v2 )
  {
    <bat::theme::ThemePreference as core::str::traits::FromStr>::from_str(v8, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual<core::ops::control_flow::ControlFlow<B,core::convert::Infallible>>>::from_residual(
      &v9,
      v8);
    v3 = v9;
    *(_OWORD *)&v7[8] = v10;
  }
  else
  {
    v7[8] = 0;
    v3 = 0x8000000000000001LL;
  }
  *(_QWORD *)v7 = v3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v8, a2, aThemeDark, 10LL);
  v4 = clap_builder::parser::error::MatchesError::unwrap(aThemeDark, 10LL, v8);
  if ( v4 )
  {
    <bat::theme::ThemeName as core::str::traits::FromStr>::from_str(v8, *(_QWORD *)(v4 + 8), *(_QWORD *)(v4 + 16));
    <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual<core::ops::control_flow::ControlFlow<B,core::convert::Infallible>>>::from_residual(
      &v11,
      v8);
  }
  else
  {
    *(_QWORD *)&v11 = 0x8000000000000001LL;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v8, a2, aThemeLight, 11LL);
  v5 = clap_builder::parser::error::MatchesError::unwrap(aThemeLight, 11LL, v8);
  if ( v5 )
  {
    <bat::theme::ThemeName as core::str::traits::FromStr>::from_str(v8, *(_QWORD *)(v5 + 8), *(_QWORD *)(v5 + 16));
    <core::ops::control_flow::ControlFlow<B,C> as core::ops::try_trait::FromResidual<core::ops::control_flow::ControlFlow<B,core::convert::Infallible>>>::from_residual(
      &v9,
      v8);
    result = v9;
    v13 = v10;
  }
  else
  {
    result = 0x8000000000000001LL;
  }
  *(_QWORD *)(a1 + 64) = *(_QWORD *)&v7[16];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)v7;
  *(_OWORD *)a1 = v11;
  *(_QWORD *)(a1 + 16) = v12;
  *(_QWORD *)(a1 + 24) = result;
  *(_OWORD *)(a1 + 32) = v13;
  return result;
}