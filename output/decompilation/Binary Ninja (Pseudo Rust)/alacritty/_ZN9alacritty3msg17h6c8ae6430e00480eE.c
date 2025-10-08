
  fn alacritty::msg::h6c8ae6430e00480e(arg1: *mut i64) -> i64

{
    let mut r14: i64 = -0x8000000000000000;
    
    if *arg1 > -0x7fffffffffffffff
    {
        let mut var_48: i32;
        std::env::var::h6dfe92363d5ba5ff(&var_48, "XDG_ACTIVATION_TOKENDESKTOP_STAR…");
        let mut var_28: i128;
        let mut var_68: i128;
        
        if var_48 != 1
        {
            var_68 = var_48;
            
            if (var_68 & 1) != 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::ha9e0b10d03171307(&var_68);
            }
            else
            {
                r14 = *var_68[8];
                let var_38: i128;
                var_28 = var_38;
            }
        }
        else
        {
            let mut var_40: ();
            alacritty::msg::_$u7b$$u7b$closure$u7d$$u7d$::hf2625e4c89e1ca61(&var_68, &var_40);
            
            if (var_68 & 1) == 0
            {
                r14 = *var_68[8];
                let var_58: i128;
                var_28 = var_58;
            }
            else
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::ha9e0b10d03171307(&var_68);
            }
        }
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6a0f98c288fb7106(&arg1[0x13]);
        arg1[0x13] = r14;
        *arg1.byte_offset(0xa0) = var_28;
    }
    
    let rax: *mut *mut [i8; 0xae] =
        alacritty::ipc::send_message::hc4ebc7a84409f3fc(&arg1[0x16], arg1);
    
    if rax == 0
    {
        return 0;
    }
    
    /* tailcall */
    alloc::boxed::Box$LT$T$GT$::new::h1f73520aeb5db4e5(rax)
}
