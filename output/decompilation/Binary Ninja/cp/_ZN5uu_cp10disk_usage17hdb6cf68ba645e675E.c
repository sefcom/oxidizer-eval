
  int64_t uu_cp::disk_usage::hdb6cf68ba645e675(int64_t arg1, int64_t arg2, char arg3)

{
    int64_t var_e8 = arg1;
    int64_t var_e0 = arg1 + arg2 * 0x18;
    void* rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&var_e8);
    
    if (rax_2)
    {
        int32_t var_d8;
        int32_t var_a0;
        int64_t var_88;
        int64_t rbx_1;
        
        if (!arg3)
        {
            rbx_1 = 0;
            
            while (true)
            {
                std::fs::metadata::hcf81ab27d993cd47(&var_d8, rax_2);
                
                if (var_d8 == 2)
                    return 1;
                
                int64_t rax_6;
                
                if ((var_a0 & 0xf000) != 0x4000)
                    rax_6 = var_88;
                else
                    rax_6 = 0;
                
                rbx_1 += rax_6;
                rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&var_e8);
                
                if (!rax_2)
                    return 0;
            }
        }
        else
        {
            rbx_1 = 0;
            
            while (true)
            {
                std::fs::metadata::hcf81ab27d993cd47(&var_d8, rax_2);
                
                if (var_d8 != 2)
                {
                    if ((var_a0 & 0xf000) != 0x4000)
                    {
                        rbx_1 += var_88;
                        label_5089b8:
                        rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0721f68d5f0414ea(&var_e8);
                        
                        if (!rax_2)
                            break;
                        
                        continue;
                    }
                    else
                    {
                        *(rax_2 + 0x10);
                        int64_t rax_5;
                        int64_t rdx;
                        rax_5 = uu_cp::disk_usage_directory::h440b87226599f819(*(rax_2 + 8));
                        
                        if (!rax_5)
                        {
                            rbx_1 += rdx;
                            goto label_5089b8;
                        }
                    }
                }
                
                return 1;
            }
        }
    }
    
    return 0;
}
