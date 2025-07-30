__int64 metal_crusher::fun::toggle_desktop_overview()
{
  __int64 result; // rax
  char v1; // al
  const char *v2; // rdi
  __int64 v3; // rsi
  _QWORD v4[10]; // [rsp+8h] [rbp-2A0h] BYREF
  char v5; // [rsp+58h] [rbp-250h]
  _BYTE v6[72]; // [rsp+260h] [rbp-48h] BYREF

  if ( (unsigned __int8)metal_crusher::fun::is_kde_plasma() )
  {
    std::sync::poison::once::Once::call_once();
    v4[0] = &metal_crusher::fun::FUN_INSTANCE;
    v4[6] = aOrgKdePlasmash;
    v4[7] = 19LL;
    v4[1] = aPlasmashell;
    v4[2] = 12LL;
    v4[8] = aOrgKdePlasmash_0;
    v4[9] = 19LL;
    v4[3] = aToggledashboar;
    v4[4] = 15LL;
    v4[5] = 1LL;
    v5 = 0;
    async_io::driver::block_on(v6, v4);
    core::ptr::drop_in_place<core::result::Result<zbus::message::Message,zbus::error::Error>>(v6);
  }
  result = metal_crusher::fun::is_gnome();
  if ( (_BYTE)result )
  {
    v1 = metal_crusher::fun::toggle_desktop_overview::GNOME_STATE;
    if ( metal_crusher::fun::toggle_desktop_overview::GNOME_STATE == 2 )
      core::option::unwrap_failed(&off_5965B0);
    metal_crusher::fun::toggle_desktop_overview::GNOME_STATE ^= 1u;
    if ( (v1 & 1) != 0 )
    {
      v2 = aDbusSendSessio_0;
      v3 = 181LL;
    }
    else
    {
      v2 = aDbusSendSessio;
      v3 = 180LL;
    }
    return metal_crusher::fun::execute_shell((__int64)v2, v3);
  }
  return result;
}