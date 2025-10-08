
  int64_t uu_ptx::trim_broken_word_left::hd74c554aea0eb997(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t rax;
    int64_t var_38 = rax;
    int64_t r15 = arg4;
    int64_t rbx = arg3;
    uu_ptx::assert_str_integrity::h53447a84469126db(arg2, arg3, arg4);
    rax = rbx == r15;
    arg4 = !rbx;
    arg4 |= rax;
    
    if (!arg4)
    {
        if (rbx >= arg2)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, arg2);
            /* no return */
        }
        
        int32_t rdi_1 = *(arg1 + (rbx << 2));
        
        if (rdi_1 - 9 >= 5 && rdi_1 != 0x20)
        {
            uint8_t rax_3;
            
            if (rdi_1 >= 0x80)
                rax_3 = core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rdi_1);
            
            if (rdi_1 < 0x80 || !rax_3)
            {
                int32_t rdi_2 = *(arg1 + (rbx << 2) - 4);
                
                if (rdi_2 - 9 >= 5 && rdi_2 != 0x20)
                {
                    if (rdi_2 >= 0x80)
                    {
                        if (!(rbx >= r15 |
                                core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                                rdi_2)))
                            goto label_52c352;
                    }
                    else if (rbx < r15)
                    {
                        label_52c352:
                        int64_t r13_1 = rbx + 1;
                        
                        if (r15 > r13_1)
                            r13_1 = r15;
                        
                        int64_t rax_2 = rbx;
                        
                        while (rax_2 < arg2)
                        {
                            uint64_t rdi_3 = *(arg1 + (rax_2 << 2));
                            
                            if (rdi_3 <= 0x20 && TEST_BITQ(0x100003e00, rdi_3))
                                return rax_2;
                            
                            if (rdi_3 >= 0x80 && core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rdi_3))
                                return rax_2;
                            
                            rax_2 += 1;
                            
                            if (rax_2 >= r15)
                                return r13_1;
                        }
                        
                        if (rbx <= arg2)
                            rbx = arg2;
                        
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, arg2);
                        /* no return */
                    }
                }
            }
        }
    }
    
    return rbx;
}
