
  fn uu_base32::base_common::fast_decode::alphabet_to_table::h5796dc70b852cfc7(arg1: i64, arg2: i64, arg3: i64, arg4: i32) -> i64

{
    let mut s: i128;
    let mut var_130: i64;
    
    if arg4 == 0
    {
        __builtin_memset(&s, 1, 0x100);
        var_130 = 0;
        let var_128_1: i64 = 2;
        let var_120_1: i16 = 0xd0a;
        
        loop
        {
            let mut rax_2: i8;
            let mut rdx_1: i8;
            rax_2 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfd1264c7489ab82f(&var_130);
            
            if (rax_2 & 1) == 0
            {
                core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$u8$C$2_usize$GT$$GT$::h9ff64d9a32df343b();
                break;
            }
            
            let rax_3: u64 = rdx_1;
            
            if *(&s).byte_offset(rax_3) == 0
            {
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: table[us]asser…");
                /* no return */
            }
            
            *(&s).byte_offset(rax_3) = 0;
        }
    }
    else
    {
        __builtin_memset(&s, 0, 0x100);
        var_130 = arg2;
        let var_128: i64 = arg3 + arg2;
        
        for let mut i: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha61c831695091875(&var_130); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha61c831695091875(&var_130)
        {
            let rax_1: u64 = *i;
            
            if *(&s).byte_offset(rax_1) != 0
            {
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: !table[us]asse…");
                /* no return */
            }
            
            *(&s).byte_offset(rax_1) = 1;
        }
    }
    memcpy(arg1, &s, 0x100);
    arg1
}
