
  uint64_t uu_wc::Inputs::try_iter::he119dd3efc5b2af1(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t rax = *arg2;
    uint64_t result;
    int64_t var_e0;
    char var_d8;
    int64_t r12_1;
    void* const r13_1;
    uint64_t result_2;
    
    if (!rax)
    {
        var_e0 = -0x7fffffffffffffff;
        var_d8 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hc8f9ee86409043e7(&var_e0);
        result_2 = result;
        r13_1 = &data_4f9100;
        r12_1 = -0x7ffffffffffffffe;
        
        if (*arg3 == -0x7ffffffffffffffe)
            goto label_4652b7;
        
        label_4652a3:
        result = uu_wc::Input::as_borrowed::h5b6a21267d9a4cf1(&var_e0, arg3);
        r12_1 = var_e0;
        int128_t var_88 = var_d8;
        label_4652b7:
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
            result = alloc::boxed::Box$LT$T$GT$::new::hea3a62daa29b61e1(rdi, rdi + arg2[3] * 0x18);
            result_2 = result;
            r13_1 = &data_4f9138;
            r12_1 = -0x7ffffffffffffffe;
            
            if (*arg3 != -0x7ffffffffffffffe)
                goto label_4652a3;
            
            goto label_4652b7;
        }
        
        if (arg2[1] == -0x7fffffffffffffff)
        {
            uu_wc::files0_iter_stdin::hd59bc0c5728ca01b(&var_e0);
            result = alloc::boxed::Box$LT$T$GT$::new::h26709cbd1181a0f4(&var_e0);
            result_2 = result;
            r13_1 = &data_4f91a8;
            r12_1 = -0x7ffffffffffffffe;
            
            if (*arg3 == -0x7ffffffffffffffe)
                goto label_4652b7;
            
            goto label_4652a3;
        }
        
        uu_wc::files0_iter_file::hc5b7d8d6cb685047(&var_e0, arg2[2], arg2[3]);
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
            uint64_t result_1 = result;
            int64_t var_68_1 = var_d0;
            result = alloc::boxed::Box$LT$T$GT$::new::hc3cf6e304f3dfe6c(&var_78);
            result_2 = result;
            r13_1 = &data_4f9170;
            r12_1 = -0x7ffffffffffffffe;
            
            if (*arg3 != -0x7ffffffffffffffe)
                goto label_4652a3;
            
            goto label_4652b7;
        }
        
        arg1[1] = result;
        arg1[2] = var_d0;
        *arg1 = -0x7ffffffffffffffd;
    }
    return result;
}
