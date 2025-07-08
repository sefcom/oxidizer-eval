
  fn uu_numfmt::format::format_and_print_whitespace::h40be5ec289fb4772(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i64) -> *mut c_void

{
    let mut var_60: ();
    core::iter::traits::iterator::Iterator::zip::h9e915b482ca14524(&var_60, arg2);
    let mut var_a0: i64;
    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h9dfd8b8e36c49ba3(&var_a0, &var_60);
    let var_98: *mut i8;
    let mut rax: *mut i8 = var_98;
    let mut result: *mut c_void;
    let mut var_150: *mut *mut [i8; 0xa];
    
    if rax == 0
    {
        'label_4c4f7a:
        var_150 = &data_535ba0;
        let var_148_4: i64 = 1;
        let var_140_4: i64 = 8;
        let var_138_1: i128 = {0};
        result = std::io::stdio::_print::he918bceb0c89db46(&var_150);
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let r15_1: i64 = arg4[0xc];
        let mut r12_1: i64 = arg4[0xd];
        let r13_1: i64 = arg4[0x17];
        let var_e8_1: i64 = r12_1;
        
        loop
        {
            let rbx_1: i64 = var_a0;
            let mut var_118: *mut i8 = rax;
            let var_88: i128;
            let mut var_e0: i128 = var_88;
            let mut var_138: i128;
            let mut var_d0: *mut *mut i8;
            let mut var_c8: fn(arg1: *mut i64, arg2: i64) -> i64;
            let mut result_1: *mut c_void;
            
            if uucore::features::ranges::contain::ha9677be85801ec1f(r15_1, r12_1, rbx_1) == 0
            {
                var_d0 = &var_118;
                var_c8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                let var_c0_1: *mut i128 = &var_e0;
                result_1 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h82a8b331819c1dee;
                var_150 = &data_41a370;
                let var_148_1: i64 = 2;
                *var_138[8] = 0;
                let var_140_1: *mut *mut *mut i8 = &var_d0;
                var_138 = 2;
                std::io::stdio::_print::he918bceb0c89db46(&var_150);
            }
            else
            {
                let var_90: *mut c_void;
                let mut r9_1: *mut c_void = var_90;
                let mut rax_1: *mut c_void;
                
                if rbx_1 > 1
                {
                    var_150 = &data_535bc8;
                    let var_148_2: i64 = 1;
                    let var_140_2: i64 = 8;
                    var_138 = {0};
                    std::io::stdio::_print::he918bceb0c89db46(&var_150);
                    let rbp_1: *mut i8 = var_118;
                    let mut rdx_2: *mut c_void;
                    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, rbp_1, var_90);
                    
                    if rax_1 == 0
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(rbp_1, var_90, 1, var_90);
                        /* no return */
                    }
                    
                    r9_1 = rdx_2;
                    r12_1 = var_e8_1;
                }
                
                rax_1 = var_90 != 0;
                let rdx_3: *mut c_void = *var_e0[8];
                uu_numfmt::format::format_string::h230c6a9d10700455(&var_d0, var_e0, rdx_3, arg4, 
                    r13_1 == 0 & rax_1, r9_1.byte_offset(rdx_3));
                let zmm0_2: i128 = var_c8;
                
                if var_d0 != 0
                {
                    result = result_1;
                    arg1[1] = result;
                    *arg1 = zmm0_2;
                    break;
                }
                
                let result_2: *mut c_void = result_1;
                let mut var_78: i128 = zmm0_2;
                let mut var_b0: *mut i128 = &var_78;
                let var_a8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_150 = &data_416000;
                let var_148_3: i64 = 1;
                *var_138[8] = 0;
                let var_140_3: *mut *mut i128 = &var_b0;
                var_138 = 1;
                std::io::stdio::_print::he918bceb0c89db46(&var_150);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_78);
            }
            _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h9dfd8b8e36c49ba3(&var_a0, &var_60);
            rax = var_98;
            
            if rax == 0
            {
                goto 'label_4c4f7a;
            }
        }
    }
    result
}
