
  uint64_t uu_wc::Input::try_as_files0::h87a8bdb6df7fa337(int64_t* arg1, int64_t* arg2)

{
    int64_t var_170;
    uint64_t result_1;
    int64_t var_160;
    int64_t var_d0;
    
    if (*arg2 == -0x7fffffffffffffff)
    {
        uint64_t result = uu_wc::is_stdin_small_file::h8e95ce074e5d12c9();
        
        if (!result)
            *arg1 = -0x8000000000000000;
        else
        {
            uu_wc::files0_iter_stdin::hd59bc0c5728ca01b(&var_d0);
            core::iter::traits::iterator::Iterator::collect::h9b6196a4a3d64ef8(&var_170, &var_d0);
            int64_t rdx_1 = var_170;
            result = result_1;
            
            if (rdx_1 != -0x8000000000000000)
            {
                *arg1 = rdx_1;
                arg1[1] = result;
                arg1[2] = var_160;
            }
            else
            {
                arg1[1] = result;
                arg1[2] = var_160;
                *arg1 = -0x7fffffffffffffff;
            }
        }
        
        return result;
    }
    
    std::fs::metadata::hbb43a01f12775689(&var_d0, arg2);
    int64_t rdi_3 = var_d0;
    int32_t var_98;
    int64_t var_80;
    int64_t rsi_4;
    int64_t var_c8;
    
    if (rdi_3 != 2 && (0xf000 & var_98) == 0x8000 && var_80 <= 0xa00000)
    {
        uu_wc::files0_iter_file::hc5b7d8d6cb685047(&var_170, arg2[1], arg2[2]);
        int64_t rdx_3 = var_170;
        uint64_t result_2 = result_1;
        int64_t rcx_2 = var_160;
        int64_t rdx_4;
        
        if (rdx_3 != -0x7fffffffffffffff)
        {
            int64_t var_128;
            int64_t var_d8_1 = var_128;
            int128_t var_138;
            int128_t var_e8_1 = var_138;
            int128_t var_148;
            int128_t var_f8_1 = var_148;
            int128_t var_158;
            int128_t var_108_1 = var_158;
            int64_t var_120 = rdx_3;
            uint64_t result_4 = result_2;
            int64_t var_110_1 = rcx_2;
            int64_t var_188;
            core::iter::traits::iterator::Iterator::collect::h55491619144f5cb3(&var_188, &var_120);
            rdx_4 = var_188;
            uint64_t result_3;
            result_2 = result_3;
            int64_t var_178;
            rcx_2 = var_178;
        }
        
        if (rdx_3 != -0x7fffffffffffffff && rdx_4 != -0x8000000000000000)
        {
            *arg1 = rdx_4;
            arg1[1] = result_2;
            arg1[2] = rcx_2;
            rsi_4 = var_c8;
        }
        else
        {
            arg1[1] = result_2;
            arg1[2] = rcx_2;
            *arg1 = -0x7fffffffffffffff;
            rsi_4 = var_c8;
        }
    }
    else
    {
        *arg1 = -0x8000000000000000;
        rsi_4 = var_c8;
    }
    return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h92f497ce60e154e1(rdi_3, rsi_4);
}
