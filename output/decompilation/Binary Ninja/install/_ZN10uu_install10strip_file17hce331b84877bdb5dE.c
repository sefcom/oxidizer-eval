
  uint64_t uu_install::strip_file::hce331b84877bdb5d(char* arg1, uint64_t arg2, void* arg3)

{
    char var_110;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_110, arg1, arg2);
    int64_t rbx = 0;
    char temp0 = var_110;
    int64_t var_100;
    
    if (!temp0)
        rbx = var_100;
    
    int64_t r13 = 1;
    int64_t var_108;
    
    if (!temp0)
        r13 = var_108;
    var_110 = 0;
    int128_t var_1b8;
    int64_t var_1a8;
    int128_t var_198;
    
    if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h98f13f98e718c5cc(r13, rbx, 
            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_110)))
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_1b8, arg1, 
            arg2);
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(&var_110, "./a Display implementation retur…", 1);
        var_198 = var_110;
        std::path::PathBuf::push::h2d55bb206594316e(&var_198, arg1);
        var_1a8 = var_100;
        var_1b8 = var_198;
    }
    
    std::process::Command::new::hcf1a1331f2ee346b(&var_110, arg3 + 0x18);
    int64_t rbp;
    rbp = 1;
    std::process::Command::arg::hdd894e2d8adaa26f(&var_110, &var_1b8);
    int32_t var_138;
    std::process::Command::status::h6e1e3c5811681da5(&var_138);
    uint64_t result;
    void* var_1c0;
    void** var_150;
    
    if (var_138 != 1)
    {
        int32_t var_134;
        
        if (!var_134)
        {
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h49bfa966aab963a6(&var_110);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_1b8);
            return 0;
        }
        
        int64_t var_188_3 = var_1a8;
        var_198 = var_1b8;
        var_150 = std::fs::remove_file::h8950bca4704e1937(&var_198);
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb3cb1d78c02156cf(&var_150);
        
        if (var_134 & 0x7f)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        var_1c0 = *var_134[1];
        var_150 = &var_1c0;
        uint64_t (* var_148_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        var_198 = &data_5024e8;
        *var_198[8] = 1;
        int64_t var_178_1 = 0;
        void*** var_188_4 = &var_150;
        int64_t var_180_2 = 1;
        int128_t var_128;
        core::option::Option$LT$T$GT$::map_or_else::hf9ae0c5a9ad5f899(&var_128, &var_198);
        var_198 = var_128;
        int64_t var_118;
        int64_t var_180_3 = var_118;
        var_198 = 9;
        result = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_198);
    }
    else
    {
        void* var_130;
        var_1c0 = var_130;
        int64_t var_188_2 = var_1a8;
        var_198 = var_1b8;
        var_150 = std::fs::remove_file::h8950bca4704e1937(&var_198);
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h276451a033a1078f(
            &var_150, &var_1c0, 
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb3cb1d78c02156cf(&var_150));
        int64_t var_140;
        int64_t var_180_1 = var_140;
        var_198 = var_150;
        var_198 = 9;
        result = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_198);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc7e2d86a53eff0ef(&var_1c0);
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h49bfa966aab963a6(&var_110);
    return result;
}
