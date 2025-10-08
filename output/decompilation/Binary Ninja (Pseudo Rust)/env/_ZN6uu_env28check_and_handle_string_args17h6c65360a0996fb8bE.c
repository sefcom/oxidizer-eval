
  fn uu_env::check_and_handle_string_args::h6c65360a0996fb8b(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut i64, arg7: *mut c_void) -> i64

{
    let rax: i64 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::strip_prefix::h4d1b596244633077(
        arg2, arg3, arg4);
    
    if rax == 0
    {
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::h15ea386f8666c9ee(
            -0x8000000000000000, arg4);
        arg1[1] = 0;
        *arg1 = 0;
    }
    else
    {
        if arg7 != 0
        {
            uu_env::debug_print_args::h9262afd3814fa2d4(*arg7.byte_offset(8), 
                *arg7.byte_offset(0x10));
        }
        
        let mut var_80: i64;
        uu_env::parse_args_from_str::h7321538c7ee458d0(&var_80, rax);
        let rdx_1: i64 = var_80;
        let var_78: i64;
        let var_70: i64;
        
        if rdx_1 != -0x8000000000000000
        {
            let mut var_68: i64 = rdx_1;
            let var_60_1: i64 = var_78;
            let var_58_1: i64 = var_70;
            let mut var_50: ();
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
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::h15ea386f8666c9ee(
        -0x8000000000000000, arg2)
}
