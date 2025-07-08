
  char uu_sort::numeric_str_cmp::human_numeric_str_cmp::h66afeed8410636b1(int64_t* arg1, int64_t* arg2)

{
    void* r14 = arg1[2];
    uint64_t rbx = arg2[2];
    char rbp = *(r14 + 8);
    char rcx = *(rbx + 8);
    
    if (rbp != rcx)
        return (0 - 0) | 1;
    
    int64_t r13_1 = *arg1;
    int64_t rcx_1 = arg1[1];
    int64_t r15_1 = *arg2;
    int64_t rax = arg2[1];
    int64_t var_70 = r13_1;
    int64_t var_68_1 = r13_1 + rcx_1;
    int32_t rax_2;
    int32_t rdx_1;
    rax_2 = core::str::validations::next_code_point_reverse::h1e42bd12980e3ea9(&var_70, rbx);
    char r12_1 = 0;
    
    if (rax_2)
    {
        uint64_t rdx_2 = rdx_1 - 0x45;
        
        if (rdx_2 <= 0x26)
            switch (rdx_2)
            {
                case 0:
                {
                    r12_1 = 6;
                    break;
                }
                case 2:
                {
                    r12_1 = 3;
                    break;
                }
                case 6:
                case 0x26:
                {
                    r12_1 = 1;
                    break;
                }
                case 8:
                {
                    r12_1 = 2;
                    break;
                }
                case 0xb:
                {
                    r12_1 = 5;
                    break;
                }
                case 0xf:
                {
                    r12_1 = 4;
                    break;
                }
                case 0x14:
                {
                    r12_1 = 8;
                    break;
                }
                case 0x15:
                {
                    r12_1 = 7;
                    break;
                }
            }
    }
    
    var_70 = r15_1;
    int64_t var_68_2 = rax + r15_1;
    int32_t rax_6;
    int32_t rdx_3;
    rax_6 = core::str::validations::next_code_point_reverse::h1e42bd12980e3ea9(&var_70, rbx);
    char rax_7;
    
    if (!rax_6)
        rax_7 = 0;
    else
    {
        rax_7 = 0;
        uint64_t rdx_4 = rdx_3 - 0x45;
        
        if (rdx_4 <= 0x26)
            switch (rdx_4)
            {
                case 0:
                {
                    rax_7 = 6;
                    break;
                }
                case 2:
                {
                    rax_7 = 3;
                    break;
                }
                case 6:
                case 0x26:
                {
                    rax_7 = 1;
                    break;
                }
                case 8:
                {
                    rax_7 = 2;
                    break;
                }
                case 0xb:
                {
                    rax_7 = 5;
                    break;
                }
                case 0xf:
                {
                    rax_7 = 4;
                    break;
                }
                case 0x14:
                {
                    rax_7 = 8;
                    break;
                }
                case 0x15:
                {
                    rax_7 = 7;
                    break;
                }
            }
    }
    
    bool result = true;
    
    if (r12_1 >= rax_7)
        result = r12_1 != rax_7;
    
    if (result)
    {
        if (rbp)
            return result;
        
        return -(result);
    }
    
    int64_t var_48 = r13_1;
    int64_t var_40_1 = rcx_1;
    void* var_38_1 = r14;
    var_70 = r15_1;
    int64_t var_68_3 = rax;
    uint64_t var_60_1 = rbx;
    return uu_sort::numeric_str_cmp::numeric_str_cmp::h462d5662bf6f9278(&var_48, &var_70);
}
