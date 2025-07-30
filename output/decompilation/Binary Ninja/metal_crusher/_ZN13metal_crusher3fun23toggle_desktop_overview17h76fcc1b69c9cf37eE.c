
  int64_t metal_crusher::fun::toggle_desktop_overview::h76fcc1b69c9cf37e()

{
    if (metal_crusher::fun::is_kde_plasma::h9e6f93de52791421())
    {
        std::sync::poison::once::Once::call_once::h38b33f284e35dbeb();
        void** var_2a0 = &metal_crusher::fun::FUN_INSTANCE::hc5e563d48c906004;
        char const* const var_270_1 = "org.kde.plasmashellorg.kde.Plasm…";
        int64_t var_268_1 = 0x13;
        char const* const var_298_1 = "/PlasmaShelltoggleDashboardorg.k…";
        int64_t var_290_1 = 0xc;
        char const* const var_260_1 = "org.kde.PlasmaShellKDEXDG_CURREN…";
        int64_t var_258_1 = 0x13;
        char const* const var_288_1 = "toggleDashboardorg.kde.plasmashe…";
        int64_t var_280_1 = 0xf;
        int64_t var_278_1 = 1;
        char var_250_1 = 0;
        void var_48;
        async_io::driver::block_on::h44964e443e66958f(&var_48, &var_2a0);
        core::ptr::drop_in_place$LT$core..result..Result$LT$zbus..message..Message$C$zbus..error..Error$GT$$GT$::hb2e84c115fc8b39a(&var_48);
    }
    
    char result = metal_crusher::fun::is_gnome::h89496819bddce19e();
    
    if (!result)
        return result;
    
    char metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0_1 =
        *metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0;
    
    if (metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0_1 == 2)
    {
        core::option::unwrap_failed::hd557a3ac7f9f7ba4();
        /* no return */
    }
    
    *metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0 =
        metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0_1 ^ 1;
    void* const rdi_3;
    
    if (!(metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0_1 & 1))
        rdi_3 = "dbus-send --session --dest=org.g…";
    else
        rdi_3 = "dbus-send --session --dest=org.g…";
    
    return metal_crusher::fun::execute_shell::h41804e4a8d918ef1(rdi_3);
}
