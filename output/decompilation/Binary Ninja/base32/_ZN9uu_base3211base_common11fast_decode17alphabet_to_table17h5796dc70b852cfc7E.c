
  int64_t uu_base32::base_common::fast_decode::alphabet_to_table::h5796dc70b852cfc7(int64_t arg1, int64_t arg2, int64_t arg3, int32_t arg4)

{
    int128_t s;
    int64_t var_130;
    
    if (!arg4)
    {
        __builtin_memset(&s, 1, 0x100);
        var_130 = 0;
        int64_t var_128_1 = 2;
        int16_t var_120_1 = 0xd0a;
        
        while (true)
        {
            char rax_2;
            char rdx_1;
            rax_2 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd1264c7489ab82f(&var_130);
            
            if (!(rax_2 & 1))
            {
                core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$u8$C$2_usize$GT$$GT$::h9ff64d9a32df343b();
                break;
            }
            
            uint64_t rax_3 = rdx_1;
            
            if (!*(&s + rax_3))
            {
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: table[us]asser…");
                /* no return */
            }
            
            *(&s + rax_3) = 0;
        }
    }
    else
    {
        __builtin_memset(&s, 0, 0x100);
        var_130 = arg2;
        int64_t var_128 = arg3 + arg2;
        
        for (char* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha61c831695091875(&var_130); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha61c831695091875(&var_130))
        {
            uint64_t rax_1 = *i;
            
            if (*(&s + rax_1))
            {
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: !table[us]asse…");
                /* no return */
            }
            
            *(&s + rax_1) = 1;
        }
    }
    memcpy(arg1, &s, 0x100);
    return arg1;
}
