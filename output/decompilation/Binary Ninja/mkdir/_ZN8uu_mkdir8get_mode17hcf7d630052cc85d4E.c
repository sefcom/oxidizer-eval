
  int64_t* uu_mkdir::get_mode::hcf7d630052cc85d4(int64_t* arg1, void* arg2, char arg3)

{
    int64_t var_78;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::he67b74001b5dafb4(&var_78, 
        arg2, "modei128 as dyn ", 4);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h4544dc2b3abed5df(
        "modei128 as dyn ", 4, &var_78);
    int32_t rbp_1;
    
    if (!rax)
    {
        rbp_1 = ~uucore::features::mode::get_umask::hd2aa58752ad993fa() & 0x1ff;
        label_4b2637:
        arg1[1] = rbp_1;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int32_t* r14_1 = *(rax + 8);
        void* r15_1 = *(rax + 0x10);
        void var_68;
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(
            &var_68, r14_1, r15_1);
        var_78 = 0;
        void* var_70_1 = r15_1;
        int16_t var_38_1 = 1;
        void** rax_1;
        uint64_t rdx_2;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&var_78);
        
        if (!rax_1)
        {
            rbp_1 = 0x1ff;
            goto label_4b2637;
        }
        
        void** rbx_1 = rax_1;
        uint64_t r13_1 = rdx_2;
        void* var_f8_1;
        int64_t** var_f0;
        void** const rax_5;
        void** const var_100;
        int128_t var_c8;
        void** var_b0;
        void** const rax_7;
        
        if (!arg3)
        {
            rbp_1 = 0x1ff;
            
            while (true)
            {
                var_b0 = rbx_1;
                uint64_t var_a8_2 = r13_1;
                var_100 = rbx_1;
                var_f8_1 = rbx_1 + r13_1;
                int128_t* rdi_13 = &var_100;
                
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4b3a54094321950c(core::iter::traits::iterator::Iterator::try_fold::hec868b0f829523d7(&var_100)))
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::ha4208e868ecb88cc(
                        rdi_13, rbx_1, r13_1);
                    void* rbx_3 = var_f0;
                    void* var_b8_2 = rbx_3;
                    var_c8 = var_100;
                    uucore::features::mode::parse_symbolic::h8b8316294f52b67d(&var_100, rbp_1, 
                        *var_c8[8], rbx_3, uucore::features::mode::get_umask::hd2aa58752ad993fa(), 
                        1);
                    rax_7 = var_100;
                    
                    if (rax_7 != -0x8000000000000000)
                        goto label_4b2792;
                    
                    rbp_1 = var_f8_1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(
                        &var_c8);
                }
                else
                {
                    uucore::features::mode::parse_numeric::h27100faf377a9b0f(rdi_13, rbp_1, r14_1, 
                        r15_1, 1);
                    rax_5 = var_100;
                    
                    if (rax_5 != -0x8000000000000000)
                        break;
                    
                    rbp_1 = var_f8_1;
                }
                
                void** rax_10;
                uint64_t rdx_6;
                rax_10 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&var_78);
                rbx_1 = rax_10;
                r13_1 = rdx_6;
                
                if (!rax_10)
                    goto label_4b2637;
            }
        }
        else
        {
            rbp_1 = 0x1ff;
            
            while (true)
            {
                var_b0 = rbx_1;
                uint64_t var_a8_1 = r13_1;
                var_100 = rbx_1;
                var_f8_1 = r13_1 + rbx_1;
                
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h4b3a54094321950c(core::iter::traits::iterator::Iterator::try_fold::hec868b0f829523d7(&var_100)))
                {
                    int64_t* var_a0 = &var_b0;
                    int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfd6a55cddc5280de;
                    var_100 = &data_520500;
                    var_f8_1 = 1;
                    int64_t var_e0_1 = 0;
                    var_f0 = &var_a0;
                    int64_t var_e8_1 = 1;
                    int128_t var_90;
                    core::option::Option$LT$T$GT$::map_or_else::h6db0321d2b87c404(&var_90, 
                        &var_100);
                    void* var_80;
                    void* var_b8_1 = var_80;
                    var_c8 = var_90;
                    uucore::features::mode::parse_symbolic::h8b8316294f52b67d(&var_100, rbp_1, 
                        *var_c8[8], var_80, uucore::features::mode::get_umask::hd2aa58752ad993fa(), 
                        1);
                    rax_7 = var_100;
                    
                    if (rax_7 != -0x8000000000000000)
                    {
                        label_4b2792:
                        *(arg1 + 0x14) = *var_f0[4];
                        *(arg1 + 0xc) = var_f8_1;
                        *arg1 = rax_7;
                        arg1[1] = var_f8_1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(
                            &var_c8);
                        return arg1;
                    }
                    
                    rbp_1 = var_f8_1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h03aa133fcf191ac0(
                        &var_c8);
                }
                else
                {
                    uucore::features::mode::parse_numeric::h27100faf377a9b0f(&var_100, rbp_1, 
                        r14_1, r15_1, 1);
                    rax_5 = var_100;
                    
                    if (rax_5 != -0x8000000000000000)
                        break;
                    
                    rbp_1 = var_f8_1;
                }
                
                void** rax_2;
                uint64_t rdx_3;
                rax_2 = core::str::iter::SplitInternal$LT$P$GT$::next::had797e95afa81bfb(&var_78);
                rbx_1 = rax_2;
                r13_1 = rdx_3;
                
                if (!rax_2)
                    goto label_4b2637;
            }
        }
        *(arg1 + 0x14) = *var_f0[4];
        *(arg1 + 0xc) = var_f8_1;
        *arg1 = rax_5;
        arg1[1] = var_f8_1;
    }
    return arg1;
}
