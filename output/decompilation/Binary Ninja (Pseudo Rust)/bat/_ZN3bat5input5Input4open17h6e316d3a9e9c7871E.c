
  fn bat::input::Input::open::h6e316d3a9e9c7871(arg1: *mut i64, arg2: *mut i128, arg3: *mut i64) -> i64

{
    let mut var_188: i128;
    _$LT$bat..input..InputDescription$u20$as$u20$core..clone..Clone$GT$::clone::h2bf967feb17f9a1c(
        &var_188, arg2.byte_offset(0x28));
    let rcx: i64 = *arg2.byte_offset(0x88);
    let mut rax: i64 = 0;
    
    if rcx < -0x7ffffffffffffffe
    {
        rax = rcx - 0x7fffffffffffffff;
    }
    
    let mut var_358: i64;
    let var_348: i64;
    let mut var_328: i128;
    let mut var_318: i64;
    let mut var_308: i128;
    let mut var_258: i128;
    let var_178: i128;
    let var_168: i128;
    let var_158: i128;
    let var_148: i128;
    let var_138: i128;
    let mut var_128: i128;
    let mut var_f8: i128;
    
    if rax == 0
    {
        let rdx_1: u64 = *arg2.byte_offset(0x98);
        let mut var_3b8: i128 = *arg2.byte_offset(0x88);
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_328, *var_3b8[8], rdx_1);
        let var_88_1: i64 = var_318;
        let mut var_98: i128 = var_328;
        let var_a8_1: i128 = var_138;
        let var_b8_1: i128 = var_148;
        let var_c8_1: i128 = var_158;
        let var_d8_1: i128 = var_168;
        let var_e8_1: i128 = var_178;
        var_f8 = var_188;
        let rax_6: i64 = arg2[2];
        let zmm1_3: i128 = arg2[1];
        var_128 = *arg2;
        let mut var_398: i32;
        std::fs::File::open::h7ffb11963a679e5c(&var_398, &var_3b8);
        let mut var_390: i64;
        let mut var_378: *mut i32;
        let mut rax_7: i32;
        
        if var_398 != 1
        {
            let var_394: i32;
            rax_7 = var_394;
            'label_839df7:
            let mut var_3bc: i32 = rax_7;
            std::fs::File::metadata::h5e84e533705f8c98(&var_328, &var_3bc);
            
            if var_328 == 2
            {
                arg1[1] = 0;
                arg1[2] = *var_328[8];
                'label_839f19:
                *arg1 = 2;
                core::ptr::drop_in_place$LT$std..fs..File$GT$::h93f19009d5b0a33c(&var_3bc);
                goto 'label_839f32;
            }
            
            let var_2f0: i32;
            
            if (0xf000 & var_2f0) == 0x4000
            {
                let rdx_9: u64 = alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(
                    &var_398, *var_3b8[8], rdx_1);
                var_378 = &var_398;
                let mut var_370: i32;
                var_370 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
                var_328 = &data_ace488;
                *var_328[8] = 2;
                var_308 = 0;
                let mut var_318_1: *mut *mut i32 = &var_378;
                let var_310_1: i64 = 1;
                let mut var_78: i128;
                core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_78, 0, rdx_9, 
                    &var_328);
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_398);
                var_328 = var_78;
                let var_68: i64;
                var_318_1 = var_68;
                arg1[1] = 0xb;
                let rax_13: i64 = *var_328[0xf];
                *arg1.byte_offset(9) = var_328;
                arg1[3] = rax_13;
                arg1[4] = var_318_1;
                goto 'label_839f19;
            }
            
            let mut rsi_11: i32 = var_3bc;
            
            if arg3 != 0
            {
                _$LT$clircle..Identifier$u20$as$u20$core..convert..TryFrom$LT$std..fs..File$GT$$GT$::try_from::hde08e680edb9c7a6(&var_328, rsi_11);
                let var_30b: i8;
                let mut var_278: i128;
                
                if var_30b == 2
                {
                    let mut var_48: i128;
                    bat::input::Input::open::_$u7b$$u7b$closure$u7d$$u7d$::h1349f6b501774670(
                        &var_48, *var_3b8[8], rdx_1, var_328);
                    let zmm0_9: i128 = var_48;
                    var_278 = zmm0_9;
                    let var_38: i64;
                    let var_268_1: i64 = var_38;
                    var_328 = zmm0_9;
                    arg1[1] = 0xb;
                    let rax_17: i64 = *var_328[0xf];
                    *arg1.byte_offset(9) = var_328;
                    arg1[3] = rax_17;
                    arg1[4] = var_38;
                    goto 'label_839d6b;
                }
                
                let zmm1_6: i128 = var_328;
                var_378 = var_328;
                var_278 = var_378;
                var_278 = zmm1_6;
                var_398 = var_278;
                *var_390[5] = var_278;
                let var_37b_1: i8 = var_30b;
                let var_30a: i16;
                let var_37a_1: i16 = var_30a;
                
                if _$LT$clircle..Identifier$u20$as$u20$clircle..Clircle$GT$::surely_conflicts_with::h0a207ad8ffb46518(arg3, &var_398) != 0
                {
                    let rdx_12: u64 = alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(
                        &var_378, *var_3b8[8], rdx_1);
                    var_278 = &var_378;
                    *var_278[8] = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
                    var_328 = &data_ace4a8;
                    *var_328[8] = 2;
                    var_308 = 0;
                    let mut var_318_2: *mut i128 = &var_278;
                    let var_310_2: i64 = 1;
                    let mut var_60: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_60, 0, 
                        rdx_12, &var_328);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_378);
                    var_328 = var_60;
                    let var_50: i64;
                    var_318_2 = var_50;
                    arg1[1] = 0xb;
                    let rax_24: i64 = *var_328[0xf];
                    *arg1.byte_offset(9) = var_328;
                    arg1[3] = rax_24;
                    arg1[4] = var_318_2;
                    *arg1 = 2;
                    core::ptr::drop_in_place$LT$clircle..Identifier$GT$::hfe8a86c2d1c828b7(
                        &var_398);
                    goto 'label_839f32;
                }
                
                let var_388: i128;
                var_318 = var_388;
                var_328 = var_398;
                let rax_25: i32 = _$LT$clircle..Identifier$u20$as$u20$clircle..Clircle$GT$::into_inner::hd3a142f7f5c70aa5(&var_328);
                rsi_11 = rax_25;
                
                if rax_25 == 0xffffffff
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
            let var_1a0_3: i128 = var_98;
            let var_190_3: i64 = var_88_1;
            var_258 = var_128;
            let var_248_2: i128 = zmm1_3;
            let var_238_2: i64 = rax_6;
            let var_230_2: i128 = var_358;
            let var_220_2: i128 = var_348;
            let var_338: i128;
            let var_210_2: i128 = var_338;
            let var_1b0_2: i128 = var_138;
            let var_1c0_2: i128 = var_148;
            let var_1d0_2: i128 = var_158;
            let var_1e0_2: i128 = var_168;
            let var_1f0_2: i128 = var_178;
            let var_200_2: i128 = var_188;
            memcpy(arg1, &var_258, 0xd0);
        }
        else
        {
            bat::input::Input::open::_$u7b$$u7b$closure$u7d$$u7d$::h9e13a14226488cd3(&var_328, 
                *var_3b8[8], rdx_1, var_390);
            let rcx_3: i64 = var_328;
            rax_7 = *var_328[8];
            var_378 = *var_328[0xc];
            
            if rcx_3 == -0x8000000000000000
            {
                goto 'label_839df7;
            }
            
            *arg1.byte_offset(0x24) = *var_318[4];
            *arg1.byte_offset(0x1c) = var_378;
            arg1[1] = 0xb;
            arg1[2] = rcx_3;
            arg1[3] = rax_7;
            'label_839d6b:
            *arg1 = 2;
            'label_839f32:
            core::ptr::drop_in_place$LT$bat..input..InputMetadata$GT$::hc9ed19c96d512b6e(&var_128);
            core::ptr::drop_in_place$LT$bat..input..InputDescription$GT$::h1ed6eb0597a87339(
                &var_f8);
            core::ptr::drop_in_place$LT$bat..input..OpenedInputKind$GT$::h1faa2373f3134445(&var_98);
        }
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_3b8);
    }
    else
    {
        let mut var_e8_2: i128;
        let mut var_d8: i64;
        
        if rax != 1
        {
            let rsi_6: i64 = arg2[9];
            let rdx_7: i64 = *arg2.byte_offset(0x98);
            var_358 = -0x7fffffffffffffff;
            var_d8 = arg2[2];
            var_e8_2 = arg2[1];
            var_f8 = *arg2;
            std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::hfafa6fcdb77f5aa4(
                &var_258, rsi_6, rdx_7);
            bat::input::InputReader::new::h407450f3d585c368(&var_328, &var_258);
            let var_1a0_1: i128 = var_358;
            let var_190_1: i64 = var_348;
            'label_83a18b:
            var_258 = var_f8;
            let var_248_1: i128 = var_e8_2;
            let var_238_1: i64 = var_d8;
            let var_230_1: i128 = var_328;
            let var_220_1: i128 = var_318;
            let var_210_1: i128 = var_308;
            let var_1b0_1: i128 = var_138;
            let var_1c0_1: i128 = var_148;
            let var_1d0_1: i128 = var_158;
            let var_1e0_1: i128 = var_168;
            let var_1f0_1: i128 = var_178;
            let var_200_1: i128 = var_188;
            memcpy(arg1, &var_258, 0xd0);
        }
        else
        {
            if arg3 == 0
            {
                goto 'label_83a127;
            }
            
            let rdx: u64 = _$LT$clircle..Identifier$u20$as$u20$core..convert..TryFrom$LT$clircle..Stdio$GT$$GT$::try_from::hc9f06146079242fd(&var_258, 0);
            let mut var_248: i128;
            let rax_1: i8 = *var_248[0xd];
            
            if rax_1 != 2
            {
                let zmm0_2: i128 = var_258;
                var_f8 = var_258;
                var_f8 = zmm0_2;
                var_358 = var_f8;
                let var_34b_1: i128 = var_f8;
                var_328 = var_358;
                var_328 = var_34b_1;
                let var_30b_1: i8 = rax_1;
                let var_30a_1: i16 = *var_248[0xe];
                
                if _$LT$clircle..Identifier$u20$as$u20$clircle..Clircle$GT$::surely_conflicts_with::h0a207ad8ffb46518(arg3, &var_328) == 0
                {
                    core::ptr::drop_in_place$LT$clircle..Identifier$GT$::hfe8a86c2d1c828b7(
                        &var_328);
                    'label_83a127:
                    var_358 = -0x8000000000000000;
                    var_d8 = arg2[2];
                    var_e8_2 = arg2[1];
                    var_f8 = *arg2;
                    bat::input::InputReader::new::ha479cc65338d2694(&var_328);
                    let var_190_2: i64 = var_348;
                    let var_1a0_2: i128 = var_358;
                    goto 'label_83a18b;
                }
                
                _$LT$bat..error..Error$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h8ad35b8946c9894b(&var_258, "IO circle detected. The input fr…", 0x5c);
                let var_220: i128;
                *arg1.byte_offset(0x48) = var_220;
                let zmm0_7: i128 = var_258;
                let var_230: i128;
                *arg1.byte_offset(0x38) = var_230;
                let var_238: i64;
                *arg1.byte_offset(0x28) = var_238;
                *arg1.byte_offset(0x18) = var_248;
                *arg1.byte_offset(8) = zmm0_7;
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
                let zmm0_3: i128 = var_128;
                var_358 = zmm0_3;
                let var_118: i64;
                let var_348_1: i64 = var_118;
                *var_248[7] = var_118;
                var_258 = zmm0_3;
                arg1[1] = 0xb;
                let rax_3: i64 = *var_258[0xf];
                *arg1.byte_offset(9) = var_258;
                arg1[3] = rax_3;
                arg1[4] = *var_248[7];
                *arg1 = 2;
                core::ptr::drop_in_place$LT$bat..input..InputDescription$GT$::h1ed6eb0597a87339(
                    &var_188);
                core::ptr::drop_in_place$LT$bat..input..InputMetadata$GT$::hc9ed19c96d512b6e(arg2);
            }
        }
    }
    core::ptr::drop_in_place$LT$bat..input..InputDescription$GT$::h1ed6eb0597a87339(arg2.
        byte_offset(0x28))
}
