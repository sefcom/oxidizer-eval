
  fn uu_fold::handle_obsolete::h3fddf2520a33c709(arg1: *mut i128, arg2: i64, arg3: i64) -> *mut i128

{
    let mut var_60: i64 = arg2;
    let var_58: i64 = arg2 + arg3 * 0x18;
    let var_50: i64 = 0;
    let mut rax_2: i64;
    let mut rdx: *mut c_void;
    rax_2 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf9924e752afe9ea8(&var_60);
    let mut result: *mut i128;
    
    if rdx == 0
    {
        'label_4b1648:
        result = arg1;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he916bedbab5d2ee8(result, 
            arg2, arg3);
        *result.byte_offset(0x18) = -0x8000000000000000;
    }
    else
    {
        let mut rbp_1: i64 = rax_2;
        
        loop
        {
            let r13_1: *mut i8 = *rdx.byte_offset(8);
            let r12_1: *mut c_void = *rdx.byte_offset(0x10);
            let mut var_90: i32 = 0;
            let mut rax_5: i64;
            let mut rdx_1: u64;
            rax_5 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_90);
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::ha42463a172f186c2(r13_1, 
                r12_1, rax_5, rdx_1) != 0
            {
                var_90 = r13_1;
                let var_88_1: *mut c_void = r12_1.byte_offset(r13_1);
                let mut rdi_4: i32 = 0x110000;
                
                if _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&var_90) == 0
                {
                    let mut rax_9: i32;
                    let mut rdx_3: i32;
                    rax_9 = core::str::validations::next_code_point::haf22137f2b8c1872(&var_90, 
                        &var_90);
                    rdi_4 = rdx_3;
                    
                    if rax_9 == 0
                    {
                        rdi_4 = 0x110000;
                    }
                }
                
                if core::option::Option$LT$T$GT$::map_or::ha537ee4bf15b2378(rdi_4) != 0
                {
                    let mut var_48: i128;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he916bedbab5d2ee8(
                        &var_48, arg2, arg3);
                    alloc::vec::Vec$LT$T$C$A$GT$::remove::hf33a108cd057c4a0(&var_90, &var_48, 
                        rbp_1);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::he0f0171ff9caf1b3(
                        &var_90);
                    let zmm0_1: i128 = var_48;
                    let mut rax_11: i64;
                    let mut rdx_7: u64;
                    rax_11 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r13_1, r12_1);
                    
                    if rax_11 == 0
                    {
                        core::str::slice_error_fail::h5dbb61534404fe7e(r13_1, r12_1, 1, r12_1);
                        /* no return */
                    }
                    
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hdd06eddfecb757f4(
                        &var_90, rax_11, rdx_7);
                    result = arg1;
                    let var_80: i64;
                    *result.byte_offset(0x28) = var_80;
                    *result.byte_offset(0x18) = var_90;
                    let var_38: i64;
                    result[1] = var_38;
                    *result = zmm0_1;
                    break;
                }
            }
            
            let mut rax_4: i64;
            rax_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf9924e752afe9ea8(&var_60);
            rbp_1 = rax_4;
            
            if rdx == 0
            {
                goto 'label_4b1648;
            }
        }
    }
    
    result
}
