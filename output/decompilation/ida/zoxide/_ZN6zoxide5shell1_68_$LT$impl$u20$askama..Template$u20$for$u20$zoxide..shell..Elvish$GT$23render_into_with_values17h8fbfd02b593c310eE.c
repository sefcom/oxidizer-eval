__int64 __fastcall zoxide::shell::_::<impl askama::Template for zoxide::shell::Elvish>::render_into_with_values(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  char v6; // bp
  const char *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  __int128 v11; // [rsp+18h] [rbp-30h]

  <alloc::string::String as core::fmt::Write>::write_str(a3, aUseBuiltinUseP, 22LL);
  v9 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, asc_1B771, 81LL, &v9);
  result = v10;
  if ( v10 != 4 )
    goto LABEL_24;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aUtilityFunctio_0, 131LL);
  if ( (unsigned __int8)askama::helpers::as_bool(a2 + 17) )
    <alloc::string::String as core::fmt::Write>::write_str(a3, aBuiltinEchoPwd, 22LL);
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_18E6C, 4LL);
  v9 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, asc_1B771, 81LL, &v9);
  result = v10;
  if ( v10 != 4 )
    goto LABEL_24;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aHookConfigurat_0, 243LL);
  LOBYTE(v10) = *(_BYTE *)(a2 + 16) == 0;
  if ( !(unsigned __int8)askama::helpers::as_bool(&v10) )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIfBuiltinNotBu, 95LL);
    v6 = *(_BYTE *)(a2 + 16);
    LOBYTE(v10) = v6 == 1;
    if ( (unsigned __int8)askama::helpers::as_bool(&v10) )
    {
      v7 = aSetEditBeforeR;
      v8 = 81LL;
    }
    else
    {
      LOBYTE(v10) = v6 == 2;
      if ( !(unsigned __int8)askama::helpers::as_bool(&v10) )
      {
LABEL_13:
        <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1CF90, 2LL);
        goto LABEL_14;
      }
      v7 = aSetBuiltinAfte;
      v8 = 80LL;
    }
    <alloc::string::String as core::fmt::Write>::write_str(a3, v7, v8);
    goto LABEL_13;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1A9D5, 1LL);
  v9 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, aNotConfigured, 22LL, &v9);
  result = v10;
  if ( v10 != 4 )
    goto LABEL_24;
LABEL_14:
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v9 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, asc_1B771, 81LL, &v9);
  result = v10;
  if ( v10 != 4 )
    goto LABEL_24;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aWhenUsingZoxid_0, 881LL);
  v9 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, asc_1B771, 81LL, &v9);
  result = v10;
  if ( v10 != 4 )
    goto LABEL_24;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCommandsForZox, 55LL);
  if ( *(_QWORD *)a2 )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aEditAddVar, 15LL);
    v9 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, a2, &v9);
    result = v10;
    if ( v10 != 4 )
      goto LABEL_24;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxideZEditAdd, 28LL);
    v9 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, a2, &v9);
    result = v10;
    if ( v10 != 4 )
      goto LABEL_24;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIZoxideZiLoadC_0, 379LL);
    v9 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, a2, &v9);
    result = v10;
    if ( v10 != 4 )
      goto LABEL_24;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxideZComplet, 25LL);
  }
  else
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
    v9 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, aNotConfigured, 22LL, &v9);
    result = v10;
    if ( v10 != 4 )
    {
LABEL_24:
      *(_OWORD *)(a1 + 8) = v11;
      goto LABEL_25;
    }
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v9 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, asc_1B771, 81LL, &v9);
  result = v10;
  if ( v10 != 4 )
    goto LABEL_24;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aToInitializeZo_0, 182LL);
  result = 4LL;
LABEL_25:
  *(_QWORD *)a1 = result;
  return result;
}