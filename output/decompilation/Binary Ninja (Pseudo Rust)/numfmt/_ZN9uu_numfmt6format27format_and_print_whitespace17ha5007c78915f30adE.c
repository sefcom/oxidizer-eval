
  fn uu_numfmt::format::format_and_print_whitespace::ha5007c78915f30ad(arg1: *mut i128, arg2: i64, arg3: i64, arg4: *mut i8) -> fn(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_60: *mut i64;
    core::iter::traits::iterator::Iterator::zip::hc5c51cab09057469(&var_60, arg2);
    let mut var_d0: i64;
    _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::hcacff3f450858e3c(&var_d0, &var_60);
    let i_2: *mut i8;
    let mut i: *mut i8 = i_2;
    let mut var_158: *mut *mut [i8; 0x117];
    let mut rcx_2: i8;
    
    if i == 0
    {
        rcx_2 = arg4[0xc8];
    }
    else
    {
        let rax_1: *mut i64 = *arg4.byte_offset(0x60);
        let rax_2: i64 = *arg4.byte_offset(0x68);
        let rax_3: i8 = arg4[0xc8];
        let rax_4: i64 = *arg4.byte_offset(0xb8);
        
        do
        {
            let r13_1: i64 = var_d0;
            let var_c0: i64;
            let mut r14_1: i64 = var_c0;
            let var_b8: *mut i8;
            let mut r12_1: *mut i8 = var_b8;
            let mut var_100: *mut i8 = r12_1;
            let mut var_140: i64;
            let mut i_1: *mut i8;
            let mut var_a8: *mut *mut i8;
            let mut var_a0: fn(arg1: *mut i64, arg2: i64) -> i64;
            let mut var_90: fn(arg1: *mut i64, arg2: i64) -> i64;
            
            if uucore::features::ranges::contain::ha2f044f5693f050c(rax_1, rax_2, r13_1) == 0
            {
                if (rax_3 & 1) != 0
                {
                    var_158 = 0;
                    
                    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h436c904482f687d7(
                        i, r14_1, 
                        core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa, &var_158)) != 0
                    {
                        var_158 = &data_502540;
                        let var_150_4: i64 = 1;
                        let var_148_4: i64 = 8;
                        var_140 = {0};
                        std::io::stdio::_print::h5e446ff973c02de6(&var_158);
                        let mut i_3: *mut c_void;
                        let mut rdx_6: i64;
                        i_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, i, r14_1);
                        
                        if i_3 == 0
                        {
                            core::str::slice_error_fail::h1a2885084e28d077(i, r14_1, 1, r14_1);
                            /* no return */
                        }
                        
                        i = i_3;
                        r14_1 = rdx_6;
                    }
                }
                
                i_1 = i;
                let var_120_1: i64 = r14_1;
                var_a8 = &i_1;
                var_a0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
                let var_98_1: *mut *mut i8 = &var_100;
                var_90 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::heebe613453956698;
                var_158 = &data_4195a0;
                let var_150_1: i64 = 2;
                let var_138_1: i64 = 0;
                let var_148_1: *mut *mut *mut i8 = &var_a8;
                var_140 = 2;
                std::io::stdio::_print::h5e446ff973c02de6(&var_158);
            }
            else
            {
                let mut r9_1: i64 = r14_1;
                let mut rax_5: *mut c_void;
                
                if r13_1 > 1
                {
                    var_158 = &data_502540;
                    let var_150_2: i64 = 1;
                    let var_148_2: i64 = 8;
                    var_140 = {0};
                    std::io::stdio::_print::h5e446ff973c02de6(&var_158);
                    let mut rdx_2: i64;
                    rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, i, r14_1);
                    
                    if rax_5 == 0
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(i, r14_1, 1, r14_1);
                        /* no return */
                    }
                    
                    r9_1 = rdx_2;
                    r12_1 = var_100;
                }
                
                rax_5 = r14_1 != 0;
                let var_b0: i64;
                uu_numfmt::format::format_string::h3b8df337189cc348(&var_a8, r12_1, var_b0, arg4, 
                    rax_4 == 0 & rax_5, r9_1 + var_b0);
                i_1 = var_a0;
                
                if (var_a8 & 1) != 0
                {
                    arg1[1] = var_90;
                    *arg1 = i_1;
                    return var_90;
                }
                
                let var_68_1: fn(arg1: *mut i64, arg2: i64) -> i64 = var_90;
                let mut var_78: i128 = i_1;
                let mut var_88: *mut i128 = &var_78;
                let var_80_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_158 = &data_4198c0;
                let var_150_3: i64 = 1;
                let var_138_2: i64 = 0;
                let var_148_3: *mut *mut i128 = &var_88;
                var_140 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_158);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_78);
            }
            _$LT$core..iter..adapters..zip..Zip$LT$A$C$B$GT$$u20$as$u20$core..iter..adapters..zip..ZipImpl$LT$A$C$B$GT$$GT$::next::hcacff3f450858e3c(&var_d0, &var_60);
            i = i_2;
        } while i != 0;
        
        rcx_2 = rax_3;
    }
    
    let mut rcx_3: i32 = 0xa;
    
    if (rcx_2 & 1) != 0
    {
        rcx_3 = 0;
    }
    
    var_d0 = rcx_3;
    var_60 = &var_d0;
    let var_58_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
    var_158 = &data_4198c0;
    let var_150_5: i64 = 1;
    let var_138_3: i64 = 0;
    let var_148_5: *mut *mut i64 = &var_60;
    let var_140_1: i64 = 1;
    let rax_10: fn(arg1: *mut i64, arg2: i64) -> i64 =
        std::io::stdio::_print::h5e446ff973c02de6(&var_158);
    *arg1 = -0x8000000000000000;
    rax_10
}
