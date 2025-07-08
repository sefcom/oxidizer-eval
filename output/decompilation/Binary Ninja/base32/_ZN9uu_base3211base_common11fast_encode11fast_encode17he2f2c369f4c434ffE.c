
  int128_t* uu_base32::base_common::fast_encode::fast_encode::he2f2c369f4c434ff(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4, int64_t arg5, int64_t arg6)

{
    int64_t var_c8 = arg2;
    int64_t r15_1 = (*(arg4 + 0x30))(arg3) << 0xa;
    
    if (!r15_1)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: encode_in_chun…");
        /* no return */
    }
    
    int64_t var_100;
    
    if (!arg5)
    {
        var_100 = 0;
        int64_t var_f8_2 = 1;
        int64_t var_f0_2 = 0;
        int64_t var_e8_2 = 0x4c;
    }
    else if (!arg6)
        var_100 = -0x8000000000000000;
    else
    {
        var_100 = 0;
        int64_t var_f8_1 = 1;
        int64_t var_f0_1 = 0;
        int64_t var_e8_1 = arg6;
    }
    
    void var_c0;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::hef424161f497c89e(
        &var_c0);
    int64_t var_b0;
    int64_t rcx = var_b0;
    
    if (!rcx)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: !input_buffer.…");
        /* no return */
    }
    
    int64_t var_a8 = 0;
    int128_t s;
    __builtin_memset(&s, 0, 0x18);
    int64_t var_a0 = 1;
    int128_t var_78 = {0};
    int64_t var_80 = 1;
    int64_t r13 = *arg1;
    void* rbp = arg1[1];
    void** const var_e0 = &data_5468f8;
    int64_t var_88;
    int128_t* result;
    
    while (true)
    {
        int64_t var_b8;
        int64_t rax_1;
        void** rdx_1;
        rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h47ae2d6432a5f7b4(r13, rbp, var_b8, rcx);
        
        if (rax_1)
        {
            int128_t var_48;
            uu_base32::base_common::format_read_error::h8e4fcbf99236ba5f(&var_48, 
                std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_1));
            int32_t var_50_1 = 1;
            int128_t var_68 = var_48;
            int64_t var_38;
            int64_t var_58_1 = var_38;
            result = alloc::boxed::Box$LT$T$GT$::new::h24c3b22d1586a670(&var_68);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4172b98dff79a5a1(rdx_1);
            break;
        }
        
        int128_t* result_2;
        void** rdx_7;
        
        if (!rdx_1)
        {
            int128_t* result_3;
            result_3 = (*(arg4 + 0x28))(arg3, 
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h31f2209311368518(&var_a8));
            result = result_3;
            
            if (result_3)
                break;
            
            if (!uu_base32::base_common::fast_encode::write_to_output::h5f7916e193db6f77(&var_100, 
                &var_88, &var_c8, &data_546890, 1))
            {
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$u8$GT$$GT$::h874bc9c36ea52246(&var_88);
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$u8$GT$$GT$::h874bc9c36ea52246(&var_a8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(
                    &var_c0);
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_base32..base_common..fast_encode..LineWrapping$GT$$GT$::h4fb2dff8abbfc10a(&var_100);
                return nullptr;
            }
            
            result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
        else
        {
            int64_t rax_2;
            int64_t rdx_3;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc824ce28ebfb8e30(rdx_1, var_b8, var_b0);
            int64_t rcx_2 = r15_1 - *s[8];
            
            if (rcx_2 <= rdx_1)
            {
                int128_t* result_1;
                result_1 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::h2c86eb655e89e74f(arg3, arg4, r15_1, rcx_2, rax_2, rdx_3, &var_88, &var_a8);
                result = result_1;
                
                if (result_1)
                    break;
                
                if (*s[8] >= r15_1)
                {
                    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: leftover_buffe…");
                    /* no return */
                }
                
                if (!uu_base32::base_common::fast_encode::write_to_output::h5f7916e193db6f77(
                    &var_100, &var_88, &var_c8, &data_546890, 0))
                {
                    rcx = var_b0;
                    continue;
                }
            }
            else
            {
                _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h253d70056d378ecd(&var_a8, rax_2, rax_2 + rdx_3);
                
                if (*s[8] < r15_1)
                {
                    rcx = var_b0;
                    continue;
                }
                
                var_e0 = &data_546910;
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: leftover_buffe…");
                /* no return */
            }
            
            result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
        result = result_2;
        break;
    }
    
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$u8$GT$$GT$::h874bc9c36ea52246(&var_88);
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$u8$GT$$GT$::h874bc9c36ea52246(&var_a8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&var_c0);
    core::ptr::drop_in_place$LT$core..option..Option$LT$uu_base32..base_common..fast_encode..LineWrapping$GT$$GT$::h4fb2dff8abbfc10a(&var_100);
    return result;
}
