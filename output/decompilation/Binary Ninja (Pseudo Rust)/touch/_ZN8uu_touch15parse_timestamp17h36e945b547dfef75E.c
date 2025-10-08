
  fn uu_touch::parse_timestamp::h36e945b547dfef75(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> *mut i64

{
    let mut var_a8: *mut i8 = arg2;
    let var_a0: u64 = arg3;
    let mut var_148: *mut *mut [i8; 0xcc];
    let mut var_140: *mut i8;
    let var_138: *mut c_void;
    let mut var_118: i32;
    let mut var_110: fn(arg1: *mut i32) -> u64;
    let mut var_100: i32;
    let mut var_f8: *mut i32;
    let mut var_d8: *mut *mut [i8; 0xcc];
    let mut rax_6: *mut *mut [i8; 0xcc];
    let mut rcx_1: *const i8;
    let mut r14_1: *mut i8;
    let mut r15_1: *mut c_void;
    let zmm0: [i32; 0x4];
    
    match _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(arg2, &arg2[arg3], zmm0) - 8
    {
        0 =>
        {
            chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_148);
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h9565526034328997(
                &var_118, &var_148, *var_140[4]);
            var_d8 = var_118 >> 0xd;
            var_118 = &var_d8;
            var_110 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
            let var_108_1: *mut *mut i8 = &var_a8;
            var_100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h18af96482be5ae0f;
            var_148 = &data_4574b0;
            var_140 = 2;
            let var_128_1: i64 = 0;
            let var_138_1: *mut i32 = &var_118;
            let var_130_1: i64 = 2;
            let mut var_70: *mut *mut [i8; 0xcc];
            core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_70, &var_148);
            rax_6 = var_70;
            let var_68: *mut i8;
            r14_1 = var_68;
            rcx_1 = "%Y%m%d%H%M%Y%m%dUTC%#z%#z([\+-])…";
            let var_60: *mut c_void;
            r15_1 = var_60;
            'label_53b22d:
            var_d8 = rax_6;
            let var_d0_2: *mut i8 = r14_1;
            let var_c8_2: *mut c_void = r15_1;
            chrono::naive::datetime::NaiveDateTime::parse_from_str::hdc760f858f0e9f44(&var_148, 
                r14_1, r15_1, rcx_1);
            let rax_10: i32 = var_148;
            let mut rax_12: u64;
            
            if rax_10 == 0
            {
                rax_12 =
                    uu_touch::parse_timestamp::_$u7b$$u7b$closure$u7d$$u7d$::hacc50b88b119b6d2();
                'label_53b4f0:
                arg1[1] = rax_12;
                arg1[2] = &data_679e10;
                *arg1 = 1;
            }
            else
            {
                let rcx_6: *mut *mut [i8; 0xcc] = var_148;
                let mut var_b4: i32 = rax_10;
                let var_b0_1: *mut *mut [i8; 0xcc] = rcx_6;
                _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::hccb4fb7298479e9d(&var_118, 1, &var_b4);
                chrono::offset::LocalResult$LT$T$GT$::and_then::h5026d116032789f9(&var_148, 
                    &var_118, &var_b4);
                
                if var_148 != 0
                {
                    var_118 = 0;
                    let var_110_1: *mut i8 = r14_1;
                    let var_108_3: *mut c_void = r15_1;
                    var_100 = 1;
                    var_f8 = &var_118;
                    let var_f0_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_148 = &data_679ef0;
                    let var_140_2: i64 = 1;
                    let var_128_4: i64 = 0;
                    let var_138_4: *mut *mut i32 = &var_f8;
                    let mut var_130_4: i64 = 1;
                    let mut var_58: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_58, 
                        &var_148);
                    var_130_4 = 1;
                    var_148 = var_58;
                    let var_48: i64;
                    let var_138_5: i64 = var_48;
                    rax_12 = alloc::boxed::Box$LT$T$GT$::new::hd8fce8cb627455b5(&var_148);
                    goto 'label_53b4f0;
                }
                
                let mut var_e8: i128 = *var_148[4];
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h9565526034328997(
                    &var_148, &var_e8, *var_e8[0xc]);
                
                if (*var_148[4] * 0xeeeeeeef - 0x11111115).rotate_right(2) <= 0x4444443 &&
                    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::ha781efaf1b0d4b49(r14_1, 
                    r15_1) != 0
                {
                    _$LT$chrono..datetime..DateTime$LT$Tz$GT$$u20$as$u20$core..ops..arith..AddAssign$LT$chrono..time_delta..TimeDelta$GT$$GT$::add_assign::h3f81febb7b5eceb4(&var_e8, 1);
                }
                
                chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::h6c9caf6d3908e4a7(
                    &var_148, &var_e8);
                
                if var_148 == 0
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "`DateTime + TimeDelta` overflowe…");
                    /* no return */
                }
                
                var_118 = var_148;
                chrono::datetime::DateTime$LT$Tz$GT$::checked_sub_signed::h2934f7ae0d27804e(
                    &var_148, &var_118);
                
                if var_148 == 0
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "`DateTime - TimeDelta` overflowe…");
                    /* no return */
                }
                
                let var_90_1: i32 = var_140;
                let mut var_98: *mut *mut [i8; 0xcc] = var_148;
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h9565526034328997(
                    &var_148, &var_e8, *var_e8[0xc]);
                let r15_2: i32 = *var_148[4];
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h9565526034328997(
                    &var_148, &var_98, *var_140[4]);
                
                if r15_2 / 0xe10 != *var_148[4] / 0xe10
                {
                    var_118 = 0;
                    var_110 = var_a8;
                    var_100 = 1;
                    var_f8 = &var_118;
                    let var_f0_3: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_148 = &data_679f00;
                    let var_140_3: i64 = 1;
                    let var_128_5: i64 = 0;
                    let var_138_6: *mut *mut i32 = &var_f8;
                    let mut var_130_5: i64 = 1;
                    let mut var_40: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_40, 
                        &var_148);
                    var_130_5 = 1;
                    var_148 = var_40;
                    let var_30: i64;
                    let var_138_7: i64 = var_30;
                    rax_12 = alloc::boxed::Box$LT$T$GT$::new::hd8fce8cb627455b5(&var_148);
                    goto 'label_53b4f0;
                }
                
                let mut rax_22: i64;
                let mut rdx_15: i32;
                rax_22 = uu_touch::datetime_to_filetime::h5b8a0eb5c393ab6a(&var_e8);
                arg1[1] = rax_22;
                arg1[2] = rdx_15;
                *arg1 = 0;
            }
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc61d8ef8308f20d8(&var_d8);
        }
        2 =>
        {
            uu_touch::prepend_century::h599b7f098e7e4682(&var_148, arg2, arg3);
            rax_6 = var_148;
            r14_1 = var_140;
            r15_1 = var_138;
            
            if -(rax_6) != -0x8000000000000000
            {
                goto 'label_53b1df;
            }
            
            'label_53b20c:
            arg1[1] = r14_1;
            arg1[2] = r15_1;
            *arg1 = 1;
        }
        3 =>
        {
            chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_148);
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h9565526034328997(
                &var_118, &var_148, *var_140[4]);
            var_d8 = var_118 >> 0xd;
            var_118 = &var_d8;
            var_110 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
            let var_108_2: *mut *mut i8 = &var_a8;
            var_100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h18af96482be5ae0f;
            var_148 = &data_4574b0;
            var_140 = 2;
            let var_128_2: i64 = 0;
            let var_138_2: *mut i32 = &var_118;
            let var_130_2: i64 = 2;
            let mut var_88: *mut *mut [i8; 0xcc];
            core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_88, &var_148);
            rax_6 = var_88;
            let var_80: *mut i8;
            r14_1 = var_80;
            rcx_1 = "%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC…";
            let var_78: *mut c_void;
            r15_1 = var_78;
            goto 'label_53b22d;
        }
        4 =>
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h443e6c10e45cdc42(&var_148, arg2, arg3);
            rax_6 = var_148;
            r14_1 = var_140;
            r15_1 = var_138;
            'label_53b1df:
            rcx_1 = "%Y%m%d%H%M%Y%m%dUTC%#z%#z([\+-])…";
            goto 'label_53b22d;
        }
        5 =>
        {
            uu_touch::prepend_century::h599b7f098e7e4682(&var_148, arg2, arg3);
            rax_6 = var_148;
            r14_1 = var_140;
            r15_1 = var_138;
            
            if -(rax_6) != -0x8000000000000000
            {
                goto 'label_53b226;
            }
            
            goto 'label_53b20c;
        }
        7 =>
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h443e6c10e45cdc42(&var_148, arg2, arg3);
            rax_6 = var_148;
            r14_1 = var_140;
            r15_1 = var_138;
            'label_53b226:
            rcx_1 = "%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC…";
            goto 'label_53b22d;
        }
        _ =>
        {
            var_d8 = nullptr;
            let var_d0_1: *mut i8 = arg2;
            let var_c8_1: u64 = arg3;
            let var_c0_1: i8 = 1;
            var_f8 = &var_d8;
            let var_f0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_148 = &data_679f00;
            let var_140_1: i64 = 1;
            let var_128_3: i64 = 0;
            let var_138_3: *mut *mut i32 = &var_f8;
            let var_130_3: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_118, &var_148);
            let var_100_1: i32 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hd8fce8cb627455b5(&var_118);
            arg1[2] = &data_679e10;
            *arg1 = 1;
        }
    }
    
    arg1
}
