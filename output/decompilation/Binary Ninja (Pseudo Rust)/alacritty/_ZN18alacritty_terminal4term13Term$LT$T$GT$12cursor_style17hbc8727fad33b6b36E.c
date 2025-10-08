
  fn alacritty_terminal::term::Term$LT$T$GT$::cursor_style::hbc8727fad33b6b36(arg1: *mut c_void) -> i8

{
    let mut rax: i8 = *arg1.byte_offset(0x6e0);
    
    if rax != 2
    {
        *arg1.byte_offset(0x6e1);
        
        if (*arg1.byte_offset(0x6de) & 1) != 0
        {
            'label_76f1d8:
            let rcx_2: i8 = *arg1.byte_offset(0x23a);
            *arg1.byte_offset(0x23b);
            
            if rcx_2 != 2
            {
                return rcx_2;
            }
        }
    }
    else
    {
        rax = *arg1.byte_offset(0x238);
        *arg1.byte_offset(0x239);
        
        if (*arg1.byte_offset(0x6de) & 1) != 0
        {
            goto 'label_76f1d8;
        }
    }
    
    rax
}
