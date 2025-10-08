
  int64_t* just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::convert_native_path::hec5bfed77aedfe82(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, char* arg5, int64_t arg6)

{
    int32_t var_20;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_20, arg5, arg6);
    int64_t rax;
    
    if (var_20 != 1)
    {
        int64_t var_18;
        uint64_t var_10;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_20, var_18, var_10);
        int64_t rax_1 = var_20;
        *(arg1 + 0x10) = var_18;
        arg1[1] = rax_1;
        rax = 0;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&arg1[1], "Error getting current directory:…", 0x35);
        rax = 1;
    }
    
    *arg1 = rax;
    return arg1;
}
