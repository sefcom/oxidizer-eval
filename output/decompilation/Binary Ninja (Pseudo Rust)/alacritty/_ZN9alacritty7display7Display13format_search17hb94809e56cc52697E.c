
  fn alacritty::display::Display::format_search::hb94809e56cc52697(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i8, arg5: u64, arg6: i64) -> i64

{
    let mut result: i64;
    let mut zmm0: i128;
    let mut var_58: i128;
    
    if arg5 <= arg6
    {
        let mut var_70: i128;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_70, arg4, arg5);
        alacritty::string::StrShortener::new::hcb4d209a7d9df863(&var_58, arg2, arg3, arg6 + !arg5, 
            0);
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..Extend$LT$char$GT$$GT$::extend::h3067557f430c71d9(&var_70, &var_58);
        alloc::string::String::push::h0ede46164189e411(&var_70, 0x20);
        let result_1: i64;
        result = result_1;
        arg1[1] = result;
        zmm0 = var_70;
    }
    else
    {
        let mut rax: i64;
        let mut rdx_1: u64;
        rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg6, arg4, arg5);
        
        if rax == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg4, arg5, 0, arg6);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_58, rax, rdx_1);
        let result_2: i64;
        result = result_2;
        arg1[1] = result;
        zmm0 = var_58;
    }
    *arg1 = zmm0;
    result
}
