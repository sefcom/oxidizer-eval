
  int64_t flealib::commandprocessor::CommandProcessor::get_temp_dir_for_screenshot::h015880c594245072(int128_t* arg1)

{
    void var_84;
    chrono::offset::utc::Utc::now::he8c7f65885fa3c3e(&var_84);
    char const* const var_e8 = "%Y-%m-%d_%H-%M-%Sscreenshot\r\nD…";
    int64_t var_e0 = 0x11;
    int64_t var_d8 = 8;
    int64_t var_d0 = 0;
    char var_c8 = 0;
    int128_t var_78;
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::hed599405f419e4bb(&var_78, &var_84, 
        &var_e8);
    int128_t* var_b8 = &var_78;
    uint64_t (* var_b0)(int64_t* arg1, int64_t* arg2) = _$LT$chrono..format..formatting..DelayedFormat$LT$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h48f8d3b0d60b9c9f;
    var_e8 = &data_b085e8;
    int64_t var_e0_1 = 2;
    var_c8 = 0;
    int128_t** var_d8_1 = &var_b8;
    int64_t var_d0_1 = 1;
    int128_t var_a0;
    core::option::Option$LT$T$GT$::map_or_else::h09968eee8a96299b(&var_a0, &var_e8);
    core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h35c450be2a355fff(&var_78);
    var_b8 = var_a0;
    std::env::temp_dir::hfef1f0de9c23ac58(&var_e8);
    int64_t var_90;
    int64_t var_68 = var_90;
    var_78 = var_b8;
    std::path::Path::join::h7b07187a9245af47(arg1, var_e0_1, var_d8_1, &var_78);
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h2f706af944357a81(&var_e8);
}
