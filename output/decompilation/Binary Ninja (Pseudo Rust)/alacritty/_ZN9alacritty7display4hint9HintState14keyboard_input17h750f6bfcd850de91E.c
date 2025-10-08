
  fn alacritty::display::hint::HintState::keyboard_input::h750f6bfcd850de91(arg1: *mut *mut c_void, arg2: *mut c_void, arg3: *mut c_void, arg4: i32) -> *mut c_void

{
    let mut var_6c: i32 = arg4;
    let rax: u64 = arg4 - 3;
    
    if rax <= 0x1c
    {
        match rax
        {
            0 | 0x18 =>
            {
                alacritty::display::hint::HintState::stop::hd033c0de1ffc73a4(arg2);
            }
            5 | 0x1c =>
            {
                let rax_3: i64 = *arg2.byte_offset(0x58);
                
                if rax_3 != 0
                {
                    *arg2.byte_offset(0x58) = rax_3 - 1;
                }
            }
        }
    }
    
    let mut result: *mut c_void =
        alacritty::display::hint::HintState::update_matches::h4cd609f91e40cc38(arg2, arg3);
    
    if *arg2.byte_offset(0x60) == 0
    {
        arg1[6] = 2;
    }
    else
    {
        let rax_5: i64 = *arg2.byte_offset(0x38);
        let rcx: i64 = *arg2.byte_offset(0x40);
        let mut var_60: i64 = rax_5;
        let var_58_1: i64 = rax_5 + rcx * 0x18;
        let var_50_1: i64 = 0;
        let mut rdx: *mut c_void;
        result = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..double_ended..DoubleEndedIterator$GT$::try_rfold::h57c7db848373ad09(&var_60, &var_6c);
        
        if rdx == 0
        {
            arg1[6] = 2;
        }
        else if *rdx.byte_offset(0x10) != 1
        {
            result =
                alloc::vec::Vec$LT$T$C$A$GT$::push::h7f64891ed476e2fe(arg2.byte_offset(0x48), arg4);
            arg1[6] = 2;
        }
        else
        {
            let rsi_2: i64 = *arg2.byte_offset(0x28);
            
            if result >= rsi_2
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(result, rsi_2);
                /* no return */
            }
            
            let mut var_48: i64;
            _$LT$core..ops..range..RangeInclusive$LT$Idx$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5e74ac01ef9f7a4d(&var_48, result * 0x28 + *arg2.byte_offset(0x20));
            alloc::rc::RcInnerPtr::inc_strong::h04231d05a40329cb(*arg2.byte_offset(0x60));
            let r12_1: *mut c_void = *arg2.byte_offset(0x60);
            let var_68_1: *mut c_void = r12_1;
            
            if *r12_1.byte_offset(0xe9) == 0
            {
                alacritty::display::hint::HintState::stop::hd033c0de1ffc73a4(arg2);
            }
            else
            {
                *arg2.byte_offset(0x58) = 0;
            }
            
            let r15_2: i64 = var_48;
            let var_40: i32;
            let rax_6: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg3.byte_offset(0x28), var_40);
            let rsi_8: i64 = *rax_6.byte_offset(0x10);
            
            if r15_2 >= rsi_8
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(r15_2, rsi_8);
                /* no return */
            }
            
            result = alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(
                *(*rax_6.byte_offset(8) + r15_2 * 0x18));
            *arg1.byte_offset(0x10) = var_48;
            let var_38: i128;
            *arg1.byte_offset(0x20) = var_38;
            let var_28: i64;
            arg1[6] = var_28;
            *arg1 = result;
            arg1[1] = r12_1;
        }
    }
    
    result
}
