
  fn alacritty::display::hint::hyperlink_at::hdeb5cfdb298cee22(arg1: *mut *mut c_void, arg2: *mut c_void, arg3: i64, arg4: i32) -> *mut *mut c_void

{
    let mut rbx: i32 = arg4;
    let mut r12: i64 = arg3;
    let rax: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2.byte_offset(0x28), arg4);
    let rsi_1: i64 = *rax.byte_offset(0x10);
    
    if r12 >= rsi_1
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(r12, rsi_1);
        /* no return */
    }
    
    let rax_2: *mut c_void = alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(
        *(*rax.byte_offset(8) + r12 * 0x18));
    let mut result: *mut *mut c_void;
    
    if rax_2 == 0
    {
        result = arg1;
        result[5] = 2;
    }
    else
    {
        let var_38_1: *mut c_void = rax_2;
        let rax_4: i32 = *arg2.byte_offset(0xc0) - 1;
        let rcx_2: i64 = *arg2.byte_offset(0xb8) - 1;
        let mut var_68: *mut c_void = arg2.byte_offset(0x28);
        let var_60_1: i64 = r12;
        let var_58_1: i32 = rbx;
        let var_50_1: i64 = rcx_2;
        let var_48_1: i32 = rax_4;
        let mut var_98_1: i32 = rbx;
        let mut var_88_1: i64 = r12;
        let mut var_80: *mut *mut c_void;
        let var_78: i64;
        let var_70: i32;
        
        loop
        {
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_80, &var_68);
            let rax_5: *mut i64 = var_80;
            
            if rax_5 == 0
            {
                break;
            }
            
            let rax_6: *mut c_void =
                alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(*rax_5);
            
            if rax_6 == 0
            {
                break;
            }
            
            if alacritty::display::hint::hyperlink_at::_$u7b$$u7b$closure$u7d$$u7d$::h03a543be530673e5(rax_2, rax_6) == 0
            {
                break;
            }
            
            var_98_1 = var_70;
            var_88_1 = var_78;
        }
        
        var_68 = arg2.byte_offset(0x28);
        let var_60_2: i64 = r12;
        let var_58_2: i32 = rbx;
        let var_50_2: i64 = rcx_2;
        let var_48_2: i32 = rax_4;
        
        loop
        {
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_80, &var_68);
            let rax_10: *mut *mut c_void = var_80;
            
            if rax_10 == 0
            {
                break;
            }
            
            let rax_11: *mut c_void =
                alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(*rax_10);
            
            if rax_11 == 0
            {
                break;
            }
            
            if alacritty::display::hint::hyperlink_at::_$u7b$$u7b$closure$u7d$$u7d$::h03a543be530673e5(rax_2, rax_11) == 0
            {
                break;
            }
            
            r12 = var_78;
            rbx = var_70;
        }
        
        result = arg1;
        *result = rax_2;
        result[1] = r12;
        result[2] = rbx;
        result[3] = var_88_1;
        result[4] = var_98_1;
        result[5] = 0;
    }
    
    result
}
