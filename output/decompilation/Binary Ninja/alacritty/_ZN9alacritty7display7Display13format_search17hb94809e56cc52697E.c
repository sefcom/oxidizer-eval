
  int64_t alacritty::display::Display::format_search::hb94809e56cc52697(int128_t* arg1, int64_t arg2, int64_t arg3, char* arg4, uint64_t arg5, int64_t arg6)

{
    int64_t result;
    int128_t zmm0;
    int128_t var_58;
    
    if (arg5 <= arg6)
    {
        int128_t var_70;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_70, arg4, arg5);
        alacritty::string::StrShortener::new::hcb4d209a7d9df863(&var_58, arg2, arg3, arg6 + ~arg5, 
            0);
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..Extend$LT$char$GT$$GT$::extend::h3067557f430c71d9(&var_70, &var_58);
        alloc::string::String::push::h0ede46164189e411(&var_70, 0x20);
        int64_t result_1;
        result = result_1;
        arg1[1] = result;
        zmm0 = var_70;
    }
    else
    {
        int64_t rax;
        uint64_t rdx_1;
        rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg6, arg4, arg5);
        
        if (!rax)
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg4, arg5, 0, arg6);
            /* no return */
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_58, rax, rdx_1);
        int64_t result_2;
        result = result_2;
        arg1[1] = result;
        zmm0 = var_58;
    }
    *arg1 = zmm0;
    return result;
}
