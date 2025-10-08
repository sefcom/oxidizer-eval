
  int64_t* uu_sort::Output::new::h911849d79fe47e41(int64_t* arg1, int64_t arg2, uint64_t arg3, uint64_t arg4 @ rbp)

{
    uint64_t var_8 = arg4;
    int64_t r12 = -0x8000000000000000;
    
    if (!arg2)
        goto label_4d041f;
    
    int64_t var_d8 = 0x1b600000000;
    int32_t var_d0_1 = 0;
    int16_t var_cc_1 = 0;
    *var_d0_1[1] = 1;
    var_cc_1 = 1;
    int32_t var_c8;
    std::fs::OpenOptions::open::h0d3ef205fa11a490(&var_c8, &var_d8, arg2);
    int64_t var_b8;
    int128_t var_b0;
    
    if (var_c8 != 1)
    {
        int32_t var_c4;
        arg4 = var_c4;
        int32_t var_dc_1 = arg4;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_b8, arg2, arg3);
        r12 = var_b8;
        int128_t var_78 = var_b0;
        label_4d041f:
        *arg1 = r12;
        *(arg1 + 8) = var_78;
        arg1[3] = arg4;
    }
    else
    {
        int64_t var_c0;
        int64_t var_68;
        uu_sort::Output::new::_$u7b$$u7b$closure$u7d$$u7d$::ha523fa15eec4008d(&var_68, arg2, arg3, 
            var_c0);
        int32_t var_2c;
        int32_t var_7c_1 = var_2c;
        int128_t var_3c;
        int128_t var_8c_1 = var_3c;
        int128_t var_4c;
        int128_t var_9c_1 = var_4c;
        int128_t var_5c;
        var_b0 = var_5c;
        var_b8 = var_68;
        int32_t var_60;
        var_b0 = var_60;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h4da5af3d8a2f6642(&var_b8);
        arg1[2] = &data_58c448;
        *arg1 = -0x7fffffffffffffff;
    }
    return arg1;
}
