
  int64_t uu_wc::process_chunk::hf7d3215607e15a44(uint64_t arg1, int64_t arg2, int64_t arg3, char* arg4)

{
    int64_t var_40 = arg2;
    int64_t var_38 = arg2 + arg3;
    char rbp = *arg4;
    int32_t rax;
    int32_t rdx;
    rax = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
    
    if (rax)
    {
        int32_t r13_1 = rdx;
        int64_t r14_1 = *(arg1 + 0x10);
        int64_t var_50_1 = *(arg1 + 0x18);
        int32_t i;
        
        do
        {
            bool rax_3;
            
            if (r13_1 - 9 >= 5 && r13_1 != 0x20 && r13_1 >= 0x80)
                rax_3 = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(r13_1);
            
            if (r13_1 - 9 < 5 || r13_1 == 0x20 || (r13_1 >= 0x80 && rax_3))
            {
                *arg4 = 0;
                rbp = 0;
            }
            else if (!rbp)
            {
                *arg4 = 1;
                int64_t rax_5 = var_50_1 + 1;
                var_50_1 = rax_5;
                *(arg1 + 0x18) = rax_5;
                rbp = 1;
            }
            
            if (r13_1 == 0xa)
            {
                r14_1 += 1;
                *(arg1 + 0x10) = r14_1;
            }
            
            int32_t rdx_1;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
            r13_1 = rdx_1;
        } while (i);
    }
    
    *arg1 += arg3;
    int64_t result = core::cmp::max_by::h29d87775ffd58160(0, *(arg1 + 0x20));
    *(arg1 + 0x20) = result;
    return result;
}
