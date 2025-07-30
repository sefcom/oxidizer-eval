void _ZN13metal_crusher3fun23toggle_desktop_overview17h76fcc1b69c9cf37eE(void)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined1 *local_2a0;
  char *local_298;
  undefined8 local_290;
  char *local_288;
  undefined8 local_280;
  undefined8 local_278;
  char *local_270;
  undefined8 local_268;
  char *local_260;
  undefined8 local_258;
  undefined local_250;
  undefined local_48 [64];
  
  cVar2 = _ZN13metal_crusher3fun13is_kde_plasma17h9e6f93de52791421E();
  if (cVar2 != '\0') {
    _ZN3std4sync6poison4once4Once9call_once17h38b33f284e35dbebE();
    local_2a0 = _ZN13metal_crusher3fun12FUN_INSTANCE17hc5e563d48c906004E;
    local_270 = "org.kde.plasmashell";
    local_268 = 0x13;
    local_298 = "/PlasmaShell";
    local_290 = 0xc;
    local_260 = "org.kde.PlasmaShell";
    local_258 = 0x13;
    local_288 = "toggleDashboard";
    local_280 = 0xf;
    local_278 = 1;
    local_250 = 0;
    _ZN8async_io6driver8block_on17h44964e443e66958fE(local_48,&local_2a0);
    _ZN4core3ptr92drop_in_place_LT_core__result__Result_LT_zbus__message__Message_C_zbus__error__Error_GT__GT_17hb2e84c115fc8b39aE
              (local_48);
  }
  cVar2 = _ZN13metal_crusher3fun8is_gnome17h89496819bddce19eE();
  if (cVar2 != '\0') {
    if (_ZN13metal_crusher3fun23toggle_desktop_overview11GNOME_STATE17h0eefb14e94042746E_0 == 2) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17hd557a3ac7f9f7ba4E_006b3c38)
                (&PTR_s_src_fun_rs_006965b0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((_ZN13metal_crusher3fun23toggle_desktop_overview11GNOME_STATE17h0eefb14e94042746E_0 & 1) ==
        0) {
      pcVar4 = 
      "dbus-send --session --dest=org.gnome.Shell --type=method_call /org/gnome/Shell org.freedesktop.DBus.Properties.Set string:org.gnome.Shell string:OverviewActive variant:boolean:true"
      ;
      uVar3 = 0xb4;
    }
    else {
      pcVar4 = 
      "dbus-send --session --dest=org.gnome.Shell --type=method_call /org/gnome/Shell org.freedesktop.DBus.Properties.Set string:org.gnome.Shell string:OverviewActive variant:boolean:false"
      ;
      uVar3 = 0xb5;
    }
    _ZN13metal_crusher3fun23toggle_desktop_overview11GNOME_STATE17h0eefb14e94042746E_0 =
         _ZN13metal_crusher3fun23toggle_desktop_overview11GNOME_STATE17h0eefb14e94042746E_0 ^ 1;
    _ZN13metal_crusher3fun13execute_shell17h41804e4a8d918ef1E(pcVar4,uVar3);
  }
  return;
}