
  int64_t uu_wc::process_chunk::h2524f594f70d5b17(uint64_t arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

{
    int64_t var_40 = arg2;
    int64_t var_38 = arg2 + arg3;
    int64_t r12 = *arg4;
    int32_t rax;
    int32_t rdx;
    rax = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
    int64_t r13;
    
    if (!rax)
        r13 = *(arg1 + 0x20);
    else
    {
        int32_t r14_1 = rdx;
        int64_t rbp_1 = *(arg1 + 0x10);
        r13 = *(arg1 + 0x20);
        int32_t i;
        
        do
        {
            if (r14_1 - 0xc < 2)
            {
                label_4ba2d7:
                int64_t rax_2 = core::cmp::max_by::h29d87775ffd58160(r12, r13);
                r13 = rax_2;
                *(arg1 + 0x20) = rax_2;
                r12 = 0;
                label_4ba311:
                *arg4 = r12;
                
                if (r14_1 == 0xa)
                {
                    rbp_1 += 1;
                    *(arg1 + 0x10) = rbp_1;
                }
            }
            else
            {
                if (r14_1 != 9)
                {
                    if (r14_1 == 0xa)
                        goto label_4ba2d7;
                    
                    uint64_t rax_3;
                    
                    if (r14_1 < 0x7f)
                        rax_3 = r14_1 >= 0x20;
                    else if (r14_1 <= 0x9f)
                        rax_3 = 0;
                    else
                        rax_3 = unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(
                            r14_1);
                    
                    r12 += rax_3;
                    goto label_4ba311;
                }
                
                r12 = (r12 & 0xfffffffffffffff8) + 8;
                *arg4 = r12;
            }
            
            int32_t rdx_1;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
            r14_1 = rdx_1;
        } while (i);
    }
    
    *arg1 += arg3;
    int64_t result = core::cmp::max_by::h29d87775ffd58160(r12, r13);
    *(arg1 + 0x20) = result;
    return result;
}
