
  uint64_t uu_base32::base_common::fast_decode::fast_decode::h4656aa0145473fc1(int64_t arg1, void* arg2, int64_t arg3, void* arg4, int64_t arg5, void* arg6, char arg7)

{
    void* rax;
    int64_t rdx;
    rax = (*(arg6 + 0x18))(arg5);
    int64_t r13_2 = (*(arg6 + 0x38))(arg5) << 0xa;
    
    if (!r13_2)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: decode_in_chun…");
        /* no return */
    }
    
    void var_130;
    uu_base32::base_common::fast_decode::alphabet_to_table::h35e8b72e3b4f91ee(&var_130, rax, rdx, 
        arg7);
    int64_t var_188;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h78859eff97be190c(
        &var_188);
    int64_t var_178;
    int64_t r15_1 = var_178;
    
    if (!r15_1)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: !input_buffer.…");
        /* no return */
    }
    
    int64_t var_1f0 = 0;
    int64_t var_1e8 = 1;
    int64_t var_1e0 = 0;
    int64_t var_1d8 = 0;
    int64_t var_1d0 = 1;
    int64_t var_1c8 = 0;
    int64_t var_1c0 = 0;
    char* var_1b8 = 1;
    int64_t var_1b0 = 0;
    int64_t rbp_1 = *(arg2 + 0x18);
    int64_t rax_2 = *(arg6 + 0x20);
    int64_t rax_3 = *(arg4 + 0x38);
    
    while (true)
    {
        int64_t var_180;
        int64_t rbx_1 = var_180;
        char rax_4;
        void** rdx_3;
        rax_4 = rbp_1(arg1, rbx_1, r15_1);
        char* var_168;
        uint64_t result;
        
        if (!(rax_4 & 1))
        {
            uint64_t result_2;
            void** rdx_9;
            
            if (!rdx_3)
            {
                uint64_t result_3;
                result_3 = rax_2(arg5, var_1e8, var_1e0, &var_1d8);
                result = result_3;
                
                if (result_3)
                    goto label_46ad0e;
                
                if (uu_base32::base_common::fast_decode::write_to_output::h0fa366ee67423464(
                    &var_1d8, arg3, rax_3))
                {
                    result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    result = result_2;
                    goto label_46ad0e;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7e5b3a09ccb0df01(
                    var_1c0, var_1b8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7e5b3a09ccb0df01(
                    var_1d8, var_1d0);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7e5b3a09ccb0df01(
                    var_1f0, var_1e8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7e5b3a09ccb0df01(
                    var_188, rbx_1);
                return 0;
            }
            
            char* rax_6;
            void* rdx_5;
            rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hf9b979076e597cf4(rdx_3, rbx_1, r15_1);
            char* r15_2 = rax_6;
            void* const r12_2 = rdx_5;
            void* r14_2 = rax_6 + rdx_5;
            var_168 = rax_6;
            void* var_160_1 = r14_2;
            
            if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hf50be5f8119f76af(&var_168, &var_130))
            {
                void* var_1b0_1 = nullptr;
                
                if (!r15_2 | !r12_2)
                    r12_2 = nullptr;
                else
                {
                    char* rax_9 = r15_2 + 1;
                    
                    do
                    {
                        uint64_t rcx_3 = *r15_2;
                        r15_2 = rax_9;
                        
                        if (*(&var_130 + rcx_3))
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hbb7f4b0d6baf1c53(&var_1c0, rcx_3);
                        
                        rcx_3 = r15_2 != r14_2;
                        
                        if (!r15_2)
                            break;
                        
                        void* const rax_10;
                        rax_10 = rcx_3;
                        rax_9 = rax_10 + r15_2;
                    } while (r15_2 != r14_2);
                    
                    r12_2 = var_1b0_1;
                }
                
                r15_2 = var_1b8;
            }
            
            int64_t rcx_5 = r13_2 - var_1e0;
            
            if (rcx_5 <= r12_2)
            {
                uint64_t result_1;
                result_1 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::hc1e583393dbb8c6e(arg5, rax_2, r13_2, rcx_5, r15_2, r12_2, &var_1d8, &var_1f0);
                result = result_1;
                
                if (result_1)
                    goto label_46ad0e;
                
                if (var_1e0 >= r13_2)
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: leftover_buffe…");
                    /* no return */
                }
                
                if (uu_base32::base_common::fast_decode::write_to_output::h0fa366ee67423464(
                    &var_1d8, arg3, rax_3))
                {
                    result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    result = result_2;
                    goto label_46ad0e;
                }
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1493bff208258dcb(&var_1f0, r15_2, r12_2 + r15_2);
                
                if (var_1e0 >= r13_2)
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: leftover_buffe…");
                    /* no return */
                }
            }
        }
        else
        {
            char rax_5 = std::io::error::Error::kind::h135fe00c4e7365f3(rdx_3);
            
            if (rax_5 != 0x23)
            {
                int128_t var_148;
                uu_base32::base_common::format_read_error::hcbecd7cf3e00f2c7(&var_148, rax_5);
                int32_t var_150_1 = 1;
                var_168 = var_148;
                int64_t var_138;
                int64_t var_158_1 = var_138;
                result = alloc::boxed::Box$LT$T$GT$::new::h338aae5a226963c6(&var_168);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0226906460f1314c(rdx_3);
                rbx_1 = var_180;
                label_46ad0e:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7e5b3a09ccb0df01(
                    var_1c0, var_1b8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7e5b3a09ccb0df01(
                    var_1d8, var_1d0);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7e5b3a09ccb0df01(
                    var_1f0, var_1e8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7e5b3a09ccb0df01(
                    var_188, rbx_1);
                return result;
            }
            
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0226906460f1314c(rdx_3);
        }
        r15_1 = var_178;
    }
}
