
  int128_t* uu_base32::base_common::fast_decode::fast_decode::h894b8dd38a833827(int64_t* arg1, int64_t arg2, void** arg3, void* arg4, char arg5)

{
    int64_t var_198 = arg2;
    int64_t rax;
    int64_t rdx;
    rax = (*(arg4 + 0x18))(arg3);
    int64_t r15_2 = (*(arg4 + 0x38))(arg3) << 0xa;
    
    if (!r15_2)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: decode_in_chun…");
        /* no return */
    }
    
    void var_130;
    uu_base32::base_common::fast_decode::alphabet_to_table::h5796dc70b852cfc7(&var_130, rax, rdx, 
        arg5);
    void var_190;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::hef424161f497c89e(
        &var_190);
    int64_t var_180;
    int64_t rcx_1 = var_180;
    
    if (!rcx_1)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: !input_buffer.…");
        /* no return */
    }
    
    int64_t var_1f8 = 0;
    int64_t var_1f0 = 1;
    int64_t var_1e8 = 0;
    int64_t var_1e0 = 0;
    int64_t var_1d8 = 1;
    int64_t var_1d0 = 0;
    int64_t var_1c8 = 0;
    void* var_1c0 = 1;
    int64_t var_1b8 = 0;
    int64_t rax_2 = *arg1;
    void* rax_3 = arg1[1];
    char const (** const var_1b0)[0xd8] = &data_546d58;
    int128_t* result;
    
    while (true)
    {
        int64_t var_188;
        int64_t rax_4;
        int64_t rdx_3;
        rax_4 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h47ae2d6432a5f7b4(rax_2, rax_3, var_188, rcx_1);
        int128_t var_178;
        
        if (rax_4)
        {
            int128_t var_148;
            uu_base32::base_common::format_read_error::h8e4fcbf99236ba5f(&var_148, 
                std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_3));
            int32_t var_160_1 = 1;
            var_178 = var_148;
            int64_t var_138;
            int64_t var_168_1 = var_138;
            result = alloc::boxed::Box$LT$T$GT$::new::h24c3b22d1586a670(&var_178);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4172b98dff79a5a1(rdx_3);
            break;
        }
        
        int128_t* result_2;
        void** rdx_8;
        
        if (!rdx_3)
        {
            int128_t* result_3;
            result_3 = (*(arg4 + 0x20))(arg3, var_1f0, var_1e8, &var_1e0);
            result = result_3;
            
            if (result_3)
                break;
            
            if (!uu_base32::base_common::fast_decode::write_to_output::h32257a8eb7dfc8a1(&var_1e0, 
                &var_198, &data_546cf0))
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(
                    &var_1c8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(
                    &var_1e0);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(
                    &var_1f8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(
                    &var_190);
                return nullptr;
            }
            
            result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
        else
        {
            void* rax_6;
            void* rdx_5;
            rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc824ce28ebfb8e30(rdx_3, var_188, var_180);
            void* r14_1 = rdx_5;
            void* rbp_1 = rax_6;
            void** const r13 = rax_6 + rdx_5;
            var_178 = rax_6;
            *var_178[8] = r13;
            
            if (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hbce8a63a9619d87c(&var_178, &var_130))
            {
                void* var_1b8_1 = nullptr;
                var_178 = rbp_1;
                *var_178[8] = r13;
                char* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h984abb6bfeaeb974(&var_178);
                
                if (i)
                {
                    do
                    {
                        uint64_t rax_8 = *i;
                        
                        if (*(&var_130 + rax_8))
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h034f14c94017e4c6(&var_1c8, rax_8);
                        
                        i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h984abb6bfeaeb974(&var_178);
                    } while (i);
                    
                    r14_1 = var_1b8_1;
                }
                else
                    r14_1 = nullptr;
                
                rbp_1 = var_1c0;
            }
            
            int64_t rcx_3 = r15_2 - var_1e8;
            
            if (rcx_3 <= r14_1)
            {
                int128_t* result_1;
                result_1 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::h65f2050a33e778c1(arg3, arg4, r15_2, rcx_3, rbp_1, r14_1, &var_1e0, &var_1f8);
                result = result_1;
                
                if (result_1)
                    break;
                
                if (var_1e8 >= r15_2)
                {
                    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: leftover_buffe…");
                    /* no return */
                }
                
                if (!uu_base32::base_common::fast_decode::write_to_output::h32257a8eb7dfc8a1(
                    &var_1e0, &var_198, &data_546cf0))
                {
                    rcx_1 = var_180;
                    continue;
                }
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h92ffd1ad14137507(&var_1f8, rbp_1, r14_1 + rbp_1);
                
                if (var_1e8 < r15_2)
                {
                    rcx_1 = var_180;
                    continue;
                }
                
                var_1b0 = &data_546d70;
                core::panicking::panic::h8c3a660c3523e4a4("assertion failed: leftover_buffe…");
                /* no return */
            }
            
            result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
        result = result_2;
        break;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&var_1c8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&var_1e0);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&var_1f8);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4668a2ded45dd356(&var_190);
    return result;
}
