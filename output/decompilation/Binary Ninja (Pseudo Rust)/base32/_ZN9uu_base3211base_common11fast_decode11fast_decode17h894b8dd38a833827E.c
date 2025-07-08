
  fn uu_base32::base_common::fast_decode::fast_decode::h894b8dd38a833827(arg1: *mut i64, arg2: i64, arg3: *mut *mut c_void, arg4: *mut c_void, arg5: i8) -> *mut i128

{
    let mut var_198: i64 = arg2;
    let mut rax: i64;
    let mut rdx: i64;
    rax = (*arg4.byte_offset(0x18))(arg3);
    let r15_2: i64 = (*arg4.byte_offset(0x38))(arg3) << 0xa;
    
    if r15_2 == 0
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: decode_in_chun…");
        /* no return */
    }
    
    let mut var_130: ();
    uu_base32::base_common::fast_decode::alphabet_to_table::h5796dc70b852cfc7(&var_130, rax, rdx, 
        arg5);
    let mut var_190: ();
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::hef424161f497c89e(
        &var_190);
    let var_180: i64;
    let mut rcx_1: i64 = var_180;
    
    if rcx_1 == 0
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: !input_buffer.…");
        /* no return */
    }
    
    let mut var_1f8: i64 = 0;
    let var_1f0: i64 = 1;
    let var_1e8: i64 = 0;
    let mut var_1e0: i64 = 0;
    let var_1d8: i64 = 1;
    let var_1d0: i64 = 0;
    let mut var_1c8: i64 = 0;
    let var_1c0: *mut c_void = 1;
    let var_1b8: i64 = 0;
    let rax_2: i64 = *arg1;
    let rax_3: *mut c_void = arg1[1];
    let mut var_1b0: *mut *mut [i8; 0xd8] = &data_546d58;
    let mut result: *mut i128;
    
    loop
    {
        let var_188: i64;
        let mut rax_4: i64;
        let mut rdx_3: i64;
        rax_4 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h47ae2d6432a5f7b4(rax_2, rax_3, var_188, rcx_1);
        let mut var_178: i128;
        
        if rax_4 != 0
        {
            let mut var_148: i128;
            uu_base32::base_common::format_read_error::h8e4fcbf99236ba5f(&var_148, 
                std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_3));
            let var_160_1: i32 = 1;
            var_178 = var_148;
            let var_138: i64;
            let var_168_1: i64 = var_138;
            result = alloc::boxed::Box$LT$T$GT$::new::h24c3b22d1586a670(&var_178);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4172b98dff79a5a1(rdx_3);
            break;
        }
        
        let mut result_2: *mut i128;
        let mut rdx_8: *mut *mut c_void;
        
        if rdx_3 == 0
        {
            let mut result_3: *mut i128;
            result_3 = (*arg4.byte_offset(0x20))(arg3, var_1f0, var_1e8, &var_1e0);
            result = result_3;
            
            if result_3 != 0
            {
                break;
            }
            
            if uu_base32::base_common::fast_decode::write_to_output::h32257a8eb7dfc8a1(&var_1e0, 
                &var_198, &data_546cf0) == 0
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
            let mut rax_6: *mut c_void;
            let mut rdx_5: *mut c_void;
            rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc824ce28ebfb8e30(rdx_3, var_188, var_180);
            let mut r14_1: *mut c_void = rdx_5;
            let mut rbp_1: *mut c_void = rax_6;
            let r13: *mut *mut c_void = rax_6.byte_offset(rdx_5);
            var_178 = rax_6;
            *var_178[8] = r13;
            
            if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hbce8a63a9619d87c(&var_178, &var_130) != 0
            {
                let var_1b8_1: *mut c_void = nullptr;
                var_178 = rbp_1;
                *var_178[8] = r13;
                let mut i: *mut i8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h984abb6bfeaeb974(&var_178);
                
                if i != 0
                {
                    do
                    {
                        let rax_8: u64 = *i;
                        
                        if *(&var_130).byte_offset(rax_8) != 0
                        {
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h034f14c94017e4c6(&var_1c8, rax_8);
                        }
                        
                        i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h984abb6bfeaeb974(&var_178);
                    } while i != 0;
                    
                    r14_1 = var_1b8_1;
                }
                else
                {
                    r14_1 = nullptr;
                }
                
                rbp_1 = var_1c0;
            }
            
            let rcx_3: i64 = r15_2 - var_1e8;
            
            if rcx_3 <= r14_1
            {
                let mut result_1: *mut i128;
                result_1 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::h65f2050a33e778c1(arg3, arg4, r15_2, rcx_3, rbp_1, r14_1, &var_1e0, &var_1f8);
                result = result_1;
                
                if result_1 != 0
                {
                    break;
                }
                
                if var_1e8 >= r15_2
                {
                    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: leftover_buffe…");
                    /* no return */
                }
                
                if uu_base32::base_common::fast_decode::write_to_output::h32257a8eb7dfc8a1(
                    &var_1e0, &var_198, &data_546cf0) == 0
                {
                    rcx_1 = var_180;
                    continue;
                }
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h92ffd1ad14137507(&var_1f8, rbp_1, r14_1.byte_offset(rbp_1));
                
                if var_1e8 < r15_2
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
    result
}
