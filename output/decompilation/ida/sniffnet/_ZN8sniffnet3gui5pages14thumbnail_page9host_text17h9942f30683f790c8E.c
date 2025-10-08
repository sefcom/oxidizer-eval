__int64 __fastcall sniffnet::gui::pages::thumbnail_page::host_text(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  _BYTE v7[57]; // [rsp+Fh] [rbp-39h] BYREF

  v2 = a2;
  if ( a2[8] )
  {
    v3 = a2[1];
    v4 = a2[2];
    core::str::<impl str>::trim_matches(v3, v4);
    if ( v5 )
    {
      core::net::parser::<impl core::str::traits::FromStr for core::net::ip_addr::IpAddr>::from_str(v7, v3, v4);
      if ( v7[0] != 2 )
        v2 = a2 + 6;
    }
    else
    {
      v2 = a2 + 6;
    }
  }
  return sniffnet::gui::pages::thumbnail_page::clip_text(a1, v2[1], v2[2], 26LL);
}