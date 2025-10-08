
  fn uu_ptx::trim_broken_word_left::hd74c554aea0eb997(arg1: i64, arg2: i64, arg3: i64, arg4: i64) -> i64

{
    let mut rax: i64;
    let var_38: i64 = rax;
    let r15: i64 = arg4;
    let mut rbx: i64 = arg3;
    uu_ptx::assert_str_integrity::h53447a84469126db(arg2, arg3, arg4);
    rax = rbx == r15;
    arg4 = rbx == 0;
    arg4 |= rax;
    
    if arg4 == 0
    {
        if rbx >= arg2
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, arg2);
            /* no return */
        }
        
        let rdi_1: i32 = *(arg1 + (rbx << 2));
        
        if rdi_1 - 9 >= 5 && rdi_1 != 0x20
        {
            let mut rax_3: u8;
            
            if rdi_1 >= 0x80
            {
                rax_3 = core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(rdi_1);
            }
            
            if rdi_1 < 0x80 || rax_3 == 0
            {
                let rdi_2: i32 = *(arg1 + (rbx << 2) - 4);
                
                if rdi_2 - 9 >= 5 && rdi_2 != 0x20
                {
                    if rdi_2 >= 0x80
                    {
                        if (rbx >= r15 |
                            core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                            rdi_2)) == 0
                        {
                            goto 'label_52c352;
                        }
                    }
                    else if rbx < r15
                    {
                        'label_52c352:
                        let mut r13_1: i64 = rbx + 1;
                        
                        if r15 > r13_1
                        {
                            r13_1 = r15;
                        }
                        
                        let mut rax_2: i64 = rbx;
                        
                        while rax_2 < arg2
                        {
                            let rdi_3: u64 = *(arg1 + (rax_2 << 2));
                            
                            if rdi_3 <= 0x20 && TEST_BITQ(0x100003e00, rdi_3)
                            {
                                return rax_2;
                            }
                            
                            if rdi_3 >= 0x80 &&
                                core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                                rdi_3) != 0
                            {
                                return rax_2;
                            }
                            
                            rax_2 += 1;
                            
                            if rax_2 >= r15
                            {
                                return r13_1;
                            }
                        }
                        
                        if rbx <= arg2
                        {
                            rbx = arg2;
                        }
                        
                        core::panicking::panic_bounds_check::h025cadc56a971af7(rbx, arg2);
                        /* no return */
                    }
                }
            }
        }
    }
    
    rbx
}
