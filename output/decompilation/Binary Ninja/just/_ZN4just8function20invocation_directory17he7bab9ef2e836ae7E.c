
  int64_t* just::function::invocation_directory::he7bab9ef2e836ae7(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4)

{
    void* rax_1 = **arg2;
    int32_t var_48;
    uint64_t rdx = just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::convert_native_path::hec5bfed77aedfe82(&var_48, arg2, arg3, arg4, *(rax_1 + 0x20), *(rax_1 + 0x28));
    int128_t var_38;
    
    if (var_48 != 1)
    {
        int128_t zmm0 = var_48;
        *(arg1 + 0x10) = var_38;
        *arg1 = zmm0;
        return arg1;
    }
    
    int64_t var_18 = *var_38[8];
    int128_t var_40;
    int128_t var_28 = var_40;
    just::function::invocation_directory::_$u7b$$u7b$closure$u7d$$u7d$::h7e6e45b193e4e289(&arg1[1], 
        &var_28, rdx);
    *arg1 = 1;
    return arg1;
}
