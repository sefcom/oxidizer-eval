
  int64_t uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t rbx = arg3;
    uu_ptx::assert_str_integrity::h323fdd30696f5c71(arg2, arg3, arg4);
    
    if (rbx && rbx != arg4)
    {
        if (rbx >= arg2)
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(rbx, arg2);
            /* no return */
        }
        
        int32_t rdi_1 = *(arg1 + (rbx << 2));
        
        if (rdi_1 - 9 >= 5 && rdi_1 != 0x20)
        {
            bool rax_3;
            
            if (rdi_1 >= 0x80)
                rax_3 = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rdi_1);
            
            if (rdi_1 < 0x80 || !rax_3)
            {
                int32_t rdi_2 = *(arg1 + (rbx << 2) - 4);
                
                if (rdi_2 - 9 >= 5 && rdi_2 != 0x20)
                {
                    if (rdi_2 >= 0x80)
                    {
                        if (rbx < arg4 && !
                                core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(
                                rdi_2))
                            goto label_5b725b;
                    }
                    else if (rbx < arg4)
                    {
                        label_5b725b:
                        int64_t r13_1 = rbx + 1;
                        
                        if (arg4 > r13_1)
                            r13_1 = arg4;
                        
                        int64_t rbp_1 = rbx;
                        
                        while (rbp_1 < arg2)
                        {
                            uint64_t rdi_3 = *(arg1 + (rbp_1 << 2));
                            
                            if (rdi_3 <= 0x20 && TEST_BITQ(0x100003e00, rdi_3))
                                return rbp_1;
                            
                            if (rdi_3 >= 0x80 && core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rdi_3))
                                return rbp_1;
                            
                            rbp_1 += 1;
                            
                            if (rbp_1 >= arg4)
                                return r13_1;
                        }
                        
                        if (rbx <= arg2)
                            rbx = arg2;
                        
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rbx, arg2);
                        /* no return */
                    }
                }
            }
        }
    }
    
    return rbx;
}
