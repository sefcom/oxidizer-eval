__int64 __fastcall zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::get_fzf(__int64 a1)
{
  __int64 result; // rax
  _QWORD v2[3]; // [rsp+8h] [rbp-1F0h] BYREF
  __int64 v3; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v4; // [rsp+28h] [rbp-1D0h]
  _QWORD src[26]; // [rsp+30h] [rbp-1C8h] BYREF
  _QWORD v6[2]; // [rsp+100h] [rbp-F8h] BYREF
  _BYTE dest[208]; // [rsp+110h] [rbp-E8h] BYREF

  zoxide::util::Fzf::new(&v3);
  result = -v3;
  if ( __OFSUB__(-v3, 1LL) )
  {
    *(_QWORD *)(a1 + 8) = v4;
    *(_DWORD *)a1 = 1;
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    v6[0] = v3;
    v6[1] = v4;
    zoxide::config::fzf_opts(v2);
    if ( v2[0] == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<std::ffi::os_str::OsString>>(0x8000000000000000LL, v2[1]);
      v3 = (__int64)aExact;
      v4 = 7LL;
      src[0] = aNoSort;
      src[1] = 9LL;
      src[2] = aBindCtrlZIgnor;
      src[3] = 37LL;
      src[4] = aCycle;
      src[5] = 7LL;
      src[6] = aKeepRight;
      src[7] = 12LL;
      src[8] = aBorderSharp;
      src[9] = 14LL;
      src[10] = aHeight45;
      src[11] = 12LL;
      src[12] = aInfoInline;
      src[13] = 13LL;
      src[14] = aLayoutReverse;
      src[15] = 16LL;
      src[16] = aTabstop1;
      src[17] = 11LL;
      src[18] = "--exit-0KEYWORDSCommands\n";
      src[19] = 8LL;
      std::process::Command::args(v6, &v3);
      zoxide::util::Fzf::enable_preview(v6);
    }
    else
    {
      std::process::Command::env(v6, v2);
    }
    zoxide::util::Fzf::spawn(a1, v6);
    return core::ptr::drop_in_place<zoxide::util::Fzf>(v6);
  }
  return result;
}