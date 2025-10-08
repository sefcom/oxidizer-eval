char __fastcall alacritty::config::window::WindowConfig::dimensions(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v5; // rcx
  const char *v6; // rdi
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11; // [rsp+0h] [rbp-B8h] BYREF
  _QWORD v12[2]; // [rsp+8h] [rbp-B0h] BYREF
  _QWORD v13[2]; // [rsp+18h] [rbp-A0h] BYREF
  _QWORD v14[5]; // [rsp+28h] [rbp-90h] BYREF
  _QWORD v15[6]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v16[7]; // [rsp+80h] [rbp-38h] BYREF

  LOBYTE(v3) = a2 != 0;
  if ( a3 != 0 && a2 != 0 )
  {
    a1[1] = a2;
    a1[2] = a3;
    *a1 = 1LL;
  }
  else
  {
    LOBYTE(v3) = a2 | a3;
    if ( a2 | a3 )
    {
      v5 = 0LL;
      v6 = aLines_0;
      v7 = aColumns;
      if ( !a3 )
        v7 = aLines_0;
      LOBYTE(v5) = a3 != 0;
      v8 = 2 * v5 + 5;
      if ( a3 )
        a2 = a3;
      else
        v6 = aColumns;
      v12[0] = v7;
      v12[1] = v8;
      v13[0] = v6;
      v13[1] = 2LL * (a3 == 0) + 5;
      v11 = a2;
      v3 = core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL);
      if ( v3 > 1 )
      {
        v15[0] = v12;
        v15[1] = <&T as core::fmt::Display>::fmt;
        v15[2] = v13;
        v15[3] = <&T as core::fmt::Display>::fmt;
        v15[4] = &v11;
        v15[5] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
        v16[0] = &off_881B80;
        v16[1] = 3LL;
        v16[4] = 0LL;
        v16[2] = v15;
        v16[3] = 3LL;
        v9 = log::__private_api::loc(&off_881BB0);
        v14[0] = "alacritty_config_derivealacritty::config::ui_config(ipfs:|ipns:|magnet:|mailto:|gemini://|gopher://|htt"
                 "ps://|http://|news:|file:|git://|ssh:|ftp://)[^";
        v14[1] = 23LL;
        v14[2] = aAlacrittyConfi_2;
        v14[3] = 25LL;
        v14[4] = v9;
        LOBYTE(v3) = log::__private_api::log(v16, 2LL, v14);
      }
      *a1 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
  }
  return v3;
}