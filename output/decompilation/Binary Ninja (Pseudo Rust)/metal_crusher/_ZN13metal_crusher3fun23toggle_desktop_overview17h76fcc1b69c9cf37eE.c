
  fn metal_crusher::fun::toggle_desktop_overview::h76fcc1b69c9cf37e() -> i64

{
    if metal_crusher::fun::is_kde_plasma::h9e6f93de52791421() != 0
    {
        std::sync::poison::once::Once::call_once::h38b33f284e35dbeb();
        let mut var_2a0: *mut *mut c_void = &metal_crusher::fun::FUN_INSTANCE::hc5e563d48c906004;
        let var_270_1: *const i8 = "org.kde.plasmashellorg.kde.Plasm…";
        let var_268_1: i64 = 0x13;
        let var_298_1: *const i8 = "/PlasmaShelltoggleDashboardorg.k…";
        let var_290_1: i64 = 0xc;
        let var_260_1: *const i8 = "org.kde.PlasmaShellKDEXDG_CURREN…";
        let var_258_1: i64 = 0x13;
        let var_288_1: *const i8 = "toggleDashboardorg.kde.plasmashe…";
        let var_280_1: i64 = 0xf;
        let var_278_1: i64 = 1;
        let var_250_1: i8 = 0;
        let mut var_48: ();
        async_io::driver::block_on::h44964e443e66958f(&var_48, &var_2a0);
        core::ptr::drop_in_place$LT$core..result..Result$LT$zbus..message..Message$C$zbus..error..Error$GT$$GT$::hb2e84c115fc8b39a(&var_48);
    }
    
    let result: i8 = metal_crusher::fun::is_gnome::h89496819bddce19e();
    
    if result == 0
    {
        return result;
    }
    
    let metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0_1: i8 =
        *metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0;
    
    if metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0_1 == 2
    {
        core::option::unwrap_failed::hd557a3ac7f9f7ba4();
        /* no return */
    }
    
    *metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0 =
        metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0_1 ^ 1;
    let mut rdi_3: *mut c_void;
    
    if (metal_crusher::fun::toggle_desktop_overview::GNOME_STATE::h0eefb14e94042746.0_1 & 1) == 0
    {
        rdi_3 = "dbus-send --session --dest=org.g…";
    }
    else
    {
        rdi_3 = "dbus-send --session --dest=org.g…";
    }
    
    metal_crusher::fun::execute_shell::h41804e4a8d918ef1(rdi_3)
}
