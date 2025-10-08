__int64 __fastcall zoxide::shell::_::<impl askama::Template for zoxide::shell::Xonsh>::render_into_with_values(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  const char *v6; // rsi
  __int64 v7; // rdx
  char v8; // bp
  const char *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h] BYREF
  __int128 v13; // [rsp+18h] [rbp-30h]

  <alloc::string::String as core::fmt::Write>::write_str(a3, aPylintDisableM, 300LL);
  v11 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v12, asc_1B771, 81LL, &v11);
  result = v12;
  if ( v12 != 4 )
    goto LABEL_26;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aUtilityFunctio_4, 519LL);
  if ( (unsigned __int8)askama::helpers::as_bool(a2 + 18) )
  {
    v6 = aPwdOsGetcwd;
    v7 = 22LL;
  }
  else
  {
    v6 = aPwdZoxideEnvGe;
    v7 = 101LL;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, v6, v7);
  <alloc::string::String as core::fmt::Write>::write_str(a3, aReturnPwdDefZo, 374LL);
  if ( (unsigned __int8)askama::helpers::as_bool(a2 + 17) )
    <alloc::string::String as core::fmt::Write>::write_str(a3, aPrintZoxidePwd, 26LL);
  <alloc::string::String as core::fmt::Write>::write_str(a3, aClassZoxidesil, 565LL);
  v11 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v12, asc_1B771, 81LL, &v11);
  result = v12;
  if ( v12 != 4 )
    goto LABEL_26;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aHookConfigurat_1, 37LL);
  LOBYTE(v12) = *(_BYTE *)(a2 + 16) == 0;
  if ( !(unsigned __int8)askama::helpers::as_bool(&v12) )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aInitializeHook_4, 91LL);
    v8 = *(_BYTE *)(a2 + 16);
    LOBYTE(v12) = v8 == 1;
    if ( (unsigned __int8)askama::helpers::as_bool(&v12) )
    {
      v9 = aBuiltinsEvents_0;
      v10 = 80LL;
    }
    else
    {
      LOBYTE(v12) = v8 == 2;
      if ( !(unsigned __int8)askama::helpers::as_bool(&v12) )
      {
LABEL_16:
        <alloc::string::String as core::fmt::Write>::write_str(a3, aDefZoxideHookK, 302LL);
        goto LABEL_17;
      }
      v9 = aBuiltinsEvents;
      v10 = 74LL;
    }
    <alloc::string::String as core::fmt::Write>::write_str(a3, v9, v10);
    goto LABEL_16;
  }
  v11 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v12, aNotConfigured, 22LL, &v11);
  result = v12;
  if ( v12 != 4 )
    goto LABEL_26;
LABEL_17:
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v11 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v12, asc_1B771, 81LL, &v11);
  result = v12;
  if ( v12 != 4 )
    goto LABEL_26;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aWhenUsingZoxid_6, 1317LL);
  v11 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v12, asc_1B771, 81LL, &v11);
  result = v12;
  if ( v12 != 4 )
    goto LABEL_26;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCommandsForZox, 55LL);
  if ( *(_QWORD *)a2 )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aBuiltinsAliase, 20LL);
    v11 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v12, a2, &v11);
    result = v12;
    if ( v12 != 4 )
      goto LABEL_26;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxideZTypeIgn, 78LL);
    v11 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v12, a2, &v11);
    result = v12;
    if ( v12 != 4 )
      goto LABEL_26;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIZoxideZiTypeI, 61LL);
  }
  else
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
    v11 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v12, aNotConfigured, 22LL, &v11);
    result = v12;
    if ( v12 != 4 )
    {
LABEL_26:
      *(_OWORD *)(a1 + 8) = v13;
      goto LABEL_27;
    }
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v11 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v12, asc_1B771, 81LL, &v11);
  result = v12;
  if ( v12 != 4 )
    goto LABEL_26;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aToInitializeZo_5, 151LL);
  result = 4LL;
LABEL_27:
  *(_QWORD *)a1 = result;
  return result;
}