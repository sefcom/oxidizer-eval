
  uint64_t* uu_du::read_block_size::hba09d611c2cef060(uint64_t* arg1, void* arg2, uint64_t arg3)

{
    if (!arg2)
    {
        int64_t var_b0 = 0;
        int64_t var_a8_1 = 3;
        char const* const var_a0_1 = "DU_BLOCK_SIZEBLOCK_SIZEBLOCKSIZE…";
        int64_t var_98_1 = 0xd;
        char const* const var_90_1 = "BLOCK_SIZEBLOCKSIZEPOSIXLY_CORRE…";
        int64_t var_88_1 = 0xa;
        void* const var_80_1 = "BLOCKSIZEPOSIXLY_CORRECTblock-si…";
        int64_t var_78_1 = 9;
        int64_t rax_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hd8fd032b1ad3245f(&var_b0);
        
        if (!rax_1)
        {
            label_49680a:
            std::env::var::h7ee537fe83ab501a(&var_b0, "POSIXLY_CORRECTblock-size ignore…");
            char rbp_1 = var_b0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h96b9c4a0e931651b(&var_b0);
            
            if (!(rbp_1 & 1))
            {
                arg1[1] = 0x200;
                *arg1 = 0;
            }
            else
            {
                arg1[1] = 0x400;
                *arg1 = 0;
            }
        }
        else
        {
            while (true)
            {
                int64_t var_d0;
                std::env::var::h7ee537fe83ab501a(&var_d0, rax_1);
                
                if (var_d0)
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h96b9c4a0e931651b(&var_d0);
                    rax_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hd8fd032b1ad3245f(&var_b0);
                    
                    if (!rax_1)
                        goto label_49680a;
                }
                else
                {
                    void* var_c0;
                    uint64_t var_b8;
                    int32_t var_50;
                    uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(
                        &var_50, var_c0, var_b8);
                    void var_c8;
                    
                    if (var_50 == 4)
                    {
                        int64_t var_48;
                        arg1[1] = var_48;
                        *arg1 = 0;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::hcc1c8ea971724a57(&var_50);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(
                            &var_c8);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$u64$C$uucore..features..parser..parse_size..ParseSizeError$GT$$GT$::hcc1c8ea971724a57(&var_50);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(
                        &var_c8);
                    rax_1 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hd8fd032b1ad3245f(&var_b0);
                    
                    if (!rax_1)
                        goto label_49680a;
                }
            }
        }
    }
    else
    {
        int32_t var_70;
        uucore::features::parser::parse_size::parse_size_u64::hcabf5090504a6d94(&var_70, arg2, 
            arg3);
        uint64_t rax;
        void** const rcx_1;
        
        if (var_70 != 4)
        {
            rax = uu_du::read_block_size::_$u7b$$u7b$closure$u7d$$u7d$::h5d9afd330ddffbba(arg2, 
                arg3, &var_70);
            rcx_1 = &data_545bc0;
        }
        else
        {
            void** var_68;
            rcx_1 = var_68;
            rax = 0;
        }
        
        arg1[1] = rcx_1;
        *arg1 = rax;
    }
    
    return arg1;
}
