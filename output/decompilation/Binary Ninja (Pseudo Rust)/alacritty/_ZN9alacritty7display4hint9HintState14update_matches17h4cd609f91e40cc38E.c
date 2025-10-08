
  fn alacritty::display::hint::HintState::update_matches::h4cd609f91e40cc38(arg1: *mut c_void, arg2: *mut c_void) -> *mut c_void

{
    let mut result: *mut c_void = *arg1.byte_offset(0x60);
    
    if result == 0
    {
        return result;
    }
    
    *arg1.byte_offset(0x28) = 0;
    
    if *result.byte_offset(0xd8) != 0
    {
        let mut var_b8: ();
        alacritty::display::hint::visible_unique_hyperlinks_iter::h56872e0ca65821a6(&var_b8, arg2);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h70f0f24cf9bbdc0e(arg1.byte_offset(0x18), &var_b8);
        result = *arg1.byte_offset(0x60);
    }
    
    let rdi_2: *mut c_void = *result.byte_offset(0xd0);
    let mut var_f0: *mut c_void;
    
    if rdi_2 != 0
    {
        var_f0 = arg2;
        let var_e8_1: *mut c_void = arg1.byte_offset(0x60);
        let var_e0_1: *mut c_void = arg1.byte_offset(0x18);
        alacritty::config::ui_config::LazyRegex::with_compiled::h48138ab86309e773(rdi_2, &var_f0);
    }
    
    let rsi_2: i64 = *arg1.byte_offset(0x28);
    
    if rsi_2 == 0
    {
        /* tailcall */
        return alacritty::display::hint::HintState::stop::hd033c0de1ffc73a4(arg1);
    }
    
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by_key::hd25b6dbfbeee2c6b(
        *arg1.byte_offset(0x20), rsi_2);
    alloc::vec::Vec$LT$T$C$A$GT$::dedup_by_key::h2e5d6a06cf23bc2c(arg1.byte_offset(0x18));
    alacritty::display::hint::HintLabels::new::hcaae289cf8e987de(&var_f0, arg1);
    let r12_1: i64 = *arg1.byte_offset(0x28);
    let r14_2: i64 = *arg1.byte_offset(0x58);
    let mut var_120: i64 = 0;
    let var_118_1: i64 = 4;
    let var_110_1: i64 = 0;
    alloc::vec::Vec$LT$T$C$A$GT$::resize::hb623107bdbe94c48(arg1.byte_offset(0x30), r12_1, 
        &var_120);
    
    if r12_1 != 0
    {
        let mut r15_2: i64 = r12_1 - 1;
        let mut i_1: i64 = r12_1 * 0x18;
        let mut i: i64;
        
        do
        {
            let mut var_108: i64;
            alacritty::display::hint::HintLabels::next::h3687c471851e5e21(&var_108, &var_f0);
            let var_100: i64;
            let var_f8: i64;
            
            if var_f8 < r14_2
            {
                'label_8475f0:
                let rsi_12: i64 = *arg1.byte_offset(0x40);
                
                if r15_2 >= rsi_12
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(r15_2, rsi_12);
                    /* no return */
                }
                
                let r13_3: i64 = *arg1.byte_offset(0x38);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$i32$GT$$GT$::hfe34e1f207b818df(
                    *(r13_3 + i_1 - 0x18), *(r13_3 + i_1 - 0x10));
                *(r13_3 + i_1 - 0x18) = 0;
                *(r13_3 + i_1 - 0x10) = 4;
                *(r13_3 + i_1 - 8) = 0;
            }
            else
            {
                let mut rax_1: i64;
                let mut rdx_3: i64;
                rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h143db52962e7ba72(r14_2, var_100, var_f8);
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfbdf8a47e9641e35(rax_1, rdx_3, *arg1.byte_offset(0x50), *arg1.byte_offset(0x58)) == 0
                {
                    goto 'label_8475f0;
                }
                
                alloc::vec::Vec$LT$T$C$A$GT$::split_off::h45fd739e5909bf69(&var_120, &var_108, 
                    r14_2);
                let rsi_11: i64 = *arg1.byte_offset(0x40);
                
                if r15_2 >= rsi_11
                {
                    core::panicking::panic_bounds_check::h025cadc56a971af7(r15_2, rsi_11);
                    /* no return */
                }
                
                let r13_2: i64 = *arg1.byte_offset(0x38);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$i32$GT$$GT$::hfe34e1f207b818df(
                    *(r13_2 + i_1 - 0x18), *(r13_2 + i_1 - 0x10));
                *(r13_2 + i_1 - 8) = var_110_1;
                *(r13_2 + i_1 - 0x18) = var_120;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$i32$GT$$GT$::hfe34e1f207b818df(var_108, 
                var_100);
            r15_2 -= 1;
            i = i_1;
            i_1 -= 0x18;
        } while i != 0x18;
    }
    
    core::ptr::drop_in_place$LT$alacritty..display..hint..HintLabels$GT$::h8024eb43e99b19d6(&var_f0)
}
