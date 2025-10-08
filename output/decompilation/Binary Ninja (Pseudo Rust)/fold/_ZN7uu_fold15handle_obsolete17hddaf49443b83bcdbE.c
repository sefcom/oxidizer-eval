
  fn uu_fold::handle_obsolete::hddaf49443b83bcdb(arg1: *mut i128, arg2: i64, arg3: i64) -> *mut i128

{
    let mut var_60: i64 = arg2;
    let var_58: i64 = arg2 + arg3 * 0x18;
    let var_50: i64 = 0;
    let mut rax_2: i64;
    let mut rdx: *mut c_void;
    rax_2 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he54a06542fd2e8b1(&var_60);
    let mut result: *mut i128;
    
    if rdx == 0
    {
        'label_45b6e2:
        result = arg1;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0dedcd644dd186d3(result, arg2, arg3);
        *result.byte_offset(0x18) = -0x8000000000000000;
    }
    else
    {
        let mut r13_1: i64 = rax_2;
        let mut r12_1: *mut c_void = rdx;
        
        loop
        {
            let r14_1: i64 = *r12_1.byte_offset(8);
            let r15_1: i64 = *r12_1.byte_offset(0x10);
            let mut var_90: i32 = 0;
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcf84e2f3ea96fe28(r14_1, 
                r15_1, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_90)) != 0
            {
                let rax_6: i64 = *r12_1.byte_offset(8);
                let rcx_2: i64 = *r12_1.byte_offset(0x10) + rax_6;
                var_90 = rax_6;
                
                if _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h79c51f2353e76d38(&var_90) == 0
                {
                    let mut rax_8: i8;
                    let mut rdx_3: i32;
                    rax_8 = core::str::validations::next_code_point::h22c36519b8a1e543(&var_90, 
                        &var_60);
                    
                    if (rax_8 & 1) != 0 && rdx_3 - 0x30 < 0xa
                    {
                        let mut var_48: i128;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h0dedcd644dd186d3(&var_48, arg2, arg3);
                        alloc::vec::Vec$LT$T$C$A$GT$::remove::h6933f29b75a2f879(&var_90, &var_48, 
                            r13_1);
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd6746ad766958504(
                            var_90, rcx_2);
                        let r14_2: *mut i8 = *r12_1.byte_offset(8);
                        let rbx_2: i64 = *r12_1.byte_offset(0x10);
                        let mut rax_9: i64;
                        let mut rdx_7: u64;
                        rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r14_2, rbx_2);
                        
                        if rax_9 == 0
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(r14_2, rbx_2, 1, rbx_2);
                            /* no return */
                        }
                        
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h600e44234b0f024a(&var_90, rax_9, rdx_7);
                        result = arg1;
                        let var_80: i64;
                        *result.byte_offset(0x28) = var_80;
                        *result.byte_offset(0x18) = var_90;
                        let var_38: i64;
                        result[1] = var_38;
                        *result = var_48;
                        break;
                    }
                }
            }
            
            let mut rax_3: i64;
            let mut rdx_1: *mut c_void;
            rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he54a06542fd2e8b1(&var_60);
            r13_1 = rax_3;
            r12_1 = rdx_1;
            
            if rdx_1 == 0
            {
                goto 'label_45b6e2;
            }
        }
    }
    
    result
}
