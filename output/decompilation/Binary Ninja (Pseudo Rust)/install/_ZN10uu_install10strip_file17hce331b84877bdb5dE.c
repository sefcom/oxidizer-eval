
  fn uu_install::strip_file::hce331b84877bdb5d(arg1: *mut i8, arg2: u64, arg3: *mut c_void) -> u64

{
    let mut var_110: i8;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_110, arg1, arg2);
    let mut rbx: i64 = 0;
    let temp0: i8 = var_110;
    let var_100: i64;
    
    if temp0 == 0
    {
        rbx = var_100;
    }
    
    let mut r13: i64 = 1;
    let var_108: i64;
    
    if temp0 == 0
    {
        r13 = var_108;
    }
    var_110 = 0;
    let mut var_1b8: i128;
    let mut var_1a8: i64;
    let mut var_198: i128;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h98f13f98e718c5cc(r13, rbx, 
        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_110)) == 0
    {
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_1b8, arg1, 
            arg2);
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7990a55799cbd755(&var_110, "./a Display implementation retur…", 1);
        var_198 = var_110;
        std::path::PathBuf::push::h2d55bb206594316e(&var_198, arg1);
        var_1a8 = var_100;
        var_1b8 = var_198;
    }
    
    std::process::Command::new::hcf1a1331f2ee346b(&var_110, arg3.byte_offset(0x18));
    let mut rbp: i64;
    rbp = 1;
    std::process::Command::arg::hdd894e2d8adaa26f(&var_110, &var_1b8);
    let mut var_138: i32;
    std::process::Command::status::h6e1e3c5811681da5(&var_138);
    let mut result: u64;
    let mut var_1c0: *mut c_void;
    let mut var_150: *mut *mut c_void;
    
    if var_138 != 1
    {
        let var_134: i32;
        
        if var_134 == 0
        {
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h49bfa966aab963a6(&var_110);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hc261e2b7908d5905(&var_1b8);
            return 0;
        }
        
        let var_188_3: i64 = var_1a8;
        var_198 = var_1b8;
        var_150 = std::fs::remove_file::h8950bca4704e1937(&var_198);
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb3cb1d78c02156cf(&var_150);
        
        if (var_134 & 0x7f) != 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        var_1c0 = *var_134[1];
        var_150 = &var_1c0;
        let var_148_1: fn(arg1: *mut i32) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        var_198 = &data_5024e8;
        *var_198[8] = 1;
        let var_178_1: i64 = 0;
        let var_188_4: *mut *mut *mut c_void = &var_150;
        let var_180_2: i64 = 1;
        let mut var_128: i128;
        core::option::Option$LT$T$GT$::map_or_else::hf9ae0c5a9ad5f899(&var_128, &var_198);
        var_198 = var_128;
        let var_118: i64;
        let var_180_3: i64 = var_118;
        var_198 = 9;
        result = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_198);
    }
    else
    {
        let var_130: *mut c_void;
        var_1c0 = var_130;
        let var_188_2: i64 = var_1a8;
        var_198 = var_1b8;
        var_150 = std::fs::remove_file::h8950bca4704e1937(&var_198);
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h276451a033a1078f(
            &var_150, &var_1c0, 
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hb3cb1d78c02156cf(&var_150));
        let var_140: i64;
        let var_180_1: i64 = var_140;
        var_198 = var_150;
        var_198 = 9;
        result = alloc::boxed::Box$LT$T$GT$::new::h1677fe46d8519fed(&var_198);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc7e2d86a53eff0ef(&var_1c0);
    }
    core::ptr::drop_in_place$LT$std..process..Command$GT$::h49bfa966aab963a6(&var_110);
    result
}
