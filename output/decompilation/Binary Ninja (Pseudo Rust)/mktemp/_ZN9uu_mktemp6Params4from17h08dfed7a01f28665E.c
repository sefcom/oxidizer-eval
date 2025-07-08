
  fn uu_mktemp::Params::from::h08dfed7a01f28665(arg1: *mut i64, arg2: *mut i128) -> *mut i64

{
    let mut r14: *mut c_void;
    let var_18: *mut c_void = r14;
    let mut r12: i64;
    let var_28: i64 = r12;
    let mut var_178: i32;
    let mut rax_2: i8;
    
    if arg2[3] != -0x8000000000000000
    {
        r14 = *arg2.byte_offset(8);
        r12 = arg2[1];
        var_178 = 0;
        let mut rax_1: i64;
        let mut rdx_1: u64;
        rax_1 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x58, &var_178);
        rax_2 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h133ed96069defad3(r14, r12, 
            rax_1, rdx_1);
    }
    
    if arg2[3] != -0x8000000000000000 && rax_2 == 0
    {
        arg1[3] = arg2[1];
        *arg1.byte_offset(8) = *arg2;
        arg1[4] = -0x7fffffffffffffff;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(arg2.byte_offset(0x18));
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::habc7c620b4b38486(&arg2[3]);
    }
    else
    {
        let mut var_128: i64;
        uu_mktemp::find_last_contiguous_block_of_xs::h8856c2687abea15a(&var_128, 
            *arg2.byte_offset(8), arg2[1]);
        let mut var_198: i128;
        let mut var_188: i64;
        
        if var_128 == 0
        {
            if arg2[3] != -0x8000000000000000
            {
                let rax_9: i64 = *arg2.byte_offset(8);
                let rcx_2: i64 = arg2[1];
                var_178 = rax_9;
                let var_170_1: i64 = rax_9 + rcx_2;
                let var_168_1: i64 = rcx_2;
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h880836f94e14e84d(&var_198, &var_178);
                r14 = 1;
            }
            else
            {
                var_188 = arg2[1];
                var_198 = *arg2;
                r14 = nullptr;
            }
            
            arg1[3] = var_188;
            *arg1.byte_offset(8) = var_198;
            arg1[4] = -0x7ffffffffffffffe;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(arg2.byte_offset(0x18));
            goto 'label_4bf6a0;
        }
        
        let var_b8_1: i64 = *arg2.byte_offset(0x28);
        let mut var_c8: i128 = *arg2.byte_offset(0x18);
        let mut var_170: i64;
        let mut var_f8: i64;
        let mut var_f0: i64;
        let mut var_e8: size_t;
        
        if var_c8 == -0x8000000000000000
        {
            'label_4bf163:
            var_f8 = 0;
            var_f0 = 1;
            var_e8 = 0;
        }
        else
        {
            r12 = 1;
            r14 = 1;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h0e8a4977c3ae2c93(&var_178, &var_c8);
            let rax_5: i64 = var_178;
            var_198 = var_170;
            
            if rax_5 == -0x8000000000000000
            {
                goto 'label_4bf163;
            }
            
            var_f0 = var_198;
            var_f8 = rax_5;
        }
        
        let rbp_1: *mut i8 = *arg2.byte_offset(8);
        let var_120: *mut c_void;
        
        if var_120 != 0
        {
            let rsi_5: *mut c_void = arg2[1];
            
            if var_120 >= rsi_5
            {
                if var_120 != rsi_5
                {
                    'label_4bf269:
                    r12 = 1;
                    r14 = 1;
                    core::str::slice_error_fail::h5dbb61534404fe7e(rbp_1, rsi_5, nullptr, var_120);
                    /* no return */
                }
            }
            else if *rbp_1.byte_offset(var_120) <= 0xbf
            {
                goto 'label_4bf269;
            }
        }
        
        r12 = 1;
        r14 = 1;
        std::path::Path::join::hac25b276bfec4f36(&var_178, var_f0, var_e8, rbp_1);
        var_198 = var_170;
        let mut var_e0: i128;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(&var_e0, 
            &var_198);
        let mut rax_12: i64;
        rax_12 = 1;
        let var_108_1: i64 = rax_12;
        r12 = 1;
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_178);
        let mut rax_13: i8;
        
        if *arg2.byte_offset(0x4b) != 0
        {
            r12 = 1;
            rax_13 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(rbp_1, var_120);
        }
        
        let mut rax_14: i64;
        
        if *arg2.byte_offset(0x4b) == 0 || rax_13 == 0
        {
            if var_c8 != -0x8000000000000000
            {
                r12 = 1;
                
                if std::path::Path::is_absolute::h3431a23d91045560(rbp_1, var_120) != 0
                {
                    rax_14 = -0x7ffffffffffffffb;
                    goto 'label_4bf345;
                }
            }
            
            var_178 = 0;
            r12 = 1;
            let mut rax_16: i64;
            let mut rdx_5: u64;
            rax_16 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2f, &var_178);
            r12 = 1;
            let var_d8: i64;
            let var_d0: i64;
            let rax_17: i8 =
                core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h133ed96069defad3(var_d8, 
                var_d0, rax_16, rdx_5);
            let mut var_168_2: i64;
            let mut rax_19: i64;
            let mut rcx_7: i64;
            let mut rdx_7: u64;
            
            if rax_17 == 0
            {
                r12 = 1;
                let mut rax_20: *mut i8;
                let mut rdx_8: i64;
                rax_20 = std::path::Path::parent::h65c9a340a6266f2d(var_d8, var_d0);
                
                if rax_20 == 0
                {
                    var_198 = 0;
                    *var_198[8] = 1;
                    var_188 = 0;
                }
                else
                {
                    var_178 = rax_20;
                    var_170 = rdx_8;
                    r12 = 1;
                    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::hb2b1bff17e4619f7(
                        &var_198, &var_178);
                }
                
                let mut rax_21: *mut i8;
                let mut rdx_9: i64;
                rax_21 = std::path::Path::file_name::h79ecbb7850a9c7f3(var_d8, var_d0);
                
                if rax_21 == 0
                {
                    rax_19 = 1;
                    rcx_7 = 0;
                    rdx_7 = 0;
                }
                else
                {
                    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_178, rax_21, rdx_9);
                    
                    if var_178 != 0
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    let var_168: u64;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hf2364d4dece97e39(
                        &var_178, var_170, var_168);
                    rcx_7 = var_178;
                    rax_19 = var_170;
                    rdx_7 = var_168;
                }
                
                var_168_2 = var_188;
                var_178 = var_198;
                let mut rsi_17: i64;
                rsi_17 = 1;
                let var_108_3: i64 = rsi_17;
            }
            else
            {
                var_168_2 = var_d0;
                var_178 = var_e0;
                rax_19 = 1;
                let var_108_2: i64 = 0;
                rcx_7 = 0;
                rdx_7 = 0;
            }
            
            let mut var_78: i128 = var_178;
            let mut var_90: i64 = rcx_7;
            let var_88_1: i64 = rax_19;
            let mut rax_23: i64 = arg2[3];
            
            if rax_23 != -0x8000000000000000
            {
                let var_a0_1: i128 = *arg2.byte_offset(0x38);
            }
            else
            {
                let mut var_a0: i128;
                var_a0 = 1;
                *var_a0[8] = 0;
                rax_23 = 0;
            }
            
            let mut var_a8: i64 = rax_23;
            let rbp_4: *mut i8 = *arg2.byte_offset(8);
            r14 = arg2[1];
            let var_118: *mut c_void;
            let mut rax_24: *mut c_void;
            let mut rdx_12: i64;
            rax_24 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(var_118, rbp_4, r14);
            
            if rax_24 == 0
            {
                core::str::slice_error_fail::h5dbb61534404fe7e(rbp_4, r14, var_118, r14);
                /* no return */
            }
            
            let mut var_58: *mut c_void = rax_24;
            let var_50_1: i64 = rdx_12;
            var_198 = &var_58;
            *var_198[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9054f5fd3dba116a;
            let var_188_1: *mut i64 = &var_a8;
            let var_180_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_178 = &data_41a7a8;
            let var_170_2: i64 = 2;
            let var_158_1: i64 = 0;
            let var_168_3: *mut i128 = &var_198;
            let mut var_160_1: i64 = 2;
            let mut var_48: i128;
            core::option::Option$LT$T$GT$::map_or_else::hcc2932731f604033(&var_48, &var_178);
            var_128 = var_48;
            let var_38: *mut c_void;
            
            if _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(var_120, var_38) != 0
            {
                arg1[3] = var_38;
                *arg1.byte_offset(8) = var_128;
                arg1[4] = -0x7ffffffffffffffc;
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_a8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_90);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_78);
                r14 = 1;
                r12 = 0;
                
                if rax_17 != 0
                {
                    goto 'label_4bf684;
                }
                
                goto 'label_4bf677;
            }
            
            let zmm0_7: i128 = var_78;
            var_178 = zmm0_7;
            var_160_1 = var_90;
            let var_138_1: *mut c_void = var_38;
            let zmm1_1: i128 = var_128;
            let var_148_1: i128 = zmm1_1;
            arg1[8] = var_38;
            *arg1.byte_offset(0x30) = zmm1_1;
            *arg1 = zmm0_7;
            arg1[4] = var_158_1;
            arg1[5] = rdx_7;
            *arg1.byte_offset(0x10) = var_168_2;
            arg1[9] = var_118.byte_offset(-var_120);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_a8);
            
            if rax_17 == 0
            {
                r14 = 1;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_e0);
            }
            
            r14 = 1;
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_f8);
            r14 = 1;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&var_c8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(arg2);
        }
        else
        {
            rax_14 = -0x7ffffffffffffffd;
            'label_4bf345:
            arg1[3] = arg2[1];
            *arg1.byte_offset(8) = *arg2;
            arg1[4] = rax_14;
            *arg1 = -0x8000000000000000;
            r12 = 1;
            r14 = nullptr;
            'label_4bf677:
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(&var_e0);
            'label_4bf684:
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hef8b921f38343bf4(&var_f8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hfe845c517ac2f71c(&var_c8);
            
            if r12 != 0
            {
                'label_4bf6a0:
                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::habc7c620b4b38486(&arg2[3]);
            }
            
            if r14 != 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h068543f44d037b0a(arg2);
            }
        }
    }
    
    arg1
}
