
  fn alacritty_terminal::selection::Selection::range_simple::h1a39dda08803e914(arg1: *mut i64, arg2: *mut i128, arg3: *mut i64, arg4: *mut i64, arg5: i64) -> *mut i64

{
    let rax: i64;
    let var_28: i64 = rax;
    let mut rcx: i8 = 2;
    
    if alacritty_terminal::selection::Selection::is_empty::h0b26168e8eea422c(arg2) == 0
    {
        if arg4[2] == 0
        {
            let rax_2: i32 = arg4[1];
            let mut rcx_1: i64;
            
            if arg3[1] != rax_2
            {
                rcx_1 = *arg4;
                
                if rcx_1 != 0
                {
                    *arg4 = rcx_1 - 1;
                }
                else
                {
                    *arg4 = arg5 - 1;
                    arg4[1] = rax_2 - 1;
                }
            }
            else
            {
                rcx_1 = *arg4;
                
                if *arg3 != rcx_1
                {
                    if rcx_1 == 0
                    {
                        *arg4 = arg5 - 1;
                        arg4[1] = rax_2 - 1;
                    }
                    else
                    {
                        *arg4 = rcx_1 - 1;
                    }
                }
            }
        }
        
        let mut rdx: i64 = *arg3;
        let mut rax_4: i32 = arg3[1];
        let mut rcx_4: i32 = arg4[1];
        
        if arg3[2] != 0
        {
            if rax_4 != rcx_4 || rdx != *arg4
            {
                rdx += 1;
                *arg3 = rdx;
                
                if rdx == arg5
                {
                    *arg3 = 0;
                    rax_4 += 1;
                    arg3[1] = rax_4;
                    rdx = 0;
                }
            }
            else
            {
                rcx_4 = rax_4;
            }
        }
        
        let rsi: i64 = *arg4;
        *arg1 = rdx;
        arg1[1] = rax_4;
        arg1[2] = rsi;
        arg1[3] = rcx_4;
        rcx = 0;
    }
    
    arg1[4] = rcx;
    arg1
}
