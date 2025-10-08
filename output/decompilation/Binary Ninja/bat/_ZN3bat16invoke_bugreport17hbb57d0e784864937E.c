
  int64_t bat::invoke_bugreport::hbb57d0e784864937(void* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_1a8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d802d13d527b428(
        &var_1a8, arg1, "pageritalic-texthighlight-linese…", 5);
    int64_t* rdx = &var_1a8;
    void* rax = clap_builder::parser::error::MatchesError::unwrap::hf7d617d7cf213b9e(
        "pageritalic-texthighlight-linese…", 5, rdx);
    char* rsi_1;
    
    if (!rax)
        rsi_1 = nullptr;
    else
    {
        rsi_1 = *(rax + 8);
        rdx = *(rax + 0x10);
    }
    
    bat::config::get_pager_executable::h08ad46b3efb251cf(&var_1a8, rsi_1, rdx);
    int128_t var_b8;
    
    if (!(0 + -(var_1a8)))
    {
        int64_t var_198;
        int64_t var_a8_1 = var_198;
        var_b8 = var_1a8;
    }
    else
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hab28b98124005ba5(&var_b8, "lessOS: wordc", 4);
    
    int128_t var_98;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_98, arg2, arg3);
    std::path::PathBuf::push::h74e7191f088163e5(&var_98, "metadata.yamlmetadata fileThe bi…");
    var_1a8 = 0;
    int64_t var_1a0 = 8;
    int64_t var_198_1 = 0;
    char const* const var_190 = "batA cat(1) clone with wings.A c…";
    int64_t var_188 = 3;
    char const* const var_180 = "0.25.0Clearing  ... okay\nskippe…";
    int64_t var_178 = 6;
    char const* const var_170 = "v0.25.0-285-g2c87b948cache-actio…";
    int64_t var_168 = 0x15;
    int64_t var_158 = -0x8000000000000000;
    int128_t var_108;
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
    int64_t var_80;
    grep_cli::decompress::resolve_binary::h3ce6d5484a4c340d(&var_80, &var_b8);
    
    if (!var_80)
    {
        int64_t var_118;
        int64_t var_168_1 = var_118;
        int128_t var_128;
        var_178 = var_128;
        int128_t var_138;
        var_188 = var_138;
        int128_t var_148;
        var_198_1 = var_148;
        var_1a8 = var_158;
        void var_78;
        void var_60;
        bugreport::collector::CommandOutput::new::hd009733d97589f24(&var_60, &var_78);
        bugreport::BugReport::info::h7c29cf3324f110d6(&var_108, &var_1a8, &var_60);
        var_158 = var_108;
        int64_t var_88;
        int128_t var_148_1 = var_88;
        int128_t var_e8;
        int128_t var_138_1 = var_e8;
        int128_t var_d8;
        int128_t var_128_1 = var_d8;
        int64_t var_c8;
        int64_t var_118_1 = var_c8;
    }
    else
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..path..PathBuf$C$grep_cli..process..CommandError$GT$$GT$::hde1b8028382593dc(&var_80);
    
    bugreport::BugReport::print::h4dce026a437099b7(&var_158);
    return core::ptr::drop_in_place$LT$bugreport..BugReport$GT$::h52a8d52b97a7bb19(&var_158);
}
