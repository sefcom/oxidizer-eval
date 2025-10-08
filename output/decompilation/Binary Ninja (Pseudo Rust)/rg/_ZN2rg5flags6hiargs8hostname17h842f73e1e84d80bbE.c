
  fn rg::flags::hiargs::hostname::h842f73e1e84d80bb(arg1: *mut i64, arg2: i64) -> i64

{
    if arg2 == 0
    {
        /* tailcall */
        return rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1);
    }
    
    let mut var_148: i64 = arg2;
    let rdx: i64;
    let var_140: i64 = rdx;
    let mut var_190: i8;
    grep_cli::decompress::resolve_binary::hae84bf314539e0cc(&var_190, arg2);
    let mut var_238: *mut i64;
    let mut var_208: i128;
    let mut var_1d0: i32;
    let mut var_1c8: i128;
    let mut var_1c0: i128;
    let mut var_1b0: i128;
    let mut var_188: i128;
    let var_178: i64;
    let mut var_f8: *mut *mut c_void;
    
    if (var_190 & 1) != 0
    {
        let var_1f8_1: i64 = var_178;
        var_208 = var_188;
        
        if core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
        {
            var_238 = &var_148;
            let var_230_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h26569d9514a05a63;
            let var_228_1: *mut i128 = &var_208;
            let var_220_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$grep_cli..process..CommandError$u20$as$u20$core..fmt..Display$GT$::fmt::h3f7da3a26c9a2241;
            var_f8 = &data_7eb2a0;
            let var_f0_1: i64 = 2;
            let var_d8_1: i64 = 0;
            let var_e8_1: *mut *mut i64 = &var_238;
            let var_e0_1: i64 = 2;
            let rax_2: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb368);
            var_1d0 = "rg::flags::hiargserror building …";
            var_1c8 = 0x11;
            var_1c0 = "rg::flags::hiargserror building …";
            *var_1c0[8] = 0x11;
            var_1b0 = rax_2;
            log::__private_api::log::h124fdfc9e9ed7585(&var_f8, 4, &var_1d0);
        }
        
        rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1);
        return core::ptr::drop_in_place$LT$grep_cli..process..CommandError$GT$::h74f24c8deb1a9af9(
            &var_208);
    }
    
    let var_158_1: i64 = var_178;
    let mut var_168: i128 = var_188;
    std::process::Command::stdin::hf2e58e20c85050ff(&var_f8, 1, 
        std::process::Command::new::hf0673b88a585bfee(&var_f8, &var_168));
    grep_cli::process::CommandReader::new::h647081c4517aedcd(&var_1d0, &var_f8);
    let mut var_1e8: i128;
    
    if var_1d0 != 2
    {
        let var_1a0: i128;
        let var_108_1: i128 = var_1a0;
        let var_118_1: i128 = var_1b0;
        let var_128_1: i128 = var_1c0;
        let mut var_138: i128 = var_1d0;
        std::io::read_to_string::h6591de12ba6059d1(&var_208, &var_138);
        
        if !(0 + -(var_208))
        {
            let var_1f8: i64;
            let var_1d8_2: i64 = var_1f8;
            var_1e8 = var_208;
            let mut rax_12: i64;
            let mut rdx_6: u64;
            rax_12 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hd0360e9e77a44e0f(*var_1e8[8], 
                var_1f8);
            
            if rdx_6 == 0
            {
                if core::sync::atomic::atomic_load::headb9992cbbd027a(
                    &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
                {
                    var_190 = &var_168;
                    var_188 = _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                    var_1d0 = &data_7eb300;
                    var_1c8 = 2;
                    var_1b0 = 0;
                    var_1c0 = &var_190;
                    *var_1c0[8] = 1;
                    let rax_15: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb320);
                    var_238 = "rg::flags::hiargserror building …";
                    let var_230_4: i64 = 0x11;
                    let var_228_4: *const i8 = "rg::flags::hiargserror building …";
                    let var_220_4: i64 = 0x11;
                    let var_218_3: i64 = rax_15;
                    log::__private_api::log::h124fdfc9e9ed7585(&var_1d0, 4, &var_238);
                }
                
                rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_1e8);
                core::ptr::drop_in_place$LT$std..process..Command$GT$::h79c148136f15ad8b(&var_f8);
            }
            else
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1dbf6ec1d593e24c(&var_1d0, rax_12, rdx_6);
                arg1[2] = var_1c0;
                *arg1 = var_1d0;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_1e8);
                core::ptr::drop_in_place$LT$std..process..Command$GT$::h79c148136f15ad8b(&var_f8);
            }
        }
        else
        {
            let mut var_240: i64 = *var_208[8];
            
            if core::sync::atomic::atomic_load::headb9992cbbd027a(
                &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
            {
                var_190 = &var_168;
                var_188 =
                    _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
                *var_188[8] = &var_240;
                let var_178_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
                var_1d0 = &data_7eb2e0;
                var_1c8 = 2;
                var_1b0 = 0;
                var_1c0 = &var_190;
                *var_1c0[8] = 2;
                let rax_11: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb338);
                var_238 = "rg::flags::hiargserror building …";
                let var_230_3: i64 = 0x11;
                let var_228_3: *const i8 = "rg::flags::hiargserror building …";
                let var_220_3: i64 = 0x11;
                let var_218_2: i64 = rax_11;
                log::__private_api::log::h124fdfc9e9ed7585(&var_1d0, 4, &var_238);
            }
            
            rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::haa31b1f83e302f9e(&var_240);
            core::ptr::drop_in_place$LT$std..process..Command$GT$::h79c148136f15ad8b(&var_f8);
        }
    }
    else
    {
        let var_1d8_1: i64 = *var_1c0[8];
        var_1e8 = var_1c8;
        
        if core::sync::atomic::atomic_load::headb9992cbbd027a(
            &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, 0) >= 4
        {
            var_208 = &var_168;
            *var_208[8] =
                _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
            let var_1f8_2: *mut i128 = &var_1e8;
            let var_1f0_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = _$LT$grep_cli..process..CommandError$u20$as$u20$core..fmt..Display$GT$::fmt::h3f7da3a26c9a2241;
            var_238 = &data_7eb2c0;
            let var_230_2: i64 = 2;
            let var_218_1: i64 = 0;
            let var_228_2: *mut i128 = &var_208;
            let var_220_2: i64 = 2;
            let rax_8: i64 = log::__private_api::loc::h53b04f6fd0066707(&data_7eb350);
            var_190 = "rg::flags::hiargserror building …";
            var_188 = 0x11;
            *var_188[8] = "rg::flags::hiargserror building …";
            let var_178_1: i64 = 0x11;
            let var_170_1: i64 = rax_8;
            log::__private_api::log::h124fdfc9e9ed7585(&var_238, 4, &var_190);
        }
        
        rg::flags::hiargs::platform_hostname::h0858a6014f6c37dc(arg1);
        core::ptr::drop_in_place$LT$grep_cli..process..CommandError$GT$::h74f24c8deb1a9af9(
            &var_1e8);
        core::ptr::drop_in_place$LT$std..process..Command$GT$::h79c148136f15ad8b(&var_f8);
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hee77a3799ccd604e(&var_168)
}
