
  fn rg::types::h81a2f3911460291d(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let mut var_70: ();
    rg::flags::hiargs::HiArgs::stdout::h4f38f4c31b97dea6(&var_70, arg2);
    let mut r15: *mut c_void = *arg2.byte_offset(0x1f8);
    let r12_2: *mut c_void = *arg2.byte_offset(0x200) * 0x30 + r15;
    let mut var_7c: i32 = 0;
    let mut rax_4: u64;
    let mut rcx: *mut i8;
    
    loop
    {
        let mut rbx_1: *mut c_void = r15.byte_offset(0x30);
        
        if r15 == r12_2
        {
            rbx_1 = r15;
        }
        
        if r15 == r12_2
        {
            rcx = arg1;
            rcx[1] = var_7c == 0;
            rax_4 = 0;
            break;
        }
        
        let mut rax_1: *mut *mut c_void = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, 
            *r15.byte_offset(8), *r15.byte_offset(0x10));
        
        if rax_1 == 0
        {
            rax_1 = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, 
                ": /home/34r7hm4n/dev/oxidizer/ox…", 2);
            
            if rax_1 == 0
            {
                let r13_1: *mut c_void = *r15.byte_offset(0x28);
                let mut rbp_1: *mut c_void = 0x18;
                
                if r13_1 == 0
                {
                    rbp_1 = r13_1;
                }
                
                if r13_1 == 0
                {
                    'label_65c0ef:
                    rax_1 = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, 
                        "\n/home/34r7hm4n/dev/oxidizer/ox…", 1);
                    var_7c += 1;
                    r15 = rbx_1;
                    
                    if rax_1 == 0
                    {
                        continue;
                    }
                }
                else
                {
                    let r15_1: *mut c_void = *r15.byte_offset(0x20);
                    rax_1 = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, 
                        *r15_1.byte_offset(8), *r15_1.byte_offset(0x10));
                    
                    if rax_1 == 0
                    {
                        let mut rbp_2: *mut c_void = rbp_1.byte_offset(r15_1);
                        let r15_2: *mut c_void = r15_1.byte_offset(r13_1 * 0x18);
                        
                        loop
                        {
                            let mut r13_2: *mut c_void = rbp_2.byte_offset(0x18);
                            
                            if rbp_2 == r15_2
                            {
                                r13_2 = rbp_2;
                            }
                            
                            if rbp_2 == r15_2
                            {
                                break;
                            }
                            
                            rax_1 = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, 
                                ", invalid hyperlink formatiglobI…", 2);
                            
                            if rax_1 != 0
                            {
                                goto 'label_65c10c;
                            }
                            
                            rax_1 = std::io::Write::write_all::hf6e6bfa0b725a577(&var_70, 
                                *rbp_2.byte_offset(8), *rbp_2.byte_offset(0x10));
                            rbp_2 = r13_2;
                            
                            if rax_1 != 0
                            {
                                goto 'label_65c10c;
                            }
                        }
                        
                        goto 'label_65c0ef;
                    }
                }
            }
        }
        
        'label_65c10c:
        rcx = arg1;
        *rcx.byte_offset(8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h93265d5384100ee9(rax_1);
        rax_4 = 1;
        break;
    }
    
    *rcx = rax_4;
    core::ptr::drop_in_place$LT$grep_cli..wtr..StandardStream$GT$::h44e23c898ea41b40(&var_70)
}
