
  int64_t uu_wc::compute_number_width::h8118755960c57c57(int64_t* arg1, void* arg2)

{
    int64_t rax = *arg1;
    int64_t result;
    
    if (!rax)
    {
        result = 7;
        
        if (uu_wc::Settings::number_enabled::h3b82edec78a8e904(arg2) == 1)
            return 1;
    }
    else
    {
        result = 1;
        
        if (rax == 1)
        {
            int32_t rax_1 = uu_wc::Settings::number_enabled::h3b82edec78a8e904(arg2);
            int64_t rdx_1 = arg1[3];
            
            if ((rax_1 != 1 || rdx_1 != 1) && rdx_1)
            {
                int64_t* r14_2 = arg1[2];
                int64_t r13_1 = rdx_1 * 0x18;
                result = 1;
                uint64_t r15_1 = 0;
                
                while (true)
                {
                    if (*r14_2 == -0x7fffffffffffffff)
                    {
                        result = 7;
                        r14_2 = &r14_2[3];
                        int64_t temp0_1 = r13_1;
                        r13_1 -= 0x18;
                        
                        if (temp0_1 == 0x18)
                            break;
                    }
                    else
                    {
                        int64_t var_e0;
                        std::fs::metadata::hbb43a01f12775689(&var_e0, r14_2);
                        int64_t rdi_2 = var_e0;
                        
                        if (rdi_2 != 2)
                        {
                            int32_t var_a8;
                            int32_t rax_3 = var_a8 & 0xf000;
                            int64_t var_90;
                            int64_t rax_4 = var_90;
                            
                            if (rax_3 != 0x8000)
                                rax_4 = 0;
                            
                            if (rax_3 != 0x8000)
                                result = 7;
                            
                            r15_1 += rax_4;
                        }
                        else
                            rdi_2 = 2;
                        
                        int64_t var_d8;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h92f497ce60e154e1(rdi_2, var_d8);
                        r14_2 = &r14_2[3];
                        int64_t temp1_1 = r13_1;
                        r13_1 -= 0x18;
                        
                        if (temp1_1 == 0x18)
                            break;
                    }
                }
                
                if (r15_1)
                    /* tailcall */
                    return core::cmp::Ord::max::hb785ffe4e6194aaf(
                        core::num::int_log10::u64::h30869b009e92f931(r15_1) + 1, result);
            }
        }
    }
    
    return result;
}
