
  int64_t flea::updater::start_new_process::hba0ad9c54647d43a(void* arg1, int128_t* arg2)

{
    int128_t var_e8;
    std::sys::os_str::bytes::Slice::to_owned::hc28911b40fe28e29(&var_e8, *(arg1 + 8), 
        *(arg1 + 0x10));
    int128_t var_188 = var_e8;
    int64_t var_d8_1 = arg2[1];
    var_e8 = *arg2;
    std::path::PathBuf::push::h91d5a0b7cd5e4ff3(&var_188, &var_e8);
    int64_t var_d8;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_e8, *var_188[8], var_d8);
    
    if (var_e8 & 1)
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    int128_t var_148 = var_e8;
    int128_t* var_168 = &var_148;
    int128_t** var_120 = &var_168;
    int64_t (* var_118)(int64_t* arg1, int64_t* arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf53647e53640ab07;
    var_e8 = &data_af6280;
    *var_e8[8] = 2;
    int64_t var_c8 = 0;
    int128_t*** var_d8_2 = &var_120;
    int64_t var_d0 = 1;
    int128_t var_100;
    core::option::Option$LT$T$GT$::map_or_else::hbd37af77d9713dc6(&var_100, &var_e8);
    var_168 = var_100;
    int64_t var_138 = var_d8;
    var_148 = var_188;
    std::process::Command::new::hf167ede55a98d21c(&var_e8, &var_148);
    std::process::Command::spawn::h7ffa78d1da680294(&var_148, &var_e8);
    int64_t var_160;
    int64_t var_f0;
    core::result::Result$LT$T$C$E$GT$::expect::hfff00bbc41838fb2(&var_120, &var_148, var_160, 
        var_f0);
    core::ptr::drop_in_place$LT$std..process..Child$GT$::h2df2be718315ad29(&var_120);
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hca8942e3d0a00569(&var_e8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_168);
}
