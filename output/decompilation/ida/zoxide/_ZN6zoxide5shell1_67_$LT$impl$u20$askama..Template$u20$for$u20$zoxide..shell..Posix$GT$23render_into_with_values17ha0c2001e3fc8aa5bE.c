__int64 __fastcall zoxide::shell::_::<impl askama::Template for zoxide::shell::Posix>::render_into_with_values(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  const char *v6; // rsi
  __int64 v7; // rdx
  const char *v8; // rsi
  __int64 v9; // rdx
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+8h] [rbp-30h] BYREF
  __int128 v14; // [rsp+10h] [rbp-28h]

  <alloc::string::String as core::fmt::Write>::write_str(a3, aShellcheckShel_0, 23LL);
  v12 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, asc_1B771, 81LL, &v12);
  result = v13;
  if ( v13 != 4 )
    goto LABEL_32;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aUtilityFunctio_2, 102LL);
  if ( (unsigned __int8)askama::helpers::as_bool("") )
  {
    v6 = aCommandCygpath;
    v7 = 45LL;
  }
  else
  {
    if ( (unsigned __int8)askama::helpers::as_bool(a2 + 18) )
      v6 = (const char *)&unk_1E99D;
    else
      v6 = aCommandPwdL;
    v7 = 20LL;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, v6, v7);
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCdCustomLogicB_0, 124LL);
  if ( (unsigned __int8)askama::helpers::as_bool(a2 + 17) )
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxidePwd, 16LL);
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_18E6C, 4LL);
  v12 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, asc_1B771, 81LL, &v12);
  result = v13;
  if ( v13 != 4 )
    goto LABEL_32;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aHookConfigurat_1, 37LL);
  if ( *(_BYTE *)(a2 + 16) )
  {
    if ( *(_BYTE *)(a2 + 16) == 1 )
    {
      <alloc::string::String as core::fmt::Write>::write_str(a3, aHookToAddNewEn_0, 280LL);
      LOBYTE(v13) = *(_BYTE *)(a2 + 16) != 1;
      if ( (unsigned __int8)askama::helpers::as_bool(&v13) )
      {
        v8 = aReturn0;
        v9 = 13LL;
      }
      else
      {
        v8 = aZoDoctor1Eq0Re_0;
        v9 = 552LL;
      }
      <alloc::string::String as core::fmt::Write>::write_str(a3, v8, v9);
      v10 = asc_1CF90;
      v11 = 2LL;
    }
    else
    {
      v10 = aCommandPrintfS;
      v11 = 150LL;
    }
    <alloc::string::String as core::fmt::Write>::write_str(a3, v10, v11);
  }
  else
  {
    v12 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, aNotConfigured, 22LL, &v12);
    result = v13;
    if ( v13 != 4 )
      goto LABEL_32;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v12 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, asc_1B771, 81LL, &v12);
  result = v13;
  if ( v13 != 4 )
    goto LABEL_32;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aWhenUsingZoxid_3, 906LL);
  v12 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, asc_1B771, 81LL, &v12);
  result = v13;
  if ( v13 != 4 )
    goto LABEL_32;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCommandsForZox, 55LL);
  if ( *(_QWORD *)a2 )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aCommandUnalias, 19LL);
    v12 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, a2, &v12);
    result = v13;
    if ( v13 != 4 )
      goto LABEL_32;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aDevNull21True, 26LL);
    v12 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, a2, &v12);
    result = v13;
    if ( v13 != 4 )
      goto LABEL_32;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxideZCommand, 45LL);
    v12 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, a2, &v12);
    result = v13;
    if ( v13 != 4 )
      goto LABEL_32;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIDevNull21True, 27LL);
    v12 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, a2, &v12);
    result = v13;
    if ( v13 != 4 )
      goto LABEL_32;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIZoxideZi_1, 28LL);
  }
  else
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
    v12 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, aNotConfigured, 22LL, &v12);
    result = v13;
    if ( v13 != 4 )
    {
LABEL_32:
      *(_OWORD *)(a1 + 8) = v14;
      goto LABEL_33;
    }
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v12 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v13, asc_1B771, 81LL, &v12);
  result = v13;
  if ( v13 != 4 )
    goto LABEL_32;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aToInitializeZo_2, 102LL);
  result = 4LL;
LABEL_33:
  *(_QWORD *)a1 = result;
  return result;
}