
  int64_t* uu_chown::parse_gid_uid_and_filter::h83a04fecdc4af108(int64_t* arg1, void* arg2)

{
    int32_t var_228;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5935285ab4a5747d(
        &var_228, arg2, "fromkindAuto/", 4);
    uint64_t rax = clap_builder::parser::error::MatchesError::unwrap::h9b44e677d9dc182b(
        "fromkindAuto/", 4, &var_228);
    int32_t var_268_1;
    int32_t var_25c;
    char var_224;
    uint64_t var_220;
    uint32_t var_218;
    int32_t rbp_1;
    
    if (!rax)
    {
        rbp_1 = 0;
        label_4608f5:
        var_268_1 = rax;
        label_460913:
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5935285ab4a5747d(
            &var_228, arg2, "referenceOWNERsrc/uu/chown/src/c…", 9);
        void* rax_1 = clap_builder::parser::error::MatchesError::unwrap::h9b44e677d9dc182b(
            "referenceOWNERsrc/uu/chown/src/c…", 9, &var_228);
        uint32_t rax_4;
        int32_t rcx_3;
        uint32_t rdx_7;
        int64_t r12_1;
        void* r13_1;
        uint64_t r14_1;
        uint64_t r15_2;
        
        if (!rax_1)
        {
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h5935285ab4a5747d(
                &var_228, arg2, "OWNERsrc/uu/chown/src/chown.rsfa…", 5);
            void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h9b44e677d9dc182b(
                "OWNERsrc/uu/chown/src/chown.rsfa…", 5, &var_228);
            
            if (!rax_2)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(
                &var_228, rax_2);
            r12_1 = var_228;
            r15_2 = var_220;
            r13_1 = var_218;
            uu_chown::parse_spec::h35c2058a4fb20997(&var_228, r15_2, r13_1, 0x3a);
            
            if (!(var_228 & 1))
            {
                rcx_3 = var_224;
                r14_1 = var_220;
                rdx_7 = var_218;
                rax_4 = r14_1 >> 0x20;
                label_460ba8:
                *arg1 = r12_1;
                arg1[1] = r15_2;
                arg1[2] = r13_1;
                arg1[3] = rax_4;
                *(arg1 + 0x1c) = rdx_7;
                arg1[4] = rcx_3;
                *(arg1 + 0x24) = r14_1;
                arg1[5] = rbp_1;
                *(arg1 + 0x2c) = var_268_1;
                arg1[6] = var_25c;
            }
            else
            {
                *(arg1 + 8) = var_220;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h98a49a101b406ada(r12_1, 
                    r15_2);
            }
        }
        else
        {
            std::fs::metadata::h235a34ba4fc3f8ea(&var_228, rax_1);
            *(rax_1 + 8);
            *(rax_1 + 0x10);
            int32_t var_160;
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hd465c1b746ec1c17(&var_160, &var_228);
            int128_t var_158;
            
            if (var_160 != 2)
            {
                int32_t var_124;
                r14_1 = var_124;
                int64_t var_b0;
                _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::h5d0bb482984d9c00(&var_b0, r14_1);
                int64_t var_258;
                uint64_t var_250;
                uint64_t var_a8;
                
                if (var_b0 != -0x8000000000000000)
                {
                    uucore::features::entries::uid2usr::_$u7b$$u7b$closure$u7d$$u7d$::h8535064aed5e7fd9(&var_228, &var_b0);
                    int64_t rax_5 = var_228;
                    
                    if (rax_5 != -0x8000000000000000)
                    {
                        var_258 = rax_5;
                        var_250 = var_220;
                        int64_t var_248_1 = var_218;
                    }
                    else
                        uu_chown::parse_gid_uid_and_filter::_$u7b$$u7b$closure$u7d$$u7d$::h18486d473721014c(&var_258, r14_1, var_220);
                }
                else
                    uu_chown::parse_gid_uid_and_filter::_$u7b$$u7b$closure$u7d$$u7d$::h18486d473721014c(&var_258, r14_1, var_a8);
                uint32_t var_120;
                _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$u32$GT$$GT$::locate::hf537d3ad4e514fa6(&var_228, var_120);
                int64_t rax_6 = var_228;
                int64_t var_240;
                uint64_t var_238;
                
                if (rax_6 != -0x8000000000000000)
                {
                    var_240 = rax_6;
                    var_238 = var_220;
                    int64_t var_230_1 = var_218;
                }
                else
                    uu_chown::parse_gid_uid_and_filter::_$u7b$$u7b$closure$u7d$$u7d$::h18486d473721014c(&var_240, var_120, var_220);
                
                var_160 = &var_258;
                var_158 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                *var_158[8] = &var_240;
                int64_t (* var_148_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_228 = &data_4f5ec0;
                int64_t var_220_1 = 2;
                int64_t var_208_1 = 0;
                var_218 = &var_160;
                int64_t var_210_1 = 2;
                int64_t var_178;
                core::option::Option$LT$T$GT$::map_or_else::h4bc4c2e4ba7ee2f5(&var_178, &var_228);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h98a49a101b406ada(var_240, 
                    var_238);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h98a49a101b406ada(var_258, 
                    var_250);
                r12_1 = var_178;
                uint64_t var_170;
                r15_2 = var_170;
                rax_4 = 1;
                void* var_168;
                r13_1 = var_168;
                rcx_3 = 1;
                rdx_7 = var_120;
                goto label_460ba8;
            }
            
            *(arg1 + 8) = var_158;
            *arg1 = -0x8000000000000000;
        }
    }
    else
    {
        uu_chown::parse_spec::h35c2058a4fb20997(&var_228, *(rax + 8), *(rax + 0x10), 0x3a);
        
        if (var_228 != 1)
        {
            rax = var_218;
            uint32_t rbp_3 = var_220 >> 0x20;
            var_25c = rax;
            
            if (var_224 & 1)
            {
                var_268_1 = var_220;
                rbp_1 = ((rbp_3 & 1) << 1) + 1;
                goto label_460913;
            }
            
            rbp_1 = (rbp_3 & 1) * 2;
            goto label_4608f5;
        }
        
        *(arg1 + 8) = var_220;
        *arg1 = -0x8000000000000000;
    }
    return arg1;
}
