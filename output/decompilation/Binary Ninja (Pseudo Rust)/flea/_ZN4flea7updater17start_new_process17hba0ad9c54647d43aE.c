
  fn flea::updater::start_new_process::hba0ad9c54647d43a(arg1: *mut c_void, arg2: *mut i128) -> i64

{
    let mut var_e8: i128;
    std::sys::os_str::bytes::Slice::to_owned::hc28911b40fe28e29(&var_e8, *arg1.byte_offset(8), 
        *arg1.byte_offset(0x10));
    let mut var_188: i128 = var_e8;
    let var_d8_1: i64 = arg2[1];
    var_e8 = *arg2;
    std::path::PathBuf::push::h91d5a0b7cd5e4ff3(&var_188, &var_e8);
    let var_d8: i64;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::hb4876b8b08d05247(&var_e8, *var_188[8], var_d8);
    
    if (var_e8 & 1) != 0
    {
        core::option::unwrap_failed::hf53ee17a2013bd69();
        /* no return */
    }
    
    let mut var_148: i128 = var_e8;
    let mut var_168: *mut i128 = &var_148;
    let mut var_120: *mut *mut i128 = &var_168;
    let var_118: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf53647e53640ab07;
    var_e8 = &data_af6280;
    *var_e8[8] = 2;
    let var_c8: i64 = 0;
    let var_d8_2: *mut *mut *mut i128 = &var_120;
    let var_d0: i64 = 1;
    let mut var_100: i128;
    core::option::Option$LT$T$GT$::map_or_else::hbd37af77d9713dc6(&var_100, &var_e8);
    var_168 = var_100;
    let var_138: i64 = var_d8;
    var_148 = var_188;
    std::process::Command::new::hf167ede55a98d21c(&var_e8, &var_148);
    std::process::Command::spawn::h7ffa78d1da680294(&var_148, &var_e8);
    let var_160: i64;
    let var_f0: i64;
    core::result::Result$LT$T$C$E$GT$::expect::hfff00bbc41838fb2(&var_120, &var_148, var_160, 
        var_f0);
    core::ptr::drop_in_place$LT$std..process..Child$GT$::h2df2be718315ad29(&var_120);
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hca8942e3d0a00569(&var_e8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c3e4c9e242e21ed(&var_168)
}
