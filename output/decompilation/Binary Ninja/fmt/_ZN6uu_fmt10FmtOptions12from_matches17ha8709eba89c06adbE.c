
  int128_t* uu_fmt::FmtOptions::from_matches::ha8709eba89c06adb(int128_t* arg1, void* arg2)

{
    char rax = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        arg2, "tagged-paragraph[short aliases: …", 0x10);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "crown-marginuniform-spacingquick…", 0xc);
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "preserve-headersDOUBLE_UNDERLINE…", 0x10);
    char rax_3 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "uniform-spacingquicksplit-onlyex…", 0xf);
    char rax_4 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "quicksplit-onlyexact-prefix-read…", 5);
    char rax_5 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, 
        "split-onlyexact-prefix-read erro…", 0xa);
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "exact-prefix-read error\nfileswi…", 0xc);
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(
        arg2, "skip-prefixinvalid goal: GOAL ca…", 0xb);
    int128_t var_138;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(
        &var_138, arg2, "prefixskip-prefixinvalid goal: G…", 6);
    void* rax_8 = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
        "prefixskip-prefixinvalid goal: G…", 6, &var_138);
    int64_t var_b0;
    
    if (!rax_8)
        var_b0 = -0x8000000000000000;
    else
        core::ops::function::FnOnce::call_once::hc073dae0b047a59b(&var_b0, rax_8);
    
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(
        &var_138, arg2, "skip-prefixinvalid goal: GOAL ca…", 0xb);
    void* rax_9 = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
        "skip-prefixinvalid goal: GOAL ca…", 0xb, &var_138);
    int64_t var_128;
    int64_t var_c8;
    int64_t var_b8;
    
    if (!rax_9)
        var_c8 = -0x8000000000000000;
    else
    {
        core::ops::function::FnOnce::call_once::hc073dae0b047a59b(&var_138, rax_9);
        var_b8 = var_128;
        var_c8 = var_138;
    }
    
    uu_fmt::extract_width::h607b918514420837(&var_138, arg2);
    int64_t r14 = *var_138[8];
    int64_t r13 = var_128;
    
    if (!var_138)
    {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(
            &var_138, arg2, &data_414924[4], 4);
        void* rax_11 = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
            &data_414924[4], 4, &var_138);
        int64_t var_120;
        int64_t* var_100;
        char var_e0;
        int64_t var_d8;
        int64_t* var_98;
        int128_t* rax_13;
        int64_t rbp_2;
        
        if (rax_11)
        {
            char* r12_1 = *(rax_11 + 8);
            int64_t rbp_1 = *(rax_11 + 0x10);
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_e0, r12_1, rbp_1);
            
            if (var_e0)
            {
                var_100 = nullptr;
                char* var_f8_1 = r12_1;
                int64_t var_f0_1 = rbp_1;
                char var_e8_1 = 1;
                var_98 = &var_100;
                int64_t (* var_90_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_138 = &data_526378;
                *var_138[8] = 1;
                int64_t var_118_1 = 0;
                int64_t** var_128_1 = &var_98;
                int64_t var_120_1 = 1;
                int128_t var_78;
                core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23(&var_78, &var_138);
                var_120_1 = 1;
                var_138 = var_78;
                int64_t var_68;
                int64_t var_128_2 = var_68;
                rax_13 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_138);
                label_4b51d6:
                *(arg1 + 8) = rax_13;
                arg1[1] = &data_526400;
                goto label_4b51ef;
            }
            
            rbp_2 = var_d8;
            int64_t var_f0;
            
            if (r14)
            {
                if (rbp_2 <= r13)
                    goto label_4b5013;
                
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5bbd8c4ce611c1c9(
                    &var_100, "GOAL cannot be greater than WIDT…", 0x22);
                int64_t var_128_3 = var_f0;
                var_138 = var_100;
                var_120 = 1;
                rax_13 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_138);
                goto label_4b51d6;
            }
            
            if (rbp_2 <= 0x4b)
            {
                int16_t rax_20 = rbp_2 * 0x64;
                uint32_t rcx_3 = (rax_20 * 0x6059) >> 0x10;
                r13 = core::cmp::max_by::h34a806462d46b061((((rax_20 - rcx_3) >> 1) + rcx_3) >> 6, 
                    rbp_2 + 3);
                goto label_4b5013;
            }
            
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h5bbd8c4ce611c1c9(
                &var_100, "GOAL cannot be greater than WIDT…", 0x22);
            int64_t var_128_4 = var_f0;
            var_138 = var_100;
            var_120 = 1;
            rax_13 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_138);
            goto label_4b51d6;
        }
        
        int64_t var_d0;
        
        if (r14)
        {
            int64_t rsi_8;
            rsi_8 = r13;
            rbp_2 = core::cmp::max_by::h34a806462d46b061(r13 * 0x5d / 0x64, rsi_8);
            label_4b5013:
            var_d0 = r13;
            
            if (r13 <= 0x9c4)
                goto label_4b50c3;
            
            var_100 = &var_d0;
            uint64_t (* var_f8_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_138 = &data_526388;
            *var_138[8] = 2;
            int64_t var_118_2 = 0;
            int64_t** var_128_5 = &var_100;
            int64_t var_120_2 = 1;
            int128_t var_60;
            core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23(&var_60, &var_138);
            var_120_2 = 1;
            var_138 = var_60;
            int64_t var_50;
            int64_t var_128_6 = var_50;
            rax_13 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_138);
            goto label_4b51d6;
        }
        
        var_d0 = 0x4b;
        rbp_2 = 0x46;
        r13 = 0x4b;
        label_4b50c3:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5d676eefe7e492ec(
            &var_138, arg2, "tab-width: crown-marginuniform-s…", 9);
        void* rax_24 = clap_builder::parser::error::MatchesError::unwrap::h98df6b0c915d5d1b(
            "tab-width: crown-marginuniform-s…", 9, &var_138);
        int64_t rax_28;
        
        if (rax_24)
        {
            char* r15_1 = *(rax_24 + 8);
            int64_t r12_2 = *(rax_24 + 0x10);
            core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::h35e67cae0c0452a5(&var_e0, r15_1, r12_2);
            
            if (!var_e0)
            {
                rax_28 = var_d8;
                goto label_4b5266;
            }
            
            char var_df;
            char var_139 = var_df;
            var_100 = nullptr;
            char* var_f8_3 = r15_1;
            int64_t var_f0_2 = r12_2;
            char var_e8_2 = 1;
            var_98 = &var_100;
            int64_t (* var_90_2)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            char* var_88_1 = &var_139;
            int64_t (* var_80_1)(char* arg1, int64_t* arg2) = _$LT$core..num..error..ParseIntError$u20$as$u20$core..fmt..Display$GT$::fmt::h98d79d8d19892e5a;
            var_138 = &data_5263a8;
            *var_138[8] = 2;
            int64_t var_118_3 = 0;
            int64_t** var_128_7 = &var_98;
            int64_t var_120_3 = 2;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::h57a000129381aa23(&var_48, &var_138);
            var_120_3 = 1;
            var_138 = var_48;
            int64_t var_38;
            int64_t var_128_8 = var_38;
            rax_13 = alloc::boxed::Box$LT$T$GT$::new::had2f12c6fe048da6(&var_138);
            goto label_4b51d6;
        }
        
        rax_28 = 8;
        label_4b5266:
        int128_t zmm0_6 = var_b0;
        var_138 = zmm0_6;
        var_120 = var_c8;
        int32_t temp0_1[0x4] = _mm_insert_epi16(
            rax_5 << 0x18 | rax_2 << 0x10 | (rax & ((rax_1 | rax_5) ^ 1)) << 8
                | ((rax_5 ^ 1) & rax_1), 
            rax_7 << 8 | rax_6, 2);
        int64_t var_110_1 = var_b8;
        int32_t temp0_2[0x4] = _mm_insert_epi16(temp0_1, rax_4 << 8 | rax_3, 3);
        *arg1 = zmm0_6;
        int64_t var_118;
        arg1[2] = var_118;
        int64_t var_a0;
        arg1[1] = var_a0;
        arg1[3] = r13;
        *(arg1 + 0x38) = rbp_2;
        arg1[4] = rax_28 + 0;
        *(arg1 + 0x48) = temp0_2[0];
    }
    else
    {
        *(arg1 + 8) = r14;
        arg1[1] = r13;
        label_4b51ef:
        *arg1 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd911d0772c4acc23(&var_c8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hd911d0772c4acc23(&var_b0);
    }
    
    return arg1;
}
