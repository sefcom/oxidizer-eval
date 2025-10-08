
  int64_t bat::syntax_mapping::make_glob_matcher::hb323052747e788f0(int64_t* arg1, int64_t arg2)

{
    int64_t var_70 = arg2;
    int64_t rdx;
    int64_t var_68 = rdx;
    int32_t var_60 = 0x10101;
    int64_t var_108;
    globset::glob::GlobBuilder::build::h3efb1676d63a8e5a(&var_108, &var_70);
    int64_t rax = var_108;
    int128_t var_100;
    int128_t var_f0;
    int128_t var_e0;
    
    if (-(rax) == -0x8000000000000000)
    {
        *var_108[7] = var_100;
        arg1[1] = 5;
        *(arg1 + 9) = var_108;
        *(arg1 + 0x19) = var_f0;
        *(arg1 + 0x29) = var_e0;
        arg1[7] = *var_e0[7];
        *arg1 = -0x8000000000000000;
        return rax;
    }
    
    int64_t var_c0;
    int64_t var_10 = var_c0;
    int128_t var_d0;
    int128_t var_20 = var_d0;
    int128_t var_50 = var_100;
    int128_t var_40 = var_f0;
    int128_t var_30 = var_e0;
    int64_t var_58 = rax;
    globset::glob::Glob::compile_matcher::hb9daa784a9bbb83d(&var_108, &var_58);
    int64_t rax_1 = core::ptr::drop_in_place$LT$globset..glob..Glob$GT$::ha01b8c20b49d9ad9(&var_58);
    int128_t var_b8;
    *(arg1 + 0x50) = var_b8;
    *(arg1 + 0x40) = var_d0;
    int128_t zmm0_1 = var_108;
    *(arg1 + 0x30) = var_e0;
    *(arg1 + 0x20) = var_f0;
    *(arg1 + 0x10) = var_100;
    *arg1 = zmm0_1;
    return rax_1;
}
