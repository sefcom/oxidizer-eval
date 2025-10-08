
  fn alacritty::config::bindings::Binding$LT$T$GT$::triggers_match::h2347c39c3a6d0800(arg1: *mut c_void, arg2: *mut c_void) -> i8

{
    let rax: i64;
    let var_18: i64 = rax;
    
    if core::cmp::PartialEq::ne::hd559d557ff0b2ec9(*arg1.byte_offset(0x30), 
        *arg1.byte_offset(0x32), *arg2.byte_offset(0x30), *arg2.byte_offset(0x32)) == 0
        && *arg1.byte_offset(0x34) == *arg2.byte_offset(0x34)
    {
        let rax_3: i8 = *arg1.byte_offset(0x38);
        let mut rsi_1: i8 = rax_3;
        
        if rax_3 == 0
        {
            rsi_1 = 0x7f;
        }
        
        let rcx_1: i8 = *arg2.byte_offset(0x38);
        let mut rdi_1: i8 = rcx_1;
        
        if rcx_1 == 0
        {
            rdi_1 = 0x7f;
        }
        
        if (rdi_1 & rsi_1) != 0 && (*arg2.byte_offset(0x39) & rax_3) == 0
            && (*arg1.byte_offset(0x39) & rcx_1) == 0
        {
            return 1;
        }
    }
    
    0
}
