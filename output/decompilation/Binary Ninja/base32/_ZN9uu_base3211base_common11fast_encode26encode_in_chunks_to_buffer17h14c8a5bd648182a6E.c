
  int64_t uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::h14c8a5bd648182a6(int64_t arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t* arg7)

{
    int64_t rbp = arg6;
    int64_t rax = arg5;
    int64_t var_c8 = arg3;
    
    if (!arg4)
        goto label_469ead;
    
    void** const var_a8;
    
    if (arg4 > rbp)
    {
        var_a8 = &data_50da30;
        int64_t var_a0 = 1;
        int64_t var_98 = 8;
        int128_t var_90 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_a8);
        /* no return */
    }
    
    int64_t var_78;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::split_at_unchecked::hc6a248af15b664fb(&var_78, rax, 
        rbp, arg4);
    int64_t rsi_1 = var_78;
    int64_t var_60;
    rbp = var_60;
    int64_t var_70;
    _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he0a1ee24594fab2a(arg7, rsi_1, var_70 + rsi_1);
    int64_t rax_2 = arg7[3];
    int64_t var_b8 = rax_2;
    
    if (rax_2 != arg3)
    {
        var_a8 = nullptr;
        core::panicking::assert_failed::h449f2a7fe5426575(0, &var_b8, &var_c8, &var_a8);
        /* no return */
    }
    
    int64_t i = arg2(arg1, 
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hf17d47ca8c7d0746(
            arg7));
    
    if (!i)
    {
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::truncate::had30ab5ba989df72(arg7);
        arg7[2] = 0;
        int64_t var_68;
        rax = var_68;
        label_469ead:
        void var_58;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::h851c5b7066f706dd(&var_58, rax, 
            rbp, arg3);
        
        do
        {
            int64_t rax_4;
            int64_t rdx_4;
            rax_4 = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c59ef229e894e03(&var_58);
            
            if (!rax_4)
            {
                int64_t var_48;
                int64_t var_40;
                _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he0a1ee24594fab2a(arg7, var_48, var_40 + var_48);
                return 0;
            }
            
            int64_t var_b0 = rdx_4;
            
            if (rdx_4 != var_c8)
            {
                var_a8 = nullptr;
                core::panicking::assert_failed::h449f2a7fe5426575(0, &var_b0, &var_c8, &var_a8);
                /* no return */
            }
            
            i = arg2(arg1, rax_4);
        } while (!i);
    }
    
    return i;
}
