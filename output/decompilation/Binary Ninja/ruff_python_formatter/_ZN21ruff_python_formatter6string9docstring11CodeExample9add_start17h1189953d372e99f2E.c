
  int64_t ruff_python_formatter::string::docstring::CodeExample::add_start::h1189953d372e99f2(int64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    void** const var_138;
    
    if (*arg1 != -0x7ffffffffffffffd)
    {
        var_138 = &data_97f1b8;
        int64_t var_130_1 = 1;
        int64_t var_128 = 8;
        int128_t var_120_4 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_138);
        /* no return */
    }
    
    int64_t var_e8;
    ruff_python_formatter::string::docstring::CodeExampleDoctest::new::ha37bb5f7affe40a9(&var_e8, 
        arg2);
    
    if (var_e8 != -0x8000000000000000)
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
        *arg1 = -0x8000000000000000;
        *(arg1 + 8) = var_e8;
        int128_t var_d8;
        *(arg1 + 0x18) = var_d8;
        int64_t var_c8;
        arg1[5] = var_c8;
        var_138 = -0x8000000000000004;
    }
    else
    {
        int64_t var_e0;
        core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_e0);
        char* r13_1 = *arg2;
        int64_t var_80;
        ruff_python_formatter::string::docstring::CodeExampleRst::new::hc135c1e9a1007edc(&var_80, 
            r13_1, arg2[1]);
        int64_t var_130;
        
        if (var_80 != -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
            int128_t var_40;
            *(arg1 + 0x40) = var_40;
            int128_t zmm0_2 = var_80;
            int128_t var_50;
            *(arg1 + 0x30) = var_50;
            int128_t var_60;
            *(arg1 + 0x20) = var_60;
            int128_t var_70;
            *(arg1 + 0x10) = var_70;
            *arg1 = zmm0_2;
            int64_t var_110_2 = arg2[4];
            int128_t var_120_2 = *(arg2 + 0x10);
            var_130 = *arg2;
            var_138 = -0x8000000000000003;
        }
        else
        {
            int64_t var_78;
            core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_78);
            int64_t var_c0;
            ruff_python_formatter::string::docstring::CodeExampleMarkdown::new::h1a5e52a692fa8785(
                &var_c0, r13_1);
            
            if (var_c0 != -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleKind$GT$$GT$::hdf0c40b776d81420(arg1);
                *arg1 = -0x7ffffffffffffffe;
                *(arg1 + 8) = var_c0;
                int128_t var_b0;
                *(arg1 + 0x18) = var_b0;
                int128_t var_a0;
                *(arg1 + 0x28) = var_a0;
                int128_t var_90;
                *(arg1 + 0x38) = var_90;
                int64_t var_110_3 = arg2[4];
                int128_t var_120_3 = *(arg2 + 0x10);
                var_130 = *arg2;
                var_138 = -0x8000000000000003;
            }
            else
            {
                int64_t var_b8;
                core::ptr::drop_in_place$LT$core..option..Option$LT$ruff_python_formatter..string..docstring..CodeExampleRst$GT$$GT$::h25233677e07d725e(-0x8000000000000000, var_b8);
                int64_t var_110_1 = arg2[4];
                int128_t var_120_1 = *(arg2 + 0x10);
                var_130 = *arg2;
                var_138 = -0x8000000000000003;
            }
        }
    }
    
    return alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h8415858ef55ebe0c(arg3, 
        &var_138);
}
