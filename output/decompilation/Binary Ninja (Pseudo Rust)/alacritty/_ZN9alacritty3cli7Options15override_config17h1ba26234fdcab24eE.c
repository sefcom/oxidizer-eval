
  fn alacritty::cli::Options::override_config::h1ba26234fdcab24e(arg1: *mut c_void, arg2: *mut i64, arg3: i32) -> i64

{
    let mut rax: i32 = 0;
    
    if !(0 + -(*arg1.byte_offset(0x1c8)))
    {
        *arg2.byte_offset(0x419) = 1;
    }
    
    if *arg1.byte_offset(0x198) != -0x8000000000000000
    {
        rax = alacritty::cli::parse_hex_or_decimal::hd382c3b23da3886d(*arg1.byte_offset(0x1a0), 
            *arg1.byte_offset(0x1a8));
    }
    
    arg2[0x30] = rax;
    *arg2.byte_offset(0x184) = arg3;
    let rcx: i8 = *arg1.byte_offset(0x1e0);
    let rbp: i8 = arg2[1] | rcx;
    arg2[1] = rbp;
    let rax_1: i8 = *arg1.byte_offset(0x1e3);
    let rdx: u32 = *arg1.byte_offset(0x1e4);
    let mut rsi_1: i64 = 3;
    let mut rcx_1: i64;
    let mut cond:0_1: bool;
    
    if rdx == 0
    {
        if rcx == 0
        {
            rcx_1 = rax_1 == 1;
            cond:0_1 = rax_1 != 0;
            rsi_1 = 2;
            'label_833df0:
            
            if cond:0_1
            {
                rsi_1 = rcx_1;
            }
        }
    }
    else if rdx != 1
    {
        if rdx != 2
        {
            rcx_1 = rax_1 == 1;
            cond:0_1 = rax_1 != 0;
            rsi_1 = 5;
            goto 'label_833df0;
        }
        
        rsi_1 = 4;
    }
    let rax_2: i64 = core::cmp::Ord::max::h3ddb33a72be94f33(*arg2, rsi_1);
    *arg2 = rax_2;
    *arg2.byte_offset(0xd) |= *arg1.byte_offset(0x1e1);
    
    if rbp != 0
    {
        *arg2 = core::cmp::Ord::max::h3ddb33a72be94f33(rax_2, 3);
    }
    
    /* tailcall */
    alacritty::cli::ParsedOptions::override_config::hf97b5b294eb97d07(arg1.byte_offset(0x180), arg2)
}
