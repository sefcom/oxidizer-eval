
  int64_t uu_wc::process_chunk::h2333cf1075a5b14e(uint64_t arg1, int64_t arg2, int64_t arg3, char* arg4)

{
    int64_t var_40 = arg2;
    int64_t var_38 = arg2 + arg3;
    char rbp = *arg4;
    int32_t rax;
    int32_t rdx;
    rax = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
    
    if (rax)
    {
        int64_t r13_1 = *(arg1 + 8);
        int64_t r14_1 = *(arg1 + 0x18);
        int32_t i;
        
        do
        {
            bool rax_2;
            
            if (rdx - 9 >= 5 && rdx != 0x20 && rdx >= 0x80)
                rax_2 = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rdx);
            
            if (rdx - 9 < 5 || rdx == 0x20 || (rdx >= 0x80 && rax_2))
            {
                *arg4 = 0;
                rbp = 0;
            }
            else if (!rbp)
            {
                *arg4 = 1;
                r14_1 += 1;
                *(arg1 + 0x18) = r14_1;
                rbp = 1;
            }
            
            r13_1 += 1;
            i = core::str::validations::next_code_point::hb01acf43b4359c77(&var_40, arg1);
        } while (i);
        *(arg1 + 8) = r13_1;
    }
    
    *arg1 += arg3;
    int64_t result = core::cmp::max_by::h29d87775ffd58160(0, *(arg1 + 0x20));
    *(arg1 + 0x20) = result;
    return result;
}
