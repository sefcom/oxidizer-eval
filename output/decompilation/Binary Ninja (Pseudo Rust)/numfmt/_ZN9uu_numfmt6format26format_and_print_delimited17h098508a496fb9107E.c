
  fn uu_numfmt::format::format_and_print_delimited::h098508a496fb9107(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i8) -> *mut i64

{
    if 0 + -(*arg4.byte_offset(0x70))
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let mut var_1b8: *mut c_void = &arg4[0x70];
    let mut var_168: *mut c_void;
    _$LT$$RF$alloc..string..String$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::hf8368330bc7d3e9a(&var_168, &arg4[0x70], arg2, arg3);
    let var_100: i64 = 0;
    let var_f8: i64 = arg3;
    let var_f0: i16 = 1;
    let mut var_d0: *mut *mut [i8; 0x118];
    core::iter::traits::iterator::Iterator::zip::ha700ff6630919b15(&var_d0, &var_168);
    let mut var_1b0: i64;
    let mut r9: i64 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h63a30ee2b5483774(&var_1b0, &var_d0);
    let var_1a8: *mut c_void;
    let mut rax: *mut c_void = var_1a8;
    let mut result: *mut i64;
    
    if rax == 0
    {
        'label_46b003:
        var_d0 = &data_502518;
        let var_c8_1: i64 = 1;
        let var_c0_1: i64 = 8;
        let var_b8_1: i128 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_d0);
        result = arg1;
        *result = -0x8000000000000000;
    }
    else
    {
        let r15_1: *mut i64 = *arg4.byte_offset(0x60);
        let r12_1: i64 = *arg4.byte_offset(0x68);
        
        loop
        {
            let r14_1: i64 = var_1b0;
            let mut var_1e8: *mut c_void = rax;
            let rax_1: i8 =
                uucore::features::ranges::contain::ha2f044f5693f050c(r15_1, r12_1, r14_1);
            let mut var_198: *mut *mut c_void;
            let mut var_190: fn(arg1: *mut i64, arg2: i64) -> i64;
            
            if r14_1 > 1
            {
                var_198 = &var_1b8;
                var_190 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hed06e343d9a3976c;
                var_168 = &data_4198c0;
                let var_160_2: i64 = 1;
                let var_148_2: i64 = 0;
                let var_158_2: *mut *mut *mut c_void = &var_198;
                let var_150_2: i64 = 1;
                r9 = std::io::stdio::_print::h5e446ff973c02de6(&var_168);
            }
            
            if rax_1 == 0
            {
                var_198 = &var_1e8;
                var_190 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
                var_168 = &data_4198c0;
                let var_160_1: i64 = 1;
                let var_148_1: i64 = 0;
                let var_158_1: *mut *mut *mut c_void = &var_198;
                let var_150_1: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_168);
            }
            else
            {
                let var_1a0: i64;
                let mut rax_2: *mut i8;
                let mut rdx_2: i64;
                rax_2 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4fc5e4c9ad6ee5c(
                    var_1e8, var_1a0);
                uu_numfmt::format::format_string::h3b8df337189cc348(&var_198, rax_2, rdx_2, arg4, 
                    0, r9);
                let zmm0_2: i128 = var_190;
                let result_1: *mut i64;
                
                if (var_198 & 1) != 0
                {
                    result = result_1;
                    arg1[1] = result;
                    *arg1 = zmm0_2;
                    break;
                }
                
                let result_2: *mut i64 = result_1;
                let mut var_e8: i128 = zmm0_2;
                let mut var_178: *mut i128 = &var_e8;
                let var_170_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_168 = &data_4198c0;
                let var_160_3: i64 = 1;
                let var_148_3: i64 = 0;
                let var_158_3: *mut *mut i128 = &var_178;
                let var_150_3: i64 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_168);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_e8);
            }
            
            r9 = _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::h63a30ee2b5483774(&var_1b0, &var_d0);
            rax = var_1a8;
            
            if rax == 0
            {
                goto 'label_46b003;
            }
        }
    }
    
    result
}
