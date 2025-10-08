
  fn alacritty::config::installed_config::hd161181c0e99481f(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut var_108: i64 = arg2;
    let var_100: u64 = arg3;
    let mut var_120: *mut i64 = &var_108;
    let var_118: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
    let mut var_e0: *mut *mut c_void = &data_c81f80;
    let var_d8: i64 = 1;
    let var_c0: i64 = 0;
    let var_d0: *mut *mut i64 = &var_120;
    let var_c8: i64 = 1;
    let mut var_138: ();
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_138, 0, arg3, &var_e0);
    xdg::base_directories::BaseDirectories::with_env::h17a1f3f28c4a7b5d(&var_e0);
    xdg::base_directories::BaseDirectories::find_config_file::h2e314d890ad5ed70(&var_120, &var_e0, 
        &var_138);
    let mut var_f8: ();
    core::option::Option$LT$T$GT$::or_else::hd003a5435b01cfe4(&var_f8, &var_120, &var_138);
    core::option::Option$LT$T$GT$::or_else::h22cfc7b08372667f(arg1, &var_f8, &var_138);
    core::ptr::drop_in_place$LT$xdg..base_directories..BaseDirectories$GT$::hfbd973180228c1c0(
        &var_e0);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_138)
}
