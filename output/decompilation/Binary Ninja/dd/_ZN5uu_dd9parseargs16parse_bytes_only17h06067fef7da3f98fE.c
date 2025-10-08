
  int64_t uu_dd::parseargs::parse_bytes_only::h06067fef7da3f98f(int64_t* arg1, char* arg2, uint64_t arg3, int64_t arg4)

{
    char* rax;
    int64_t rdx;
    rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg4, arg2, arg3);
    
    if (!rax)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, 0, arg4);
        /* no return */
    }
    
    char var_30;
    core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_30, rax, rdx);
    int64_t result;
    
    if (!var_30)
    {
        int64_t var_28;
        arg1[1] = var_28;
        result = 0xe;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&arg1[1], arg2, arg3);
        result = 7;
    }
    
    *arg1 = result;
    return result;
}
