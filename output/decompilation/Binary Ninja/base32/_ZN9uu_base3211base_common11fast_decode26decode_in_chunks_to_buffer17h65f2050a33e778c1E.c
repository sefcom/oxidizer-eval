
  int64_t uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::h65f2050a33e778c1(int64_t arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7, int64_t* arg8)

{
    int64_t r13 = arg6;
    int64_t i;
    int64_t rbp_1;
    
    if (!arg4)
    {
        rbp_1 = *(arg2 + 0x20);
        label_4c4f11:
        void var_58;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::hc443a03f678429ff(&var_58, arg5, 
            r13, arg3);
        
        do
        {
            int64_t rax_4;
            int64_t rdx_5;
            rax_4 = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdcf811b65d811e47(&var_58);
            
            if (!rax_4)
            {
                int64_t var_48;
                int64_t var_40;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6a1402b86cdf1413(arg8, var_48, var_40 + var_48);
                return 0;
            }
            
            if (rdx_5 != arg3)
            {
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: sl.len() == de…");
                /* no return */
            }
            
            i = rbp_1(arg1, rax_4, arg3, arg7);
        } while (!i);
    }
    else
    {
        if (arg4 > r13)
        {
            void** const var_88 = &data_549b48;
            int64_t var_80 = 1;
            int64_t var_78 = 8;
            int128_t var_70 = {0};
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_88);
            /* no return */
        }
        
        int64_t var_a8;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::he6f6165f889f215d(&var_a8, 
            arg5, r13, arg4);
        int64_t rsi_1 = var_a8;
        int64_t var_90;
        r13 = var_90;
        int64_t var_a0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6a1402b86cdf1413(arg8, rsi_1, var_a0 + rsi_1);
        
        if (arg8[2] != arg3)
        {
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: leftover_buffe…");
            /* no return */
        }
        
        rbp_1 = *(arg2 + 0x20);
        i = rbp_1(arg1, arg8[1], arg3, arg7);
        
        if (!i)
        {
            arg8[2] = 0;
            int64_t var_98;
            arg5 = var_98;
            goto label_4c4f11;
        }
    }
    return i;
}
