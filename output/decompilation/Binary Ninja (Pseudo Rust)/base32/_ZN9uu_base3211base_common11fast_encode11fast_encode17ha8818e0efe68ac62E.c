
  fn uu_base32::base_common::fast_encode::fast_encode::ha8818e0efe68ac62(arg1: i64, arg2: *mut c_void, arg3: i64, arg4: *mut c_void, arg5: i64, arg6: *mut c_void, arg7: i8, arg8: i64) -> u64

{
    let r13_1: i64 = (*arg6.byte_offset(0x30))(arg5) << 0xa;
    
    if r13_1 == 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: encode_in_chun…");
        /* no return */
    }
    
    let mut var_f8: i64;
    let mut var_f0: i64;
    
    if (arg7 & 1) == 0
    {
        var_f8 = 0;
        var_f0 = 1;
        let var_e8_2: i64 = 0;
        let var_e0_2: i64 = 0x4c;
    }
    else if arg8 == 0
    {
        var_f8 = -0x8000000000000000;
    }
    else
    {
        var_f8 = 0;
        var_f0 = 1;
        let var_e8_1: i64 = 0;
        let var_e0_1: i64 = arg8;
    }
    
    let mut var_a0: i64;
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h78859eff97be190c(
        &var_a0);
    let var_90: i64;
    let mut rbp: i64 = var_90;
    
    if rbp == 0
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: !input_buffer.…");
        /* no return */
    }
    
    let mut var_c0: i64 = 0;
    let var_b0: i128 = {0};
    let var_b8: i64 = 1;
    let mut var_88: i64 = 0;
    let var_78: i128 = {0};
    let var_80: i64 = 1;
    let rbx_1: i64 = *arg2.byte_offset(0x18);
    let var_d0: i64 = *arg6.byte_offset(0x28);
    let mut rax_2: i64;
    rax_2 = arg8 == 0;
    let r15_1: i8 = arg7 & rax_2;
    let rax_4: i64 = *arg4.byte_offset(0x38);
    
    loop
    {
        let var_98: i64;
        let mut r15_2: i64 = var_98;
        let mut rax_6: i8;
        let mut rdx_1: *mut *mut c_void;
        rax_6 = rbx_1(arg1, r15_2, rbp);
        let mut result: u64;
        
        if (rax_6 & 1) == 0
        {
            let mut result_2: u64;
            let mut rdx_7: *mut *mut c_void;
            
            if rdx_1 == 0
            {
                let mut result_3: u64;
                result_3 = var_d0(arg5, 
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hf17d47ca8c7d0746(&var_c0));
                result = result_3;
                
                if result_3 != 0
                {
                    goto 'label_46a4e6;
                }
                
                if uu_base32::base_common::fast_encode::write_to_output::ha42615d27832fe86(&var_f8, 
                    &var_88, arg3, rax_4, 1, r15_1) == 0
                {
                    result = 0;
                    goto 'label_46a4e6;
                }
                
                result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                result = result_2;
                goto 'label_46a4e6;
            }
            
            let mut rax_8: i64;
            let mut rdx_3: i64;
            rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hf9b979076e597cf4(rdx_1, r15_2, rbp);
            let rcx_2: i64 = r13_1 - *var_b0[8];
            
            if rcx_2 <= rdx_1
            {
                let var_110_1: *mut i64 = &var_c0;
                let mut result_1: u64;
                result_1 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::h14c8a5bd648182a6(arg5, var_d0, r13_1, rcx_2, rax_8, rdx_3, &var_88);
                result = result_1;
                
                if result_1 != 0
                {
                    goto 'label_46a4e6;
                }
                
                if *var_b0[8] >= r13_1
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: leftover_buffe…");
                    /* no return */
                }
                
                if uu_base32::base_common::fast_encode::write_to_output::ha42615d27832fe86(&var_f8, 
                    &var_88, arg3, rax_4, 0, r15_1) != 0
                {
                    result_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    result = result_2;
                    goto 'label_46a4e6;
                }
            }
            else
            {
                _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::he0a1ee24594fab2a(&var_c0, rax_8, rax_8 + rdx_3);
                
                if *var_b0[8] >= r13_1
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: leftover_buffe…");
                    /* no return */
                }
            }
        }
        else
        {
            let rax_7: i8 = std::io::error::Error::kind::h135fe00c4e7365f3(rdx_1);
            
            if rax_7 != 0x23
            {
                let mut var_48: i128;
                uu_base32::base_common::format_read_error::hcbecd7cf3e00f2c7(&var_48, rax_7);
                let var_50_1: i32 = 1;
                let mut var_68: i128 = var_48;
                let var_38: i64;
                let var_58_1: i64 = var_38;
                result = alloc::boxed::Box$LT$T$GT$::new::h338aae5a226963c6(&var_68);
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h0226906460f1314c(rdx_1);
                r15_2 = var_98;
                'label_46a4e6:
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
