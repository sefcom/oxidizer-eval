
  int128_t* uu_ls::display_len_or_rdev::h54f0966b5b04a08a(int64_t* arg1, void* arg2, int64_t arg3, char arg4)

{
    int128_t* result;
    
    if (((0xb000 & *(arg2 + 0x38)) | 0x4000) != 0x6000)
    {
        if (!arg3)
        {
            core::panicking::panic_const::panic_const_div_by_zero::hc7d962fcb87948a3();
            /* no return */
        }
        
        int64_t rax_9 = *(arg2 + 0x50);
        uint64_t rax_10;
        uint64_t rdx_3;
        
        if (!((rax_9 | arg3) >> 0x20))
        {
            int32_t temp2_2 = arg3;
            rax_10 = COMBINE(0, rax_9) / temp2_2;
            rdx_3 = COMBINE(0, rax_9) % temp2_2;
        }
        else
        {
            int64_t rdx_2 = 0;
            int32_t temp2_1 = arg3;
            rax_10 = COMBINE(rdx_2, rax_9) / temp2_1;
            rdx_3 = COMBINE(rdx_2, rax_9) % temp2_1;
        }
        
        result = uu_ls::display_size::hb2e480a0d8619531(&arg1[1], rax_10 + 1, arg4);
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int64_t r14_1 = *(arg2 + 0x48);
        int128_t var_40;
        int64_t rax_6;
        uint64_t rdx;
        rax_6 = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(
            (r14_1 >> 0x20 & 0xfffff000) | (r14_1 >> 8 & 0xfff), &var_40, 0xa);
        int128_t var_58;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_58, rax_6, rdx);
        void var_22;
        int64_t rax_7;
        uint64_t rdx_1;
        rax_7 = core::fmt::num::imp::_$LT$impl$u20$u32$GT$::_fmt::hcfe26aa883005358(
            (r14_1 >> 0xc & 0xffffff00) | r14_1, &var_22, 0xa);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(&var_40, rax_7, rdx_1);
        int64_t var_30;
        arg1[5] = var_30;
        *(arg1 + 0x18) = var_40;
        int128_t* result_1;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_58;
    }
    
    return result;
}
