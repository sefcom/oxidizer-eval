
  fn ruff_python_formatter::cli::format_and_debug_print::hafab07a4cadcab9d(arg1: *mut i64, arg2: *mut i8, arg3: i64, arg4: *mut c_void, arg5: i64) -> *mut i64

{
    let mut result: *mut i64 = arg1;
    let rax: i8 = ruff_python_ast::PySourceType::try_from_path::heea19f1ec501a14c(arg5);
    let mut rcx: i64;
    rcx = rax >= 2;
    let mut rcx_1: i32 = 0x90300;
    
    if rax != 3
    {
        rcx_1 = rcx * 3 + 0x90300;
    }
    
    let mut var_270: *mut c_void;
    ruff_python_parser::parse::h7a366e13514d0cfa(&var_270, arg2, arg3, rcx_1);
    let mut var_388: i64;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h2c4d629b813275a1(&var_388, &var_270);
    let rcx_2: i64 = var_388;
    let mut var_380: i64;
    
    if -(rcx_2) != -0x8000000000000000
    {
        let result_1: *mut i64 = result;
        let var_328: i128;
        let var_60_1: i128 = var_328;
        let var_338: i128;
        let var_70_1: i128 = var_338;
        let mut var_348: i128;
        let mut var_80: i128 = var_348;
        let var_358: i128;
        let var_90_1: i128 = var_358;
        let var_368: i128;
        let var_a0_1: i128 = var_368;
        let mut var_378: i128;
        let var_b0_1: i128 = var_378;
        let mut var_c0: i64 = rcx_2;
        let var_b8_1: i64 = var_380;
        ruff_python_formatter::options::PyFormatOptions::from_extension::ha40f684075c3d58d(
            &var_270, arg5);
        let var_262_1: i8 = *arg4.byte_offset(0x19);
        let mut var_300: *mut c_void = var_270;
        *var_300[7] = *var_270[7];
        let var_2f5_1: i8 = *arg4.byte_offset(0x1c);
        let var_264: i32;
        let var_2f4_1: i32 = var_264;
        let mut var_3c0: i64;
        ruff_python_parser::_$LT$impl$u20$core..convert..From$LT$$RF$ruff_python_parser..Tokens$GT$$u20$for$u20$ruff_python_trivia..comment_ranges..CommentRanges$GT$::from::hbc86bd11c9666a5f(&var_3c0, &var_c0);
        ruff_python_formatter::format_module_ast::hefab6bc763d47fbd(&var_270, &var_c0, &var_3c0, 
            arg2, arg3, &var_300);
        result = result_1;
        anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::hee0744dc87e864a8(&var_388, &var_270);
        let rcx_5: i64 = var_388;
        let var_3b8: i64;
        
        if rcx_5 != -0x8000000000000000
        {
            let var_c8_1: i64 = var_338;
            let var_d8_1: i128 = var_348;
            let var_e8_1: i128 = var_358;
            let mut var_118: i64 = rcx_5;
            let var_110_1: i64 = var_380;
            let mut var_2f0: *mut i64;
            let mut var_2e8: fn(arg1: *mut c_void, arg2: *mut i64) -> u64;
            let mut var_260: *mut *mut i64;
            let mut var_258: i64;
            
            if *arg4.byte_offset(0x1a) != 0
            {
                var_388 = var_380;
                var_380 = var_378;
                var_378 = arg2;
                *var_378[8] = arg3;
                var_2f0 = &var_388;
                var_2e8 = _$LT$ruff_formatter..format_element..document..DisplayDocument$u20$as$u20$core..fmt..Display$GT$::fmt::h8fd323ff2c3863a6;
                var_270 = &data_97c928;
                let var_268_1: i64 = 2;
                let var_250_1: i64 = 0;
                var_260 = &var_2f0;
                var_258 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_270);
            }
            
            let var_2e0: i128;
            let var_2d0: i128;
            let var_2c0: i128;
            let var_2b0: i128;
            let mut var_170: *mut i64;
            
            if *arg4.byte_offset(0x1b) != 0
            {
                let var_3b0: i64;
                let mut var_288: ();
                ruff_python_formatter::comments::visitor::collect_comments::h2ba573daa01cb1e8(
                    &var_288, &*var_80[8], arg2, arg3, var_3b8, var_3b0);
                let var_278: i64;
                
                if var_278 != 0
                {
                    var_270 = &data_97c948;
                    let var_268_2: i64 = 1;
                    let var_260_1: i64 = 8;
                    var_258 = {0};
                    std::io::stdio::_print::h5e446ff973c02de6(&var_270);
                }
                
                let mut var_50: ();
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3a526f5e8d98b455(&var_50, &var_288);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hce77df1b3a83ea41(&var_2f0, &var_50);
                
                while var_2f0 != 0x5e
                {
                    var_348 = var_2b0;
                    let var_358_1: i128 = var_2c0;
                    var_388 = var_2f0;
                    let mut var_290: i64 = var_348;
                    let rdi_12: *mut c_void = var_2e0;
                    let mut var_3a8: i8;
                    let mut var_39c: i8;
                    let mut rdi_13: *mut c_void;
                    
                    if rdi_12 != 0x5e
                    {
                        var_270 = rdi_12;
                        let var_268_3: i64 = *var_2e0[8];
                        let rax_10: i8 =
                            ruff_python_ast::generated::AnyNodeRef::kind::hdfe7380bff4b9e87(rdi_12);
                        let mut rax_11: i32;
                        let mut rdx_6: i32;
                        rax_11 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_270);
                        var_3a8 = rax_10;
                        let var_3a4_1: i32 = rax_11;
                        let var_3a0_1: i32 = rdx_6;
                        rdi_13 = var_2d0;
                        
                        if rdi_13 == 0x5e
                        {
                            var_39c = 0x5e;
                        }
                        else
                        {
                            'label_6fe714:
                            var_270 = rdi_13;
                            let var_268_4: i64 = *var_2d0[8];
                            let rax_12: i8 =
                                ruff_python_ast::generated::AnyNodeRef::kind::hdfe7380bff4b9e87(
                                rdi_13);
                            let mut rax_13: i32;
                            let mut rdx_7: i32;
                            rax_13 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_270);
                            var_39c = rax_12;
                            let var_398_1: i32 = rax_13;
                            let var_394_1: i32 = rdx_7;
                        }
                    }
                    else
                    {
                        var_3a8 = 0x5e;
                        rdi_13 = var_2d0;
                        
                        if rdi_13 != 0x5e
                        {
                            goto 'label_6fe714;
                        }
                        
                        var_39c = 0x5e;
                    }
                    let rbp_1: i64 = var_388;
                    let rax_14: i8 =
                        ruff_python_ast::generated::AnyNodeRef::kind::hdfe7380bff4b9e87(rbp_1);
                    let mut var_190: i64 = rbp_1;
                    let var_188_1: i64 = var_380;
                    let mut rax_15: i32;
                    let mut rdx_8: i32;
                    rax_15 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_190);
                    let mut var_30c: i8 = rax_14;
                    let var_308_1: i32 = rax_15;
                    let var_304_1: i32 = rdx_8;
                    let mut rax_16: *mut c_void;
                    let mut rdx_10: i64;
                    rax_16 = ruff_formatter::source_code::SourceCodeSlice::text::h88bb2d0c23d31a8a(
                        &var_348, arg2, arg3);
                    let mut var_180: *mut c_void = rax_16;
                    let var_178_1: i64 = rdx_10;
                    var_270 = &var_290;
                    let var_268_5: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$ruff_text_size..range..TextRange$u20$as$u20$core..fmt..Debug$GT$::fmt::h158d96d5bbcff346;
                    let var_260_2: *mut i8 = &var_3a8;
                    let var_258_1: fn(arg1: *mut i8, arg2: *mut i8) -> u64 = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h389eabe580c54989;
                    let var_250_2: *mut i8 = &var_39c;
                    let var_248_1: fn(arg1: *mut i8, arg2: *mut i8) -> u64 = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h389eabe580c54989;
                    let var_240_1: *mut i8 = &var_30c;
                    let var_238_1: fn(arg1: i64, arg2: *mut i64) -> u64 =
                        _$LT$$LP$U$C$T$RP$$u20$as$u20$core..fmt..Debug$GT$::fmt::he44bd3acbf841405;
                    let var_230_1: *mut *mut c_void = &var_180;
                    let var_228_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h6869ac5a9771e689;
                    var_170 = &data_97c958;
                    let var_168_1: i64 = 6;
                    let mut var_150: i128;
                    var_150 = 0;
                    let mut var_160: i128;
                    var_160 = &var_270;
                    *var_160[8] = 5;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_170);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hce77df1b3a83ea41(&var_2f0, &var_50);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$ruff_python_formatter..comments..visitor..DecoratedComment$GT$$GT$::h6bdbc8652e164b37(&var_50);
                var_388 = *var_368[8] + 0x10;
                let var_380_1: *mut i8 = arg2;
                var_378 = arg3;
                var_2f0 = &var_388;
                var_2e8 = _$LT$ruff_python_formatter..comments..debug..DebugComments$u20$as$u20$core..fmt..Debug$GT$::fmt::hea1feb88f05c5cc0;
                var_270 = &data_97c928;
                let var_268_6: i64 = 2;
                let var_250_3: *mut c_void = &data_48a670;
                let var_248_2: i64 = 1;
                var_260 = &var_2f0;
                let var_258_2: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_270);
                result = result_1;
            }
            
            ruff_formatter::Formatted$LT$Context$GT$::create_printer::h166771db7bb4b0ee(&var_270, 
                &var_118);
            ruff_formatter::printer::Printer::print::h79a287b6ceef9323(&var_388, &var_270, 
                &var_118);
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h4325d0d9f3e5a643(&var_2f0, &var_388);
            let rax_20: *mut i64 = var_2f0;
            
            if rax_20 != -0x8000000000000000
            {
                let var_2a0: i64;
                let var_120_1: i64 = var_2a0;
                let var_130_1: i128 = var_2b0;
                let var_140_1: i128 = var_2c0;
                let var_150_1: i128 = var_2d0;
                var_170 = rax_20;
                let var_168_2: fn(arg1: *mut c_void, arg2: *mut i64) -> u64 = var_2e8;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha28eca89d061a4b9(&var_270, var_2e8, var_2e0);
                result[2] = var_260;
                *result = var_270;
                core::ptr::drop_in_place$LT$ruff_formatter..Printed$GT$::h2ca1bd91910370f1(
                    &var_170);
                core::ptr::drop_in_place$LT$ruff_formatter..Formatted$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::h53f507e52bb77463(&var_118);
            }
            else
            {
                result[1] = var_2e8;
                *result = -0x8000000000000000;
                core::ptr::drop_in_place$LT$ruff_formatter..Formatted$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::h53f507e52bb77463(&var_118);
            }
        }
        else
        {
            result[1] = var_380;
            *result = -0x8000000000000000;
        }
        
        core::ptr::drop_in_place$LT$ruff_python_trivia..comment_ranges..CommentRanges$GT$::hf53ca0f277f8a08a(var_3c0, var_3b8);
        core::ptr::drop_in_place$LT$ruff_python_parser..Parsed$LT$ruff_python_ast..generated..Mod$GT$$GT$::h61797061966acb6e(&var_c0);
    }
    else
    {
        result[1] = var_380;
        *result = -0x8000000000000000;
    }
    result
}
