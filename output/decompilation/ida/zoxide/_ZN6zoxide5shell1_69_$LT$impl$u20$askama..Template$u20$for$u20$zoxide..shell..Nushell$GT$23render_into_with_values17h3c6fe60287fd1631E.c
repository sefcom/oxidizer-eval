__int64 __fastcall zoxide::shell::_::<impl askama::Template for zoxide::shell::Nushell>::render_into_with_values(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  char v6; // bp
  const char *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  __int128 v11; // [rsp+10h] [rbp-38h]

  <alloc::string::String as core::fmt::Write>::write_str(a3, aCodeGeneratedB, 42LL);
  v9 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, asc_1B771, 81LL, &v9);
  result = v10;
  if ( v10 != 4 )
    goto LABEL_24;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aHookConfigurat_1, 37LL);
  LOBYTE(v10) = *(_BYTE *)(a2 + 16) == 0;
  if ( !(unsigned __int8)askama::helpers::as_bool(&v10) )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aInitializeHook_1, 66LL);
    v6 = *(_BYTE *)(a2 + 16);
    LOBYTE(v10) = v6 == 1;
    if ( (unsigned __int8)askama::helpers::as_bool(&v10) )
    {
      v7 = aEnvConfigEnvCo_0;
      v8 = 433LL;
    }
    else
    {
      LOBYTE(v10) = v6 == 2;
      if ( !(unsigned __int8)askama::helpers::as_bool(&v10) )
      {
LABEL_10:
        <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1CF90, 2LL);
        goto LABEL_11;
      }
      v7 = aEnvConfigEnvCo;
      v8 = 496LL;
    }
    <alloc::string::String as core::fmt::Write>::write_str(a3, v7, v8);
    goto LABEL_10;
  }
  v9 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, aNotConfigured, 22LL, &v9);
  result = v10;
  if ( v10 != 4 )
    goto LABEL_24;
LABEL_11:
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v9 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, asc_1B771, 81LL, &v9);
  result = v10;
  if ( v10 != 4 )
    goto LABEL_24;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aWhenUsingZoxid_2, 414LL);
  if ( (unsigned __int8)askama::helpers::as_bool(a2 + 17) )
    <alloc::string::String as core::fmt::Write>::write_str(a3, aEchoEnvPwd, 16LL);
  <alloc::string::String as core::fmt::Write>::write_str(a3, aJumpToADirecto, 174LL);
  if ( (unsigned __int8)askama::helpers::as_bool(a2 + 17) )
    <alloc::string::String as core::fmt::Write>::write_str(a3, aEchoEnvPwd, 16LL);
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_18E6C, 4LL);
  v9 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, asc_1B771, 81LL, &v9);
  result = v10;
  if ( v10 != 4 )
    goto LABEL_24;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCommandsForZox, 55LL);
  if ( *(_QWORD *)a2 )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aAlias, 8LL);
    v9 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, a2, &v9);
    result = v10;
    if ( v10 != 4 )
      goto LABEL_24;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxideZAlias, 20LL);
    v9 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v10, a2, &v9);
    result = v10;
    if ( v10 != 4 )
      goto LABEL_24;
    <alloc::string::String as core::fmt::Write>::write_str(a3, aIZoxideZi_0, 15LL);
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
  <alloc::string::String as core::fmt::Write>::write_str(a3, aAddThisToYourE, 302LL);
  result = 4LL;
LABEL_25:
  *(_QWORD *)a1 = result;
  return result;
}