
  int64_t alacritty::config::installed_config::hd161181c0e99481f(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_108 = arg2;
    uint64_t var_100 = arg3;
    int64_t* var_120 = &var_108;
    int64_t (* var_118)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
    void** const var_e0 = &data_c81f80;
    int64_t var_d8 = 1;
    int64_t var_c0 = 0;
    int64_t** var_d0 = &var_120;
    int64_t var_c8 = 1;
    void var_138;
    core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_138, 0, arg3, &var_e0);
    xdg::base_directories::BaseDirectories::with_env::h17a1f3f28c4a7b5d(&var_e0);
    xdg::base_directories::BaseDirectories::find_config_file::h2e314d890ad5ed70(&var_120, &var_e0, 
        &var_138);
    void var_f8;
    core::option::Option$LT$T$GT$::or_else::hd003a5435b01cfe4(&var_f8, &var_120, &var_138);
    core::option::Option$LT$T$GT$::or_else::h22cfc7b08372667f(arg1, &var_f8, &var_138);
    core::ptr::drop_in_place$LT$xdg..base_directories..BaseDirectories$GT$::hfbd973180228c1c0(
        &var_e0);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_138);
}
