
  fn uu_mktemp::Params::from::h79f2486a494e973a(arg1: *mut i64, arg2: *mut i128) -> *mut i64

{
    let rax_1: i64 = arg2[3];
    let mut rbp: *mut i8 = *arg2.byte_offset(8);
    let rdx: i64 = arg2[1];
    let mut var_178: i32;
    let mut cond:0_1: bool;
    
    if -(rax_1) != -0x8000000000000000
    {
        var_178 = 0;
        cond:0_1 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hce4324c85153fc81(rbp, 
            rdx, core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x58, &var_178)) == 0;
    }
    
    if -(rax_1) != -0x8000000000000000 && cond:0_1
    {
        arg1[1] = -0x7fffffffffffffff;
        *arg1.byte_offset(0x10) = *arg2;
        arg1[4] = arg2[1];
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h92010b458ccdc0ce(arg2.byte_offset(0x18));
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::he610de4c4ff4ed65(&arg2[3]);
    }
    else
    {
        let mut var_58: i32;
        uu_mktemp::find_last_contiguous_block_of_xs::h8d96f8bfdfc9b9d5(&var_58, rbp, rdx);
        let mut var_1a8: i128;
        let mut var_198: i64;
        
        if var_58 != 1
        {
            if rax_1 != -0x8000000000000000
            {
                var_178 = rbp;
                let var_170_1: *mut c_void = &rbp[rdx];
                let var_168_1: i64 = rdx;
                core::iter::traits::iterator::Iterator::collect::h4f4da201e1fe28f0(&var_1a8, 
                    &var_178);
            }
            else
            {
                var_198 = arg2[1];
                var_1a8 = *arg2;
            }
            
            arg1[4] = var_198;
            *arg1.byte_offset(0x10) = var_1a8;
            arg1[1] = -0x7ffffffffffffffe;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h92010b458ccdc0ce(arg2.byte_offset(0x18));
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::he610de4c4ff4ed65(&arg2[3]);
            
            if rax_1 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(arg2);
            }
        }
        else
        {
            let rax_6: u64 = *arg2.byte_offset(0x28);
            let mut var_f8: i128 = *arg2.byte_offset(0x18);
            let r13_1: i64 = var_f8;
            let mut var_170: i64;
            let mut rax_7: i64;
            
            if r13_1 != -0x8000000000000000
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h5e9a9c3d89a1dce2(&var_178, *var_f8[8], rax_6);
                rax_7 = var_178;
                var_1a8 = var_170;
            }
            
            let mut var_118: i64;
            let mut var_110: i64;
            let mut var_108: u64;
            
            if r13_1 != -0x8000000000000000 && rax_7 != -0x8000000000000000
            {
                var_110 = var_1a8;
                var_118 = rax_7;
            }
            else
            {
                var_118 = 0;
                var_110 = 1;
                var_108 = 0;
            }
            
            let var_50: i64;
            let mut rax_12: *mut i8;
            let mut rdx_4: *mut c_void;
            rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(var_50, rbp, rdx);
            
            if rax_12 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(rbp, rdx, 0, var_50);
                /* no return */
            }
            
            std::path::Path::join::h54ca0a2412d4ea69(&var_178, var_110, var_108, rax_12);
            var_1a8 = var_170;
            let mut var_a0: i128;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbac688a0c4ef4a45(
                &var_a0, &var_1a8);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4af838b51e1cae1b(&var_178);
            let mut rax_13: i8;
            
            if *arg2.byte_offset(0x4b) != 0
            {
                rax_13 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(rax_12, rdx_4);
            }
            
            let mut rax_14: i64;
            let mut r14_3: *mut c_void;
            
            if *arg2.byte_offset(0x4b) == 0 || rax_13 == 0
            {
                let mut rax_15: i8;
                
                if r13_1 != -0x8000000000000000
                {
                    rax_15 = std::path::Path::is_absolute::hf2dacc49683e82ac(rax_12, rdx_4);
                }
                
                if r13_1 != -0x8000000000000000 && rax_15 != 0
                {
                    rax_14 = -0x7ffffffffffffffb;
                    goto 'label_464f1b;
                }
                
                var_178 = 0;
                let var_98: i64;
                let var_90: i64;
                let rax_18: i8 =
                    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hce4324c85153fc81(
                    var_98, var_90, 
                    core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2f, &var_178));
                let mut var_b8: i128;
                let mut var_a8_1: i64;
                let mut rax_20: i64;
                let mut rcx_2: i64;
                let mut rdx_7: u64;
                
                if rax_18 == 0
                {
                    let mut rax_21: *mut i8;
                    let mut rdx_8: i64;
                    rax_21 = std::path::Path::parent::hef287f60afa56900(var_98, var_90);
                    
                    if rax_21 == 0
                    {
                        var_1a8 = 0;
                        *var_1a8[8] = 1;
                        var_198 = 0;
                    }
                    else
                    {
                        var_178 = rax_21;
                        var_170 = rdx_8;
                        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hbac688a0c4ef4a45(&var_1a8, &var_178);
                    }
                    
                    let mut rax_22: *mut i8;
                    let mut rdx_9: i64;
                    rax_22 = std::path::Path::file_name::h6d40d88bf3fb287a(var_98, var_90);
                    
                    if rax_22 == 0
                    {
                        rax_20 = 1;
                        rcx_2 = 0;
                        rdx_7 = 0;
                    }
                    else
                    {
                        core::str::converts::from_utf8::h8a6dc80f786921e0(&var_178, rax_22, rdx_9);
                        
                        if (var_178 & 1) != 0
                        {
                            core::option::unwrap_failed::h893f57cb7db71cb7();
                            /* no return */
                        }
                        
                        let var_168: u64;
                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h3c498dae33407f89(&var_178, var_170, var_168);
                        rcx_2 = var_178;
                        rax_20 = var_170;
                        rdx_7 = var_168;
                    }
                    
                    var_a8_1 = var_198;
                    var_b8 = var_1a8;
                }
                else
                {
                    var_a8_1 = var_90;
                    var_b8 = var_a0;
                    rax_20 = 1;
                    rcx_2 = 0;
                    rdx_7 = 0;
                }
                
                let mut var_70: i64 = rcx_2;
                let var_68_1: i64 = rax_20;
                let mut rax_23: i64;
                
                if rax_1 != -0x8000000000000000
                {
                    rax_23 = rax_1;
                    let var_80_1: i128 = *arg2.byte_offset(0x38);
                }
                else
                {
                    let mut var_80: i128;
                    var_80 = 1;
                    *var_80[8] = 0;
                    rax_23 = 0;
                }
                
                let mut var_88: i64 = rax_23;
                let var_48: *mut c_void;
                let mut rax_24: *mut c_void;
                let mut rdx_12: i64;
                rax_24 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(var_48, rbp, rdx);
                
                if rax_24 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(rbp, rdx, var_48, rdx);
                    /* no return */
                }
                
                let mut var_40: *mut c_void = rax_24;
                let var_38_1: i64 = rdx_12;
                var_1a8 = &var_40;
                *var_1a8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h6e4bdad1b13e5d00;
                let var_198_1: *mut i64 = &var_88;
                let var_190_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                var_178 = &data_41b210;
                let var_170_2: i64 = 2;
                let var_158_1: i64 = 0;
                let var_168_2: *mut i128 = &var_1a8;
                let mut var_160_1: i64 = 2;
                core::option::Option$LT$T$GT$::map_or_else::h00d6975f0c0267a7(&var_58, &var_178);
                let zmm0_7: i128 = var_58;
                
                if _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(*zmm0_7[8], var_48) != 0
                {
                    arg1[4] = var_48;
                    *arg1.byte_offset(0x10) = zmm0_7;
                    arg1[1] = -0x7ffffffffffffffc;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(
                        &var_88);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(
                        &var_70);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(
                        &var_b8);
                    rbp = 1;
                    r14_3 = nullptr;
                    
                    if rax_18 != 0
                    {
                        goto 'label_46520a;
                    }
                    
                    goto 'label_4651fd;
                }
                
                let zmm0_8: i128 = var_b8;
                var_178 = zmm0_8;
                var_160_1 = var_70;
                let var_138_1: *mut c_void = var_48;
                let var_148_1: i128 = zmm0_7;
                arg1[8] = var_48;
                *arg1.byte_offset(0x30) = zmm0_7;
                *arg1 = zmm0_8;
                arg1[4] = var_158_1;
                arg1[5] = rdx_7;
                *arg1.byte_offset(0x10) = var_a8_1;
                arg1[9] = var_48.byte_offset(-var_50);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(&var_88);
                
                if rax_18 == 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(
                        &var_a0);
                }
                
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4af838b51e1cae1b(&var_118);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h92010b458ccdc0ce(&var_f8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(arg2);
            }
            else
            {
                rax_14 = -0x7ffffffffffffffd;
                'label_464f1b:
                arg1[1] = rax_14;
                *arg1.byte_offset(0x10) = *arg2;
                arg1[4] = arg2[1];
                *arg1 = -0x8000000000000000;
                r14_3 = 1;
                rbp = nullptr;
                'label_4651fd:
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(&var_a0);
                'label_46520a:
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h4af838b51e1cae1b(&var_118);
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h92010b458ccdc0ce(&var_f8);
                
                if r14_3 != 0
                {
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::he610de4c4ff4ed65(&arg2[3]);
                }
                
                if rbp != 0
                {
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdd7c658a73a0c2df(arg2);
                }
            }
        }
    }
    
    arg1
}
