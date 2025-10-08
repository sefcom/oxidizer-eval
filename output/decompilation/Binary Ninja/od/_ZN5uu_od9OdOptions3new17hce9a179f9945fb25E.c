
  int64_t* uu_od::OdOptions::new::hce9a179f9945fb25(int64_t* arg1, void* arg2, void* arg3, int64_t arg4)

{
    void* const var_178;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7233f263f5cb49be(
        &var_178, arg2, "endiansrc/uu/od/src/od.rs(uutils…", 6);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h761c39e3b3126053(
        "endiansrc/uu/od/src/od.rs(uutils…", 6, &var_178);
    void** var_148;
    int32_t var_f8;
    uint64_t rax_7;
    char rcx;
    
    if (!rax)
    {
        rcx = 2;
        label_46b9ec:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7233f263f5cb49be(
            &var_178, arg2, "skip-bytesformatoutput-duplicate…", 0xa);
        void* rax_3 = clap_builder::parser::error::MatchesError::unwrap::h761c39e3b3126053(
            "skip-bytesformatoutput-duplicate…", 0xa, &var_178);
        int64_t var_160;
        int64_t var_108_1;
        
        if (!rax_3)
        {
            var_108_1 = 0;
            label_46ba4a:
            uu_od::parse_inputs::parse_inputs::h1f9db538cc1aaf10(&var_178, arg2);
            int64_t var_168;
            int64_t var_158;
            
            if (var_158 == 3)
            {
                int64_t var_138_1 = var_168;
                var_148 = var_178;
                rax_7 = uu_od::OdOptions::new::_$u7b$$u7b$closure$u7d$$u7d$::h52d973516a822029(
                    &var_148);
                goto label_46bbdc;
            }
            
            var_f8 = var_178;
            int64_t var_d8_1 = var_158;
            int64_t var_150;
            int64_t var_d0_1 = var_150;
            int128_t var_c8;
            int64_t var_b8_1;
            int64_t var_b0_1;
            
            if (var_158 != 2)
            {
                int32_t var_e0;
                var_108_1 = var_e0;
                uint64_t rax_12 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
                
                if (!rax_12)
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                int128_t zmm0_3 = var_f8;
                *(rax_12 + 0x10) = var_168;
                *rax_12 = zmm0_3;
                var_c8 = 1;
                *var_c8[8] = rax_12;
                var_b8_1 = 1;
                var_b0_1 = var_158;
            }
            else
            {
                var_b8_1 = var_168;
                var_c8 = var_f8;
                var_b0_1 = 0;
            }
            
            uu_od::parse_formats::parse_format_flags::h00045988d9e2fcd1(&var_148, arg3, arg4);
            uint64_t (* var_140)(int64_t* arg1, int64_t* arg2);
            void** var_130;
            uint64_t r14_1;
            void** const r15_1;
            
            if (var_148 != 1)
            {
                uint64_t var_138;
                r14_1 = var_138;
                r15_1 = var_130;
                uint64_t (* var_118_1)(int64_t* arg1, int64_t* arg2) = var_140;
                
                if (-(var_140) == -0x8000000000000000)
                    goto label_46bcc4;
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7233f263f5cb49be(&var_178, arg2, "widthsrc/uu/od/src/parse_inputs.…", 5);
                void* rax_18 = clap_builder::parser::error::MatchesError::unwrap::h761c39e3b3126053(
                    "widthsrc/uu/od/src/parse_inputs.…", 5, &var_178);
                char rax_19;
                
                if (rax_18)
                    rax_19 = clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(arg2, "widthsrc/uu/od/src/parse_inputs.…", 5);
                
                uint64_t (* var_120)(int64_t* arg1, int64_t* arg2);
                uint64_t rax_41;
                uint64_t (* rbp_3)(int64_t* arg1, int64_t* arg2);
                
                if (!rax_18 || rax_19 != 2)
                {
                    var_120 = 0x10;
                    rbp_3 = 0x10;
                    label_46bd83:
                    uint64_t (* rax_21)(int64_t* arg1, int64_t* arg2) = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h425d9cf3ffc07b0c(r14_1, 
                        r14_1 + r15_1 * 0x28);
                    uint64_t (* var_a8)(int64_t* arg1, int64_t* arg2) = rax_21;
                    
                    if (!rbp_3)
                    {
                        label_46bdce:
                        void** rax_29;
                        int64_t rdx_10;
                        rax_29 = uucore::util_name::h074417a1e6395129();
                        var_148 = rax_29;
                        int64_t var_140_2 = rdx_10;
                        void*** var_88 = &var_148;
                        int64_t (* var_80_1)(int64_t* arg1, int64_t arg2) =
                            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
                        var_178 = &data_503920;
                        int64_t var_170_2 = 2;
                        int64_t var_158_2 = 0;
                        void**** var_168_4 = &var_88;
                        int64_t var_160_2 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_178);
                        var_148 = &var_120;
                        var_140 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                        var_138 = &var_a8;
                        uint64_t (* var_130_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                        var_178 = &data_503940;
                        int64_t var_170_3 = 3;
                        int64_t var_158_3 = 0;
                        void*** var_168_5 = &var_148;
                        var_160 = 2;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_178);
                        var_120 = var_a8;
                    }
                    else
                    {
                        if (!rax_21)
                        {
                            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                            /* no return */
                        }
                        
                        if (!((rax_21 | rbp_3) >> 0x20))
                        {
                            if (COMBINE(0, rbp_3) % rax_21)
                                goto label_46bdce;
                        }
                        else if (COMBINE(0, rbp_3) % rax_21)
                            goto label_46bdce;
                    }
                    
                    char rax_31 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "output-duplicateswidthsrc/uu/od/…", 0x11);
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7233f263f5cb49be(&var_178, arg2, "read-bytesskip-bytesformatoutput…", 0xa);
                    void* rax_32 =
                        clap_builder::parser::error::MatchesError::unwrap::h761c39e3b3126053(
                        "read-bytesskip-bytesformatoutput…", 0xa, &var_178);
                    uint64_t (* var_a0)(int64_t* arg1, int64_t* arg2);
                    int64_t r13_4;
                    
                    if (rax_32)
                    {
                        uu_od::parse_nrofbytes::parse_number_of_bytes::hb463a51f26f3deb1(&var_148, 
                            *(rax_32 + 8), *(rax_32 + 0x10));
                        
                        if (var_148 == 4)
                        {
                            var_a0 = var_140;
                            r13_4 = 1;
                            goto label_46bf2b;
                        }
                        
                        int128_t var_48;
                        uu_od::format_error_message::hfbba610ed066f99b(&var_48, var_148, 
                            *(rax_32 + 8), *(rax_32 + 0x10), "read-bytesskip-bytesformatoutput…");
                        var_160 = 1;
                        var_178 = var_48;
                        int64_t var_38;
                        int64_t var_168_6 = var_38;
                        rax_41 = alloc::boxed::Box$LT$T$GT$::new::hab9f4786d95358b9(&var_178);
                        goto label_46c026;
                    }
                    
                    r13_4 = 0;
                    label_46bf2b:
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7233f263f5cb49be(&var_178, arg2, "address-radixread-bytesskip-byte…", 0xd);
                    void* rax_34 =
                        clap_builder::parser::error::MatchesError::unwrap::h761c39e3b3126053(
                        "address-radixread-bytesskip-byte…", 0xd, &var_178);
                    char rcx_6 = 2;
                    
                    if (!rax_34)
                        goto label_46c097;
                    
                    uint64_t rax_44;
                    
                    if (!*(rax_34 + 0x10))
                    {
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&var_148, "Radix cannot be empty, and must …", 0x36);
                        uint64_t var_168_8 = var_138;
                        var_178 = var_148;
                        var_160 = 1;
                        rax_44 = alloc::boxed::Box$LT$T$GT$::new::hab9f4786d95358b9(&var_178);
                        label_46c13d:
                        arg1[1] = rax_44;
                        arg1[2] = &data_503990;
                        *arg1 = 2;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h911b774f5eb298b9(var_118_1, r14_1);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h159fa5a16718cf97(&var_c8);
                    }
                    else
                    {
                        uint64_t rax_37 = **(rax_34 + 8) - 0x64;
                        
                        if (rax_37 > 0x14)
                        {
                            label_46c115:
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h96e753ece9c12536(&var_148, "Radix must be one of [o, d, x, n…", 0x21);
                            uint64_t var_168_9 = var_138;
                            var_178 = var_148;
                            var_160 = 1;
                            rax_44 = alloc::boxed::Box$LT$T$GT$::new::hab9f4786d95358b9(&var_178);
                            goto label_46c13d;
                        }
                        
                        switch (rax_37)
                        {
                            case 0:
                            {
                                rcx_6 = 0;
                                label_46c097:
                                arg1[6] = var_b8_1;
                                *(arg1 + 0x20) = var_c8;
                                uint64_t (* rax_46)(int64_t* arg1, int64_t* arg2) = var_120;
                                *arg1 = r13_4;
                                arg1[1] = var_a0;
                                arg1[2] = var_b0_1;
                                arg1[3] = var_150;
                                arg1[7] = var_118_1;
                                arg1[8] = r14_1;
                                arg1[9] = r15_1;
                                arg1[0xa] = var_108_1;
                                arg1[0xb] = rax_46;
                                arg1[0xc] = rax_31;
                                *(arg1 + 0x61) = rcx;
                                *(arg1 + 0x62) = rcx_6;
                                break;
                            }
                            case 1:
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 9:
                            case 0xc:
                            case 0xd:
                            case 0xe:
                            case 0xf:
                            case 0x10:
                            case 0x11:
                            case 0x12:
                            case 0x13:
                            {
                                goto label_46c115;
                            }
                            case 0xa:
                            {
                                rcx_6 = 3;
                                goto label_46c097;
                            }
                            case 0xb:
                            {
                                goto label_46c097;
                            }
                            case 0x14:
                            {
                                rcx_6 = 1;
                                goto label_46c097;
                            }
                        }
                    }
                }
                else
                {
                    uu_od::parse_nrofbytes::parse_number_of_bytes::hb463a51f26f3deb1(&var_148, 
                        *(rax_18 + 8), *(rax_18 + 0x10));
                    
                    if (var_148 == 4)
                    {
                        rbp_3 = var_140;
                        var_120 = rbp_3;
                        goto label_46bd83;
                    }
                    
                    int128_t var_60;
                    uu_od::format_error_message::hfbba610ed066f99b(&var_60, var_148, *(rax_18 + 8), 
                        *(rax_18 + 0x10), "widthsrc/uu/od/src/parse_inputs.…");
                    var_160 = 1;
                    var_178 = var_60;
                    int64_t var_50;
                    int64_t var_168_7 = var_50;
                    rax_41 = alloc::boxed::Box$LT$T$GT$::new::hab9f4786d95358b9(&var_178);
                    label_46c026:
                    arg1[1] = rax_41;
                    arg1[2] = &data_503990;
                    *arg1 = 2;
                    core::ptr::drop_in_place$LT$uucore..features..parser..parse_size..ParseSizeError$GT$::h0bf5f9a284c69319(&var_148);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::h911b774f5eb298b9(var_118_1, r14_1);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h159fa5a16718cf97(&var_c8);
                }
            }
            else
            {
                void** var_168_3 = var_130;
                var_178 = var_140;
                var_160 = 1;
                r14_1 = alloc::boxed::Box$LT$T$GT$::new::hab9f4786d95358b9(&var_178);
                r15_1 = &data_503990;
                label_46bcc4:
                arg1[1] = r14_1;
                arg1[2] = r15_1;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h159fa5a16718cf97(&var_c8);
            }
        }
        else
        {
            uu_od::parse_nrofbytes::parse_number_of_bytes::hb463a51f26f3deb1(&var_f8, *(rax_3 + 8), 
                *(rax_3 + 0x10));
            
            if (var_f8 == 4)
            {
                int64_t var_f0;
                var_108_1 = var_f0;
                goto label_46ba4a;
            }
            
            int128_t var_78;
            uu_od::format_error_message::hfbba610ed066f99b(&var_78, var_f8, *(rax_3 + 8), 
                *(rax_3 + 0x10), "skip-bytesformatoutput-duplicate…");
            var_160 = 1;
            var_178 = var_78;
            int64_t var_68;
            int64_t var_168_1 = var_68;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hab9f4786d95358b9(&var_178);
            arg1[2] = &data_503990;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$uucore..features..parser..parse_size..ParseSizeError$GT$::h0bf5f9a284c69319(&var_f8);
        }
    }
    else
    {
        void* var_90 = rax;
        int64_t r13_1 = *(rax + 8);
        uint64_t rbp_1 = *(rax + 0x10);
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9f07ce88a1e9a8f(r13_1, rbp_1, "littlebigInvalid argument --endi…", 6))
        {
            rcx = 0;
            goto label_46b9ec;
        }
        
        rcx = 1;
        
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he9f07ce88a1e9a8f(r13_1, rbp_1, "bigInvalid argument --endian=: w…", 3))
            goto label_46b9ec;
        
        var_148 = &var_90;
        int64_t (* var_140_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfffe87767bbf161d;
        var_178 = &data_503910;
        int64_t var_170_1 = 1;
        int64_t var_158_1 = 0;
        void*** var_168_2 = &var_148;
        int64_t var_160_1 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(&var_f8, &var_178);
        int32_t var_e0_1 = 1;
        rax_7 = alloc::boxed::Box$LT$T$GT$::new::hab9f4786d95358b9(&var_f8);
        label_46bbdc:
        arg1[1] = rax_7;
        arg1[2] = &data_503990;
        *arg1 = 2;
    }
    return arg1;
}
