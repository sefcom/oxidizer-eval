
  int64_t bat::input::Input::open::h6e316d3a9e9c7871(int64_t* arg1, int128_t* arg2, int64_t* arg3)

{
    int128_t var_188;
    _$LT$bat..input..InputDescription$u20$as$u20$core..clone..Clone$GT$::clone::h2bf967feb17f9a1c(
        &var_188, arg2 + 0x28);
    int64_t rcx = *(arg2 + 0x88);
    int64_t rax = 0;
    
    if (rcx < -0x7ffffffffffffffe)
        rax = rcx - 0x7fffffffffffffff;
    
    int64_t var_358;
    int64_t var_348;
    int128_t var_328;
    int64_t var_318;
    int128_t var_308;
    int128_t var_258;
    int128_t var_178;
    int128_t var_168;
    int128_t var_158;
    int128_t var_148;
    int128_t var_138;
    int128_t var_128;
    int128_t var_f8;
    
    if (!rax)
    {
        uint64_t rdx_1 = *(arg2 + 0x98);
        int128_t var_3b8 = *(arg2 + 0x88);
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_328, *var_3b8[8], rdx_1);
        int64_t var_88_1 = var_318;
        int128_t var_98 = var_328;
        int128_t var_a8_1 = var_138;
        int128_t var_b8_1 = var_148;
        int128_t var_c8_1 = var_158;
        int128_t var_d8_1 = var_168;
        int128_t var_e8_1 = var_178;
        var_f8 = var_188;
        int64_t rax_6 = arg2[2];
        int128_t zmm1_3 = arg2[1];
        var_128 = *arg2;
        int32_t var_398;
        std::fs::File::open::h7ffb11963a679e5c(&var_398, &var_3b8);
        int64_t var_390;
        int32_t* var_378;
        int32_t rax_7;
        
        if (var_398 != 1)
        {
            int32_t var_394;
            rax_7 = var_394;
            label_839df7:
            int32_t var_3bc = rax_7;
            std::fs::File::metadata::h5e84e533705f8c98(&var_328, &var_3bc);
            
            if (var_328 == 2)
            {
                arg1[1] = 0;
                arg1[2] = *var_328[8];
                label_839f19:
                *arg1 = 2;
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h93f19009d5b0a33c(&var_3bc);
                goto label_839f32;
            }
            
            int32_t var_2f0;
            
            if ((0xf000 & var_2f0) == 0x4000)
            {
                uint64_t rdx_9 = alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(
                    &var_398, *var_3b8[8], rdx_1);
                var_378 = &var_398;
                int32_t var_370;
                var_370 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
                var_328 = &data_ace488;
                *var_328[8] = 2;
                var_308 = 0;
                int32_t** var_318_1 = &var_378;
                int64_t var_310_1 = 1;
                int128_t var_78;
                core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_78, 0, rdx_9, 
                    &var_328);
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_398);
                var_328 = var_78;
                int64_t var_68;
                var_318_1 = var_68;
                arg1[1] = 0xb;
                int64_t rax_13 = *var_328[0xf];
                *(arg1 + 9) = var_328;
                arg1[3] = rax_13;
                arg1[4] = var_318_1;
                goto label_839f19;
            }
            
            int32_t rsi_11 = var_3bc;
            
            if (arg3)
            {
                _$LT$clircle..Identifier$u20$as$u20$core..convert..TryFrom$LT$std..fs..File$GT$$GT$::try_from::hde08e680edb9c7a6(&var_328, rsi_11);
                char var_30b;
                int128_t var_278;
                
                if (var_30b == 2)
                {
                    int128_t var_48;
                    bat::input::Input::open::_$u7b$$u7b$closure$u7d$$u7d$::h1349f6b501774670(
                        &var_48, *var_3b8[8], rdx_1, var_328);
                    int128_t zmm0_9 = var_48;
                    var_278 = zmm0_9;
                    int64_t var_38;
                    int64_t var_268_1 = var_38;
                    var_328 = zmm0_9;
                    arg1[1] = 0xb;
                    int64_t rax_17 = *var_328[0xf];
                    *(arg1 + 9) = var_328;
                    arg1[3] = rax_17;
                    arg1[4] = var_38;
                    goto label_839d6b;
                }
                
                int128_t zmm1_6 = var_328;
                var_378 = var_328;
                var_278 = var_378;
                var_278 = zmm1_6;
                var_398 = var_278;
                *var_390[5] = var_278;
                char var_37b_1 = var_30b;
                int16_t var_30a;
                int16_t var_37a_1 = var_30a;
                
                if (_$LT$clircle..Identifier$u20$as$u20$clircle..Clircle$GT$::surely_conflicts_with::h0a207ad8ffb46518(arg3, &var_398))
                {
                    uint64_t rdx_12 = alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(
                        &var_378, *var_3b8[8], rdx_1);
                    var_278 = &var_378;
                    *var_278[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
                    var_328 = &data_ace4a8;
                    *var_328[8] = 2;
                    var_308 = 0;
                    int128_t* var_318_2 = &var_278;
                    int64_t var_310_2 = 1;
                    int128_t var_60;
                    core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_60, 0, 
                        rdx_12, &var_328);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_378);
                    var_328 = var_60;
                    int64_t var_50;
                    var_318_2 = var_50;
                    arg1[1] = 0xb;
                    int64_t rax_24 = *var_328[0xf];
                    *(arg1 + 9) = var_328;
                    arg1[3] = rax_24;
                    arg1[4] = var_318_2;
                    *arg1 = 2;
                    core::ptr::drop_in_place$LT$clircle..Identifier$GT$::hfe8a86c2d1c828b7(
                        &var_398);
                    goto label_839f32;
                }
                
                int128_t var_388;
                var_318 = var_388;
                var_328 = var_398;
                int32_t rax_25 = _$LT$clircle..Identifier$u20$as$u20$clircle..Clircle$GT$::into_inner::hd3a142f7f5c70aa5(&var_328);
                rsi_11 = rax_25;
                
                if (rax_25 == 0xffffffff)
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "The file was lost in the clircle…");
                    /* no return */
                }
                
                var_3bc = rsi_11;
            }
            
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h0c9f8bb4b577e666(
                &var_328, rsi_11);
            bat::input::InputReader::new::h52a8b92a3b95fe8a(&var_358, &var_328);
            int128_t var_1a0_3 = var_98;
            int64_t var_190_3 = var_88_1;
            var_258 = var_128;
            int128_t var_248_2 = zmm1_3;
            int64_t var_238_2 = rax_6;
            int128_t var_230_2 = var_358;
            int128_t var_220_2 = var_348;
            int128_t var_338;
            int128_t var_210_2 = var_338;
            int128_t var_1b0_2 = var_138;
            int128_t var_1c0_2 = var_148;
            int128_t var_1d0_2 = var_158;
            int128_t var_1e0_2 = var_168;
            int128_t var_1f0_2 = var_178;
            int128_t var_200_2 = var_188;
            memcpy(arg1, &var_258, 0xd0);
        }
        else
        {
            bat::input::Input::open::_$u7b$$u7b$closure$u7d$$u7d$::h9e13a14226488cd3(&var_328, 
                *var_3b8[8], rdx_1, var_390);
            int64_t rcx_3 = var_328;
            rax_7 = *var_328[8];
            var_378 = *var_328[0xc];
            
            if (rcx_3 == -0x8000000000000000)
                goto label_839df7;
            
            *(arg1 + 0x24) = *var_318[4];
            *(arg1 + 0x1c) = var_378;
            arg1[1] = 0xb;
            arg1[2] = rcx_3;
            arg1[3] = rax_7;
            label_839d6b:
            *arg1 = 2;
            label_839f32:
            core::ptr::drop_in_place$LT$bat..input..InputMetadata$GT$::hc9ed19c96d512b6e(&var_128);
            core::ptr::drop_in_place$LT$bat..input..InputDescription$GT$::h1ed6eb0597a87339(
                &var_f8);
            core::ptr::drop_in_place$LT$bat..input..OpenedInputKind$GT$::h1faa2373f3134445(&var_98);
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_3b8);
    }
    else
    {
        int128_t var_e8_2;
        int64_t var_d8;
        
        if (rax != 1)
        {
            int64_t rsi_6 = arg2[9];
            int64_t rdx_7 = *(arg2 + 0x98);
            var_358 = -0x7fffffffffffffff;
            var_d8 = arg2[2];
            var_e8_2 = arg2[1];
            var_f8 = *arg2;
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfafa6fcdb77f5aa4(
                &var_258, rsi_6, rdx_7);
            bat::input::InputReader::new::h407450f3d585c368(&var_328, &var_258);
            int128_t var_1a0_1 = var_358;
            int64_t var_190_1 = var_348;
            label_83a18b:
            var_258 = var_f8;
            int128_t var_248_1 = var_e8_2;
            int64_t var_238_1 = var_d8;
            int128_t var_230_1 = var_328;
            int128_t var_220_1 = var_318;
            int128_t var_210_1 = var_308;
            int128_t var_1b0_1 = var_138;
            int128_t var_1c0_1 = var_148;
            int128_t var_1d0_1 = var_158;
            int128_t var_1e0_1 = var_168;
            int128_t var_1f0_1 = var_178;
            int128_t var_200_1 = var_188;
            memcpy(arg1, &var_258, 0xd0);
        }
        else
        {
            if (!arg3)
                goto label_83a127;
            
            uint64_t rdx = _$LT$clircle..Identifier$u20$as$u20$core..convert..TryFrom$LT$clircle..Stdio$GT$$GT$::try_from::hc9f06146079242fd(&var_258, 0);
            int128_t var_248;
            char rax_1 = *var_248[0xd];
            
            if (rax_1 != 2)
            {
                int128_t zmm0_2 = var_258;
                var_f8 = var_258;
                var_f8 = zmm0_2;
                var_358 = var_f8;
                int128_t var_34b_1 = var_f8;
                var_328 = var_358;
                var_328 = var_34b_1;
                char var_30b_1 = rax_1;
                int16_t var_30a_1 = *var_248[0xe];
                
                if (!_$LT$clircle..Identifier$u20$as$u20$clircle..Clircle$GT$::surely_conflicts_with::h0a207ad8ffb46518(arg3, &var_328))
                {
                    core::ptr::drop_in_place$LT$clircle..Identifier$GT$::hfe8a86c2d1c828b7(
                        &var_328);
                    label_83a127:
                    var_358 = -0x8000000000000000;
                    var_d8 = arg2[2];
                    var_e8_2 = arg2[1];
                    var_f8 = *arg2;
                    bat::input::InputReader::new::ha479cc65338d2694(&var_328);
                    int64_t var_190_2 = var_348;
                    int128_t var_1a0_2 = var_358;
                    goto label_83a18b;
                }
                
                _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_258, "IO circle detected. The input fr…", 0x5c);
                int128_t var_220;
                *(arg1 + 0x48) = var_220;
                int128_t zmm0_7 = var_258;
                int128_t var_230;
                *(arg1 + 0x38) = var_230;
                int64_t var_238;
                *(arg1 + 0x28) = var_238;
                *(arg1 + 0x18) = var_248;
                *(arg1 + 8) = zmm0_7;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$clircle..Identifier$GT$::hfe8a86c2d1c828b7(&var_328);
                core::ptr::drop_in_place$LT$bat..input..InputDescription$GT$::h1ed6eb0597a87339(
                    &var_188);
                core::ptr::drop_in_place$LT$bat..input..InputMetadata$GT$::hc9ed19c96d512b6e(arg2);
            }
            else
            {
                bat::input::Input::open::_$u7b$$u7b$closure$u7d$$u7d$::h64201e3b47e3d726(&var_128, 
                    var_258, rdx);
                int128_t zmm0_3 = var_128;
                var_358 = zmm0_3;
                int64_t var_118;
                int64_t var_348_1 = var_118;
                *var_248[7] = var_118;
                var_258 = zmm0_3;
                arg1[1] = 0xb;
                int64_t rax_3 = *var_258[0xf];
                *(arg1 + 9) = var_258;
                arg1[3] = rax_3;
                arg1[4] = *var_248[7];
                *arg1 = 2;
                core::ptr::drop_in_place$LT$bat..input..InputDescription$GT$::h1ed6eb0597a87339(
                    &var_188);
                core::ptr::drop_in_place$LT$bat..input..InputMetadata$GT$::hc9ed19c96d512b6e(arg2);
            }
        }
    }
    return core::ptr::drop_in_place$LT$bat..input..InputDescription$GT$::h1ed6eb0597a87339(arg2
        + 0x28);
}
