__int64 __fastcall zoxide::shell::_::<impl askama::Template for zoxide::shell::Bash>::render_into_with_values(
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
  __int64 v13; // [rsp+8h] [rbp-40h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h] BYREF
  __int128 v15; // [rsp+18h] [rbp-30h]

  <alloc::string::String as core::fmt::Write>::write_str(a3, aShellcheckShel, 25LL);
  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, asc_1B771, 81LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_35;
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
  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, asc_1B771, 81LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_35;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aHookConfigurat, 35LL);
  LOBYTE(v14) = *(_BYTE *)(a2 + 16) != 0;
  if ( (unsigned __int8)askama::helpers::as_bool(&v14) )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aHookToAddNewEn, 44LL);
    v8 = *(_BYTE *)(a2 + 16);
    LOBYTE(v14) = v8 == 1;
    if ( (unsigned __int8)askama::helpers::as_bool(&v14) )
    {
      v9 = aFunctionZoxide;
      v10 = 163LL;
    }
    else
    {
      LOBYTE(v14) = v8 == 2;
      if ( !(unsigned __int8)askama::helpers::as_bool(&v14) )
      {
LABEL_17:
        <alloc::string::String as core::fmt::Write>::write_str(a3, aInitializeHook, 134LL);
        goto LABEL_18;
      }
      v9 = aZoxideOldpwdZo;
      v10 = 328LL;
    }
    <alloc::string::String as core::fmt::Write>::write_str(a3, v9, v10);
    goto LABEL_17;
  }
LABEL_18:
  <alloc::string::String as core::fmt::Write>::write_str(a3, aReportCommonIs, 54LL);
  LOBYTE(v14) = *(_BYTE *)(a2 + 16) == 0;
  if ( (unsigned __int8)askama::helpers::as_bool(&v14) )
  {
    v11 = aReturn0;
    v12 = 13LL;
  }
  else
  {
    v11 = aZoDoctor1Eq0Re;
    v12 = 708LL;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, v11, v12);
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_18E6C, 4LL);
  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, asc_1B771, 81LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_35;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aWhenUsingZoxid, 1084LL);
  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, asc_1B771, 81LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_35;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCommandsForZox, 55LL);
  if ( *(_QWORD *)a2 )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aBuiltinUnalias, 19LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_35;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aDevNullBuiltin, 39LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_35;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxideZBuiltin, 45LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_35;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIDevNullBuilti, 40LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_35;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIZoxideZiLoadC, 530LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_35;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxideResultQR, 1571LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_35;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aBuiltinComplet, 26LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_35;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIDevNullBuilti_0, 33LL);
  }
  else
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, aNotConfigured, 22LL, &v13);
    result = v14;
    if ( v14 != 4 )
    {
LABEL_35:
      *(_OWORD *)(a1 + 8) = v15;
      goto LABEL_36;
    }
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, asc_1B771, 81LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_35;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aToInitializeZo, 118LL);
  result = 4LL;
LABEL_36:
  *(_QWORD *)a1 = result;
  return result;
}