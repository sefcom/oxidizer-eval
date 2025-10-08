
  int64_t uu_wc::process_chunk::h13e22508cc745552(uint64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, char* arg5)

{
    int64_t var_40 = arg2;
    int64_t var_38 = arg2 + arg3;
    char r14 = *arg5;
    char rax;
    int32_t rdx;
    rax = core::str::validations::next_code_point::haf09daf254e30070(&var_40, arg1);
    
    if (rax & 1)
    {
        int32_t rbp_1 = rdx;
        int64_t r12_1 = *(arg1 + 0x10);
        int64_t var_58_1 = *(arg1 + 0x18);
        char rax_2;
        
        do
        {
            uint8_t rax_4;
            
            if (rbp_1 - 9 >= 5 && rbp_1 != 0x20 && rbp_1 >= 0x80)
                rax_4 = core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rbp_1);
            
            if (rbp_1 - 9 < 5 || rbp_1 == 0x20 || (rbp_1 >= 0x80 && rax_4))
            {
                *arg5 = 0;
                r14 = 0;
            }
            else if (!(r14 & 1))
            {
                *arg5 = 1;
                int64_t rax_6 = var_58_1 + 1;
                var_58_1 = rax_6;
                *(arg1 + 0x18) = rax_6;
                r14 = 1;
            }
            
            if (rbp_1 == 0xa)
            {
                r12_1 += 1;
                *(arg1 + 0x10) = r12_1;
            }
            
            int32_t rdx_1;
            rax_2 = core::str::validations::next_code_point::haf09daf254e30070(&var_40, arg1);
            rbp_1 = rdx_1;
        } while (rax_2 & 1);
    }
    
    *arg1 += arg3;
    int64_t result = core::cmp::Ord::max::hb785ffe4e6194aaf(arg4, *(arg1 + 0x20));
    *(arg1 + 0x20) = result;
    return result;
}
