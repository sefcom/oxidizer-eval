
  fn uu_numfmt::format::format_string::h230c6a9d10700455(arg1: *mut i64, arg2: *mut i8, arg3: *mut c_void, arg4: *mut i64, arg5: i64, arg6: i64) -> *mut i128

{
    let mut var_158: i64 = arg6;
    let mut r15: *mut c_void = arg3;
    let mut rbp: *mut i8 = arg2;
    let rcx: i64 = arg4[0x11];
    
    if rcx != -0x8000000000000000
    {
        let mut rax_1: *mut i8;
        let mut rdx_1: *mut c_void;
        rax_1 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::h989ea700a39d3e29(arg4[0x12], arg4[0x13], rbp, r15);
        
        if rax_1 != 0
        {
            rbp = rax_1;
        }
        
        if rax_1 != 0
        {
            r15 = rdx_1;
        }
    }
    
    let mut rax_2: u64;
    let mut r13: u64;
    
    if arg4[2] == 0
    {
        rax_2 = arg4[0x16];
        r13 = 0;
        
        if rax_2 == 5 && *arg4.byte_offset(0xb1) == 5
        {
            r13 = uu_numfmt::format::parse_implicit_precision::habeeb6a1b0c09cbd(rbp, r15);
            rax_2 = 5;
        }
    }
    else
    {
        r13 = arg4[3];
        rax_2 = arg4[0x16];
    }
    
    let mut result_1: *mut i128;
    uu_numfmt::format::transform_from::h06c22e665722480c(&result_1, rbp, r15, arg4[0x14], rax_2);
    let mut result: *mut i128 = result_1;
    let var_1b8: i64;
    let zmm0: [u64; 0x2] = var_1b8;
    
    if result != -0x8000000000000000
    {
        arg1[1] = result;
        arg1[2] = zmm0;
        let var_1b0: i64;
        arg1[3] = var_1b0;
        *arg1 = 1;
    }
    else
    {
        let mut var_190: *mut c_void;
        uu_numfmt::format::transform_to::hb7e422fe87e2abd5(&var_190, arg4[0x15], 
            *arg4.byte_offset(0xb1), *arg4.byte_offset(0xc9), r13, zmm0);
        let cond:1_1: bool = var_190 == 0;
        let mut var_188: i128;
        let mut var_1e8: i128 = var_188;
        let result_2: *mut i128;
        
        if cond:1_1
        {
            let mut var_118: i128 = var_1e8;
            let mut var_148: i128;
            let mut result_3: *mut i128;
            let mut rax_6: *mut i128;
            let mut r13_1: i64;
            
            if rcx != -0x8000000000000000
            {
                var_1e8 = &arg4[0x11];
                result_1 = &var_118;
                let var_1b8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                let var_1b0_1: *mut i128 = &var_1e8;
                let var_1a8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4dc19265c681ac20;
                var_190 = &data_41a370;
                var_188 = 2;
                let var_170_1: i64 = 0;
                *var_188[8] = &result_1;
                let var_178: i64 = 2;
                let var_14c_1: i32 = "s/miniz_oxide-0.7.4/src/inflate/…";
                let mut var_c0: i128;
                core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_c0, &var_190);
                var_148 = var_c0;
                let result_5: *mut i128;
                result_3 = result_5;
                rax_6 = 1;
                
                if *arg4 != 0
                {
                    r13_1 = arg4[1];
                }
                else
                {
                    'label_4c43c2:
                    r13_1 = var_158;
                    
                    if arg5 == 0
                    {
                        r13_1 = arg4[0x17];
                    }
                }
            }
            else
            {
                result_3 = result_2;
                var_148 = var_118;
                rax_6 = nullptr;
                
                if *arg4 == 0
                {
                    goto 'label_4c43c2;
                }
                
                r13_1 = arg4[1];
            }
            
            let var_14c_2: i32 = rax_6;
            
            if r13_1 == 0
            {
                let result_4: *mut i128 = result_3;
                var_1e8 = var_148;
            }
            else
            {
                if r13_1 > 0 && *arg4.byte_offset(0x51) != 0
                {
                    var_1e8 = &var_148;
                    *var_1e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    let var_1d8_2: i64 = r13_1;
                    let var_1d0_1: i64 = 0;
                    var_190 = 2;
                    *var_188[8] = 1;
                    let var_178_1: i64 = 1;
                    let var_170_2: i64 = 0;
                    let var_168_1: i64 = 0x30;
                    let var_160_1: i8 = 1;
                    result_1 = &data_416000;
                    let var_1b8_2: i64 = 1;
                    let var_1a0_1: *mut *mut c_void = &var_190;
                    let var_198_1: i64 = 1;
                    let var_1b0_2: *mut i128 = &var_1e8;
                    let var_1a8_2: i64 = 2;
                    rbp = 1;
                    let mut var_d8: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_d8, 
                        &result_1);
                    let var_c8: i64;
                    let var_e8_1: i64 = var_c8;
                    let mut var_f8: i128 = var_d8;
                    
                    if arg5 == 0
                    {
                        var_158 = arg4[0x17];
                    }
                    
                    if var_158 == 0
                    {
                        let var_1d8_8: i64 = var_c8;
                        var_1e8 = var_d8;
                    }
                    else
                    {
                        let mut r12_1: *mut c_void;
                        
                        if var_158 <= 0
                        {
                            var_1e8 = &var_f8;
                            *var_1e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            let var_1d8_9: i64 = -(var_158);
                            let var_1d0_5: i64 = 0;
                            var_190 = 2;
                            *var_188[8] = 1;
                            let var_178_5: i64 = 1;
                            let var_170_6: i64 = 0;
                            let var_168_5: i64 = 0x20;
                            let var_160_5: i8 = 0;
                            result_1 = &data_416000;
                            let var_1b8_6: i64 = 1;
                            let var_1a0_5: *mut *mut c_void = &var_190;
                            let var_198_5: i64 = 1;
                            let var_1b0_6: *mut i128 = &var_1e8;
                            let var_1a8_6: i64 = 2;
                            let mut var_48: ();
                            r12_1 = &var_48;
                            core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_48, 
                                &result_1);
                        }
                        else
                        {
                            var_1e8 = &var_f8;
                            *var_1e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            let var_1d8_3: i64 = var_158;
                            let var_1d0_2: i64 = 0;
                            var_190 = 2;
                            *var_188[8] = 1;
                            let var_178_2: i64 = 1;
                            let var_170_3: i64 = 0;
                            let var_168_2: i64 = 0x20;
                            let var_160_2: i8 = 1;
                            result_1 = &data_416000;
                            let var_1b8_3: i64 = 1;
                            let var_1a0_2: *mut *mut c_void = &var_190;
                            let var_198_2: i64 = 1;
                            let var_1b0_3: *mut i128 = &var_1e8;
                            let var_1a8_3: i64 = 2;
                            let mut var_60: ();
                            r12_1 = &var_60;
                            core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_60, 
                                &result_1);
                        }
                        
                        let var_1d8_10: i64 = *r12_1.byte_offset(0x10);
                        var_1e8 = *r12_1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(
                            &var_f8);
                    }
                }
                else if r13_1 <= 0
                {
                    var_1e8 = &var_148;
                    *var_1e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    let var_1d8_6: i64 = -(r13_1);
                    let var_1d0_4: i64 = 0;
                    var_190 = 2;
                    *var_188[8] = 1;
                    let var_178_4: i64 = 1;
                    let var_170_5: i64 = 0;
                    let var_168_4: i64 = 0x20;
                    let var_160_4: i8 = 0;
                    result_1 = &data_416000;
                    let var_1b8_5: i64 = 1;
                    let var_1a0_4: *mut *mut c_void = &var_190;
                    let var_198_4: i64 = 1;
                    let var_1b0_5: *mut i128 = &var_1e8;
                    let var_1a8_5: i64 = 2;
                    rbp = 1;
                    let mut var_90: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_90, 
                        &result_1);
                    var_1e8 = var_90;
                    let var_80: i64;
                    let var_1d8_7: i64 = var_80;
                }
                else
                {
                    var_1e8 = &var_148;
                    *var_1e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    let var_1d8_4: i64 = r13_1;
                    let var_1d0_3: i64 = 0;
                    var_190 = 2;
                    *var_188[8] = 1;
                    let var_178_3: i64 = 1;
                    let var_170_4: i64 = 0;
                    let var_168_3: i64 = 0x20;
                    let var_160_3: i8 = 1;
                    result_1 = &data_416000;
                    let var_1b8_4: i64 = 1;
                    let var_1a0_3: *mut *mut c_void = &var_190;
                    let var_198_3: i64 = 1;
                    let var_1b0_4: *mut i128 = &var_1e8;
                    let var_1a8_4: i64 = 2;
                    rbp = 1;
                    let mut var_a8: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_a8, 
                        &result_1);
                    var_1e8 = var_a8;
                    let var_98: i64;
                    let var_1d8_5: i64 = var_98;
                }
                
                rbp = 1;
            }
            
            var_190 = &arg4[4];
            var_188 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            *var_188[8] = &var_1e8;
            let var_178_6: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            let var_170_7: *mut c_void = &arg4[7];
            let var_168_6: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            result_1 = &data_423118;
            let var_1b8_7: i64 = 3;
            let var_1a0_6: i64 = 0;
            let var_1b0_7: *mut *mut c_void = &var_190;
            let var_1a8_7: i64 = 3;
            let mut var_78: i128;
            core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_78, &result_1);
            let var_68: i64;
            arg1[3] = var_68;
            *arg1.byte_offset(8) = var_78;
            *arg1 = 0;
            result =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_1e8);
            
            if r13_1 != 0
            {
                result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(
                    &var_148);
            }
            
            if rcx != -0x8000000000000000
            {
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(
                    &var_118);
            }
        }
        else
        {
            result = result_2;
            arg1[3] = result;
            *arg1.byte_offset(8) = var_1e8;
            *arg1 = 1;
        }
    }
    
    result
}
