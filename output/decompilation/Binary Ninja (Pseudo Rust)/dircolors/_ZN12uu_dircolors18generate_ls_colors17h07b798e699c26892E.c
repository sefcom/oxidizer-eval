
  fn uu_dircolors::generate_ls_colors::h07b798e699c26892(arg1: *mut i128, arg2: *mut i8, arg3: i64, arg4: i64) -> *mut i128

{
    let mut rdi_8: *const *mut *mut [i8; 0x18];
    let mut result: *mut i128;
    let mut var_278: *mut *mut [i8; 0x18];
    let mut var_258: *mut *mut [i8; 0x18];
    let mut var_240: *mut *mut [i8; 0x18];
    let mut var_228: *mut *mut *mut [i8; 0x18];
    let mut var_1f8: i128;
    let mut var_1d8: i128;
    let mut var_1b8: i128;
    let mut var_170: i128;
    let mut var_160: *mut *mut *mut *mut [i8; 0x18];
    let mut var_158: i128;
    
    if *arg2 != 2
    {
        var_240 = nullptr;
        let var_238_1: *mut *mut c_void = 8;
        let var_230_1: i64 = 0;
        var_258 = &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
        let var_250_2: *mut *mut [i8; 0xa7] = &data_5291b8;
        
        for let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_258); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_258)
        {
            let r15_1: i64 = *i;
            let rbx_1: i64 = i[1];
            var_1f8 = r15_1;
            *var_1f8[8] = rbx_1;
            var_1d8 = *i.byte_offset(0x10);
            var_170 = 0;
            let mut rax_6: i64;
            let mut rdx_3: u64;
            rax_6 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2a, &var_170);
            let rax_7: i8 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he3aceff540041b05(r15_1, 
                rbx_1, rax_6, rdx_3);
            let mut rcx_5: *mut *mut [i8; 0x18] = "*\x1b[m\t0.0.28Output commands t…";
            
            if rax_7 != 0
            {
                rcx_5 = 1;
            }
            
            var_278 = rcx_5;
            let var_270_2: u64 = rax_7 ^ 1;
            var_228 = &var_278;
            let var_220_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            let var_218_2: *mut i128 = &var_1f8;
            let var_210_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            var_170 = &data_41bbd8;
            *var_170[8] = 2;
            *var_158[8] = 0;
            let var_160_1: *mut *mut *mut *mut [i8; 0x18] = &var_228;
            var_158 = 2;
            let mut var_90: i128;
            core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_90, &var_170);
            var_1b8 = var_90;
            let var_80: i64;
            let var_1a8_2: i64 = var_80;
            var_228 = &var_1b8;
            let var_220_3: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            let var_218_3: *mut i128 = &var_1d8;
            let var_210_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            var_170 = &data_5270f8;
            *var_170[8] = 2;
            *var_158[8] = 0;
            var_160 = &var_228;
            var_158 = 2;
            let mut var_48: ();
            core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_48, &var_170);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7d8f0025391e3f05(&var_240, &var_48);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_1b8);
        }
        
        uu_dircolors::get_colors_format_strings::h3d385b99c9468f76(&var_170, arg2);
        result = arg1;
        let var_248_1: *mut *mut *mut *mut [i8; 0x18] = var_160;
        var_258 = var_170;
        let var_148: i64;
        let var_1e8_1: i64 = var_148;
        var_1f8 = var_158;
        alloc::str::join_generic_copy::hc84b2afb154a6337(&var_170, var_238_1, var_230_1, arg3, 
            arg4);
        let var_1c8_1: *mut *mut *mut *mut [i8; 0x18] = var_160;
        var_1d8 = var_170;
        uu_dircolors::generate_type_output::h9c6833319feecf38(&var_1b8, arg2);
        var_170 = &var_258;
        *var_170[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_160_2: *mut i128 = &var_1b8;
        var_158 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        *var_158[8] = &var_1d8;
        let var_148_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_140_1: *mut i128 = &var_1f8;
        let var_138_2: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_228 = &data_527118;
        let var_220_4: i64 = 4;
        let var_208_2: i64 = 0;
        let var_218_4: *mut i128 = &var_170;
        let var_210_4: i64 = 4;
        core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_278, &var_228);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_1b8);
        let var_268: i64;
        result[1] = var_268;
        *result = var_278;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_1d8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_1f8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_258);
        rdi_8 = &var_240;
    }
    else
    {
        var_278 = nullptr;
        let var_270_1: *mut *mut c_void = 8;
        let var_268_1: i64 = 0;
        let mut var_78: ();
        uu_dircolors::generate_type_output::h9c6833319feecf38(&var_78, arg2);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7d8f0025391e3f05(&var_278, &var_78);
        var_240 = &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
        let var_238: *mut *mut [i8; 0xa7] = &data_5291b8;
        
        for let mut i_1: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_240); i_1 != 0; i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_240)
        {
            let rbp_1: *mut *mut [i8; 0x18] = *i_1;
            let r12_1: i64 = i_1[1];
            var_258 = rbp_1;
            let var_250_1: i64 = r12_1;
            var_1f8 = *i_1.byte_offset(0x10);
            var_170 = 0;
            let mut rax: i64;
            let mut rdx: u64;
            rax = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2a, &var_170);
            let rax_1: i8 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he3aceff540041b05(rbp_1, 
                r12_1, rax, rdx);
            let mut rcx_1: *const i8 = "*\x1b[m\t0.0.28Output commands t…";
            
            if rax_1 != 0
            {
                rcx_1 = 1;
            }
            
            var_1d8 = rcx_1;
            *var_1d8[8] = rax_1 ^ 1;
            var_228 = &var_1f8;
            let var_220_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            let var_218_1: *mut i128 = &var_1d8;
            let var_210_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            let var_208_1: *mut i64 = &var_258;
            let var_200_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            var_170 = 2;
            var_160 = 2;
            *var_158[8] = 0;
            let var_148_1: i64 = 0x20;
            let mut var_140: i64;
            var_140 = 3;
            let var_25f: i32;
            *var_140[4] = var_25f;
            *var_140[1] = var_25f;
            let var_138_1: i64 = 2;
            let var_128_1: i64 = 2;
            let mut var_118: i64;
            __builtin_memcpy(&var_118, 
                "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
            let var_100_1: i64 = 2;
            let var_f0_1: i64 = 2;
            let mut var_e0: i64;
            __builtin_memcpy(&var_e0, 
                "\x02\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
            let var_c8_1: i64 = 2;
            let var_b8_1: i64 = 2;
            let var_a8_1: i64 = 0;
            let var_a0_1: i64 = 0x20;
            let var_98_1: i8 = 3;
            let var_94_1: i32 = var_25f;
            let var_97_1: i32 = var_25f;
            var_1b8 = &data_527158;
            *var_1b8[8] = 5;
            let var_198_1: *mut i128 = &var_170;
            let var_190_1: i64 = 4;
            let var_1a8_1: *mut *mut *mut *mut [i8; 0x18] = &var_228;
            let var_1a0_1: i64 = 3;
            let mut var_60: ();
            core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_60, &var_1b8);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7d8f0025391e3f05(&var_278, &var_60);
        }
        
        alloc::str::join_generic_copy::hc84b2afb154a6337(&var_170, var_270_1, var_268_1, 
            "\n:=*\x1b[m\t0.0.28Output comman…", 1);
        result = arg1;
        result[1] = var_160;
        *result = var_170;
        rdi_8 = &var_278;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h344034719bce8318(
        rdi_8);
    result
}
