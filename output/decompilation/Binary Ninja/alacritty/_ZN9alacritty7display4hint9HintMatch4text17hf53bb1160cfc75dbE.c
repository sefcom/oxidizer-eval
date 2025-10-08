
  void** alacritty::display::hint::HintMatch::text::hf53bb1160cfc75db(int64_t* arg1, int64_t* arg2, void* arg3)

{
    void* r13 = *arg2;
    void** result;
    void* var_70;
    int64_t var_68;
    int32_t var_60;
    int64_t var_58;
    char result_1;
    
    if (!r13)
    {
        result = arg2[1];
        void* rsi_3 = result[0x1a];
        
        if (rsi_3)
        {
            alacritty::config::ui_config::LazyRegex::with_compiled::h71053cda438c1f6a(&var_70, 
                rsi_3, arg3, arg2);
            result = result_1;
            
            if (result != 3 && result != 2)
            {
                int32_t rcx_5 = var_68;
                
                if (rcx_5 == arg2[3])
                {
                    void* rdx_3 = var_70;
                    
                    if (rdx_3 == arg2[2])
                    {
                        int32_t r9_1 = var_58;
                        
                        if (r9_1 == arg2[5])
                        {
                            int64_t r8_1 = var_60;
                            
                            if (r8_1 == arg2[4])
                            {
                                result ^= arg2[6];
                                
                                if (!(result & 1))
                                    /* tailcall */
                                    return alacritty_terminal::term::Term$LT$T$GT$::bounds_to_string::h4abdcbf42c50785a(arg1, arg3, rdx_3, rcx_5, r8_1, r9_1);
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        int64_t r15_1 = arg2[2];
        int32_t rbp_1 = arg2[3];
        result =
            alacritty::display::hint::hyperlink_at::hdeb5cfdb298cee22(&var_70, arg3, r15_1, rbp_1);
        char var_48;
        
        if (var_48 != 2)
        {
            void* r12_1 = var_70;
            var_70 = r12_1;
            
            if (r12_1 != r13)
            {
                if (!alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hca30ad5d4cfd9901(*(r12_1 + 0x18), *(r12_1 + 0x20), *(r13 + 0x18), *(r13 + 0x20)))
                    *arg1 = -0x7fffffffffffffff;
                else
                {
                    if (alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::hca30ad5d4cfd9901(*(r12_1 + 0x30), *(r12_1 + 0x38), *(r13 + 0x30), *(r13 + 0x38))
                            && var_60 == rbp_1 && var_68 == r15_1 && result_1 == arg2[5]
                            && var_58 == arg2[4] && !((var_48 ^ arg2[6]) & 1))
                        goto label_847c89;
                    
                    *arg1 = -0x7fffffffffffffff;
                }
            }
            else if (var_60 != rbp_1 || var_68 != r15_1 || result_1 != arg2[5] || var_58 != arg2[4]
                    || (var_48 ^ arg2[6]) & 1)
                *arg1 = -0x7fffffffffffffff;
            else
            {
                label_847c89:
                int128_t zmm0_1 = *(r13 + 0x30);
                *arg1 = -0x8000000000000000;
                *(arg1 + 8) = zmm0_1;
            }
            
            return core::ptr::drop_in_place$LT$alacritty_terminal..term..cell..Hyperlink$GT$::hef5f91261f2a2291(&var_70);
        }
    }
    *arg1 = -0x7fffffffffffffff;
    return result;
}
