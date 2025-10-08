
  int64_t* uu_mkdir::get_mode::he8abb7adb4ed63dd(int64_t* arg1, void* arg2, char arg3)

{
    int64_t var_78;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h63ff3fd1ffeadd56(&var_78, 
        arg2);
    void* rax = clap_builder::parser::error::MatchesError::unwrap::h7bf4328e00f21745(&var_78);
    int32_t rbp;
    
    if (!rax)
    {
        rbp = ~uucore::features::mode::get_umask::h22fe72fd4e3f2e99() & 0x1ff;
        label_45fb70:
        arg1[1] = rbp;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        void* r14_1 = rax;
        int64_t r15_1 = *(rax + 0x10);
        void var_68;
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
            &var_68, *(rax + 8), r15_1);
        var_78 = 0;
        int64_t var_70_1 = r15_1;
        int16_t var_38_1 = 1;
        void** rax_1;
        uint64_t rdx_1;
        rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::ha2ea2eaf4333c4a2(&var_78);
        
        if (!rax_1)
        {
            rbp = 0x1ff;
            goto label_45fb70;
        }
        
        void* var_b8_1 = r14_1;
        rbp = 0x1ff;
        void* var_e8_1;
        int64_t** var_e0;
        void** const rax_4;
        void** const var_f0;
        void** var_b0;
        void** const rax_6;
        void** const rbx_1;
        void* r13_1;
        
        if (!arg3)
        {
            while (true)
            {
                var_b0 = rax_1;
                uint64_t var_a8_2 = rdx_1;
                var_f0 = rax_1;
                var_e8_1 = rax_1 + rdx_1;
                
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h8332dc6d30fe7e81(core::iter::traits::iterator::Iterator::try_fold::ha903c4bb553092f2(&var_f0)))
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h09085b3eedcee021(&var_f0, rax_1, rdx_1);
                    rbx_1 = var_f0;
                    r13_1 = var_e8_1;
                    uucore::features::mode::parse_symbolic::h506995bac3fe2fa2(&var_f0, rbp, r13_1, 
                        var_e0, uucore::features::mode::get_umask::h22fe72fd4e3f2e99(), 1);
                    rax_6 = var_f0;
                    
                    if (rax_6 != -0x8000000000000000)
                        goto label_45fcd3;
                    
                    rbp = var_e8_1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h77802bd3fde9fb69(rbx_1, 
                        r13_1);
                    r14_1 = var_b8_1;
                }
                else
                {
                    uucore::features::mode::parse_numeric::hf54e809090b43181(&var_f0, rbp, 
                        *(r14_1 + 8), *(r14_1 + 0x10), 1);
                    rax_4 = var_f0;
                    
                    if (rax_4 != -0x8000000000000000)
                        break;
                    
                    rbp = var_e8_1;
                }
                
                rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::ha2ea2eaf4333c4a2(&var_78);
                
                if (!rax_1)
                    goto label_45fb70;
            }
        }
        else
        {
            while (true)
            {
                var_b0 = rax_1;
                uint64_t var_a8_1 = rdx_1;
                var_f0 = rax_1;
                var_e8_1 = rdx_1 + rax_1;
                
                if (!_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h8332dc6d30fe7e81(core::iter::traits::iterator::Iterator::try_fold::ha903c4bb553092f2(&var_f0)))
                {
                    int64_t* var_a0 = &var_b0;
                    int64_t (* var_98_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5f8342cc4ae57580;
                    var_f0 = &data_4ede00;
                    var_e8_1 = 1;
                    int64_t var_d0_1 = 0;
                    var_e0 = &var_a0;
                    int64_t var_d8_1 = 1;
                    void** var_90;
                    core::option::Option$LT$T$GT$::map_or_else::h568d5256e3b46eca(&var_90, &var_f0);
                    rbx_1 = var_90;
                    void* var_88;
                    r13_1 = var_88;
                    int64_t var_80;
                    uucore::features::mode::parse_symbolic::h506995bac3fe2fa2(&var_f0, rbp, r13_1, 
                        var_80, uucore::features::mode::get_umask::h22fe72fd4e3f2e99(), 1);
                    rax_6 = var_f0;
                    
                    if (rax_6 != -0x8000000000000000)
                    {
                        label_45fcd3:
                        *(arg1 + 0x14) = *var_e0[4];
                        *(arg1 + 0xc) = var_e8_1;
                        *arg1 = rax_6;
                        arg1[1] = var_e8_1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h77802bd3fde9fb69(
                            rbx_1, r13_1);
                        return arg1;
                    }
                    
                    rbp = var_e8_1;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h77802bd3fde9fb69(rbx_1, 
                        r13_1);
                    r14_1 = var_b8_1;
                }
                else
                {
                    uucore::features::mode::parse_numeric::hf54e809090b43181(&var_f0, rbp, 
                        *(r14_1 + 8), *(r14_1 + 0x10), 1);
                    rax_4 = var_f0;
                    
                    if (rax_4 != -0x8000000000000000)
                        break;
                    
                    rbp = var_e8_1;
                }
                
                rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::ha2ea2eaf4333c4a2(&var_78);
                
                if (!rax_1)
                    goto label_45fb70;
            }
        }
        *(arg1 + 0x14) = *var_e0[4];
        *(arg1 + 0xc) = var_e8_1;
        *arg1 = rax_4;
        arg1[1] = var_e8_1;
    }
    return arg1;
}
