
  int32_t uu_test::isatty::h35113a9be9add355(int64_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_50;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_50, arg2, arg3);
    int32_t result;
    
    if (var_50)
    {
        label_4ad495:
        var_50 = 1;
        char* var_48_1 = arg2;
        int64_t var_40_1 = arg3;
        char var_38_1 = 1;
        int32_t result_1;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h0530b763d48a6791(&result_1, 
            &var_50);
        result = result_1;
        int32_t var_1c;
        *(arg1 + 0x1c) = var_1c;
        int128_t var_2c;
        *(arg1 + 0xc) = var_2c;
        *arg1 = 5;
        arg1[1] = result;
    }
    else
    {
        char* var_48;
        int64_t var_40;
        int64_t rax_1 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$i32$GT$::from_str::h5b8351ce1d7a5cac(var_48, var_40);
        
        if (rax_1 & 1)
            goto label_4ad495;
        
        result = isatty(rax_1 >> 0x20);
        arg1[1] = result == 1;
        *arg1 = 7;
    }
    
    return result;
}
