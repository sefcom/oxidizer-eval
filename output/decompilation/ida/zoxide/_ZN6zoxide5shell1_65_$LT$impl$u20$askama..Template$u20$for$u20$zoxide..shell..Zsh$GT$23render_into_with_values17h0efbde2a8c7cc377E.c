__int64 __fastcall zoxide::shell::_::<impl askama::Template for zoxide::shell::Zsh>::render_into_with_values(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  char *v6; // rsi
  __int64 v7; // rdx
  char v8; // bp
  const char *v9; // rsi
  __int64 v10; // rdx
  const char *v11; // rsi
  __int64 v12; // rdx
  char v13; // bp
  const char *v14; // rsi
  __int64 v15; // rdx
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // [rsp+8h] [rbp-40h] BYREF
  __int64 v19; // [rsp+10h] [rbp-38h] BYREF
  __int128 v20; // [rsp+18h] [rbp-30h]

  <alloc::string::String as core::fmt::Write>::write_str(a3, aShellcheckShel, 25LL);
  v18 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v19, asc_1B771, 81LL, &v18);
  result = v19;
  if ( v19 != 4 )
    goto LABEL_39;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aUtilityFunctio, 111LL);
  if ( (unsigned __int8)askama::helpers::as_bool("") )
  {
    v6 = aCommandCygpath;
    v7 = 45LL;
  }
  else
  {
    v6 = (unsigned __int8)askama::helpers::as_bool(a2 + 18) ? aBuiltinPwdP : aBuiltinPwdL;
    v7 = 20LL;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, v6, v7);
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCdCustomLogicB, 136LL);
  if ( (unsigned __int8)askama::helpers::as_bool(a2 + 17) )
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxidePwd, 16LL);
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_18E6C, 4LL);
  v18 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v19, asc_1B771, 81LL, &v18);
  result = v19;
  if ( v19 != 4 )
    goto LABEL_39;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aHookConfigurat_2, 466LL);
  v8 = *(_BYTE *)(a2 + 16);
  LOBYTE(v19) = v8 == 1;
  if ( (unsigned __int8)askama::helpers::as_bool(&v19) )
  {
    v9 = aPrecmdFunction;
    v10 = 34LL;
  }
  else
  {
    LOBYTE(v19) = v8 == 2;
    if ( !(unsigned __int8)askama::helpers::as_bool(&v19) )
      goto LABEL_16;
    v9 = aChpwdFunctions;
    v10 = 33LL;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, v9, v10);
LABEL_16:
  <alloc::string::String as core::fmt::Write>::write_str(a3, aReportCommonIs, 54LL);
  LOBYTE(v19) = *(_BYTE *)(a2 + 16) == 0;
  if ( !(unsigned __int8)askama::helpers::as_bool(&v19) )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoDoctor1Ne0Re, 45LL);
    v13 = *(_BYTE *)(a2 + 16);
    LOBYTE(v19) = v13 == 1;
    if ( (unsigned __int8)askama::helpers::as_bool(&v19) )
    {
      v14 = aPrecmdFunction_0;
      v15 = 69LL;
    }
    else
    {
      LOBYTE(v19) = v13 == 2;
      if ( !(unsigned __int8)askama::helpers::as_bool(&v19) )
      {
LABEL_23:
        v11 = aZoDoctor0Built;
        v12 = 451LL;
        goto LABEL_24;
      }
      v14 = aChpwdFunctions_0;
      v15 = 68LL;
    }
    <alloc::string::String as core::fmt::Write>::write_str(a3, v14, v15);
    goto LABEL_23;
  }
  v11 = aReturn0;
  v12 = 13LL;
LABEL_24:
  <alloc::string::String as core::fmt::Write>::write_str(a3, v11, v12);
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_18E6C, 4LL);
  v18 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v19, asc_1B771, 81LL, &v18);
  result = v19;
  if ( v19 != 4 )
    goto LABEL_39;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aWhenUsingZoxid_7, 827LL);
  v18 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v19, asc_1B771, 81LL, &v18);
  result = v19;
  if ( v19 != 4 )
    goto LABEL_39;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCommandsForZox, 55LL);
  if ( *(_QWORD *)a2 )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aFunction, 11LL);
    v18 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v19, a2, &v18);
    result = v19;
    if ( v19 == 4 )
    {
      <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxideZFunctio, 37LL);
      v18 = a3;
      askama::_::_::<impl askama::FastWritable for &T>::write_into(&v19, a2, &v18);
      result = v19;
      if ( v19 == 4 )
      {
        <alloc::string::String as core::fmt::Write>::write_str(a3, aIZoxideZi_1, 28LL);
        goto LABEL_31;
      }
    }
LABEL_39:
    *(_OWORD *)(a1 + 8) = v20;
    goto LABEL_40;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v18 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v19, aNotConfigured, 22LL, &v18);
  result = v19;
  if ( v19 != 4 )
    goto LABEL_39;
LABEL_31:
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCompletionsIfO, 1344LL);
  v16 = *(const char **)a2;
  if ( *(_QWORD *)a2 )
  {
    v17 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    v17 = 2LL;
    v16 = aCd;
  }
  v18 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v19, v16, v17, &v18);
  result = v19;
  if ( v19 != 4 )
    goto LABEL_39;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aQZoxideResultZ, 245LL);
  if ( *(_QWORD *)a2 )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aFunctionsCompd, 75LL);
    v18 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v19, a2, &v18);
    result = v19;
    if ( v19 != 4 )
      goto LABEL_39;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, aFi, 5LL);
  v18 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v19, asc_1B771, 81LL, &v18);
  result = v19;
  if ( v19 != 4 )
    goto LABEL_39;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aToInitializeZo_6, 116LL);
  result = 4LL;
LABEL_40:
  *(_QWORD *)a1 = result;
  return result;
}