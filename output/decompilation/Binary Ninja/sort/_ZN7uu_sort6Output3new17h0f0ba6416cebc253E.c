
  int64_t* uu_sort::Output::new::h0f0ba6416cebc253(int64_t* arg1, int64_t arg2, uint64_t arg3, uint64_t arg4 @ rbp)

{
    uint64_t var_8 = arg4;
    int64_t r12 = -0x8000000000000000;
    
    if (!arg2)
        goto label_51e4da;
    
    int64_t var_d8 = 0x1b600000000;
    int32_t var_d0_1 = 0;
    int16_t var_cc_1 = 0;
    *var_d0_1[1] = 1;
    var_cc_1 = 1;
    int32_t var_c8;
    std::fs::OpenOptions::open::h2cdbe8cd70abf308(&var_c8, &var_d8, arg2);
    int64_t var_b8;
    
    if (!var_c8)
    {
        int32_t var_c4;
        arg4 = var_c4;
        int32_t var_dc_1 = arg4;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(&var_b8, 
            arg2, arg3);
        r12 = var_b8;
        int128_t var_b0;
        int128_t var_38 = var_b0;
        label_51e4da:
        *arg1 = r12;
        *(arg1 + 8) = var_38;
        arg1[3] = arg4;
    }
    else
    {
        int64_t var_c0;
        char var_78;
        uu_sort::Output::new::_$u7b$$u7b$closure$u7d$$u7d$::hb3d002288addb3b9(&var_78, arg2, arg3, 
            var_c0);
        char var_75;
        *var_b8[3] = var_75;
        int16_t var_77;
        *var_b8[1] = var_77;
        int128_t var_70;
        int128_t var_b0_1 = var_70;
        int128_t var_60;
        int128_t var_a0_1 = var_60;
        int128_t var_50;
        int128_t var_90_1 = var_50;
        int64_t var_40;
        int64_t var_80_1 = var_40;
        var_b8 = var_78;
        int32_t var_74;
        *var_b8[4] = var_74;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_b8);
        arg1[2] = &data_5ff678;
        *arg1 = -0x7fffffffffffffff;
    }
    return arg1;
}
