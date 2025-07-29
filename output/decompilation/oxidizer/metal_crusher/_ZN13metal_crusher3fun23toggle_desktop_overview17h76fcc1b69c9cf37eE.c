fn metal_crusher::fun::toggle_desktop_overview() -> long long {
    let v0: struct81;  // [bp-0x2a0]
    let v1: struct64;  // [bp-0x48]
    let v3: Result<struct64, struct16>;  // rax
    let v4: u8;  // al
    let v5: u64;  // rdi
    let v6: u64;  // rsi

    if metal_crusher::fun::is_kde_plasma() {
        std::sync::poison::once::Once::call_once();
        v0 = struct81 {
            field_0: ""
            field_8: "/PlasmaShell"
            field_24: "toggleDashboard"
            field_40: 1
            field_48: "org.kde.plasmashell"
            field_64: "org.kde.PlasmaShell"
            field_80: 0
        };
        v1 = async_io::driver::block_on(&v0);
    }
    v3 = metal_crusher::fun::is_gnome();
    if !v3 as u8 {
        return v3;
    }
    v4 = _ZN13metal_crusher3fun23toggle_desktop_overview11GNOME_STATE17h0eefb14e94042746E.0.field_0;
    if v4 == 2 {
        core::option::unwrap_failed(); /* do not return */
    }
    _ZN13metal_crusher3fun23toggle_desktop_overview11GNOME_STATE17h0eefb14e94042746E.0.field_0 = v4 ^ 1;
    return metal_crusher::fun::execute_shell(v5, v6);
}
