
  fn uu_numfmt::format::transform_to::he005deddceb3df89(arg1: *mut i64, arg2: i64, arg3: i8, arg4: i8, arg5: i64, arg6: [u64; 0x2] @ zmm0) -> u64

{
    let mut var_b0: *mut u64;
    uu_numfmt::format::consider_suffix::h8fe5d35b3319f348(&var_b0, arg3, arg4, arg5, arg6);
    let rdx_1: *mut u64 = var_b0;
    let var_a8: i64;
    let mut zmm0: u128 = var_a8;
    let result_1: i8;
    let mut result: u64 = result_1;
    let mut var_a0: i8;
    let mut var_78: i32;
    
    if -(rdx_1) != -0x8000000000000000
    {
        let var_9a: i16;
        let var_74_1: i16 = var_9a;
        let var_9e: i32;
        var_78 = var_9e;
        *arg1.byte_offset(0x1e) = var_9a;
        *arg1.byte_offset(0x1a) = var_9e;
        arg1[1] = rdx_1;
        arg1[2] = zmm0;
        arg1[3] = var_a0;
        *arg1.byte_offset(0x19) = result;
        *arg1 = 1;
    }
    else
    {
        let zmm1_1: u128 =
            __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg2, data_419750), data_419640[0xa0][0]);
        let mut zmm2_1: u128;
        zmm2_1 = _mm_unpackhi_pd(zmm1_1, zmm1_1) + zmm1_1;
        zmm0 = zmm0 / zmm2_1;
        let mut var_80: u64 = zmm0;
        let mut var_48: i128;
        let mut rsi_3: *mut *mut u64;
        let mut rdi_3: *mut i128;
        let mut var_b8: i64;
        let mut var_98: i128;
        
        if result != 2
        {
            let mut var_60: i16;
            
            if arg5 == 0
            {
                result &= 1;
                let mut rax_1: *mut c_void;
                
                if 0x4024000000000000 <= __andpd_xmmxuq_memxuq(zmm0, data_4196f0)
                {
                    *var_b8[1] = var_a0;
                    *var_b8[2] = result;
                    var_b8 = arg3;
                    var_78 = &var_80;
                    let var_70_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                    let var_68_4: *mut i64 = &var_b8;
                    var_60 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::hb791543f09c937f1;
                    var_b0 = &data_4195a0;
                    let var_a8_4: i64 = 2;
                    rax_1 = &data_41ab88;
                }
                else
                {
                    *var_b8[1] = var_a0;
                    *var_b8[2] = result;
                    var_b8 = arg3;
                    var_78 = &var_80;
                    let var_70_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                    let var_68_3: *mut i64 = &var_b8;
                    var_60 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::hb791543f09c937f1;
                    var_b0 = &data_4195a0;
                    let var_a8_3: i64 = 2;
                    rax_1 = &data_41abe8;
                }
                
                *var_98[8] = rax_1;
                let var_88_2: i64 = 2;
                goto 'label_46a4a0;
            }
            
            *var_b8[1] = var_a0;
            result &= 1;
            *var_b8[2] = result;
            var_b8 = arg3;
            
            if arg5 > 0xffff
            {
                var_b0 = &data_502460;
                let var_a8_6: i64 = 1;
                var_a0 = 8;
                let var_98_2: u128 = _mm_xor_pd(zmm0, zmm0);
                core::panicking::panic_fmt::h96f341d36638c225(&var_b0);
                /* no return */
            }
            
            var_b0 = &var_80;
            let var_a8_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
            var_a0 = &var_b8;
            var_98 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::hb791543f09c937f1;
            *var_98[8] = 0;
            let mut var_88: i64;
            var_88 = arg5;
            var_78 = &data_4195a0;
            let var_70_2: i64 = 2;
            let var_58_1: *mut c_void = &data_41ac48;
            let var_50_1: i64 = 2;
            let var_68_2: *mut *mut u64 = &var_b0;
            var_60 = 3;
            rdi_3 = &var_48;
            rsi_3 = &var_78;
        }
        else
        {
            let zmm0_1: [u64; 0x2] =
                uu_numfmt::format::round_with_precision::hbeea945620f7b8d9(arg4, arg5, zmm0);
            var_b8 = zmm0_1;
            
            if arg5 > 0xffff
            {
                var_b0 = &data_502460;
                let var_a8_5: i64 = 1;
                var_a0 = 8;
                let var_98_1: [u64; 0x2] = _mm_xor_pd(zmm0_1, zmm0_1);
                core::panicking::panic_fmt::h96f341d36638c225(&var_b0);
                /* no return */
            }
            
            var_78 = &var_b8;
            let var_70_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
            let var_68_1: i64 = 0;
            let var_60_1: i16 = arg5;
            var_b0 = &data_4198c0;
            let var_a8_1: i64 = 1;
            *var_98[8] = &data_41ab58;
            let var_88_1: i64 = 1;
            'label_46a4a0:
            var_a0 = &var_78;
            var_98 = 2;
            rdi_3 = &var_48;
            rsi_3 = &var_b0;
        }
        core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(rdi_3, rsi_3);
        let result_2: u64;
        result = result_2;
        arg1[3] = result;
        *arg1.byte_offset(8) = var_48;
        *arg1 = 0;
    }
    result
}
