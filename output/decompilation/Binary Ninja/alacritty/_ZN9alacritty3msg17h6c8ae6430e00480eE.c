
  int64_t alacritty::msg::h6c8ae6430e00480e(int64_t* arg1)

{
    int64_t r14 = -0x8000000000000000;
    
    if (*arg1 > -0x7fffffffffffffff)
    {
        int32_t var_48;
        std::env::var::h6dfe92363d5ba5ff(&var_48, "XDG_ACTIVATION_TOKENDESKTOP_STAR…");
        int128_t var_28;
        int128_t var_68;
        
        if (var_48 != 1)
        {
            var_68 = var_48;
            
            if (var_68 & 1)
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::ha9e0b10d03171307(&var_68);
            else
            {
                r14 = *var_68[8];
                int128_t var_38;
                var_28 = var_38;
            }
        }
        else
        {
            void var_40;
            alacritty::msg::_$u7b$$u7b$closure$u7d$$u7d$::hf2625e4c89e1ca61(&var_68, &var_40);
            
            if (!(var_68 & 1))
            {
                r14 = *var_68[8];
                int128_t var_58;
                var_28 = var_58;
            }
            else
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::ha9e0b10d03171307(&var_68);
        }
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6a0f98c288fb7106(&arg1[0x13]);
        arg1[0x13] = r14;
        *(arg1 + 0xa0) = var_28;
    }
    
    char const (** rax)[0xae] = alacritty::ipc::send_message::hc4ebc7a84409f3fc(&arg1[0x16], arg1);
    
    if (!rax)
        return 0;
    
    /* tailcall */
    return alloc::boxed::Box$LT$T$GT$::new::h1f73520aeb5db4e5(rax);
}
