
  int64_t* uu_wc::Inputs::try_iter::he58c0dff5beb00a3(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t rax = *arg2;
    int64_t* result;
    int64_t var_e0;
    char var_d8;
    void* const r13_1;
    int64_t* result_2;
    
    if (!rax)
    {
        var_e0 = -0x7fffffffffffffff;
        var_d8 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hb1b1f7e97a75751a(&var_e0);
        result_2 = result;
        r13_1 = &data_531000;
        label_4b8e75:
        int64_t r12_1 = -0x7ffffffffffffffe;
        int128_t var_88;
        
        if (*arg3 != -0x7ffffffffffffffe)
        {
            result = core::ops::function::FnOnce::call_once::h817deecf557940d0(&var_e0, arg3);
            r12_1 = var_e0;
            var_88 = var_d8;
        }
        
        *arg1 = r12_1;
        *(arg1 + 8) = var_88;
        arg1[3] = result_2;
        arg1[4] = r13_1;
        arg1[5] = 0;
    }
    else
    {
        if (rax == 1)
        {
            int64_t rdi = arg2[2];
            result = alloc::boxed::Box$LT$T$GT$::new::hca89ae0b97a778fb(rdi, rdi + arg2[3] * 0x18);
            result_2 = result;
            r13_1 = &data_531038;
            goto label_4b8e75;
        }
        
        if (arg2[1] == -0x7fffffffffffffff)
        {
            uu_wc::files0_iter_stdin::h027d8be6f7e7f770(&var_e0);
            result = alloc::boxed::Box$LT$T$GT$::new::hf248821590b359db(&var_e0);
            result_2 = result;
            r13_1 = &data_5310a8;
            goto label_4b8e75;
        }
        
        uu_wc::files0_iter_file::h4e3b8ab8e030dfca(&var_e0, arg2[2], arg2[3]);
        int64_t rdx_1 = var_e0;
        result = var_d8;
        int64_t var_d0;
        
        if (rdx_1 != -0x7fffffffffffffff)
        {
            int64_t var_98;
            int64_t var_30_1 = var_98;
            int128_t var_a8;
            int128_t var_40_1 = var_a8;
            int128_t var_b8;
            int128_t var_50_1 = var_b8;
            int128_t var_c8;
            int128_t var_60_1 = var_c8;
            int64_t var_78 = rdx_1;
            int64_t* result_1 = result;
            int64_t var_68_1 = var_d0;
            result = alloc::boxed::Box$LT$T$GT$::new::h8a205305a0670f0b(&var_78);
            result_2 = result;
            r13_1 = &data_531070;
            goto label_4b8e75;
        }
        
        arg1[1] = result;
        arg1[2] = var_d0;
        *arg1 = -0x7ffffffffffffffd;
    }
    return result;
}
