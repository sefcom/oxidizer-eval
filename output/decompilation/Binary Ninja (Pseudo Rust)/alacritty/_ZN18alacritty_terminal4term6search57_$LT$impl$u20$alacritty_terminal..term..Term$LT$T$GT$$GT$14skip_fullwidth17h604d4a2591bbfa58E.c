
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::skip_fullwidth::h604d4a2591bbfa58(arg1: *mut c_void, arg2: *mut i64, arg3: *mut i64, arg4: i32) -> u64

{
    let mut result: u64 = *(*arg3).byte_offset(0x14);
    let mut var_30: i64;
    
    if arg4 != 0
    {
        if (result & 0x20) != 0 && arg2[1] < *arg1.byte_offset(0xb8) - 1
        {
            return _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_30, arg2);
        }
        
        if (result & 0x400) != 0
        {
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_30, arg2);
            let rax_1: i64 = var_30;
            
            if rax_1 != 0
            {
                *arg3 = rax_1;
            }
            
            return _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&var_30, arg2);
        }
    }
    else if (result & 0x40) != 0
    {
        _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_30, arg2);
        let rax_2: i64 = var_30;
        
        if rax_2 != 0
        {
            *arg3 = rax_2;
        }
        
        let mut rax_3: i64;
        let mut rdx_1: i32;
        rax_3 = alacritty_terminal::index::Point::sub::h8b4b7dd5f4447bbc(arg2[1], arg2[2], arg1, 1);
        let rax_4: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg1.byte_offset(0x28), rdx_1);
        let rsi_5: i64 = *rax_4.byte_offset(0x10);
        
        if rax_3 >= rsi_5
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rax_3, rsi_5);
            /* no return */
        }
        
        result = *rax_4.byte_offset(8);
        
        if (*(result + rax_3 * 0x18 + 0x15) & 4) != 0
        {
            return _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&var_30, arg2);
        }
    }
    result
}
