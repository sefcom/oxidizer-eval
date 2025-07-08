
  int64_t uu_wc::compute_number_width::h0dc7206969488842(int64_t* arg1, void* arg2)

{
    int64_t rax = *arg1;
    int64_t result;
    
    if (!rax)
    {
        result = 7;
        
        if (uu_wc::Settings::number_enabled::he133dd856851d2dc(arg2) == 1)
            return 1;
    }
    else
    {
        result = 1;
        
        if (rax == 1)
        {
            int32_t rax_1 = uu_wc::Settings::number_enabled::he133dd856851d2dc(arg2);
            int64_t rdx_1 = arg1[3];
            
            if (rax_1 != 1 || rdx_1 != 1)
            {
                int64_t rax_2 = arg1[2];
                int64_t var_f0 = rax_2;
                int64_t var_e8_1 = rax_2 + rdx_1 * 0x18;
                int64_t* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h04bf2145419757f2(&var_f0);
                
                if (i)
                {
                    result = 1;
                    uint64_t r14_2 = 0;
                    
                    do
                    {
                        if (*i == -0x7fffffffffffffff)
                            result = 7;
                        else
                        {
                            int64_t var_e0;
                            std::fs::metadata::ha24470e461e4d7b2(&var_e0, i);
                            int64_t rdi_4 = var_e0;
                            
                            if (rdi_4 != 2)
                            {
                                int32_t var_a8;
                                int32_t rax_4 = var_a8 & 0xf000;
                                
                                if (rax_4 != 0x8000)
                                    result = 7;
                                
                                int64_t var_90;
                                int64_t rax_5 = var_90;
                                
                                if (rax_4 != 0x8000)
                                    rax_5 = 0;
                                
                                r14_2 += rax_5;
                            }
                            
                            int64_t var_d8;
                            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc7378430642e479d(rdi_4, var_d8);
                        }
                        
                        i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h04bf2145419757f2(&var_f0);
                    } while (i);
                    
                    if (r14_2)
                        /* tailcall */
                        return core::cmp::max_by::h29d87775ffd58160(
                            core::num::int_log10::u64::hf5cf0ae12f20d199(r14_2) + 1, result);
                }
            }
        }
    }
    
    return result;
}
