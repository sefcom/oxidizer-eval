
  fn uu_od::prn_float::format_float::h341a0cfde1a47520(arg1: *mut i128, arg2: i64, arg3: i64, arg4: [u64; 0x2] @ zmm0) -> *mut i128

{
    let mut var_70: i64 = arg4;
    let rax: u64 = arg4[0];
    let mut rsi_2: *mut *mut i64;
    let mut var_d8: *mut i64;
    let mut var_a8: i64;
    let mut var_68: *mut *mut [i8; 0x88];
    
    if FCMP_UO(arg4[0], arg4[0])
    {
        'label_4d51da:
        let temp0: [u64; 0x2] = _mm_xor_pd(arg4, arg4);
        arg4[0] - temp0[0];
        
        if arg4[0] != temp0[0] || FCMP_UO(arg4[0], temp0[0]) || rax >= 0
        {
            arg4[0] - temp0[0];
            let mut temp0_6: [u64; 0x2];
            
            if arg4[0] != temp0[0] || !FCMP_O(arg4[0], temp0[0])
            {
                temp0_6 = __andpd_xmmxuq_memxuq(arg4, data_40d940);
            }
            
            let mut rax_5: fn(arg1: *mut i64, arg2: *mut i64) -> i64;
            
            if (!(arg4[0] != temp0[0]) && FCMP_O(arg4[0], temp0[0]))
                || 0x7ff0000000000000[0] <= temp0_6[0]
            {
                var_68 = &var_70;
                rax_5 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            }
            else
            {
                var_68 = &var_70;
                rax_5 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h74a47d8602c716a3;
            }
            
            let var_60_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = rax_5;
            let var_58_1: i64 = arg2;
            let var_50_1: i64 = 0;
            var_a8 = 2;
            let var_98_2: i64 = 1;
            let var_90_2: i64 = 1;
            let var_88_1: i64 = 0;
            let var_80_1: i64 = 0x20;
            let var_78_1: i8 = 3;
        }
        else
        {
            var_68 = &data_542048;
            let var_60: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h49e5a621c8f1f534;
            let var_58: i64 = arg2;
            let var_50: i64 = 0;
            var_a8 = 2;
            let var_98_1: i64 = 1;
            let var_90_1: i64 = 1;
            let var_88: i64 = 0;
            let var_80: i64 = 0x20;
            let var_78: i8 = 1;
        }
        
        var_d8 = &data_40dad0;
        let var_d0_1: i64 = 1;
        let var_b8: *mut i64 = &var_a8;
        let var_b0: i64 = 1;
        let var_c8_1: *const *mut *mut [i8; 0x88] = &var_68;
        let var_c0: i64 = 2;
        rsi_2 = &var_d8;
    }
    else
    {
        let mut r14_1: i64 = arg3;
        let rcx_2: i64 = rax & 0x7ff0000000000000;
        let rsi_1: i64 = rax << 0xc;
        
        if rsi_1 == 0
        {
            if rcx_2 == 0 || rcx_2 == 0x7ff0000000000000
            {
                goto 'label_4d51da;
            }
        }
        else if rcx_2 == 0
        {
            goto 'label_4d51da;
        }
        
        let temp0_1: [u64; 0x2] = _mm_and_pd(data_40d940, arg4);
        let var_38_1: u64 = arg4[0];
        let mut x: DFtype;
        let mut zmm0_1: f64;
        x = floor(log10(arg1, rsi_1, temp0_1[0]));
        let mut m: i32 = 0;
        let m_1: i32 = __minsd_xmmsd_memsd(__maxsd_xmmsd_memsd(zmm0_1, -0x3e20000000000000), 
            0x41dfffffffc00000);
        
        if FCMP_O(zmm0_1, zmm0_1)
        {
            m = m_1;
        }
        
        let mut zmm0_2: [u64; 0x2];
        let mut zmm1_1: [u64; 0x2];
        zmm0_2 = __powidf2(m, x);
        let temp0_4: [u64; 0x2] = _mm_xor_pd(zmm1_1, zmm1_1);
        
        if !(var_38_1 <= temp0_4[0]) && zmm0_2[0] > var_38_1
        {
            m -= 1;
        }
        else if !(temp0_4[0] <= var_38_1)
            && !(var_38_1 <= __xorpd_xmmxuq_memxuq(zmm0_2, data_40dbf0)[0])
        {
            m -= 1;
        }
        
        if m < 0 || m >= r14_1
        {
            let mut rax_4: fn(arg1: *mut i64, arg2: *mut i64) -> i64;
            
            if m == 0xffffffff
            {
                var_d8 = &var_70;
                rax_4 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            }
            else
            {
                r14_1 -= 1;
                var_d8 = &var_70;
                rax_4 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h74a47d8602c716a3;
            }
            
            let var_d0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = rax_4;
            let var_c8_2: i64 = r14_1;
        }
        else
        {
            var_d8 = &var_70;
            let var_d0: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            let var_c8: i64 = !m + r14_1;
        }
        
        let var_c0_1: i64 = 0;
        let var_b8_1: i64 = arg2;
        let var_b0_1: i64 = 0;
        __builtin_memcpy(&var_a8, 
            "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x02\x00\x00\x00\x00\x00\x00\x00", 0x20);
        let var_88_2: i64 = 0;
        let var_80_2: i64 = 0x20;
        let var_78_2: i8 = 3;
        var_68 = &data_40dad0;
        let var_60_2: i64 = 1;
        let var_48_1: *mut i64 = &var_a8;
        let var_40_1: i64 = 1;
        let var_58_2: *mut *mut i64 = &var_d8;
        let var_50_2: i64 = 3;
        rsi_2 = &var_68;
    }
    core::option::Option$LT$T$GT$::map_or_else::hc22922308bfda6bf(arg1, rsi_2)
}
