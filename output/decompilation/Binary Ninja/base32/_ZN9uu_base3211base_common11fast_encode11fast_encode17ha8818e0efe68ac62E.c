
  uint64_t uu_base32::base_common::fast_encode::fast_encode::ha8818e0efe68ac62(int64_t arg1, void* arg2, int64_t arg3, void* arg4, int64_t arg5, void* arg6, char arg7, int64_t arg8)

{
    int64_t r13_1 = (*(arg6 + 0x30))(arg5) << 0xa;
    
    if (!r13_1)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: encode_in_chun…");
        /* no return */
    }
    
    int64_t var_f8;
    int64_t var_f0;
    
    if (!(arg7 & 1))
    {
        var_f8 = 0;
        var_f0 = 1;
        int64_t var_e8_2 = 0;
        int64_t var_e0_2 = 0x4c;
    }
    else if (!arg8)
        var_f8 = -0x8000000000000000;
    else
    {
        var_f8 = 0;
        var_f0 = 1;
        int64_t var_e8_1 = 0;
        int64_t var_e0_1 = arg8;
    }
    
    int64_t var_a0;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h78859eff97be190c(
        &var_a0);
    int64_t var_90;
    int64_t rbp = var_90;
    
    if (!rbp)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: !input_buffer.…");
        /* no return */
    }
    
    int64_t var_c0 = 0;
    int128_t var_b0 = {0};
    int64_t var_b8 = 1;
    int64_t var_88 = 0;
    int128_t var_78 = {0};
    int64_t var_80 = 1;
    int64_t rbx_1 = *(arg2 + 0x18);
    int64_t var_d0 = *(arg6 + 0x28);
    int64_t rax_2;
    rax_2 = !arg8;
    char r15_1 = arg7 & rax_2;
    int64_t rax_4 = *(arg4 + 0x38);
    
    while (true)
    {
        int64_t var_98;
        int64_t r15_2 = var_98;
        char rax_6;
        void** rdx_1;
        rax_6 = rbx_1(arg1, r15_2, rbp);
        uint64_t result;
        
        if (!(rax_6 & 1))
        {
            uint64_t result_2;
            void** rdx_7;
            
            if (!rdx_1)
            {
                uint64_t result_3;
                result_3 = var_d0(arg5, 
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hf17d47ca8c7d0746(&var_c0));
                result = result_3;
                
                if (result_3)
                    goto label_46a4e6;
                
                if (!uu_base32::base_common::fast_encode::write_to_output::ha42615d27832fe86(
                    &var_f8, &var_88, arg3, rax_4, 1, r15_1))
                {
                    result = 0;
                    goto label_46a4e6;
                }
                
                result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                result = result_2;
                goto label_46a4e6;
            }
            
            int64_t rax_8;
            int64_t rdx_3;
            rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hf9b979076e597cf4(rdx_1, r15_2, rbp);
            int64_t rcx_2 = r13_1 - *var_b0[8];
            
            if (rcx_2 <= rdx_1)
            {
                int64_t* var_110_1 = &var_c0;
                uint64_t result_1;
                result_1 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::h14c8a5bd648182a6(arg5, var_d0, r13_1, rcx_2, rax_8, rdx_3, &var_88);
                result = result_1;
                
                if (result_1)
                    goto label_46a4e6;
                
                if (*var_b0[8] >= r13_1)
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: leftover_buffe…");
                    /* no return */
                }
                
                if (uu_base32::base_common::fast_encode::write_to_output::ha42615d27832fe86(
                    &var_f8, &var_88, arg3, rax_4, 0, r15_1))
                {
                    result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    result = result_2;
                    goto label_46a4e6;
                }
            }
            else
            {
                _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he0a1ee24594fab2a(&var_c0, rax_8, rax_8 + rdx_3);
                
                if (*var_b0[8] >= r13_1)
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: leftover_buffe…");
                    /* no return */
                }
            }
        }
        else
        {
            char rax_7 = std::io::error::Error::kind::h135fe00c4e7365f3(rdx_1);
            
            if (rax_7 != 0x23)
            {
                int128_t var_48;
                uu_base32::base_common::format_read_error::hcbecd7cf3e00f2c7(&var_48, rax_7);
                int32_t var_50_1 = 1;
                int128_t var_68 = var_48;
                int64_t var_38;
                int64_t var_58_1 = var_38;
                result = alloc::boxed::Box$LT$T$GT$::new::h338aae5a226963c6(&var_68);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0226906460f1314c(rdx_1);
                r15_2 = var_98;
                label_46a4e6:
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$u8$GT$$GT$::h17b31cfa219152d8(&var_88);
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$u8$GT$$GT$::h17b31cfa219152d8(&var_c0);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7e5b3a09ccb0df01(
                    var_a0, r15_2);
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_base32..base_common..fast_encode..LineWrapping$GT$$GT$::h53f970ba90049357(var_f8, var_f0);
                return result;
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0226906460f1314c(rdx_1);
        }
        rbp = var_90;
    }
}
