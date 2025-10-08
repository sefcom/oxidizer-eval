void *__fastcall alacritty::config::load_from(char *dest, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rax
  void *result; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // rax
  bool v10; // zf
  _QWORD v11[2]; // [rsp+0h] [rbp-518h] BYREF
  const char *v12; // [rsp+10h] [rbp-508h] BYREF
  __int64 v13; // [rsp+18h] [rbp-500h]
  const char *v14; // [rsp+20h] [rbp-4F8h]
  __int64 v15; // [rsp+28h] [rbp-4F0h]
  __int64 v16; // [rsp+30h] [rbp-4E8h]
  __int128 v17; // [rsp+40h] [rbp-4D8h] BYREF
  __int128 v18; // [rsp+50h] [rbp-4C8h]
  __int128 v19; // [rsp+60h] [rbp-4B8h]
  __int128 v20; // [rsp+70h] [rbp-4A8h]
  __int128 v21; // [rsp+80h] [rbp-498h]
  void *v22; // [rsp+90h] [rbp-488h]
  const char *v23; // [rsp+98h] [rbp-480h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+A0h] [rbp-478h]
  const char *v25; // [rsp+A8h] [rbp-470h]
  __int64 v26; // [rsp+B0h] [rbp-468h]
  __int64 v27; // [rsp+B8h] [rbp-460h]
  _QWORD v28[4]; // [rsp+C0h] [rbp-458h] BYREF
  _QWORD src[135]; // [rsp+E0h] [rbp-438h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  alacritty::config::read_config(src);
  if ( LODWORD(src[0]) != 6 )
    return memcpy(dest, src, 0x420uLL);
  if ( LODWORD(src[1]) == 3 && (v3 = src[2], !(unsigned __int8)std::io::error::Error::kind(src[2])) )
  {
    v28[0] = v3;
    result = (void *)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL);
    if ( result )
    {
      v23 = (const char *)v11;
      v24 = <&T as core::fmt::Debug>::fmt;
      *(_QWORD *)&v17 = &off_881DE0;
      *((_QWORD *)&v17 + 1) = 2LL;
      *(_QWORD *)&v19 = 0LL;
      *(_QWORD *)&v18 = &v23;
      *((_QWORD *)&v18 + 1) = 1LL;
      v9 = log::__private_api::loc(&off_881E20);
      v12 = "alacritty_config_derivealacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini://|gopher://|https://"
            "|http://|news:|file:|git://|ssh:|ftp://)[^";
      v13 = 23LL;
      v14 = aAlacrittyConfi_3;
      v15 = 17LL;
      v16 = v9;
      result = (void *)log::__private_api::log(&v17, 1LL, &v12);
      v10 = src[0] == 6LL;
      *((_QWORD *)dest + 1) = 3LL;
      *((_QWORD *)dest + 2) = v3;
      *(_QWORD *)dest = 6LL;
      if ( !v10 )
        return result;
    }
    else
    {
      *((_QWORD *)dest + 1) = 3LL;
      *((_QWORD *)dest + 2) = v3;
      *(_QWORD *)dest = 6LL;
    }
    if ( LODWORD(src[1]) != 3 )
      return (void *)core::ptr::drop_in_place<alacritty::config::Error>(&src[1]);
  }
  else
  {
    v22 = (void *)src[11];
    v21 = *(_OWORD *)&src[9];
    v20 = *(_OWORD *)&src[7];
    v19 = *(_OWORD *)&src[5];
    v18 = *(_OWORD *)&src[3];
    v17 = *(_OWORD *)&src[1];
    if ( core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) )
    {
      v28[0] = v11;
      v28[1] = <&T as core::fmt::Debug>::fmt;
      v28[2] = &v17;
      v28[3] = <alacritty::config::Error as core::fmt::Display>::fmt;
      v12 = (const char *)&off_881E00;
      v13 = 2LL;
      v16 = 0LL;
      v14 = (const char *)v28;
      v15 = 2LL;
      v4 = log::__private_api::loc(&off_881E38);
      v23 = "alacritty_config_derivealacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini://|gopher://|https://"
            "|http://|news:|file:|git://|ssh:|ftp://)[^";
      v24 = (__int64 (__fastcall *)())(&dword_14 + 3);
      v25 = aAlacrittyConfi_3;
      v26 = 17LL;
      v27 = v4;
      log::__private_api::log(&v12, 1LL, &v23);
    }
    result = v22;
    *((_QWORD *)dest + 11) = v22;
    *(_OWORD *)(dest + 72) = v21;
    v6 = v17;
    v7 = v18;
    v8 = v19;
    *(_OWORD *)(dest + 56) = v20;
    *(_OWORD *)(dest + 40) = v8;
    *(_OWORD *)(dest + 24) = v7;
    *(_OWORD *)(dest + 8) = v6;
    *(_QWORD *)dest = 6LL;
  }
  return result;
}