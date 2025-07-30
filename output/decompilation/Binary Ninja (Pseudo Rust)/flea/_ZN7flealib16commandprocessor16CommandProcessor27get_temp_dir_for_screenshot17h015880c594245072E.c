
  fn flealib::commandprocessor::CommandProcessor::get_temp_dir_for_screenshot::h015880c594245072(arg1: *mut i128) -> i64

{
    let mut var_84: ();
    chrono::offset::utc::Utc::now::he8c7f65885fa3c3e(&var_84);
    let mut var_e8: *const i8 = "%Y-%m-%d_%H-%M-%Sscreenshot\r\nD…";
    let var_e0: i64 = 0x11;
    let var_d8: i64 = 8;
    let var_d0: i64 = 0;
    let mut var_c8: i8 = 0;
    let mut var_78: i128;
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::hed599405f419e4bb(&var_78, &var_84, 
        &var_e8);
    let mut var_b8: *mut i128 = &var_78;
    let var_b0: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h48f8d3b0d60b9c9f;
    var_e8 = &data_b085e8;
    let var_e0_1: i64 = 2;
    var_c8 = 0;
    let var_d8_1: *mut *mut i128 = &var_b8;
    let var_d0_1: i64 = 1;
    let mut var_a0: i128;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_a0, &var_e8);
    core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h35c450be2a355fff(&var_78);
    var_b8 = var_a0;
    std::env::temp_dir::hfef1f0de9c23ac58(&var_e8);
    let var_90: i64;
    let var_68: i64 = var_90;
    var_78 = var_b8;
    std::path::Path::join::h7b07187a9245af47(arg1, var_e0_1, var_d8_1, &var_78);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2f706af944357a81(&var_e8)
}
