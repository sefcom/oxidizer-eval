
  fn uu_base32::base_common::fast_encode::fast_encode::he2f2c369f4c434ff(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void, arg5: i64, arg6: i64) -> *mut i128

{
    let mut var_c8: i64 = arg2;
    let r15_1: i64 = (*arg4.byte_offset(0x30))(arg3) << 0xa;
    
    if r15_1 == 0
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: encode_in_chun…");
        /* no return */
    }
    
    let mut var_100: i64;
    
    if arg5 == 0
    {
        var_100 = 0;
        let var_f8_2: i64 = 1;
        let var_f0_2: i64 = 0;
        let var_e8_2: i64 = 0x4c;
    }
    else if arg6 == 0
    {
        var_100 = -0x8000000000000000;
    }
    else
    {
        var_100 = 0;
        let var_f8_1: i64 = 1;
        let var_f0_1: i64 = 0;
        let var_e8_1: i64 = arg6;
    }
    
    let mut var_c0: ();
    _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::hef424161f497c89e(
        &var_c0);
    let var_b0: i64;
    let mut rcx: i64 = var_b0;
    
    if rcx == 0
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: !input_buffer.…");
        /* no return */
    }
    
    let mut var_a8: i64 = 0;
    let mut s: i128;
    __builtin_memset(&s, 0, 0x18);
    let var_a0: i64 = 1;
    let var_78: i128 = {0};
    let var_80: i64 = 1;
    let r13: i64 = *arg1;
    let rbp: *mut c_void = arg1[1];
    let mut var_e0: *mut *mut c_void = &data_5468f8;
    let mut var_88: i64;
    let mut result: *mut i128;
    
    loop
    {
        let var_b8: i64;
        let mut rax_1: i64;
        let mut rdx_1: *mut *mut c_void;
        rax_1 = std::io::impls::_$LT$impl$u20$std..io..Read$u20$for$u20$alloc..boxed..Box$LT$R$GT$$GT$::read::h47ae2d6432a5f7b4(r13, rbp, var_b8, rcx);
        
        if rax_1 != 0
        {
            let mut var_48: i128;
            uu_base32::base_common::format_read_error::h8e4fcbf99236ba5f(&var_48, 
                std::io::error::Error::kind::hb2ff5fa058639b3d(rdx_1));
            let var_50_1: i32 = 1;
            let mut var_68: i128 = var_48;
            let var_38: i64;
            let var_58_1: i64 = var_38;
            result = alloc::boxed::Box$LT$T$GT$::new::h24c3b22d1586a670(&var_68);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h4172b98dff79a5a1(rdx_1);
            break;
        }
        
        let mut result_2: *mut i128;
        let mut rdx_7: *mut *mut c_void;
        
        if rdx_1 == 0
        {
            let mut result_3: *mut i128;
            result_3 = (*arg4.byte_offset(0x28))(arg3, 
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h31f2209311368518(&var_a8));
            result = result_3;
            
            if result_3 != 0
            {
                break;
            }
            
            if uu_base32::base_common::fast_encode::write_to_output::h5f7916e193db6f77(&var_100, 
                &var_88, &var_c8, &data_546890, 1) == 0
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
            let mut rax_2: i64;
            let mut rdx_3: i64;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hc824ce28ebfb8e30(rdx_1, var_b8, var_b0);
            let rcx_2: i64 = r15_1 - *s[8];
            
            if rcx_2 <= rdx_1
            {
                let mut result_1: *mut i128;
                result_1 = uu_base32::base_common::fast_encode::encode_in_chunks_to_buffer::h2c86eb655e89e74f(arg3, arg4, r15_1, rcx_2, rax_2, rdx_3, &var_88, &var_a8);
                result = result_1;
                
                if result_1 != 0
                {
                    break;
                }
                
                if *s[8] >= r15_1
                {
                    core::panicking::panic::h8c3a660c3523e4a4("assertion failed: leftover_buffe…");
                    /* no return */
                }
                
                if uu_base32::base_common::fast_encode::write_to_output::h5f7916e193db6f77(
                    &var_100, &var_88, &var_c8, &data_546890, 0) == 0
                {
                    rcx = var_b0;
                    continue;
                }
            }
            else
            {
                _$LT$alloc..collections..vec_deque..VecDeque$LT$T$C$A$GT$$u20$as$u20$alloc..collections..vec_deque..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h253d70056d378ecd(&var_a8, rax_2, rax_2 + rdx_3);
                
                if *s[8] < r15_1
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
    result
}
