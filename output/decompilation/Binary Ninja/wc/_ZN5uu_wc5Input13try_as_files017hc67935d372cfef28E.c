
  uint64_t uu_wc::Input::try_as_files0::hc67935d372cfef28(int64_t* arg1, int64_t* arg2)

{
    int64_t var_128;
    uint64_t result_1;
    
    if (*arg2 == -0x7fffffffffffffff)
    {
        uint64_t result = uu_wc::is_stdin_small_file::hda862548f32829d1();
        
        if (!result)
            *arg1 = -0x8000000000000000;
        else
        {
            void var_78;
            uu_wc::files0_iter_stdin::h027d8be6f7e7f770(&var_78);
            core::iter::adapters::try_process::h9f74a5405c84d529(&var_128, &var_78);
            int64_t rdx_1 = var_128;
            result = result_1;
            int64_t var_118;
            
            if (rdx_1 != -0x8000000000000000)
            {
                *arg1 = rdx_1;
                arg1[1] = result;
                arg1[2] = var_118;
            }
            else
            {
                arg1[1] = result;
                arg1[2] = var_118;
                *arg1 = -0x7fffffffffffffff;
            }
        }
        
        return result;
    }
    
    std::fs::metadata::ha24470e461e4d7b2(&var_128, arg2);
    int64_t rdi_3 = var_128;
    int32_t var_f0;
    int64_t var_d8;
    uint64_t result_2;
    
    if (rdi_3 != 2 && (0xf000 & var_f0) == 0x8000 && var_d8 < 0xa00001)
    {
        int64_t var_1c8;
        uu_wc::files0_iter_file::h4e3b8ab8e030dfca(&var_1c8, arg2[1], arg2[2]);
        int64_t rdx_3 = var_1c8;
        int64_t var_1c0;
        int64_t rax_2 = var_1c0;
        int64_t var_1b8;
        int64_t rcx_2 = var_1b8;
        int64_t rdx_4;
        
        if (rdx_3 != -0x7fffffffffffffff)
        {
            int64_t var_180;
            int64_t var_130_1 = var_180;
            int128_t var_190;
            int128_t var_140_1 = var_190;
            int128_t var_1a0;
            int128_t var_150_1 = var_1a0;
            int128_t var_1b0;
            int128_t var_160_1 = var_1b0;
            int64_t var_178 = rdx_3;
            int64_t var_170_1 = rax_2;
            int64_t var_168_1 = rcx_2;
            int64_t var_1e0;
            core::iter::adapters::try_process::h5f1b943b2c05a233(&var_1e0, &var_178);
            rdx_4 = var_1e0;
            int64_t var_1d8;
            rax_2 = var_1d8;
            int64_t var_1d0;
            rcx_2 = var_1d0;
        }
        
        if (rdx_3 != -0x7fffffffffffffff && rdx_4 != -0x8000000000000000)
        {
            *arg1 = rdx_4;
            arg1[1] = rax_2;
            arg1[2] = rcx_2;
            result_2 = result_1;
        }
        else
        {
            arg1[1] = rax_2;
            arg1[2] = rcx_2;
            *arg1 = -0x7fffffffffffffff;
            result_2 = result_1;
        }
    }
    else
    {
        *arg1 = -0x8000000000000000;
        result_2 = result_1;
    }
    
    return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::hc7378430642e479d(rdi_3, result_2);
}
