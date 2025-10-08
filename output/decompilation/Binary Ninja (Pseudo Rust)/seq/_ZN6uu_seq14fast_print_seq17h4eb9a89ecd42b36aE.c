
  fn uu_seq::fast_print_seq::h4eb9a89ecd42b36a(arg1: *mut i64, arg2: *mut c_void, arg3: u64, arg4: *mut c_void, arg5: i64, arg6: u64, arg7: i128, arg8: i64) -> *mut *mut [i8; 0xc0]

{
    let mut var_40: i128 = arg7;
    let rbx: i64 = *arg4.byte_offset(8);
    let rbp: i64 = *arg4.byte_offset(0x10);
    let mut result: *mut *mut [i8; 0xc0];
    
    if num_bigint::biguint::cmp_slice::h6473709cb847fdc3(rbx, rbp, *arg2.byte_offset(8), 
        *arg2.byte_offset(0x10)) < 0
    {
        result = nullptr;
    }
    else
    {
        let mut var_c8: i128;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h133769cfed2b71de(&var_c8, rbx, rbp);
        let mut var_e8: i128 = var_c8;
        num_bigint::biguint::subtraction::_$LT$impl$u20$core..ops..arith..Sub$LT$$RF$num_bigint..biguint..BigUint$GT$$u20$for$u20$num_bigint..biguint..BigUint$GT$::sub::hcb42c6242933f6ef(&var_c8, &var_e8, arg2);
        num_bigint::biguint::division::_$LT$impl$u20$core..ops..arith..Div$LT$u64$GT$$u20$for$u20$num_bigint..biguint..BigUint$GT$::div::hb3d0b8e5d42f970f(&var_e8, &var_c8, arg3);
        let r14_1: *mut i64 = *var_e8[8];
        let var_b8: i64;
        let mut rax_2: i8;
        let mut rdx_4: i64;
        rax_2 = num_bigint::biguint::convert::_$LT$impl$u20$num_traits..cast..ToPrimitive$u20$for$u20$num_bigint..biguint..BigUint$GT$::to_u64::ha0c226e00bec48bc(r14_1, var_b8);
        core::ptr::drop_in_place$LT$num_bigint..biguint..BigUint$GT$::h190a37287d4c5f59(var_e8, 
            r14_1);
        let mut var_70: ();
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::haf44c8a775aee2f9(
            &var_70, arg2);
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::haf44c8a775aee2f9(
            &var_c8, arg4);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb5d0045c8189f1b2(&var_c8);
        let mut var_98: i64;
        _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::he78d97b685c908ad(&var_98, core::cmp::Ord::max::hc4036d29a65f4853(var_b8, arg8) + arg6);
        let var_88: i64;
        let rbp_3: i64 = var_88 - arg6;
        let var_60: i64;
        let rdi_12: *mut c_void = rbp_3 - var_60;
        let mut var_f0: *mut c_void = rdi_12;
        let var_90: *mut i8;
        let mut rax_4: i64;
        let mut rdx_6: u64;
        rax_4 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hf40a0f97a3096e33(rdi_12, rbp_3, var_90, var_88);
        let var_68: i64;
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h34292d3a419d10fd(rax_4, 
            rdx_6, var_68, var_60);
        
        if var_88 < arg6
        {
            core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rbp_3, var_88);
            /* no return */
        }
        
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h34292d3a419d10fd(
            &var_90[rbp_3], arg6, arg5, arg6);
        var_f0 = core::cmp::Ord::min::he7a4ef9e7b4693b7(var_f0, rbp_3 - arg8);
        let mut var_58: *mut i128;
        let mut rax_6: i64;
        let mut rdx_9: u64;
        rax_6 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(arg3, &var_58, 
            0x14);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9baf5eb350953063(&var_c8, rax_6, rdx_9);
        let var_d8_2: i64 = var_b8;
        var_e8 = var_c8;
        let r15_1: i64 = *var_e8[8];
        let mut rbx_3: i64 = ((0 - 0) | rdx_4) + 1;
        let mut result_1: *mut *mut [i8; 0xc0];
        
        loop
        {
            let rsi_17: *mut c_void = var_f0;
            let temp0_1: i64 = rbx_3;
            rbx_3 -= 1;
            
            if temp0_1 == 1
            {
                let mut rax_7: i64;
                let mut rdx_14: u64;
                rax_7 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h4709196e254eeadc(rsi_17, rbp_3, var_90, var_88);
                result_1 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h7ad87ff7b53aa30a(arg1, rax_7, rdx_14);
                
                if result_1 == 0
                {
                    var_58 = &var_40;
                    let var_50_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2c2f878c1a275f8a;
                    var_c8 = &data_41b0f0;
                    *var_c8[8] = 1;
                    let var_a8_1: i64 = 0;
                    let var_b8_1: *mut *mut i128 = &var_58;
                    let var_b0_1: i64 = 1;
                    result_1 = std::io::Write::write_fmt::h58381ced614654a5(arg1, &var_c8);
                    
                    if result_1 == 0
                    {
                        result_1 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::hfb65489923a70636(arg1);
                    }
                }
                
                break;
            }
            
            if var_88 < rsi_17
            {
                core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(rsi_17, var_88);
                /* no return */
            }
            
            result_1 = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write_all::h7ad87ff7b53aa30a(arg1, rsi_17.byte_offset(var_90), var_88 - rsi_17);
            
            if result_1 != 0
            {
                break;
            }
            
            uucore::features::fast_inc::fast_inc::h9b00daadefd0682a(var_90, var_88, &var_f0, rbp_3, 
                r15_1, var_b8);
        }
        
        result = result_1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb5d0045c8189f1b2(&var_e8);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h92c01f6ee31c8691(var_98, 
            var_90);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb5d0045c8189f1b2(&var_70);
    }
    
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h68c34cef8e3ce886(arg1);
    result
}
