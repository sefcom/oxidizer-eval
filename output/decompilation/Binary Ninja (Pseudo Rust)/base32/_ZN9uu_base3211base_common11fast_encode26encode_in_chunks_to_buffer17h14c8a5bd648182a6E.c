
  fn uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::h14c8a5bd648182a6(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: i64, arg7: *mut i64) -> i64

{
    let mut rbp: i64 = arg6;
    let mut rax: i64 = arg5;
    let mut var_c8: i64 = arg3;
    
    if arg4 == 0
    {
        goto 'label_469ead;
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
    _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he0a1ee24594fab2a(arg7, rsi_1, var_70 + rsi_1);
    let rax_2: i64 = arg7[3];
    let mut var_b8: i64 = rax_2;
    
    if rax_2 != arg3
    {
        var_a8 = nullptr;
        core::panicking::assert_failed::h449f2a7fe5426575(0, &var_b8, &var_c8, &var_a8);
        /* no return */
    }
    
    let mut i: i64 = arg2(arg1, 
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hf17d47ca8c7d0746(
            arg7));
    
    if i == 0
    {
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::truncate::had30ab5ba989df72(arg7);
        arg7[2] = 0;
        let var_68: i64;
        rax = var_68;
        'label_469ead:
        let mut var_58: ();
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::h851c5b7066f706dd(&var_58, rax, 
            rbp, arg3);
        
        do
        {
            let mut rax_4: i64;
            let mut rdx_4: i64;
            rax_4 = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c59ef229e894e03(&var_58);
            
            if rax_4 == 0
            {
                let var_48: i64;
                let var_40: i64;
                _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he0a1ee24594fab2a(arg7, var_48, var_40 + var_48);
                return 0;
            }
            
            let mut var_b0: i64 = rdx_4;
            
            if rdx_4 != var_c8
            {
                var_a8 = nullptr;
                core::panicking::assert_failed::h449f2a7fe5426575(0, &var_b0, &var_c8, &var_a8);
                /* no return */
            }
            
            i = arg2(arg1, rax_4);
        } while i == 0;
    }
    
    i
}
