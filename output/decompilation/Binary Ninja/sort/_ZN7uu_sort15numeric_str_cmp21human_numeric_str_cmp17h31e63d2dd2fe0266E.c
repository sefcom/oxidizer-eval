
  uint64_t uu_sort::numeric_str_cmp::human_numeric_str_cmp::h31e63d2dd2fe0266(int64_t* arg1, int64_t* arg2)

{
    void* r15 = arg1[2];
    uint64_t rbx = arg2[2];
    uint64_t r14 = *(r15 + 8);
    uint64_t result = *(rbx + 8);
    
    if (r14 != result)
    {
        bool rcx = r14 < result;
        result = r14 > result;
        result -= rcx;
    }
    else
    {
        int64_t rbp_1 = *arg1;
        int64_t rcx_1 = arg1[1];
        int64_t r12_1 = *arg2;
        int64_t rax = arg2[1];
        int64_t var_70 = rbp_1;
        int64_t var_68_1 = rbp_1 + rcx_1;
        char rax_2;
        int32_t rdx_1;
        rax_2 = core::str::validations::next_code_point_reverse::hc36367225bc4deeb(&var_70, rbx);
        char r13_1 = 0;
        
        if (rax_2 & 1)
        {
            uint64_t rdx_2 = rdx_1 - 0x45;
            
            if (rdx_2 <= 0x26)
                switch (rdx_2)
                {
                    case 0:
                    {
                        r13_1 = 6;
                        break;
                    }
                    case 2:
                    {
                        r13_1 = 3;
                        break;
                    }
                    case 6:
                    case 0x26:
                    {
                        r13_1 = 1;
                        break;
                    }
                    case 8:
                    {
                        r13_1 = 2;
                        break;
                    }
                    case 0xb:
                    {
                        r13_1 = 5;
                        break;
                    }
                    case 0xc:
                    {
                        r13_1 = 0xa;
                        break;
                    }
                    case 0xd:
                    {
                        r13_1 = 9;
                        break;
                    }
                    case 0xf:
                    {
                        r13_1 = 4;
                        break;
                    }
                    case 0x14:
                    {
                        r13_1 = 8;
                        break;
                    }
                    case 0x15:
                    {
                        r13_1 = 7;
                        break;
                    }
                }
        }
        
        var_70 = r12_1;
        int64_t var_68_2 = rax + r12_1;
        int32_t rdx_3;
        result = core::str::validations::next_code_point_reverse::hc36367225bc4deeb(&var_70, rbx);
        char rcx_4 = 0;
        
        if (!(result & 1))
            goto label_4cf78b;
        
        uint64_t rdx_4 = rdx_3 - 0x45;
        
        if (rdx_4 > 0x26)
            goto label_4cf78b;
        
        bool c_1;
        bool z_1;
        
        switch (rdx_4)
        {
            case 0:
            {
                rcx_4 = 6;
                c_1 = r13_1 < 6;
                z_1 = r13_1 == 6;
                
                if (z_1)
                    goto label_4cf790;
                break;
            }
            case 1:
            case 3:
            case 4:
            case 5:
            case 7:
            case 9:
            case 0xa:
            case 0xe:
            case 0x10:
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
            case 0x1a:
            case 0x1b:
            case 0x1c:
            case 0x1d:
            case 0x1e:
            case 0x1f:
            case 0x20:
            case 0x21:
            case 0x22:
            case 0x23:
            case 0x24:
            case 0x25:
            {
                goto label_4cf78b;
            }
            case 2:
            {
                rcx_4 = 3;
                c_1 = r13_1 < 3;
                z_1 = r13_1 == 3;
                
                if (z_1)
                    goto label_4cf790;
                break;
            }
            case 6:
            case 0x26:
            {
                rcx_4 = 1;
                c_1 = r13_1 < 1;
                z_1 = r13_1 == 1;
                
                if (z_1)
                    goto label_4cf790;
                break;
            }
            case 8:
            {
                rcx_4 = 2;
                c_1 = r13_1 < 2;
                z_1 = r13_1 == 2;
                
                if (z_1)
                    goto label_4cf790;
                break;
            }
            case 0xb:
            {
                rcx_4 = 5;
                c_1 = r13_1 < 5;
                z_1 = r13_1 == 5;
                
                if (z_1)
                    goto label_4cf790;
                break;
            }
            case 0xc:
            {
                rcx_4 = 0xa;
                c_1 = r13_1 < 0xa;
                z_1 = r13_1 == 0xa;
                
                if (z_1)
                    goto label_4cf790;
                break;
            }
            case 0xd:
            {
                rcx_4 = 9;
                label_4cf78b:
                c_1 = r13_1 < rcx_4;
                z_1 = r13_1 == rcx_4;
                
                if (z_1)
                {
                    label_4cf790:
                    int64_t var_48 = rbp_1;
                    int64_t var_40_1 = rcx_1;
                    void* var_38_1 = r15;
                    var_70 = r12_1;
                    int64_t var_68_3 = rax;
                    uint64_t var_60_1 = rbx;
                    return uu_sort::numeric_str_cmp::numeric_str_cmp::h793f6b597e9f6768(&var_48, 
                        &var_70);
                }
                break;
            }
            case 0xf:
            {
                rcx_4 = 4;
                c_1 = r13_1 < 4;
                z_1 = r13_1 == 4;
                
                if (z_1)
                    goto label_4cf790;
                break;
            }
            case 0x14:
            {
                rcx_4 = 8;
                c_1 = r13_1 < 8;
                z_1 = r13_1 == 8;
                
                if (z_1)
                    goto label_4cf790;
                break;
            }
            case 0x15:
            {
                rcx_4 = 7;
                c_1 = r13_1 < 7;
                z_1 = r13_1 == 7;
                
                if (z_1)
                    goto label_4cf790;
                break;
            }
        }
        
        result = !z_1 && !c_1;
        result = result - 0;
        
        if (!r14)
        {
            result = 0 - 1;
            result |= 1;
        }
    }
    
    return result;
}
