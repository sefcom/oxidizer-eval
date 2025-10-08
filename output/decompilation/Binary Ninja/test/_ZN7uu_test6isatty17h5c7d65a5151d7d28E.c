
  int32_t uu_test::isatty::h5c7d65a5151d7d28(int64_t* arg1, char* arg2, int64_t arg3)

{
    int32_t var_50;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_50, arg2, arg3);
    int32_t result;
    
    if (var_50 == 1)
    {
        label_4597d7:
        var_50 = 1;
        char* var_48_1 = arg2;
        int64_t var_40_1 = arg3;
        char var_38_1 = 1;
        int32_t result_1;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h47d193bf63b6bc9a(
            &result_1, &var_50);
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
        int64_t rax_1 =
            core::num::_$LT$impl$u20$i32$GT$::from_ascii_radix::h8c416a74051ba1e6(var_48, var_40);
        
        if (rax_1 & 1)
            goto label_4597d7;
        
        result = isatty(rax_1 >> 0x20);
        arg1[1] = result == 1;
        *arg1 = 7;
    }
    
    return result;
}
