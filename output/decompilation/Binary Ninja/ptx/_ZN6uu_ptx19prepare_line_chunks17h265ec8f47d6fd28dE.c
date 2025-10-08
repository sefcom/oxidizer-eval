
  int64_t uu_ptx::prepare_line_chunks::h265ec8f47d6fd28d(int128_t* arg1, void* arg2, int64_t arg3, int64_t arg4, char* arg5, int64_t arg6, int32_t arg7[0x4] @ zmm0, int64_t arg8, int64_t arg9, char* arg10, int64_t arg11)

{
    char* rax;
    int64_t rdx_1;
    rax = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(arg3, arg5, arg6);
    
    if (!rax)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg5, arg6, 0, arg3);
        /* no return */
    }
    
    void* r12_1 = &rax[rdx_1];
    int64_t rax_1;
    int32_t zmm0[0x4];
    rax_1 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax, r12_1, arg7);
    void* rax_2;
    uint64_t rdx_3;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(arg3, arg4, arg5, arg6);
    
    if (!rax_2)
    {
        core::str::slice_error_fail::h1a2885084e28d077(arg5, arg6, arg3, arg4);
        /* no return */
    }
    
    int64_t rbp_1 = arg9;
    int64_t rax_3;
    int32_t zmm0_1[0x4];
    rax_3 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax_2, rax_2 + rdx_3, zmm0);
    int64_t r15_2 = rax_3 + rax_1;
    int64_t rax_9;
    int64_t rdx_8;
    int64_t r13_1;
    
    if (!*(arg2 + 0x5a))
    {
        rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(0, rax_1, arg8, rbp_1);
        r13_1 = arg8;
    }
    else
    {
        int64_t r14_2 = rbp_1;
        int64_t rax_5 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax, r12_1, zmm0_1);
        rbp_1 = r14_2;
        int64_t rax_6;
        int64_t rdx_5;
        rax_6 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h0b3398452a83d790(rax, rdx_1, 
            arg10, arg11);
        char* rax_7;
        void* rdx_6;
        int32_t zmm0_2[0x4];
        rax_7 =
            core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h4916abcead74b5de(rax_6, rdx_5);
        r13_1 = arg8;
        rax_9 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(
            rax_5 - _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax_7, rdx_6 + rax_7, zmm0_2), 
            rax_5, r13_1, r14_2);
    }
    
    int128_t var_a8;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he9e3a9b23988b07f(&var_a8, rax_2, rdx_3);
    
    if (rbp_1 < r15_2)
    {
        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(r15_2, rbp_1);
        /* no return */
    }
    
    int64_t result;
    int128_t var_90;
    uu_ptx::get_output_chunks::h0c2bb66b7373631a(&var_90, rax_9, rdx_8, result, 
        (r15_2 << 2) + r13_1, rbp_1 - r15_2, arg2);
    int64_t var_80;
    arg1[1] = var_80;
    *arg1 = var_90;
    int64_t var_68;
    *(arg1 + 0x28) = var_68;
    int128_t var_78;
    *(arg1 + 0x18) = var_78;
    int64_t var_50;
    *(arg1 + 0x58) = var_50;
    int128_t var_60;
    *(arg1 + 0x48) = var_60;
    int64_t var_38;
    arg1[7] = var_38;
    int128_t var_48;
    arg1[6] = var_48;
    arg1[4] = result;
    arg1[3] = var_a8;
    return result;
}
