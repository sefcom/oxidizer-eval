
  uint64_t uu_sort::compare_by::h54103d56e12edacd(int64_t* arg1, int64_t* arg2, void* arg3, void* arg4, void* arg5)

{
    int64_t rax = *(arg3 + 8);
    int64_t var_40 = rax;
    int64_t var_38 = *(arg3 + 0x10) * 0x38 + rax;
    int64_t rdi = arg1[2];
    int64_t r9_2 = *(arg3 + 0x58);
    int64_t rax_1 = arg2[2];
    int64_t rsi_2 = *(arg5 + 8);
    int64_t rsi_3 = *(arg5 + 0x10);
    int64_t rsi_4 = *(arg3 + 0x48);
    int64_t r9_4 = *(arg3 + 0x50);
    int64_t r9_6 = *(arg5 + 0x40);
    int64_t rdi_1 = rdi * rsi_4;
    int64_t rsi_5 = rsi_4 * rax_1;
    int64_t* rax_2 = *(arg5 + 0x38);
    int64_t rax_3 = *(arg5 + 0x28);
    int64_t rax_4 = *(arg5 + 0x20);
    int64_t rax_5 = *(arg4 + 8);
    int64_t rax_6 = *(arg4 + 0x10);
    int64_t rax_7 = *(arg4 + 0x40);
    int64_t* rax_8 = *(arg4 + 0x38);
    int64_t rax_9 = *(arg4 + 0x28);
    int64_t rax_10 = *(arg4 + 0x20);
    char rax_11 = *(arg3 + 0x87);
    int64_t r15 = 0;
    int64_t var_120 = 0;
    int64_t var_e0 = 0;
    uint64_t result;
    
    while (true)
    {
        void* rax_13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1dc45998b69df0a3(&var_40);
        
        if (!rax_13)
        {
            char rax_45 = 0;
            
            if (*(arg3 + 0x98) != 5 && !*(arg3 + 0x83) && !*(arg3 + 0x84))
            {
                uint64_t rax_47 = arg1[1];
                uint64_t rdx_8 = arg2[1];
                int64_t rbx_3 = rax_47 - rdx_8;
                
                if (rax_47 < rdx_8)
                    rdx_8 = rax_47;
                
                int64_t rax_49 = memcmp(*arg1, *arg2, rdx_8);
                
                if (rax_49)
                    rbx_3 = rax_49;
                
                rax_45 = -1;
                
                if (rbx_3 >= 0)
                    rax_45 = rbx_3;
            }
            
            result = -(rax_45);
            
            if (!*(arg3 + 0x82))
                return rax_45;
            
            break;
        }
        
        char rax_32;
        uint64_t rbp_1;
        char* r12_1;
        uint64_t r13_1;
        void* r14_1;
        
        if (!*(rax_13 + 0x37))
        {
            r12_1 = *arg2;
            r13_1 = arg2[1];
            r14_1 = *arg1;
            rbp_1 = arg1[1];
            char* var_118;
            void* var_a8;
            int64_t rax_29;
            
            switch (*(rax_13 + 0x35))
            {
                case 0:
                {
                    label_523e0c:
                    int64_t rdi_6 = var_120 + rdi_1;
                    
                    if (rdi_6 >= rax_9)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_6, rax_9);
                        /* no return */
                    }
                    
                    rax_29 = rsi_5 + var_120;
                    
                    if (rax_29 >= rax_3)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rax_29, rax_3);
                        /* no return */
                    }
                    
                    var_120 += 1;
                    var_a8 = r14_1;
                    uint64_t var_a0_1 = rbp_1;
                    int64_t var_98_1 = (rdi_6 << 4) + rax_10;
                    var_118 = r12_1;
                    uint64_t var_110_1 = r13_1;
                    int64_t var_108_1 = (rax_29 << 4) + rax_4;
                    rax_32 = uu_sort::numeric_str_cmp::numeric_str_cmp::h462d5662bf6f9278(&var_a8, 
                        &var_118);
                    break;
                }
                case 1:
                {
                    label_523f30:
                    int64_t rdi_15 = var_120 + rdi_1;
                    
                    if (rdi_15 >= rax_9)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_15, rax_9);
                        /* no return */
                    }
                    
                    rax_29 = rsi_5 + var_120;
                    
                    if (rax_29 >= rax_3)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rax_29, rax_3);
                        /* no return */
                    }
                    
                    var_120 += 1;
                    var_a8 = r14_1;
                    uint64_t var_a0_2 = rbp_1;
                    int64_t var_98_2 = (rdi_15 << 4) + rax_10;
                    var_118 = r12_1;
                    uint64_t var_110_2 = r13_1;
                    int64_t var_108_2 = (rax_29 << 4) + rax_4;
                    rax_32 = uu_sort::numeric_str_cmp::human_numeric_str_cmp::h66afeed8410636b1(
                        &var_a8, &var_118);
                    break;
                }
                case 2:
                {
                    label_523eaa:
                    int64_t rdi_11 = var_e0 + r9_4 * rdi;
                    
                    if (rdi_11 >= rax_7)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_11, rax_7);
                        /* no return */
                    }
                    
                    int64_t rax_35 = r9_4 * rax_1 + var_e0;
                    
                    if (rax_35 >= r9_6)
                    {
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rax_35, r9_6);
                        /* no return */
                    }
                    
                    int64_t rdi_12 = rdi_11 << 4;
                    int64_t rax_36 = rax_35 << 4;
                    var_e0 += 1;
                    rax_32 = uu_sort::general_numeric_compare::h7d236c8039d2ef1a(*(rax_8 + rdi_12), 
                        *(rax_2 + rax_36), *(rax_8 + rdi_12 + 8), *(rax_2 + rax_36 + 8));
                    break;
                }
                case 3:
                {
                    rax_32 = uu_sort::month_compare::h2ae5044cf495110c(r14_1, rbp_1, r12_1);
                    break;
                }
                case 4:
                {
                    rax_32 = uucore::features::version_cmp::version_cmp::ha6b4e24b6f04c4b3(r14_1, 
                        rbp_1, r12_1, r13_1);
                    break;
                }
                case 5:
                {
                    label_523fc7:
                    
                    if (!uu_sort::custom_str_cmp::custom_str_cmp::h4737421826ca2422(r14_1, rbp_1, 
                        r12_1, r13_1, *(rax_13 + 0x33), *(rax_13 + 0x32), *(rax_13 + 0x31)))
                    {
                        rax_32 = 0;
                        continue;
                    }
                    else
                    {
                        if (!(rax_11 & 1))
                        {
                            core::option::unwrap_failed::h0e11329e76906eaa();
                            /* no return */
                        }
                        
                        var_118 = *(arg3 + 0x88);
                        rax_32 = uu_sort::random_shuffle::h0c00964e3c9491f0(r14_1, rbp_1, r12_1, 
                            r13_1, &var_118);
                    }
                    break;
                }
                case 6:
                {
                    rax_32 = uu_sort::custom_str_cmp::custom_str_cmp::h4737421826ca2422(r14_1, 
                        rbp_1, r12_1, r13_1, *(rax_13 + 0x33), *(rax_13 + 0x32), *(rax_13 + 0x31));
                    break;
                }
            }
        }
        else
        {
            int64_t rdi_3 = r15 + r9_2 * rdi;
            
            if (rdi_3 >= rax_6)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rdi_3, rax_6);
                /* no return */
            }
            
            int64_t rax_16 = rax_1 * r9_2 + r15;
            
            if (rax_16 >= rsi_3)
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(rax_16, rsi_3);
                /* no return */
            }
            
            int64_t* rdi_5 = (rdi_3 << 4) + rax_5;
            int64_t* rax_18 = (rax_16 << 4) + rsi_2;
            r15 += 1;
            r12_1 = *rax_18;
            r13_1 = rax_18[1];
            r14_1 = *rdi_5;
            rbp_1 = rdi_5[1];
            
            switch (*(rax_13 + 0x35))
            {
                case 0:
                {
                    goto label_523e0c;
                }
                case 1:
                {
                    goto label_523f30;
                }
                case 2:
                {
                    goto label_523eaa;
                }
                case 3:
                {
                    rax_32 = uu_sort::month_compare::h2ae5044cf495110c(r14_1, rbp_1, r12_1);
                    break;
                }
                case 4:
                {
                    rax_32 = uucore::features::version_cmp::version_cmp::ha6b4e24b6f04c4b3(r14_1, 
                        rbp_1, r12_1, r13_1);
                    break;
                }
                case 5:
                {
                    goto label_523fc7;
                }
                case 6:
                {
                    rax_32 = uu_sort::custom_str_cmp::custom_str_cmp::h4737421826ca2422(r14_1, 
                        rbp_1, r12_1, r13_1, *(rax_13 + 0x33), *(rax_13 + 0x32), *(rax_13 + 0x31));
                    break;
                }
            }
        }
        
        if (rax_32)
        {
            result = -((rax_32 != 0xff)) | 1;
            
            if (!*(rax_13 + 0x34))
                return rax_32;
            
            break;
        }
    }
    
    return result;
}
