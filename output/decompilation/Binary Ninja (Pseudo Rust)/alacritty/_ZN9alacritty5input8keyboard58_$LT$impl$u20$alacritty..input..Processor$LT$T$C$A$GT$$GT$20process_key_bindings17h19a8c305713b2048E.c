
  fn alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::process_key_bindings::h19a8c305713b2048(arg1: *mut i64, arg2: *mut i16) -> u64

{
    let r15: *mut c_void = arg1[1];
    let rax: i8 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(arg1[0xd]);
    let mut var_ed: i8 = alacritty::config::bindings::BindingMode::new::h37ed06d7071d7006(
        *r15.byte_offset(0x6dc), rax);
    let mut var_ec: i32 = *arg1[5];
    let mut var_ee: i8 = 2;
    let mut var_e0: i8;
    winit::keyboard::Key::as_ref::ha61159f0166fa8fb(&var_e0, arg2);
    let mut var_b8: i128;
    let mut var_a8: i64;
    let mut var_80: i64;
    let mut var_50: i16;
    
    if var_e0 != 0x20
    {
        core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_e0);
        _$LT$winit..keyboard..Key$LT$Str$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha91dda63f770d88e(&var_50, arg2);
    }
    else
    {
        let var_d8: *mut i8;
        let var_d0: u64;
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(&var_80, var_d8, var_d0);
        smol_str::Repr::new::hdb169bdb6c6b5e78(&var_b8, &var_80);
        let var_38_1: i64 = var_a8;
        let var_48_1: i128 = var_b8;
        var_50 = 1;
        core::ptr::drop_in_place$LT$winit..keyboard..Key$LT$$RF$str$GT$$GT$::h2dc152dabd79984b(
            &var_e0);
    }
    
    var_e0 = &var_50;
    let var_d8_1: *mut i16 = arg2;
    let var_d0_1: *mut i8 = &var_ed;
    let var_c8: *mut i32 = &var_ec;
    let var_c0: *mut i8 = &var_ee;
    let mut r14_1: *mut c_void = arg1[8];
    let r13: i64 = *r14_1.byte_offset(0x2f0);
    let mut var_e8_1: *mut *mut [i8; 0x20];
    let var_70: i128;
    let var_60: i128;
    let mut rsi_5: i64;
    let mut r15_2: i64;
    
    if r13 != 0
    {
        let mut rbp_1: i64 = 0;
        var_e8_1 = &data_c82c48;
        r15_2 = 0;
        
        do
        {
            let r14_2: *mut c_void = arg1[8];
            rsi_5 = *r14_2.byte_offset(0x2f0);
            
            if r15_2 >= rsi_5
            {
                goto 'label_856c49;
            }
            
            alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::process_key_bindings::_$u7b$$u7b$closure$u7d$$u7d$::h1896a1048bc44dc4(&var_80, &var_e0, (*r14_2.byte_offset(0x2e8)).byte_offset(rbp_1));
            
            if var_80 == -0x7fffffffffffffcb
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..bindings..Action$GT$$GT$::h1f9d15c7c9cc1a23(&var_80);
            }
            else
            {
                let var_98_1: i128 = var_60;
                var_a8 = var_70;
                var_b8 = var_80;
                _$LT$alacritty..config..bindings..Action$u20$as$u20$alacritty..input..Execute$LT$T$GT$$GT$::execute::hbc4eac16f06c9ab7(&var_b8, arg1);
                core::ptr::drop_in_place$LT$alacritty..config..bindings..Action$GT$::hffcdaa1347139d5c(&var_b8);
            }
            
            r15_2 += 1;
            rbp_1 += 0x60;
        } while r13 != r15_2;
        
        r14_1 = arg1[8];
    }
    
    let r13_1: i64 = *r14_1.byte_offset(0x2d8);
    
    if r13_1 == 0
    {
        'label_856c18:
        let mut rbx_1: u32 = var_ee;
        core::ptr::drop_in_place$LT$winit..keyboard..Key$GT$::h52f71c141f8140f2(&var_50);
        rbx_1 &= 1;
        return rbx_1;
    }
    
    r15_2 = 0;
    var_e8_1 = &data_c82c30;
    
    loop
    {
        let r14_3: *mut c_void = arg1[8];
        rsi_5 = *r14_3.byte_offset(0x2d8);
        
        if r15_2 >= rsi_5
        {
            break;
        }
        
        let rsi_8: *mut c_void = *(*r14_3.byte_offset(0x2d0) + (r15_2 << 3));
        
        if *rsi_8.byte_offset(0x40) != 5
        {
            alacritty::input::keyboard::_$LT$impl$u20$alacritty..input..Processor$LT$T$C$A$GT$$GT$::process_key_bindings::_$u7b$$u7b$closure$u7d$$u7d$::h1896a1048bc44dc4(&var_80, &var_e0, 
                alacritty::config::ui_config::HintBinding::key_binding::h0eda263f8a34080b(rsi_8.
                    byte_offset(0x40)));
            
            if var_80 == -0x7fffffffffffffcb
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..bindings..Action$GT$$GT$::h1f9d15c7c9cc1a23(&var_80);
            }
            else
            {
                let var_98_2: i128 = var_60;
                var_a8 = var_70;
                var_b8 = var_80;
                _$LT$alacritty..config..bindings..Action$u20$as$u20$alacritty..input..Execute$LT$T$GT$$GT$::execute::hbc4eac16f06c9ab7(&var_b8, arg1);
                core::ptr::drop_in_place$LT$alacritty..config..bindings..Action$GT$::hffcdaa1347139d5c(&var_b8);
            }
        }
        
        r15_2 += 1;
        
        if r13_1 == r15_2
        {
            goto 'label_856c18;
        }
    }
    
    'label_856c49:
    core::panicking::panic_bounds_check::h025cadc56a971af7(r15_2, rsi_5);
    /* no return */
}
