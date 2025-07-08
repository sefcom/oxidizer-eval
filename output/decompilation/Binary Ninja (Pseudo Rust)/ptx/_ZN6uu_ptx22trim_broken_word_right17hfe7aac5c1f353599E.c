
  fn uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(arg1: i64, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rbx: i64 = arg4;
    uu_ptx::assert_str_integrity::h323fdd30696f5c71(arg2, arg3, arg4);
    
    if arg3 != rbx && rbx != arg2
    {
        let mut r13_1: i64 = rbx - 1;
        
        if r13_1 >= arg2
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(r13_1, arg2);
            /* no return */
        }
        
        let rdi_1: i32 = *(arg1 + (rbx << 2) - 4);
        
        if rdi_1 - 9 >= 5 && rdi_1 != 0x20
        {
            let mut rax_3: bool;
            
            if rdi_1 >= 0x80
            {
                rax_3 = core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(rdi_1);
            }
            
            if rdi_1 < 0x80 || rax_3 == 0
            {
                if rbx >= arg2
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(rbx, arg2);
                    /* no return */
                }
                
                let rdi_2: i32 = *(arg1 + (rbx << 2));
                
                if rdi_2 - 9 >= 5 && rdi_2 != 0x20
                {
                    if rdi_2 >= 0x80
                    {
                        if rbx > arg3 &&
                            core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(
                            rdi_2) == 0
                        {
                            goto 'label_5b738b;
                        }
                    }
                    else if rbx > arg3
                    {
                        'label_5b738b:
                        
                        if arg3 < r13_1
                        {
                            r13_1 = arg3;
                        }
                        
                        loop
                        {
                            let rbp_1: i64 = rbx - 1;
                            
                            if rbp_1 >= arg2
                            {
                                break;
                            }
                            
                            let rdi_3: u64 = *(arg1 + (rbp_1 << 2));
                            
                            if rdi_3 <= 0x20 && TEST_BITQ(0x100003e00, rdi_3)
                            {
                                return rbx;
                            }
                            
                            if rdi_3 >= 0x80 &&
                                core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(
                                rdi_3) != 0
                            {
                                return rbx;
                            }
                            
                            rbx = rbp_1;
                            
                            if rbp_1 <= arg3
                            {
                                return r13_1;
                            }
                        }
                        
                        core::panicking::panic_bounds_check::h25a5330941572dd1(rbx - 1, arg2);
                        /* no return */
                    }
                }
            }
        }
    }
    
    rbx
}
