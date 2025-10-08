
  int64_t uu_env::check_and_handle_string_args::h6c65360a0996fb8b(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t* arg6, void* arg7)

{
    int64_t rax = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::strip_prefix::h4d1b596244633077(arg2, 
        arg3, arg4);
    
    if (!rax)
    {
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::h15ea386f8666c9ee(
            -0x8000000000000000, arg4);
        arg1[1] = 0;
        *arg1 = 0;
    }
    else
    {
        if (arg7)
            uu_env::debug_print_args::h9262afd3814fa2d4(*(arg7 + 8), *(arg7 + 0x10));
        
        int64_t var_80;
        uu_env::parse_args_from_str::h7321538c7ee458d0(&var_80, rax);
        int64_t rdx_1 = var_80;
        int64_t var_78;
        int64_t var_70;
        
        if (rdx_1 != -0x8000000000000000)
        {
            int64_t var_68 = rdx_1;
            int64_t var_60_1 = var_78;
            int64_t var_58_1 = var_70;
            void var_50;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9be0cdd5a10fc421(&var_50, &var_68);
            alloc::vec::Vec$LT$T$C$A$GT$::extend_trusted::hbfaa2ff09f4ba739(arg6, &var_50);
            arg1[1] = 1;
            *arg1 = 0;
        }
        else
        {
            *arg1 = var_78;
            arg1[1] = var_70;
        }
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::h15ea386f8666c9ee(
            -0x8000000000000000, arg4);
    }
    
    /* tailcall */
    return
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::h15ea386f8666c9ee(
        -0x8000000000000000, arg2);
}
