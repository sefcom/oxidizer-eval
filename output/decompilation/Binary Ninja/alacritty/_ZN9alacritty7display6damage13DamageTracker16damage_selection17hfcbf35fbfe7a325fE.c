
  bool alacritty::display::damage::DamageTracker::damage_selection::hfcbf35fbfe7a325f(void* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t rbx = arg3;
    int128_t* r15 = arg2;
    bool result = core::intrinsics::typed_swap_nonoverlapping::h0cea686fd98d21ae(arg1 + 0x88, arg2);
    
    if (!*(arg1 + 0x48))
    {
        result = *(arg1 + 0xa8);
        
        if (r15[2] != 2)
        {
            if (result == 2)
            {
                label_84a166:
                void var_80;
                core::iter::traits::iterator::Iterator::chain::h7fba6d8b5aa03e8e(&var_80, 
                    arg1 + 0x88, r15);
                int64_t var_a8;
                core::iter::adapters::chain::and_then_or_clear::h546794d3a53d3d0d(&var_a8, &var_80);
                void var_d0;
                void var_58;
                result = core::option::Option$LT$T$GT$::or_else::h367e921eb806fc58(&var_d0, 
                    &var_a8, &var_58);
                char i;
                
                if (i != 2)
                {
                    int32_t rax_1 = *(arg1 + 0xb0) - 1;
                    int32_t rcx_2 = rbx - rax_1;
                    int64_t rbp_1 = *(arg1 + 0x20);
                    int64_t r15_1 = *(arg1 + 0x28);
                    int64_t r12_2 = *(arg1 + 0xb8) - 1;
                    int64_t var_d8_1 = rbx;
                    
                    do
                    {
                        int32_t var_c8;
                        int32_t rax_3 = -(var_c8);
                        
                        if (rax_3 < 0)
                            rax_3 = var_c8;
                        
                        int32_t var_b8;
                        
                        if (var_b8 + rbx >= 0 && rax_3 >= rcx_2)
                        {
                            int64_t rbx_1 = core::cmp::Ord::max::h485505c56320f468(var_c8 + rbx, 0);
                            int64_t rax_6 =
                                core::cmp::Ord::clamp::heae1d66c53e20e24(var_b8 + rbx, rax_1);
                            var_a8 = rbx_1;
                            int64_t var_a0_1 = rax_6;
                            char var_98_1 = 0;
                            char rax_7;
                            int64_t rdx_3;
                            rax_7 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_a8);
                            
                            if (rax_7 & 1)
                            {
                                char rax_10;
                                
                                do
                                {
                                    if (rdx_3 >= r15_1)
                                    {
                                        core::panicking::panic_bounds_check::h025cadc56a971af7(
                                            rdx_3, r15_1);
                                        /* no return */
                                    }
                                    
                                    int64_t rbx_2 = rdx_3 * 3;
                                    *(rbp_1 + (rbx_2 << 3) + 8) =
                                        core::cmp::Ord::min::h7c13e9bfb8ea3862(
                                        *(rbp_1 + (rbx_2 << 3) + 8), 0);
                                    *(rbp_1 + (rbx_2 << 3) + 0x10) =
                                        core::cmp::Ord::max::h20b6d33cbe488162(
                                        *(rbp_1 + (rbx_2 << 3) + 0x10), r12_2);
                                    rax_10 = _$LT$core..ops..range..RangeInclusive$LT$T$GT$$u20$as$u20$core..iter..range..RangeInclusiveIteratorImpl$GT$::spec_next::h9242c5e565d5b6d1(&var_a8);
                                } while (rax_10 & 1);
                            }
                            
                            rbx = var_d8_1;
                        }
                        
                        core::iter::adapters::chain::and_then_or_clear::h546794d3a53d3d0d(&var_a8, 
                            &var_80);
                        result = core::option::Option$LT$T$GT$::or_else::h367e921eb806fc58(&var_d0, 
                            &var_a8, &var_58);
                    } while (i != 2);
                }
            }
            else
            {
                result = _$LT$alacritty_terminal..selection..SelectionRange$u20$as$u20$core..cmp..PartialEq$GT$::eq::hd74a6e47199b0cab(r15, arg1 + 0x88);
                
                if (!result)
                    goto label_84a166;
            }
        }
        else if (result != 2)
            goto label_84a166;
    }
    
    return result;
}
