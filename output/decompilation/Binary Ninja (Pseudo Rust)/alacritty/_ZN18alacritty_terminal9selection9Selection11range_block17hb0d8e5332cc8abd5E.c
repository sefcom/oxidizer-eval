
  fn alacritty_terminal::selection::Selection::range_block::hb0d8e5332cc8abd5(arg1: *mut i64, arg2: *mut i128, arg3: *mut i64, arg4: *mut i64) -> *mut i64

{
    let mut rax: i8;
    let mut rcx: i64;
    rax = alacritty_terminal::selection::Selection::is_empty::h0b26168e8eea422c(arg2);
    rcx = 2;
    
    if rax == 0
    {
        let mut rdx: i64 = *arg3;
        let mut rsi: i64 = *arg4;
        let mut rax_2: i64;
        let mut rdi_1: u32;
        
        if rdx <= rsi
        {
            rax_2 = rdx;
            rcx = rsi;
            
            if arg4[2] != 0
            {
                goto 'label_9bd98a;
            }
        }
        else
        {
            rdi_1 = arg3[2];
            arg3[2] = arg4[2];
            arg4[2] = rdi_1;
            *arg3 = rsi;
            *arg4 = rdx;
            rax_2 = rsi;
            rcx = rdx;
            
            if rdi_1 != 0
            {
                goto 'label_9bd98a;
            }
        }
        
        if arg3[1] == arg4[1]
        {
            rdx = rdx != rsi;
            rsi = rcx != 0;
            
            if (rdx & rsi) != 0
            {
                goto 'label_9bd984;
            }
            
            goto 'label_9bd98a;
        }
        
        let mut rdx_1: i32;
        let mut rsi_1: i32;
        
        if rcx == 0
        {
            rcx = 0;
            rdx_1 = arg3[1];
            rsi_1 = arg4[1];
            
            if arg3[2] != 0
            {
                goto 'label_9bd99b;
            }
        }
        else
        {
            'label_9bd984:
            rcx -= 1;
            *arg4 = rcx;
            'label_9bd98a:
            rdx_1 = arg3[1];
            rsi_1 = arg4[1];
            
            if arg3[2] != 0
            {
                'label_9bd99b:
                rdi_1 = rdx_1 == rsi_1;
                
                if (rdi_1 & rax_2 == rcx) == 0
                {
                    rax_2 += 1;
                    *arg3 = rax_2;
                }
                else
                {
                    rsi_1 = rdx_1;
                }
            }
        }
        
        *arg1 = rax_2;
        arg1[1] = rdx_1;
        arg1[2] = rcx;
        arg1[3] = rsi_1;
        rcx = 1;
    }
    
    arg1[4] = rcx;
    arg1
}
