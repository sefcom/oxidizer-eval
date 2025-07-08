
  fn uu_numfmt::format::transform_to::hb7e422fe87e2abd5(arg1: *mut i64, arg2: i64, arg3: i8, arg4: i8, arg5: i64, arg6: [u64; 0x2] @ zmm0) -> u64

{
    let mut var_b8: i64;
    uu_numfmt::format::consider_suffix::h00abba19284ba538(&var_b8, arg3, arg4, arg5, arg6);
    let rdx_1: i64 = var_b8;
    let var_b0: i64;
    let mut zmm0: u128 = var_b0;
    let result_1: i8;
    let mut result: u64 = result_1;
    let mut var_a8: i8;
    
    if rdx_1 != -0x8000000000000000
    {
        let var_a2: i16;
        *arg1.byte_offset(0x1e) = var_a2;
        let var_a6: i32;
        *arg1.byte_offset(0x1a) = var_a6;
        arg1[1] = rdx_1;
        arg1[2] = zmm0;
        arg1[3] = var_a8;
        *arg1.byte_offset(0x19) = result;
        *arg1 = 1;
    }
    else
    {
        let zmm1_1: u128 =
            __subpd_xmmpd_mempd(__punpckldq_xmmdq_memdq(arg2, data_415e90), data_415dd0);
        let mut zmm2_1: u128;
        zmm2_1 = _mm_unpackhi_pd(zmm1_1, zmm1_1) + zmm1_1;
        zmm0 = zmm0 / zmm2_1;
        let mut var_f0: u64 = zmm0;
        let mut var_40: i128;
        let mut rsi_4: *const *mut i128;
        let mut rdi_2: *mut i128;
        let mut var_128: f64;
        let mut var_120: *mut i128;
        let mut var_e8: *mut u64;
        
        if result != 2
        {
            if arg5 == 0
            {
                zmm0 = __andpd_xmmxuq_memxuq(zmm0, data_415de0);
                result &= 1;
                
                if 0x4024000000000000 <= zmm0
                {
                    var_128 = var_a8;
                    *var_128[1] = result;
                    var_e8 = &var_f0;
                    let var_e0_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
                    let var_d8_4: *mut f64 = &var_128;
                    let var_d0_4: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
                    var_b8 = _mm_xor_pd(zmm0, zmm0);
                }
                else
                {
                    var_128 = var_a8;
                    *var_128[1] = result;
                    var_e8 = &var_f0;
                    let var_e0_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
                    let var_d8_3: *mut f64 = &var_128;
                    let var_d0_3: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
                    var_b8 = 0;
                    let var_b0_1: i64 = 1;
                }
                
                var_a8 = 2;
                let var_98_3: i64 = 0;
                let var_90_3: i64 = 0x20;
                let var_88_3: i8 = 3;
                let var_80_2: i64 = 2;
                let var_70_2: i64 = 2;
                let var_60_2: i64 = 1;
                let var_58_2: i64 = 0x20;
                let var_50_2: i8 = 3;
                var_120 = &data_41a370;
                let var_118_3: i64 = 2;
                let var_100_3: *mut i64 = &var_b8;
                let var_f8_3: i64 = 2;
                goto 'label_4c40f5;
            }
            
            result &= 1;
            var_128 = var_a8;
            *var_128[1] = result;
            var_120 = &var_f0;
            let var_118_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            let var_110_1: *mut f64 = &var_128;
            let var_108_1: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
            let var_100_2: i64 = arg5;
            let var_f8_2: i64 = 0;
            let var_98_2: i64 = 0;
            let var_90_2: i64 = 0x20;
            let var_88_2: i8 = 3;
            let var_80_1: i64 = 2;
            let var_70_1: i64 = 2;
            let var_60_1: i64 = 1;
            let var_58_1: i64 = 0x20;
            let var_50_1: i8 = 3;
            var_e8 = &data_41a370;
            let var_e0_2: i64 = 2;
            let var_c8_1: *mut i64 = &var_b8;
            let mut var_c0: i64;
            __builtin_memcpy(&var_c0, 
                "\x02\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x20);
            let var_d8_2: *const *mut i128 = &var_120;
            let var_d0_2: i64 = 3;
            rdi_2 = &var_40;
            rsi_4 = &var_e8;
        }
        else
        {
            var_128 = uu_numfmt::format::round_with_precision::h7f1d296807047857(arg4, arg5, zmm0);
            var_e8 = &var_128;
            let var_e0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            let var_d8_1: i64 = arg5;
            let var_d0_1: i64 = 0;
            __builtin_memcpy(&var_b8, 
                "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x18);
            let var_98_1: i64 = 0;
            let var_90_1: i64 = 0x20;
            let var_88_1: i8 = 3;
            var_120 = &data_416000;
            let var_118_1: i64 = 1;
            let var_100_1: *mut i64 = &var_b8;
            let var_f8_1: i64 = 1;
            'label_4c40f5:
            let var_110_2: *mut *mut u64 = &var_e8;
            let var_108_2: i64 = 2;
            rdi_2 = &var_40;
            rsi_4 = &var_120;
        }
        core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(rdi_2, rsi_4);
        let result_2: u64;
        result = result_2;
        arg1[3] = result;
        *arg1.byte_offset(8) = var_40;
        *arg1 = 0;
    }
    result
}
