
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::inline_search_right::hbf0568499a7b63a6(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i32, arg5: *mut i8, arg6: *mut c_void) -> *mut i64

{
    let mut r14: i64 = arg3;
    let rax: i64 = *arg2.byte_offset(0x50);
    let r12: i64 = *arg2.byte_offset(0xc0);
    let mut rsi: i32 = 0;
    
    if rax >= r12
    {
        rsi = rax - r12;
    }
    
    let mut rbp: i32 = core::cmp::Ord::max::h3396bb7148673668(arg4, -(rsi));
    let r15_1: i64 = *arg2.byte_offset(0xb8) - 1;
    
    if r14 != r15_1
    {
        'label_772338:
        let mut var_58: *mut c_void = arg2.byte_offset(0x28);
        let var_50_1: i64 = r14;
        let var_48_1: i32 = rbp;
        let var_40_1: i64 = r15_1;
        let var_38_1: i32 = r12 - 1;
        let mut i_1: *mut c_void;
        _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&i_1, &var_58);
        
        for let mut i: *mut c_void = i_1; i != 0; i = i_1
        {
            let var_68: i64;
            r14 = var_68;
            let var_60: i32;
            rbp = var_60;
            
            if (*i.byte_offset(0x14) & 0x440) == 0 && _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(*i.byte_offset(0x10), arg5, arg6) != 0
            {
                arg1[1] = r14;
                arg1[2] = rbp;
                *arg1 = 0;
                return arg1;
            }
            
            if r14 == r15_1 && (*i.byte_offset(0x14) & 0x10) == 0
            {
                r14 = r15_1;
                break;
            }
            
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&i_1, &var_58);
        }
    }
    else
    {
        let rax_3: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2.byte_offset(0x28), rbp);
        let rsi_3: i64 = *rax_3.byte_offset(0x10);
        
        if r14 >= rsi_3
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(r14, rsi_3);
            /* no return */
        }
        
        if (*(*rax_3.byte_offset(8) + r14 * 0x18 + 0x14) & 0x10) != 0
        {
            goto 'label_772338;
        }
    }
    
    arg1[1] = r14;
    arg1[2] = rbp;
    *arg1 = 1;
    arg1
}
