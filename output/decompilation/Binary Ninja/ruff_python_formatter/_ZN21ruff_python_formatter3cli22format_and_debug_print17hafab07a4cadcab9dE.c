
  int64_t* ruff_python_formatter::cli::format_and_debug_print::hafab07a4cadcab9d(int64_t* arg1, char* arg2, int64_t arg3, void* arg4, int64_t arg5)

{
    int64_t* result = arg1;
    char rax = ruff_python_ast::PySourceType::try_from_path::heea19f1ec501a14c(arg5);
    int64_t rcx;
    rcx = rax >= 2;
    int32_t rcx_1 = 0x90300;
    
    if (rax != 3)
        rcx_1 = rcx * 3 + 0x90300;
    
    void* const var_270;
    ruff_python_parser::parse::h7a366e13514d0cfa(&var_270, arg2, arg3, rcx_1);
    int64_t var_388;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h2c4d629b813275a1(&var_388, &var_270);
    int64_t rcx_2 = var_388;
    int64_t var_380;
    
    if (-(rcx_2) != -0x8000000000000000)
    {
        int64_t* result_1 = result;
        int128_t var_328;
        int128_t var_60_1 = var_328;
        int128_t var_338;
        int128_t var_70_1 = var_338;
        int128_t var_348;
        int128_t var_80 = var_348;
        int128_t var_358;
        int128_t var_90_1 = var_358;
        int128_t var_368;
        int128_t var_a0_1 = var_368;
        int128_t var_378;
        int128_t var_b0_1 = var_378;
        int64_t var_c0 = rcx_2;
        int64_t var_b8_1 = var_380;
        ruff_python_formatter::options::PyFormatOptions::from_extension::ha40f684075c3d58d(
            &var_270, arg5);
        char var_262_1 = *(arg4 + 0x19);
        void* const var_300 = var_270;
        *var_300[7] = *var_270[7];
        char var_2f5_1 = *(arg4 + 0x1c);
        int32_t var_264;
        int32_t var_2f4_1 = var_264;
        int64_t var_3c0;
        ruff_python_parser::_$LT$impl$u20$core..convert..From$LT$$RF$ruff_python_parser..Tokens$GT$$u20$for$u20$ruff_python_trivia..comment_ranges..CommentRanges$GT$::from::hbc86bd11c9666a5f(&var_3c0, &var_c0);
        ruff_python_formatter::format_module_ast::hefab6bc763d47fbd(&var_270, &var_c0, &var_3c0, 
            arg2, arg3, &var_300);
        result = result_1;
        anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::hee0744dc87e864a8(&var_388, &var_270);
        int64_t rcx_5 = var_388;
        int64_t var_3b8;
        
        if (rcx_5 != -0x8000000000000000)
        {
            int64_t var_c8_1 = var_338;
            int128_t var_d8_1 = var_348;
            int128_t var_e8_1 = var_358;
            int64_t var_118 = rcx_5;
            int64_t var_110_1 = var_380;
            int64_t* var_2f0;
            uint64_t (* var_2e8)(void* arg1, int64_t* arg2);
            int64_t** var_260;
            int64_t var_258;
            
            if (*(arg4 + 0x1a))
            {
                var_388 = var_380;
                var_380 = var_378;
                var_378 = arg2;
                *var_378[8] = arg3;
                var_2f0 = &var_388;
                var_2e8 = _$LT$ruff_formatter..format_element..document..DisplayDocument$u20$as$u20$core..fmt..Display$GT$::fmt::h8fd323ff2c3863a6;
                var_270 = &data_97c928;
                int64_t var_268_1 = 2;
                int64_t var_250_1 = 0;
                var_260 = &var_2f0;
                var_258 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_270);
            }
            
            int128_t var_2e0;
            int128_t var_2d0;
            int128_t var_2c0;
            int128_t var_2b0;
            int64_t* var_170;
            
            if (*(arg4 + 0x1b))
            {
                int64_t var_3b0;
                void var_288;
                ruff_python_formatter::comments::visitor::collect_comments::h2ba573daa01cb1e8(
                    &var_288, &*var_80[8], arg2, arg3, var_3b8, var_3b0);
                int64_t var_278;
                
                if (var_278)
                {
                    var_270 = &data_97c948;
                    int64_t var_268_2 = 1;
                    int64_t var_260_1 = 8;
                    var_258 = {0};
                    std::io::stdio::_print::h5e446ff973c02de6(&var_270);
                }
                
                void var_50;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3a526f5e8d98b455(&var_50, &var_288);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hce77df1b3a83ea41(&var_2f0, &var_50);
                
                while (var_2f0 != 0x5e)
                {
                    var_348 = var_2b0;
                    int128_t var_358_1 = var_2c0;
                    var_388 = var_2f0;
                    int64_t var_290 = var_348;
                    void* rdi_12 = var_2e0;
                    char var_3a8;
                    char var_39c;
                    void* rdi_13;
                    
                    if (rdi_12 != 0x5e)
                    {
                        var_270 = rdi_12;
                        int64_t var_268_3 = *var_2e0[8];
                        char rax_10 =
                            ruff_python_ast::generated::AnyNodeRef::kind::hdfe7380bff4b9e87(rdi_12);
                        int32_t rax_11;
                        int32_t rdx_6;
                        rax_11 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_270);
                        var_3a8 = rax_10;
                        int32_t var_3a4_1 = rax_11;
                        int32_t var_3a0_1 = rdx_6;
                        rdi_13 = var_2d0;
                        
                        if (rdi_13 == 0x5e)
                            var_39c = 0x5e;
                        else
                        {
                            label_6fe714:
                            var_270 = rdi_13;
                            int64_t var_268_4 = *var_2d0[8];
                            char rax_12 =
                                ruff_python_ast::generated::AnyNodeRef::kind::hdfe7380bff4b9e87(
                                rdi_13);
                            int32_t rax_13;
                            int32_t rdx_7;
                            rax_13 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_270);
                            var_39c = rax_12;
                            int32_t var_398_1 = rax_13;
                            int32_t var_394_1 = rdx_7;
                        }
                    }
                    else
                    {
                        var_3a8 = 0x5e;
                        rdi_13 = var_2d0;
                        
                        if (rdi_13 != 0x5e)
                            goto label_6fe714;
                        
                        var_39c = 0x5e;
                    }
                    int64_t rbp_1 = var_388;
                    char rax_14 =
                        ruff_python_ast::generated::AnyNodeRef::kind::hdfe7380bff4b9e87(rbp_1);
                    int64_t var_190 = rbp_1;
                    int64_t var_188_1 = var_380;
                    int32_t rax_15;
                    int32_t rdx_8;
                    rax_15 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_190);
                    char var_30c = rax_14;
                    int32_t var_308_1 = rax_15;
                    int32_t var_304_1 = rdx_8;
                    void* rax_16;
                    int64_t rdx_10;
                    rax_16 = ruff_formatter::source_code::SourceCodeSlice::text::h88bb2d0c23d31a8a(
                        &var_348, arg2, arg3);
                    void* var_180 = rax_16;
                    int64_t var_178_1 = rdx_10;
                    var_270 = &var_290;
                    int64_t (* var_268_5)(int32_t* arg1, int64_t* arg2) = _$LT$ruff_text_size..range..TextRange$u20$as$u20$core..fmt..Debug$GT$::fmt::h158d96d5bbcff346;
                    char* var_260_2 = &var_3a8;
                    uint64_t (* var_258_1)(char* arg1, char* arg2) = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h389eabe580c54989;
                    char* var_250_2 = &var_39c;
                    uint64_t (* var_248_1)(char* arg1, char* arg2) = _$LT$core..option..Option$LT$T$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h389eabe580c54989;
                    char* var_240_1 = &var_30c;
                    uint64_t (* var_238_1)(int64_t arg1, int64_t* arg2) =
                        _$LT$$LP$U$C$T$RP$$u20$as$u20$core..fmt..Debug$GT$::fmt::he44bd3acbf841405;
                    void** var_230_1 = &var_180;
                    int64_t (* var_228_1)(int64_t* arg1, int64_t* arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h6869ac5a9771e689;
                    var_170 = &data_97c958;
                    int64_t var_168_1 = 6;
                    int128_t var_150;
                    var_150 = 0;
                    int128_t var_160;
                    var_160 = &var_270;
                    *var_160[8] = 5;
                    std::io::stdio::_print::h5e446ff973c02de6(&var_170);
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hce77df1b3a83ea41(&var_2f0, &var_50);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$ruff_python_formatter..comments..visitor..DecoratedComment$GT$$GT$::h6bdbc8652e164b37(&var_50);
                var_388 = *var_368[8] + 0x10;
                char* var_380_1 = arg2;
                var_378 = arg3;
                var_2f0 = &var_388;
                var_2e8 = _$LT$ruff_python_formatter..comments..debug..DebugComments$u20$as$u20$core..fmt..Debug$GT$::fmt::hea1feb88f05c5cc0;
                var_270 = &data_97c928;
                int64_t var_268_6 = 2;
                void* const var_250_3 = &data_48a670;
                int64_t var_248_2 = 1;
                var_260 = &var_2f0;
                int64_t var_258_2 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_270);
                result = result_1;
            }
            
            ruff_formatter::Formatted$LT$Context$GT$::create_printer::h166771db7bb4b0ee(&var_270, 
                &var_118);
            ruff_formatter::printer::Printer::print::h79a287b6ceef9323(&var_388, &var_270, 
                &var_118);
            anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h4325d0d9f3e5a643(&var_2f0, &var_388);
            int64_t* rax_20 = var_2f0;
            
            if (rax_20 != -0x8000000000000000)
            {
                int64_t var_2a0;
                int64_t var_120_1 = var_2a0;
                int128_t var_130_1 = var_2b0;
                int128_t var_140_1 = var_2c0;
                int128_t var_150_1 = var_2d0;
                var_170 = rax_20;
                uint64_t (* var_168_2)(void* arg1, int64_t* arg2) = var_2e8;
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
    return result;
}
