
  fn alacritty_terminal::term::Term$LT$T$GT$::damage::h1bcd4e535a5188a6(arg1: *mut i64, arg2: *mut c_void)

{
    let mut rax: i64;
    let var_38: i64 = rax;
    
    if (*arg2.byte_offset(0x6dd) & 4) != 0
    {
        *arg2.byte_offset(0x210) = 1;
        let rcx_1: i32 = *arg2.byte_offset(0x60);
        *arg2.byte_offset(0x200) = *arg2.byte_offset(0x58);
        *arg2.byte_offset(0x208) = rcx_1;
    }
    else
    {
        let rbx_1: i64 = *arg2.byte_offset(0x58);
        let rcx: i64 = *arg2.byte_offset(0x200);
        let r14_1: i64 = *arg2.byte_offset(0x60);
        let rdx_1: i64 = *arg2.byte_offset(0x208);
        *arg2.byte_offset(0x200) = rbx_1;
        *arg2.byte_offset(0x208) = r14_1;
        
        if (*arg2.byte_offset(0x210) & 1) == 0
        {
            let r15: *mut i64 = arg1;
            rax = r14_1 != rdx_1;
            arg1 = rbx_1 != rcx;
            arg1 |= rax;
            let mut rbp: *mut c_void;
            let mut r12: i64;
            let mut r13: i64;
            
            if arg1 != 0
            {
                r12 = *arg2.byte_offset(0x1f0);
                rbp = arg2;
                r13 = *arg2.byte_offset(0x1f8);
                alacritty_terminal::term::TermDamageState::damage_line::h741c479e22cc411b(r12, r13, 
                    rdx_1, rcx, rcx);
            }
            else
            {
                r12 = *arg2.byte_offset(0x1f0);
                rbp = arg2;
                r13 = *arg2.byte_offset(0x1f8);
            }
            
            alacritty_terminal::term::TermDamageState::damage_line::h741c479e22cc411b(r12, r13, 
                r14_1, rbx_1, rbx_1);
            /* tailcall */
            return alacritty_terminal::term::TermDamageIterator::new::h9c507061ce1d7d92(r15, r12, 
                r13, *rbp.byte_offset(0xc8));
        }
    }
    
    *arg1 = 0;
}
