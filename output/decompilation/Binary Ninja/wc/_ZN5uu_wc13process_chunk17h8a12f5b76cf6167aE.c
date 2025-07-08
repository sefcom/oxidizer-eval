
  int64_t uu_wc::process_chunk::h8a12f5b76cf6167a(uint64_t arg1, int64_t arg2, int64_t arg3, int64_t* arg4, char* arg5)

{
    int64_t var_40 = arg2;
    int64_t var_38 = arg2 + arg3;
    char r15 = *arg5;
    int64_t r13 = *arg4;
    int32_t rax;
    int32_t rdx;
    rax = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
    int64_t rbp;
    
    if (!rax)
        rbp = *(arg1 + 0x20);
    else
    {
        int32_t r14_1 = rdx;
        int64_t var_60_1 = *(arg1 + 0x18);
        rbp = *(arg1 + 0x20);
        int64_t r12_2 = *(arg1 + 8) + 1;
        int32_t i;
        
        do
        {
            bool rax_8;
            
            if (r14_1 - 9 >= 5 && r14_1 != 0x20 && r14_1 >= 0x80)
                rax_8 = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(r14_1);
            
            if (r14_1 - 9 < 5 || r14_1 == 0x20 || (r14_1 >= 0x80 && rax_8))
            {
                *arg5 = 0;
                r15 = 0;
            }
            else if (!r15)
            {
                *arg5 = 1;
                int64_t rax_11 = var_60_1 + 1;
                var_60_1 = rax_11;
                *(arg1 + 0x18) = rax_11;
                r15 = 1;
            }
            
            if (r14_1 - 0xc < 2)
            {
                label_4ba8f6:
                int64_t rax_2 = core::cmp::max_by::h29d87775ffd58160(r13, rbp);
                rbp = rax_2;
                *(arg1 + 0x20) = rax_2;
                r13 = 0;
            }
            else if (r14_1 == 9)
                r13 = (r13 & 0xfffffffffffffff8) + 8;
            else
            {
                if (r14_1 == 0xa)
                    goto label_4ba8f6;
                
                uint64_t rax_7;
                
                if (r14_1 < 0x7f)
                    rax_7 = r14_1 >= 0x20;
                else if (r14_1 <= 0x9f)
                    rax_7 = 0;
                else
                    rax_7 =
                        unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(r14_1);
                
                r13 += rax_7;
            }
            
            *arg4 = r13;
            *(arg1 + 8) = r12_2;
            int32_t rdx_1;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
            r14_1 = rdx_1;
            r12_2 += 1;
        } while (i);
    }
    
    *arg1 += arg3;
    int64_t result = core::cmp::max_by::h29d87775ffd58160(r13, rbp);
    *(arg1 + 0x20) = result;
    return result;
}
