
  fn uu_env::check_and_handle_string_args::h2d9cfd9650b812c7(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut i64, arg7: *mut c_void) -> i64

{
    let var_a8: i64 = arg2;
    let var_a0: i64 = arg3;
    let mut var_b0: i64 = -0x8000000000000000;
    let var_90: i64 = arg4;
    let var_88: i64 = arg5;
    let mut var_98: i64 = -0x8000000000000000;
    let mut rax: i64;
    let mut rdx_1: i64;
    rax = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::strip_prefix::hb9f69e5c74ed4ad0(arg2, arg3, 
        arg4);
    let mut rbp: i64;
    
    if rax == 0
    {
        rbp = 0;
        'label_4cda7f:
        arg1[1] = rbp;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(
            &var_b0);
    }
    else
    {
        if arg7 != 0
        {
            uu_env::debug_print_args::hc6b0deb8b4ab006f(*arg7.byte_offset(8), 
                *arg7.byte_offset(0x10));
        }
        
        let mut var_80: i64;
        uu_env::parse_args_from_str::ha63b8bbceed9831c(&var_80, rax);
        let rdx_3: i64 = var_80;
        let var_78: i64;
        let var_70: i64;
        
        if rdx_3 != -0x8000000000000000
        {
            let mut var_68: i64 = rdx_3;
            let var_60_1: i64 = var_78;
            let var_58_1: i64 = var_70;
            let mut var_50: ();
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hbb87e87a26a4d03d(&var_50, &var_68);
            rbp = 1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h4dff720d83742dfa(arg6, &var_50);
            goto 'label_4cda7f;
        }
        
        *arg1 = var_78;
        arg1[1] = var_70;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(
            &var_b0);
    }
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$$u5b$u8$u5d$$GT$$GT$::hdc3450eb31f9c716(
        &var_98)
}
