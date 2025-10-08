
  fn uu_base32::base_common::fast_decode::fast_decode::h4656aa0145473fc1(arg1: i64, arg2: *mut c_void, arg3: i64, arg4: *mut c_void, arg5: i64, arg6: *mut c_void, arg7: i8) -> u64

{
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = (*arg6.byte_offset(0x18))(arg5);
    let r13_2: i64 = (*arg6.byte_offset(0x38))(arg5) << 0xa;
    
    if r13_2 == 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: decode_in_chun…");
        /* no return */
    }
    
    let mut var_130: ();
    uu_base32::base_common::fast_decode::alphabet_to_table::h35e8b72e3b4f91ee(&var_130, rax, rdx, 
        arg7);
    let mut var_188: i64;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h78859eff97be190c(
        &var_188);
    let var_178: i64;
    let mut r15_1: i64 = var_178;
    
    if r15_1 == 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: !input_buffer.…");
        /* no return */
    }
    
    let mut var_1f0: i64 = 0;
    let var_1e8: i64 = 1;
    let var_1e0: i64 = 0;
    let mut var_1d8: i64 = 0;
    let var_1d0: i64 = 1;
    let var_1c8: i64 = 0;
    let mut var_1c0: i64 = 0;
    let var_1b8: *mut i8 = 1;
    let var_1b0: i64 = 0;
    let rbp_1: i64 = *arg2.byte_offset(0x18);
    let rax_2: i64 = *arg6.byte_offset(0x20);
    let rax_3: i64 = *arg4.byte_offset(0x38);
    
    loop
    {
        let var_180: i64;
        let mut rbx_1: i64 = var_180;
        let mut rax_4: i8;
        let mut rdx_3: *mut *mut c_void;
        rax_4 = rbp_1(arg1, rbx_1, r15_1);
        let mut var_168: *mut i8;
        let mut result: u64;
        
        if (rax_4 & 1) == 0
        {
            let mut result_2: u64;
            let mut rdx_9: *mut *mut c_void;
            
            if rdx_3 == 0
            {
                let mut result_3: u64;
                result_3 = rax_2(arg5, var_1e8, var_1e0, &var_1d8);
                result = result_3;
                
                if result_3 != 0
                {
                    goto 'label_46ad0e;
                }
                
                if uu_base32::base_common::fast_decode::write_to_output::h0fa366ee67423464(
                    &var_1d8, arg3, rax_3) != 0
                {
                    result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    result = result_2;
                    goto 'label_46ad0e;
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
            
            let mut rax_6: *mut i8;
            let mut rdx_5: *mut c_void;
            rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hf9b979076e597cf4(rdx_3, rbx_1, r15_1);
            let mut r15_2: *mut i8 = rax_6;
            let mut r12_2: *mut c_void = rdx_5;
            let r14_2: *mut c_void = rax_6.byte_offset(rdx_5);
            var_168 = rax_6;
            let var_160_1: *mut c_void = r14_2;
            
            if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::hf50be5f8119f76af(&var_168, &var_130) != 0
            {
                let var_1b0_1: *mut c_void = nullptr;
                
                if (r15_2 == 0 | r12_2 == 0) != 0
                {
                    r12_2 = nullptr;
                }
                else
                {
                    let mut rax_9: *mut i8 = r15_2.byte_offset(--1);
                    
                    do
                    {
                        let mut rcx_3: u64 = *r15_2;
                        r15_2 = rax_9;
                        
                        if *(&var_130).byte_offset(rcx_3) != 0
                        {
                            alloc::vec::Vec$LT$T$C$A$GT$::push::hbb7f4b0d6baf1c53(&var_1c0, rcx_3);
                        }
                        
                        rcx_3 = r15_2 != r14_2;
                        
                        if r15_2 == 0
                        {
                            break;
                        }
                        
                        let mut rax_10: *mut c_void;
                        rax_10 = rcx_3;
                        rax_9 = rax_10.byte_offset(r15_2);
                    } while r15_2 != r14_2;
                    
                    r12_2 = var_1b0_1;
                }
                
                r15_2 = var_1b8;
            }
            
            let rcx_5: i64 = r13_2 - var_1e0;
            
            if rcx_5 <= r12_2
            {
                let mut result_1: u64;
                result_1 = uu_base32::base_common::fast_decode::decode_in_chunks_to_buffer::hc1e583393dbb8c6e(arg5, rax_2, r13_2, rcx_5, r15_2, r12_2, &var_1d8, &var_1f0);
                result = result_1;
                
                if result_1 != 0
                {
                    goto 'label_46ad0e;
                }
                
                if var_1e0 >= r13_2
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: leftover_buffe…");
                    /* no return */
                }
                
                if uu_base32::base_common::fast_decode::write_to_output::h0fa366ee67423464(
                    &var_1d8, arg3, rax_3) != 0
                {
                    result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    result = result_2;
                    goto 'label_46ad0e;
                }
            }
            else
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1493bff208258dcb(&var_1f0, r15_2, r12_2.byte_offset(r15_2));
                
                if var_1e0 >= r13_2
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: leftover_buffe…");
                    /* no return */
                }
            }
        }
        else
        {
            let rax_5: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(rdx_3);
            
            if rax_5 != 0x23
            {
                let mut var_148: i128;
                uu_base32::base_common::format_read_error::hcbecd7cf3e00f2c7(&var_148, rax_5);
                let var_150_1: i32 = 1;
                var_168 = var_148;
                let var_138: i64;
                let var_158_1: i64 = var_138;
                result = alloc::boxed::Box$LT$T$GT$::new::h338aae5a226963c6(&var_168);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0226906460f1314c(rdx_3);
                rbx_1 = var_180;
                'label_46ad0e:
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
