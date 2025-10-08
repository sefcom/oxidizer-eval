
  fn alacritty_terminal::selection::SelectionRange::contains_cell::h17cee683c4e8c58c(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i32, arg5: bool) -> i64

{
    let mut rax: i64;
    let var_28: i64 = rax;
    let r14: *mut i64 = arg2;
    let rbx: *mut i64 = arg1;
    rax = arg5 == 0;
    let mut rbp: i32 = arg2[2];
    arg2 = arg4 == rbp;
    arg2 &= rax;
    
    if arg2 != 1
    {
        goto 'label_9bd66d;
    }
    
    let mut result: i8;
    
    if arg3 != r14[1]
    {
        'label_9bd66b:
        rbp = arg4;
        'label_9bd66d:
        let r15_1: i64 = r14[1];
        result = 1;
        
        if alacritty_terminal::selection::SelectionRange::contains::h3bc08e8a28ad661f(rbx, r15_1, 
            rbp) == 0
        {
            if (*(*r14).byte_offset(0x14) & 0x20) != 0
            {
                /* tailcall */
                return alacritty_terminal::selection::SelectionRange::contains::h3bc08e8a28ad661f(
                    rbx, r15_1 + 1, rbp);
            }
            
            return 0;
        }
    }
    else
    {
        let rax_1: i32 = rbx[1];
        arg1 = rax_1 == arg4;
        let mut rsi: i64 = *rbx;
        
        if (arg1 & rsi == arg3) != 0
        {
            return 0;
        }
        
        let mut rdi: i32 = rbx[3];
        let mut r8: i64 = rbx[2];
        
        if (rdi == arg4 & r8 == arg3) != 0
        {
            return 0;
        }
        
        if rbx[4] != 1
        {
            goto 'label_9bd66b;
        }
        
        r8 = r8 == arg3;
        rdi = rdi == arg4;
        arg3 = rsi == arg3;
        rsi = rax_1 == arg4;
        result = 0;
        
        if (rsi & r8) == 0
        {
            rbp = arg4;
            rdi &= arg3;
            
            if rdi == 0
            {
                goto 'label_9bd66d;
            }
        }
    }
    
    result
}
