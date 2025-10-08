
  fn alacritty::input::Processor$LT$T$C$A$GT$::process_mouse_bindings::hcb4c2767c9cc745f(arg1: *mut i64, arg2: i16, arg3: i16) -> i64

{
    let r14: *mut c_void = arg1[1];
    let rax: i8 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::search_active::hab11a215551a244e(arg1[0xd]);
    let rax_1: bool = alacritty::config::bindings::BindingMode::new::h37ed06d7071d7006(
        *r14.byte_offset(0x6dc), rax);
    let rax_2: i8 = _$LT$alacritty..event..ActionContext$LT$N$C$T$GT$$u20$as$u20$alacritty..input..ActionContext$LT$T$GT$$GT$::mouse_mode::h5645ae47cef353d4(r14);
    let rax_3: i32 = *arg1[5];
    let r14_2: *mut c_void = arg1[8];
    let mut var_48: ();
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hca503cae22e9811d(&var_48, *r14_2.byte_offset(0x1c0), *r14_2.byte_offset(0x1c8));
    let var_38: i64;
    
    if var_38 != 0
    {
        let rax_6: u8 = (rax_3 & 4) >> 2;
        
        if ((rax_2 ^ 1) | rax_6) != 0
        {
            let var_40: *mut i64;
            let mut r14_3: *mut i64 = var_40;
            let mut i_2: i64 = var_38 << 6;
            let mut rbp_1: i8 = 0;
            let mut r12_1: *mut i64 = r14_3;
            let mut i: i64;
            
            do
            {
                if alacritty::config::bindings::Binding$LT$T$GT$::is_triggered_by::h66634300bdaa8c9a(r12_1, rax_1, rax_3, arg2, arg3) != 0
                {
                    rbp_1 = 1;
                    _$LT$alacritty..config..bindings..Action$u20$as$u20$alacritty..input..Execute$LT$T$GT$$GT$::execute::hbc4eac16f06c9ab7(r12_1, arg1);
                }
                
                r12_1 = &r12_1[8];
                i = i_2;
                i_2 -= 0x40;
            } while i != 0x40;
            
            if ((!(rax_2 & rax_6) | rbp_1) & 1) == 0 && var_38 != 0
            {
                let mut i_3: i64 = var_38 << 6;
                let mut i_1: i64;
                
                do
                {
                    if alacritty::config::bindings::Binding$LT$T$GT$::is_triggered_by::h66634300bdaa8c9a(r14_3, rax_1, rax_3 & 0x920, arg2, arg3) != 0
                    {
                        _$LT$alacritty..config..bindings..Action$u20$as$u20$alacritty..input..Execute$LT$T$GT$$GT$::execute::hbc4eac16f06c9ab7(r14_3, arg1);
                    }
                    
                    r14_3 = &r14_3[8];
                    i_1 = i_3;
                    i_3 -= 0x40;
                } while i_1 != 0x40;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alacritty..config..bindings..Binding$LT$winit..event..MouseButton$GT$$GT$$GT$::hbbeb5ea571877f44(&var_48)
}
