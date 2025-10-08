__int64 __fastcall zoxide::shell::_::<impl askama::Template for zoxide::shell::Tcsh>::render_into_with_values(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  void *v5; // r12
  __int64 result; // rax
  char v7; // bp
  const char *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __int64 v11; // [rsp+8h] [rbp-40h] BYREF
  __int128 v12; // [rsp+10h] [rbp-38h]

  v5 = &unk_2007A;
  if ( (unsigned __int8)askama::helpers::as_bool(a2 + 18) )
    v5 = &unk_20080;
  v10 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, asc_1B771, 81LL, &v10);
  result = v11;
  if ( v11 != 4 )
    goto LABEL_25;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aHookConfigurat, 35LL);
  LOBYTE(v11) = *(_BYTE *)(a2 + 16) != 0;
  if ( (unsigned __int8)askama::helpers::as_bool(&v11) )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, aHookToAddNewEn, 44LL);
    v7 = *(_BYTE *)(a2 + 16);
    LOBYTE(v11) = v7 == 1;
    if ( (unsigned __int8)askama::helpers::as_bool(&v11) )
    {
      <alloc::string::String as core::fmt::Write>::write_str(a3, aAliasZoxideHoo_0, 38LL);
      v10 = a3;
      askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, v5, 6LL, &v10);
      result = v11;
      if ( v11 != 4 )
        goto LABEL_25;
      v8 = asc_2017A;
      v9 = 3LL;
    }
    else
    {
      LOBYTE(v11) = v7 == 2;
      if ( !(unsigned __int8)askama::helpers::as_bool(&v11) )
        goto LABEL_13;
      <alloc::string::String as core::fmt::Write>::write_str(a3, aSetZoxidePwdOl, 25LL);
      v10 = a3;
      askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, v5, 6LL, &v10);
      result = v11;
      if ( v11 != 4 )
        goto LABEL_25;
      <alloc::string::String as core::fmt::Write>::write_str(a3, aAliasZoxideHoo, 48LL);
      v10 = a3;
      askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, v5, 6LL, &v10);
      result = v11;
      if ( v11 != 4 )
        goto LABEL_25;
      v8 = aTestZoxidePwdT;
      v9 = 133LL;
    }
    <alloc::string::String as core::fmt::Write>::write_str(a3, v8, v9);
LABEL_13:
    <alloc::string::String as core::fmt::Write>::write_str(a3, aInitializeHook_3, 50LL);
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v10 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, asc_1B771, 81LL, &v10);
  result = v11;
  if ( v11 != 4 )
    goto LABEL_25;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aWhenUsingZoxid_5, 441LL);
  v10 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, v5, 6LL, &v10);
  result = v11;
  if ( v11 != 4 )
    goto LABEL_25;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aSetZoxideResul, 261LL);
  v10 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, v5, 6LL, &v10);
  result = v11;
  if ( v11 != 4 )
    goto LABEL_25;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aSetZoxideResul_0, 135LL);
  v10 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, asc_1B771, 81LL, &v10);
  result = v11;
  if ( v11 != 4 )
    goto LABEL_25;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aCommandsForZox, 55LL);
  if ( !*(_QWORD *)a2 )
  {
    <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
    v10 = a3;
    askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, aNotConfigured, 22LL, &v10);
    result = v11;
    if ( v11 == 4 )
      goto LABEL_23;
LABEL_25:
    *(_OWORD *)(a1 + 8) = v12;
    goto LABEL_26;
  }
  <alloc::string::String as core::fmt::Write>::write_str(a3, aAlias, 8LL);
  v10 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, a2, &v10);
  result = v11;
  if ( v11 != 4 )
    goto LABEL_25;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aZoxideZAlias_0, 18LL);
  v10 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, a2, &v10);
  result = v11;
  if ( v11 != 4 )
    goto LABEL_25;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aIZoxideZi_2, 13LL);
LABEL_23:
  <alloc::string::String as core::fmt::Write>::write_str(a3, asc_1C377, 2LL);
  v10 = a3;
  askama::_::_::<impl askama::FastWritable for &T>::write_into(&v11, asc_1B771, 81LL, &v10);
  result = v11;
  if ( v11 != 4 )
    goto LABEL_25;
  <alloc::string::String as core::fmt::Write>::write_str(a3, aToInitializeZo_4, 157LL);
  result = 4LL;
LABEL_26:
  *(_QWORD *)a1 = result;
  return result;
}