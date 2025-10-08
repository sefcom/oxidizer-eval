
  fn uu_od::prn_float::format_float::hb20d3bf5c81306f8(arg1: *mut i128, arg2: i64, arg3: u64, arg4: i128 @ zmm0) -> *mut i128

{
    let rax: i64 = arg4;
    let mut var_70: *mut [i8; 0x3] = arg4;
    let rcx: i64 = 0x7fffffffffffffff & rax;
    let mut r9_2: i64;
    
    if rcx != 0x7ff0000000000000
    {
        r9_2 = rax & 0x7ff0000000000000;
    }
    
    let mut rsi: *const *mut *mut [i8; 0x3];
    let mut var_a0: *mut c_void;
    let mut var_68: *mut *mut [i8; 0x3];
    
    if rcx == 0x7ff0000000000000 || r9_2 == 0 || r9_2 == 0x7ff0000000000000
    {
        arg4 - 0.0;
        let mut rax_1: *mut c_void;
        
        if arg4 != 0.0 || FCMP_UO(arg4, 0.0)
        {
            let mut rax_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64;
            
            if rcx > 0x7fefffffffffffff
            {
                'label_46b72a:
                var_68 = &var_70;
                rax_2 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
                goto 'label_46b831;
            }
            
            var_68 = &var_70;
            rax_2 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h557be61bd0f0070d;
            'label_46b831:
            let var_60_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = rax_2;
            let var_58_1: i64 = 0;
            let var_50_2: i16 = arg2;
            var_a0 = &data_41a940;
            let var_98_2: i64 = 1;
            rax_1 = &data_41d228;
        }
        else
        {
            if rax == 0
            {
                goto 'label_46b72a;
            }
            
            var_68 = &data_503900;
            let var_60: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::haf6b42bb4c53f309;
            let var_58: i64 = 0;
            let var_50_1: i16 = arg2;
            var_a0 = &data_41a940;
            let var_98: i64 = 1;
            rax_1 = &data_41d2a8;
        }
        
        let var_80: *mut c_void = rax_1;
        let var_78_1: i64 = 1;
        let var_90_1: *const *mut *mut [i8; 0x3] = &var_68;
        let var_88_1: i64 = 2;
        rsi = &var_a0;
    }
    else
    {
        let mut r12_1: u64 = arg3;
        let var_38_1: i64 = arg4;
        let mut zmm0: u128;
        let mut zmm1_1: u128;
        zmm0 = log10(arg1, arg2, (data_41a790[0] & arg4));
        let zmm0_1: [f64; 0x2] = floor(zmm0, zmm1_1);
        let mut rbx_1: i32 = 0;
        let cond:1_1: bool = FCMP_O(zmm0_1[0], zmm0_1[0]);
        let rax_3: i32 = __minsd_xmmsd_memsd(
            __maxsd_xmmsd_memsd(zmm0_1[0], -0x3e20000000000000)[0], 0x41dfffffffc00000)[0];
        
        if cond:1_1
        {
            rbx_1 = rax_3;
        }
        
        let mut zmm0_2: [u64; 0x2] = __powidf2(rbx_1, 0x4024000000000000);
        
        if !(var_38_1 <= 0.0) && zmm0_2[0] > var_38_1
        {
            rbx_1 -= 1;
        }
        else if !(0.0 <= var_38_1)
        {
            zmm0_2 = __xorpd_xmmxuq_memxuq(zmm0_2, data_41aa90);
            
            if !(var_38_1 <= zmm0_2[0])
            {
                rbx_1 -= 1;
            }
        }
        
        let mut var_88: i64;
        let mut rax_7: fn(arg1: *mut i64, arg2: *mut i64) -> i64;
        
        if (rbx_1 >= 0 & rbx_1 < r12_1) != 0
        {
            r12_1 += !rbx_1;
            
            if r12_1 > 0xffff
            {
                var_a0 = &data_5038d8;
                let var_98_1: i64 = 1;
                let var_90: i64 = 8;
                var_88 = _mm_xor_pd(zmm0_2, zmm0_2);
                core::panicking::panic_fmt::h96f341d36638c225(&var_a0);
                /* no return */
            }
            
            var_a0 = &var_70;
            rax_7 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        }
        else if rbx_1 == 0xffffffff
        {
            var_a0 = &var_70;
            rax_7 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        }
        else
        {
            r12_1 = r12_1 - 1;
            var_a0 = &var_70;
            rax_7 = core::fmt::float::_$LT$impl$u20$core..fmt..LowerExp$u20$for$u20$f64$GT$::fmt::h557be61bd0f0070d;
        }
        
        let var_98_3: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = rax_7;
        let var_90_2: i64 = 0;
        var_88 = r12_1;
        let var_80_1: i64 = 0;
        let mut var_78: i64;
        var_78 = arg2;
        var_68 = &data_41a940;
        let var_60_2: i64 = 1;
        let var_48_1: *mut c_void = &data_41d258;
        let var_40_1: i64 = 1;
        let var_58_2: *const *mut c_void = &var_a0;
        let mut var_50: i16;
        var_50 = 3;
        rsi = &var_68;
    }
    core::option::Option$LT$T$GT$::map_or_else::h56b2ee9aee1b26d0(arg1, rsi)
}
