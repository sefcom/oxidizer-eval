
  int64_t uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t* arg6, void* arg7)

{
    int64_t var_a8 = arg2;
    int64_t var_a0 = arg3;
    int64_t var_b0 = -0x8000000000000000;
    int64_t var_90 = arg4;
    int64_t var_88 = arg5;
    int64_t var_98 = -0x8000000000000000;
    int64_t rax;
    int64_t rdx_1;
    rax = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::strip_prefix::hb9f69e5c74ed4ad0(arg2, arg3, 
        arg4);
    int64_t rbp;
    
    if (!rax)
    {
        rbp = 0;
        label_4cda7f:
        arg1[1] = rbp;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(
            &var_b0);
    }
    else
    {
        if (arg7)
            uu_env::debug_print_args::hc6b0deb8b4ab006f(*(arg7 + 8), *(arg7 + 0x10));
        
        int64_t var_80;
        uu_env::parse_args_from_str::ha63b8bbceed9831c(&var_80, rax);
        int64_t rdx_3 = var_80;
        int64_t var_78;
        int64_t var_70;
        
        if (rdx_3 != -0x8000000000000000)
        {
            int64_t var_68 = rdx_3;
            int64_t var_60_1 = var_78;
            int64_t var_58_1 = var_70;
            void var_50;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hbb87e87a26a4d03d(&var_50, &var_68);
            rbp = 1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h4dff720d83742dfa(arg6, &var_50);
            goto label_4cda7f;
        }
        
        *arg1 = var_78;
        arg1[1] = var_70;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(
            &var_b0);
    }
    return 
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(
        &var_98);
}
