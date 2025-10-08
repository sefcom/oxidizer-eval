
  fn alacritty::input::Processor$LT$T$C$A$GT$::on_left_click::h80b65c175310b8cb(arg1: *mut c_void, arg2: i64, arg3: i32) -> i64

{
    let r12: *mut c_void = *arg1.byte_offset(0x18);
    let rax: i8 = *r12.byte_offset(0x37);
    let mut r15_1: u32 = **arg1.byte_offset(0x28) & 0x20;
    
    match *r12.byte_offset(0x3b)
    {
        1 =>
        {
            let r13_1: *mut c_void = *arg1.byte_offset(8);
            *r12.byte_offset(0x38) = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::selection_is_empty::h06e87f25781b0a34(r13_1) ^ 1;
            _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::clear_selection::h2f28545a903d1aa1(r13_1, *arg1.byte_offset(0x78));
            _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::start_selection::h2cb86ce3a4356ab4(arg1, (r15_1 >> 5), arg2, arg3, rax);
        }
        2 =>
        {
            if r15_1 == 0
            {
                *r12.byte_offset(0x38) = 1;
                r15_1 = 2;
                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::start_selection::h2cb86ce3a4356ab4(arg1, r15_1, arg2, arg3, rax);
            }
        }
        3 =>
        {
            if r15_1 == 0
            {
                *r12.byte_offset(0x38) = 1;
                r15_1 = 3;
                _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::start_selection::h2cb86ce3a4356ab4(arg1, r15_1, arg2, arg3, rax);
            }
        }
    }
    
    let r12_1: *mut c_void = *arg1.byte_offset(8);
    let mut result: i8 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::terminal_mut::ha68c2ba7b3d97983(r12_1);
    
    if (*r12_1.byte_offset(0x6de) & 1) != 0
    {
        result = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(*arg1.byte_offset(0x68));
        
        if result == 0
        {
            *r12_1.byte_offset(0x290) = arg2;
            *r12_1.byte_offset(0x298) = arg3;
            /* tailcall */
            return _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mark_dirty::hcc81c19e5a883d56(*arg1.byte_offset(0x78));
        }
    }
    
    result
}
