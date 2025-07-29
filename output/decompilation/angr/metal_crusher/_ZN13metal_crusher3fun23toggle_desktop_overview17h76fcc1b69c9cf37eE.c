long long metal_crusher::fun::toggle_desktop_overview()
{
    unsigned long long v0;  // [bp-0x2a0]
    unsigned long long v1;  // [bp-0x298]
    unsigned long long v2;  // [bp-0x290]
    unsigned long long v3;  // [bp-0x288]
    unsigned long long v4;  // [bp-0x280]
    unsigned long long v5;  // [bp-0x278]
    unsigned long long v6;  // [bp-0x270]
    unsigned long long v7;  // [bp-0x268]
    unsigned long long v8;  // [bp-0x260]
    unsigned long long v9;  // [bp-0x258]
    char v10;  // [bp-0x250]
    char v11;  // [bp-0x48]
    unsigned long long v13;  // rax
    char v14;  // al
    unsigned long long v15;  // rdi
    unsigned long long v16;  // rsi

    if ((char)metal_crusher::fun::is_kde_plasma())
    {
        std::sync::poison::once::Once::call_once();
        v0 = &_ZN13metal_crusher3fun12FUN_INSTANCE17hc5e563d48c906004E;
        v6 = "org.kde.plasmashellorg.kde.PlasmaShellKDEXDG_CURRENT_DESKTOPGNOMEplasmashellMETAL CRUSHERsh-c/usr/bin/";
        v7 = 19;
        v1 = "/PlasmaShelltoggleDashboardorg.kde.plasmashellorg.kde.PlasmaShellKDEXDG_CURRENT_DESKTOPGNOMEplasmashellMETAL CRUSHERsh-c/usr/bin/";
        v2 = 12;
        v8 = "org.kde.PlasmaShellKDEXDG_CURRENT_DESKTOPGNOMEplasmashellMETAL CRUSHERsh-c/usr/bin/";
        v9 = 19;
        v3 = "toggleDashboardorg.kde.plasmashellorg.kde.PlasmaShellKDEXDG_CURRENT_DESKTOPGNOMEplasmashellMETAL CRUSHERsh-c/usr/bin/";
        v4 = 15;
        v5 = 1;
        v10 = 0;
        async_io::driver::block_on(&v11, &v0);
        ::0x7844b0::core::ptr::drop_in_place<core::result::Result<zbus::message::Message,zbus::error::Error>>(&v11);
    }
    v13 = metal_crusher::fun::is_gnome();
    if (!(char)v13)
        return v13;
    v14 = _ZN13metal_crusher3fun23toggle_desktop_overview11GNOME_STATE17h0eefb14e94042746E.0;
    if (v14 == 2)
        core::option::unwrap_failed(&g_9965b0); /* do not return */
    _ZN13metal_crusher3fun23toggle_desktop_overview11GNOME_STATE17h0eefb14e94042746E.0 = v14 ^ 1;
    if ((v14 & 1))
    {
        v15 = "dbus-send --session --dest=org.gnome.Shell --type=method_call /org/gnome/Shell org.freedesktop.DBus.Properties.Set string:org.gnome.Shell string:OverviewActive variant:boolean:false/PlasmaShelltoggleDashboardorg.kde.plasmashellorg.kde.PlasmaShellKDEXDG_CUR";
        v16 = 181;
    }
    else
    {
        v15 = "dbus-send --session --dest=org.gnome.Shell --type=method_call /org/gnome/Shell org.freedesktop.DBus.Properties.Set string:org.gnome.Shell string:OverviewActive variant:boolean:truedbus-send --session --dest=org.gnome.Shell --type=method_call /org/gnome/She";
        v16 = 180;
    }
    return metal_crusher::fun::execute_shell(v15, v16);
}
