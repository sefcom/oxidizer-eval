
  int64_t uu_cp::disk_usage::hb4f518c6ef29284a(void* arg1, int64_t arg2, char arg3)

{
    if (!arg2)
        return 0;
    
    void* r14_1 = arg1;
    int64_t r13_1 = arg2 * 0x18;
    int64_t result = 0;
    int64_t r15 = 0;
    int32_t var_e0;
    int32_t var_a8;
    int64_t var_90;
    
    if (!arg3)
    {
        while (true)
        {
            std::fs::metadata::hfc8772c33100161d(&var_e0, r14_1);
            
            if (var_e0 == 2)
                break;
            
            int64_t rax_1 = 0;
            
            if ((var_a8 & 0xf000) != 0x4000)
                rax_1 = var_90;
            
            r15 += rax_1;
            r14_1 += 0x18;
            int64_t temp2_1 = r13_1;
            r13_1 -= 0x18;
            
            if (temp2_1 == 0x18)
                return result;
        }
        
        return 1;
    }
    
    while (true)
    {
        std::fs::metadata::hfc8772c33100161d(&var_e0, r14_1);
        
        if (var_e0 == 2)
            return 1;
        
        if ((var_a8 & 0xf000) != 0x4000)
        {
            r15 += var_90;
            r14_1 += 0x18;
            int64_t temp0_1 = r13_1;
            r13_1 -= 0x18;
            
            if (temp0_1 == 0x18)
                return result;
        }
        else
        {
            *(r14_1 + 0x10);
            char rax_4;
            int64_t rdx;
            rax_4 = uu_cp::disk_usage_directory::h3351dc16d0087e4c(*(r14_1 + 8));
            
            if (rax_4 & 1)
                return 1;
            
            r15 += rdx;
            r14_1 += 0x18;
            int64_t temp1_1 = r13_1;
            r13_1 -= 0x18;
            
            if (temp1_1 == 0x18)
                return result;
        }
    }
}
