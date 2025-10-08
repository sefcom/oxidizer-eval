
  fn bat::invoke_bugreport::hbb57d0e784864937(arg1: *mut c_void, arg2: i64, arg3: u64) -> i64

{
    let mut var_1a8: i64;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
        &var_1a8, arg1, "pageritalic-texthighlight-linese…", 5);
    let mut rdx: *mut i64 = &var_1a8;
    let rax: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "pageritalic-texthighlight-linese…", 5, rdx);
    let mut rsi_1: *mut i8;
    
    if rax == 0
    {
        rsi_1 = nullptr;
    }
    else
    {
        rsi_1 = *rax.byte_offset(8);
        rdx = *rax.byte_offset(0x10);
    }
    
    bat::config::get_pager_executable::h08ad46b3efb251cf(&var_1a8, rsi_1, rdx);
    let mut var_b8: i128;
    
    if !(0 + -(var_1a8))
    {
        let var_198: i64;
        let var_a8_1: i64 = var_198;
        var_b8 = var_1a8;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_b8, "lessOS: wordc", 4);
    }
    
    let mut var_98: i128;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_98, arg2, arg3);
    std::path::PathBuf::push::h74e7191f088163e5(&var_98, "metadata.yamlmetadata fileThe bi…");
    var_1a8 = 0;
    let var_1a0: i64 = 8;
    let mut var_198_1: i64 = 0;
    let var_190: *const i8 = "batA cat(1) clone with wings.A c…";
    let mut var_188: i64 = 3;
    let var_180: *const i8 = "0.25.0Clearing  ... okay\nskippe…";
    let mut var_178: i64 = 6;
    let var_170: *const i8 = "v0.25.0-285-g2c87b948cache-actio…";
    let var_168: i64 = 0x15;
    let mut var_158: i64 = -0x8000000000000000;
    let mut var_108: i128;
    bugreport::BugReport::info::h1e481c9f919ea487(&var_108, &var_1a8, &var_158);
    bugreport::BugReport::info::hd8e986c2063a2184(&var_1a8, &var_108);
    bugreport::BugReport::info::hda25a35822c6bb91(&var_108, &var_1a8);
    bugreport::collector::EnvironmentVariables::list::h99ce80883b1c4a52(&var_158);
    bugreport::BugReport::info::h5081d61b56236a31(&var_1a8, &var_108, &var_158);
    bat::config::system_config_file::h5269a0222f7ffe0a(&var_108);
    bugreport::collector::FileContent::new::hd1d20b8dc58ffe21(&var_158, 
        "System Config fileConfig fileCus…", 0x12, &var_108);
    bugreport::BugReport::info::hb38456a8c737cd82(&var_108, &var_1a8, &var_158);
    bat::config::config_file::h4b67a380f7fc9337(&var_1a8);
    bugreport::collector::FileContent::new::hd1d20b8dc58ffe21(&var_158, 
        "Config fileCustom assets metadat…", 0xb, &var_1a8);
    bugreport::BugReport::info::hb38456a8c737cd82(&var_1a8, &var_108, &var_158);
    var_108 = var_98;
    bugreport::collector::FileContent::new::hd1d20b8dc58ffe21(&var_158, 
        "Custom assets metadataCustom ass…", 0x16, &var_108);
    bugreport::BugReport::info::hb38456a8c737cd82(&var_108, &var_1a8, &var_158);
    bugreport::collector::directory_entries::DirectoryEntries::new::h9b3f6a72ea062eec(&var_158, 
        arg2);
    bugreport::BugReport::info::hd823bbbac3c285fa(&var_1a8, &var_108, &var_158);
    bugreport::BugReport::info::h67af60d6f46ccabb(&var_158, &var_1a8);
    let mut var_80: i64;
    grep_cli::decompress::resolve_binary::h3ce6d5484a4c340d(&var_80, &var_b8);
    
    if var_80 == 0
    {
        let var_118: i64;
        let var_168_1: i64 = var_118;
        let var_128: i128;
        var_178 = var_128;
        let var_138: i128;
        var_188 = var_138;
        let var_148: i128;
        var_198_1 = var_148;
        var_1a8 = var_158;
        let mut var_78: ();
        let mut var_60: ();
        bugreport::collector::CommandOutput::new::hd009733d97589f24(&var_60, &var_78);
        bugreport::BugReport::info::h7c29cf3324f110d6(&var_108, &var_1a8, &var_60);
        var_158 = var_108;
        let var_88: i64;
        let var_148_1: i128 = var_88;
        let var_e8: i128;
        let var_138_1: i128 = var_e8;
        let var_d8: i128;
        let var_128_1: i128 = var_d8;
        let var_c8: i64;
        let var_118_1: i64 = var_c8;
    }
    else
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$grep_cli..process..CommandError$GT$$GT$::hde1b8028382593dc(&var_80);
    }
    
    bugreport::BugReport::print::h4dce026a437099b7(&var_158);
    core::ptr::drop_in_place$LT$bugreport..BugReport$GT$::h52a8d52b97a7bb19(&var_158)
}
