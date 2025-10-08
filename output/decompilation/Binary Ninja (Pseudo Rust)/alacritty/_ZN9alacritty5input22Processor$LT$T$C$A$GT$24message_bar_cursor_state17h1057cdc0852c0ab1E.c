
  fn alacritty::input::Processor$LT$T$C$A$GT$::message_bar_cursor_state::h1057cdc0852c0ab1(arg1: *mut c_void) -> u64

{
    let rbp: u64 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(*arg1.byte_offset(0x68));
    let rsi: *mut c_void = *arg1.byte_offset(0x30);
    let mut var_80: i64;
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_80, rsi);
    let var_5c: f32;
    let rcx: i64 = var_5c;
    let mut r14_3: i64 = (rcx >> 0x3f & (var_5c - 9.22337204e+18f)) | rcx;
    
    if var_5c < 0f
    {
        r14_3 = 0;
    }
    
    if var_5c > 1.8446743e+19f
    {
        r14_3 = -1;
    }
    
    let var_64: f32;
    let rsi_1: i64 = var_64;
    let mut r13_3: i64 = (rsi_1 >> 0x3f & (var_64 - 9.22337204e+18f)) | rsi_1;
    
    if var_64 < 0f
    {
        r13_3 = 0;
    }
    
    if var_64 > 1.8446743e+19f
    {
        r13_3 = -1;
    }
    
    let rbp_1: i64 = rbp + var_80;
    let r15: *mut c_void = *arg1.byte_offset(0x18);
    let r12_1: i32 = *(*arg1.byte_offset(8)).byte_offset(0xc8);
    let mut var_58: ();
    _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::size_info::h75f6d6cd23dc8329(&var_58, rsi);
    let rax_2: i64 = alacritty::event::Mouse::point::h7553a37268becc3a(*r15.byte_offset(0x20), 
        *r15.byte_offset(0x28), &var_58, r12_1);
    let mut result: u64;
    result = 0x24;
    
    if _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::message::h48f4201a3b3c594d(*arg1.byte_offset(0x38)) != 0
    {
        let rbp_3: i64 = rbp_1 * r13_3 + r14_3;
        let rcx_3: i64 = *r15.byte_offset(0x28);
        
        if rcx_3 > rbp_3
        {
            if rcx_3 > rbp_3 + r13_3
            {
                return 0;
            }
            
            let var_78: i64;
            let mut rax_3: i64;
            rax_3 = rax_2 + 3 >= var_78;
            return rax_3 * 3;
        }
    }
    
    result
}
