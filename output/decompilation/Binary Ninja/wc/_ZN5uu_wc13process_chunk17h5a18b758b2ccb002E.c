
  int64_t uu_wc::process_chunk::h5a18b758b2ccb002(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t* arg4, char* arg5)

{
    int64_t var_40 = arg2;
    int64_t var_38 = arg2 + arg3;
    uint64_t rbx = *arg5;
    int64_t r13 = *arg4;
    int32_t rax;
    int32_t rdx;
    rax = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, rbx);
    int64_t rbp_1;
    
    if (!rax)
        rbp_1 = arg1[4];
    else
    {
        int32_t r14_1 = rdx;
        int64_t var_50_1 = arg1[3];
        rbp_1 = arg1[4];
        int32_t i;
        
        do
        {
            bool rax_7;
            
            if (r14_1 - 9 >= 5 && r14_1 != 0x20 && r14_1 >= 0x80)
                rax_7 = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(r14_1);
            
            if (r14_1 - 9 < 5 || r14_1 == 0x20 || (r14_1 >= 0x80 && rax_7))
            {
                *arg5 = 0;
                rbx = 0;
            }
            else if (!rbx)
            {
                *arg5 = 1;
                int64_t rcx_1 = var_50_1 + 1;
                var_50_1 = rcx_1;
                arg1[3] = rcx_1;
                rbx = 1;
            }
            
            if (r14_1 - 0xc < 2)
            {
                label_4ba78b:
                rbp_1 = core::cmp::max_by::h29d87775ffd58160(r13, rbp_1);
                arg1[4] = rbp_1;
                r13 = 0;
            }
            else if (r14_1 == 9)
                r13 = (r13 & 0xfffffffffffffff8) + 8;
            else
            {
                if (r14_1 == 0xa)
                    goto label_4ba78b;
                
                uint64_t rax_6;
                
                if (r14_1 < 0x7f)
                    rax_6 = r14_1 >= 0x20;
                else if (r14_1 <= 0x9f)
                    rax_6 = 0;
                else
                    rax_6 =
                        unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(r14_1);
                
                r13 += rax_6;
            }
            
            *arg4 = r13;
            int32_t rdx_1;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, rbx);
            r14_1 = rdx_1;
        } while (i);
    }
    
    *arg1 += arg3;
    int64_t result = core::cmp::max_by::h29d87775ffd58160(r13, rbp_1);
    arg1[4] = result;
    return result;
}
