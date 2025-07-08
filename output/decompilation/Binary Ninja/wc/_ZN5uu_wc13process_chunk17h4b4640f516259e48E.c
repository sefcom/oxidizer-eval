
  int64_t uu_wc::process_chunk::h4b4640f516259e48(uint64_t arg1, int64_t arg2, int64_t arg3, int64_t* arg4)

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
        r13 = *(arg1 + 0x20);
        int64_t r14_2 = *(arg1 + 8) + 1;
        int32_t i;
        
        do
        {
            if (rdx - 0xc < 2)
            {
                label_4ba556:
                int64_t rax_1 = core::cmp::max_by::h29d87775ffd58160(r12, r13);
                r13 = rax_1;
                *(arg1 + 0x20) = rax_1;
                r12 = 0;
            }
            else if (rdx == 9)
                r12 = (r12 & 0xfffffffffffffff8) + 8;
            else
            {
                if (rdx == 0xa)
                    goto label_4ba556;
                
                uint64_t rax_3;
                
                if (rdx < 0x7f)
                    rax_3 = rdx >= 0x20;
                else if (rdx <= 0x9f)
                    rax_3 = 0;
                else
                    rax_3 = unicode_width::tables::charwidth::lookup_width::hfd0b3b0958e151ec(rdx);
                
                r12 += rax_3;
            }
            
            *arg4 = r12;
            *(arg1 + 8) = r14_2;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
            r14_2 += 1;
        } while (i);
    }
    
    *arg1 += arg3;
    int64_t result = core::cmp::max_by::h29d87775ffd58160(r12, r13);
    *(arg1 + 0x20) = result;
    return result;
}
