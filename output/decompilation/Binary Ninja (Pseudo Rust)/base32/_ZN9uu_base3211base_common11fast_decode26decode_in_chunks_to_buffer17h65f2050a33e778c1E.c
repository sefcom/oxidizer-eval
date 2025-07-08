
  fn uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::h65f2050a33e778c1(arg1: i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64, arg8: *mut i64) -> i64

{
    let mut r13: i64 = arg6;
    let mut i: i64;
    let mut rbp_1: i64;
    
    if arg4 == 0
    {
        rbp_1 = *arg2.byte_offset(0x20);
        'label_4c4f11:
        let mut var_58: ();
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::hc443a03f678429ff(&var_58, arg5, 
            r13, arg3);
        
        do
        {
            let mut rax_4: i64;
            let mut rdx_5: i64;
            rax_4 = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdcf811b65d811e47(&var_58);
            
            if rax_4 == 0
            {
                let var_48: i64;
                let var_40: i64;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6a1402b86cdf1413(arg8, var_48, var_40 + var_48);
                return 0;
            }
            
            if rdx_5 != arg3
            {
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: sl.len() == de…");
                /* no return */
            }
            
            i = rbp_1(arg1, rax_4, arg3, arg7);
        } while i == 0;
    }
    else
    {
        if arg4 > r13
        {
            let mut var_88: *mut *mut c_void = &data_549b48;
            let var_80: i64 = 1;
            let var_78: i64 = 8;
            let var_70: i128 = {0};
            core::panicking::panic_fmt::he12d0d7468628bb4(&var_88);
            /* no return */
        }
        
        let mut var_a8: i64;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::he6f6165f889f215d(&var_a8, 
            arg5, r13, arg4);
        let rsi_1: i64 = var_a8;
        let var_90: i64;
        r13 = var_90;
        let var_a0: i64;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h6a1402b86cdf1413(arg8, rsi_1, var_a0 + rsi_1);
        
        if arg8[2] != arg3
        {
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: leftover_buffe…");
            /* no return */
        }
        
        rbp_1 = *arg2.byte_offset(0x20);
        i = rbp_1(arg1, arg8[1], arg3, arg7);
        
        if i == 0
        {
            arg8[2] = 0;
            let var_98: i64;
            arg5 = var_98;
            goto 'label_4c4f11;
        }
    }
    i
}
