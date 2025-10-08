
  fn uu_ptx::trim_broken_word_right::h89ebaf4ee7dd174e(arg1: i64, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut rax: i64;
    let var_38: i64 = rax;
    let mut rbx: i64 = arg4;
    uu_ptx::assert_str_integrity::h53447a84469126db(arg2, arg3, arg4);
    rax = arg3 == rbx;
    arg4 = rbx == arg2;
    arg4 |= rax;
    
    if arg4 == 0
    {
        let mut r13_1: i64 = rbx - 1;
        
        if r13_1 >= arg2
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(r13_1, arg2);
            /* no return */
        }
        
        let rdi_1: i32 = *(arg1 + (rbx << 2) - 4);
        
        if rdi_1 - 9 >= 5 && rdi_1 != 0x20
        {
            let mut rax_3: u8;
            
            if rdi_1 >= 0x80
            {
                rax_3 = core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rdi_1);
            }
            
            if rdi_1 < 0x80 || rax_3 == 0
            {
                if rbx >= arg2
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, arg2);
                    /* no return */
                }
                
                let rdi_2: i32 = *(arg1 + (rbx << 2));
                
                if rdi_2 - 9 >= 5 && rdi_2 != 0x20
                {
                    if rdi_2 >= 0x80
                    {
                        if (arg3 >= rbx |
                            core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                            rdi_2)) == 0
                        {
                            goto 'label_52c492;
                        }
                    }
                    else if arg3 < rbx
                    {
                        'label_52c492:
                        
                        if arg3 < r13_1
                        {
                            r13_1 = arg3;
                        }
                        
                        loop
                        {
                            let rbp_1: i64 = rbx - 1;
                            
                            if rbp_1 >= arg2
                            {
                                core::panicking::panic_bounds_check::h025cadc56a971af7(rbx - 1, 
                                    arg2);
                                /* no return */
                            }
                            
                            let rdi_3: u64 = *(arg1 + (rbp_1 << 2));
                            
                            if rdi_3 <= 0x20 && TEST_BITQ(0x100003e00, rdi_3)
                            {
                                break;
                            }
                            
                            if rdi_3 >= 0x80 &&
                                core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                                rdi_3) != 0
                            {
                                break;
                            }
                            
                            rbx = rbp_1;
                            
                            if arg3 >= rbp_1
                            {
                                return r13_1;
                            }
                        }
                    }
                }
            }
        }
    }
    
    rbx
}
