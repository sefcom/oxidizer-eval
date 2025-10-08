
  fn uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::hc1e583393dbb8c6e(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: i64, arg8: *mut i64) -> i64

{
    let mut rbp: i64 = arg6;
    let mut rax: i64 = arg5;
    let mut var_c8: i64 = arg3;
    
    if arg4 == 0
    {
        goto 'label_46a886;
    }
    
    let mut var_a8: *mut *mut c_void;
    
    if arg4 > rbp
    {
        var_a8 = &data_50da30;
        let var_a0: i64 = 1;
        let var_98: i64 = 8;
        let var_90: i128 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_a8);
        /* no return */
    }
    
    let mut var_78: i64;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::hc6a248af15b664fb(&var_78, rax, 
        rbp, arg4);
    let rsi_1: i64 = var_78;
    let var_60: i64;
    rbp = var_60;
    let var_70: i64;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1493bff208258dcb(arg8, rsi_1, var_70 + rsi_1);
    let rax_2: i64 = arg8[2];
    let mut var_b8: i64 = rax_2;
    
    if rax_2 != arg3
    {
        var_a8 = nullptr;
        core::panicking::assert_failed::h449f2a7fe5426575(0, &var_b8, &var_c8, &var_a8);
        /* no return */
    }
    
    let mut i: i64 = arg2(arg1, arg8[1], arg3, arg7);
    
    if i == 0
    {
        arg8[2] = 0;
        let var_68: i64;
        rax = var_68;
        'label_46a886:
        let mut var_58: ();
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::h851c5b7066f706dd(&var_58, rax, 
            rbp, arg3);
        
        do
        {
            let mut rax_3: i64;
            let mut rdx_5: i64;
            rax_3 = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c59ef229e894e03(&var_58);
            
            if rax_3 == 0
            {
                let var_48: i64;
                let var_40: i64;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1493bff208258dcb(arg8, var_48, var_40 + var_48);
                return 0;
            }
            
            let mut var_b0: i64 = rdx_5;
            
            if rdx_5 != var_c8
            {
                var_a8 = nullptr;
                core::panicking::assert_failed::h449f2a7fe5426575(0, &var_b0, &var_c8, &var_a8);
                /* no return */
            }
            
            i = arg2(arg1, rax_3);
        } while i == 0;
    }
    
    i
}
