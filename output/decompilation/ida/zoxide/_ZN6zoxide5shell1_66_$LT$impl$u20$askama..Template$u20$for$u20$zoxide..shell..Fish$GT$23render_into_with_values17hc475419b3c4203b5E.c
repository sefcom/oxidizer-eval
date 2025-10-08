__int64 __fastcall zoxide::shell::_::<impl askama::Template for zoxide::shell::Fish>::render_into_with_values(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  const char *v6; // rsi
  __int64 v7; // rdx
  const char *v8; // rsi
  __int64 v9; // rdx
  char v10; // bp
  const char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // [rsp+8h] [rbp-40h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h] BYREF
  __int128 v15; // [rsp+18h] [rbp-30h]

  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, asc_1B771, 81LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_34;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aUtilityFunctio_1, 107LL);
  if ( (unsigned __int8)askama::helpers::as_bool("") )
  {
    v6 = aCommandCygpath_0;
    v7 = 40LL;
  }
  else
  {
    v6 = (unsigned __int8)askama::helpers::as_bool(a2 + 18) ? (const char *)&unk_1D5F6 : aBuiltinPwdL_0;
    v7 = 19LL;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, v6, v7);
  <alloc::string::String as core::fmt::Write>::write_str(a3, aEndACopyOfFish, 587LL);
  if ( (unsigned __int8)askama::helpers::as_bool("") )
  {
    v8 = aZoxideLoop1Zox_0;
    v9 = 60LL;
  }
  else
  {
    v8 = aZoxideLoop1Zox;
    v9 = 47LL;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, v8, v9);
  if ( (unsigned __int8)askama::helpers::as_bool(a2 + 17) )
    <alloc::string::String as core::fmt::Write>::write_str(a3, aAndZoxidePwd, 21LL);
  <alloc::string::String as core::fmt::Write>::write_str(a3, aEnd, 6LL);
  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, asc_1B771, 81LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_34;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aHookConfigurat_1, 37LL);
  LOBYTE(v14) = *(_BYTE *)(a2 + 16) == 0;
  if ( !(unsigned __int8)askama::helpers::as_bool(&v14) )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aInitializeHook_0, 53LL);
    v10 = *(_BYTE *)(a2 + 16);
    LOBYTE(v14) = v10 == 1;
    if ( (unsigned __int8)askama::helpers::as_bool(&v14) )
    {
      v11 = aFunctionZoxide_1;
      v12 = 46LL;
    }
    else
    {
      LOBYTE(v14) = v10 == 2;
      if ( !(unsigned __int8)askama::helpers::as_bool(&v14) )
      {
LABEL_22:
        <alloc::string::String as core::fmt::Write>::write_str(a3, aTestZFishPriva, 82LL);
        goto LABEL_23;
      }
      v11 = aFunctionZoxide_0;
      v12 = 41LL;
    }
    <alloc::string::String as core::fmt::Write>::write_str(a3, v11, v12);
    goto LABEL_22;
  }
  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, aNotConfigured, 22LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_34;
LABEL_23:
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, asc_1B771, 81LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_34;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aWhenUsingZoxid_1, 1665LL);
  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, asc_1B771, 81LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_34;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCommandsForZox, 55LL);
  if ( *(_QWORD *)a2 )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aAbbrErase, 15LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_34;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aDevNullAlias, 19LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_34;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxideZAbbrEra, 26LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_34;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIDevNullAlias, 20LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, a2, &v13);
    result = v14;
    if ( v14 != 4 )
      goto LABEL_34;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIZoxideZi, 13LL);
  }
  else
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
    v13 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, aNotConfigured, 22LL, &v13);
    result = v14;
    if ( v14 != 4 )
    {
LABEL_34:
      *(_OWORD *)(a1 + 8) = v15;
      goto LABEL_35;
    }
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v13 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v14, asc_1B771, 81LL, &v13);
  result = v14;
  if ( v14 != 4 )
    goto LABEL_34;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aToInitializeZo_1, 127LL);
  result = 4LL;
LABEL_35:
  *(_QWORD *)a1 = result;
  return result;
}