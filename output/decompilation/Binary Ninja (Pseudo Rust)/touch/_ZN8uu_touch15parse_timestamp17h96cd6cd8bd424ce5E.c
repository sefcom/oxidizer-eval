
  fn uu_touch::parse_timestamp::h96cd6cd8bd424ce5(arg1: *mut i64, arg2: i64, arg3: u64) -> *mut i64

{
    let mut var_80: i64 = arg2;
    let var_78: u64 = arg3;
    let mut var_148: *mut *mut c_void;
    let mut var_140: i64;
    let mut var_118: i32;
    let mut var_110: fn(arg1: *mut i64, arg2: i64) -> i64;
    let mut var_100: i32;
    let mut var_e8: *mut *mut i32;
    let mut var_b8: *mut i32;
    let mut var_98: i128;
    let mut rcx_1: *const i8;
    let zmm0: [i32; 0x4];
    
    match _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(arg2, arg2 + arg3, zmm0) - 8
    {
        0 =>
        {
            chrono::offset::local::Local::now::ha82adb6e05d16f38(&var_148);
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(
                &var_118, &var_148, *var_140[4]);
            var_b8 = var_118 >> 0xd;
            var_118 = &var_b8;
            var_110 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
            let var_108_1: *mut i64 = &var_80;
            var_100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
            var_148 = &data_46c700;
            var_140 = 2;
            let var_128_1: i64 = 0;
            let var_138_1: *mut i32 = &var_118;
            let var_130_1: i64 = 2;
            'label_5c38e5:
            core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_98, &var_148);
            goto 'label_5c3905;
        }
        2 =>
        {
            var_118 = &var_80;
            var_110 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
            var_148 = &data_710f18;
            var_140 = 1;
            let var_128_4: i64 = 0;
            let var_138_4: *mut i32 = &var_118;
            let var_130_4: i64 = 1;
            goto 'label_5c38e5;
        }
        3 =>
        {
            chrono::offset::local::Local::now::ha82adb6e05d16f38(&var_148);
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(
                &var_118, &var_148, *var_140[4]);
            var_b8 = var_118 >> 0xd;
            var_118 = &var_b8;
            var_110 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
            let var_108_2: *mut i64 = &var_80;
            var_100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
            var_148 = &data_46c700;
            var_140 = 2;
            let var_128_2: i64 = 0;
            let var_138_2: *mut i32 = &var_118;
            let var_130_2: i64 = 2;
            'label_5c3962:
            core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_98, &var_148);
            goto 'label_5c396d;
        }
        4 =>
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(
                &var_98, arg2, arg3);
            'label_5c3905:
            rcx_1 = "%Y%m%d%H%M/dev/stdout";
            goto 'label_5c3989;
        }
        5 =>
        {
            var_118 = &var_80;
            var_110 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
            var_148 = &data_710f18;
            var_140 = 1;
            let var_128_5: i64 = 0;
            let var_138_5: *mut i32 = &var_118;
            let var_130_5: i64 = 1;
            goto 'label_5c3962;
        }
        7 =>
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(
                &var_98, arg2, arg3);
            'label_5c396d:
            rcx_1 = "%Y%m%d%H%M.%S%Y%m%d%H%M/dev/stdo…";
            'label_5c3989:
            var_e8 = var_98;
            let var_e0: i64;
            let var_88: i64;
            chrono::naive::datetime::NaiveDateTime::parse_from_str::hd1f2c37615fc2a8c(&var_148, 
                var_e0, var_88, rcx_1);
            let rax_9: i32 = var_148;
            let mut rax_11: *mut i128;
            
            if rax_9 == 0
            {
                rax_11 =
                    uu_touch::parse_timestamp::_$u7b$$u7b$closure$u7d$$u7d$::h911368d5f366668b();
                'label_5c3c84:
                arg1[1] = rax_11;
                arg1[2] = &data_710e78;
                *arg1 = 1;
            }
            else
            {
                let rcx_2: *mut *mut c_void = var_148;
                let mut var_6c: i32 = rax_9;
                let var_68_1: *mut *mut c_void = rcx_2;
                _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::h0fa0613822fc0925(&var_148, 1, &var_6c);
                chrono::offset::LocalResult$LT$T$GT$::and_then::h38ad213f398289fd(&var_118, 
                    &var_148, &var_6c);
                
                if var_118 != 0
                {
                    var_b8 = nullptr;
                    let mut var_b0: i64;
                    var_b0 = var_e0;
                    let var_a0_2: i8 = 1;
                    var_98 = &var_b8;
                    *var_98[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_148 = &data_710f38;
                    let var_140_2: i64 = 1;
                    let var_128_6: i64 = 0;
                    let var_138_6: *mut i128 = &var_98;
                    let mut var_130_6: i64 = 1;
                    let mut var_50: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_50, 
                        &var_148);
                    var_130_6 = 1;
                    var_148 = var_50;
                    let var_40: i64;
                    let var_138_7: i64 = var_40;
                    rax_11 = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&var_148);
                    goto 'label_5c3c84;
                }
                
                let var_114: i128;
                let mut var_c8: i128 = var_114;
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(
                    &var_148, &var_c8, *var_c8[0xc]);
                
                if (*var_148[4] * 0xeeeeeeef - 0x11111115).rotate_right(2) <= 0x4444443 &&
                    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h93c3b4fdd31a96ba(
                    var_e0, var_88, ".60`DateTime - TimeDelta` overfl…", 3) != 0
                {
                    _$LT$chrono..datetime..DateTime$LT$Tz$GT$$u20$as$u20$core..ops..arith..AddAssign$LT$chrono..time_delta..TimeDelta$GT$$GT$::add_assign::hbb08d14e863a0c01(&var_c8);
                }
                
                chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::hdc8fa11fc4c46678(
                    &var_148);
                
                if var_148 == 0
                {
                    core::option::expect_failed::h9e03a1f6ff88dbcf(
                        "`DateTime + TimeDelta` overflowe…");
                    /* no return */
                }
                
                var_118 = var_148;
                chrono::datetime::DateTime$LT$Tz$GT$::checked_sub_signed::h40e2b72c9b42b946(
                    &var_148);
                
                if var_148 == 0
                {
                    core::option::expect_failed::h9e03a1f6ff88dbcf(
                        "`DateTime - TimeDelta` overflowe…");
                    /* no return */
                }
                
                let var_58_1: i32 = var_140;
                let mut var_60: *mut *mut c_void = var_148;
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(
                    &var_148, &var_c8, *var_c8[0xc]);
                let r15_1: i32 = *var_148[4];
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(
                    &var_148, &var_60, *var_140[4]);
                
                if r15_1 / 0xe10 != *var_148[4] / 0xe10
                {
                    var_118 = 0;
                    var_110 = var_80;
                    var_100 = 1;
                    var_b8 = &var_118;
                    let var_b0_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_148 = &data_710f28;
                    let var_140_3: i64 = 1;
                    let var_128_7: i64 = 0;
                    let var_138_8: *mut *mut i32 = &var_b8;
                    let mut var_130_7: i64 = 1;
                    let mut var_38: i128;
                    core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_38, 
                        &var_148);
                    var_130_7 = 1;
                    var_148 = var_38;
                    let var_28: i64;
                    let var_138_9: i64 = var_28;
                    rax_11 = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&var_148);
                    goto 'label_5c3c84;
                }
                
                let mut rax_21: i64;
                let mut rdx_13: i32;
                rax_21 = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(&var_c8);
                arg1[1] = rax_21;
                arg1[2] = rdx_13;
                *arg1 = 0;
            }
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&var_e8);
        }
        _ =>
        {
            var_b8 = nullptr;
            let var_b0_1: i64 = arg2;
            let var_a8_1: u64 = arg3;
            let var_a0_1: i8 = 1;
            var_e8 = &var_b8;
            let var_e0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_148 = &data_710f28;
            let var_140_1: i64 = 1;
            let var_128_3: i64 = 0;
            let var_138_3: *mut *mut *mut i32 = &var_e8;
            let var_130_3: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_118, &var_148);
            let var_100_1: i32 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&var_118);
            arg1[2] = &data_710e78;
            *arg1 = 1;
        }
    }
    
    arg1
}
