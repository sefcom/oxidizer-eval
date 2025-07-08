
  int64_t* uu_touch::parse_timestamp::h96cd6cd8bd424ce5(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_80 = arg2;
    uint64_t var_78 = arg3;
    void** const var_148;
    int64_t var_140;
    int32_t var_118;
    int64_t (* var_110)(int64_t* arg1, int64_t arg2);
    int32_t var_100;
    int32_t** var_e8;
    int32_t* var_b8;
    int128_t var_98;
    char const* const rcx_1;
    int32_t zmm0[0x4];
    
    switch (_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::hc7941fd67a47c62a(arg2, arg2 + arg3, zmm0) - 8)
    {
        case 0:
        {
            chrono::offset::local::Local::now::ha82adb6e05d16f38(&var_148);
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(
                &var_118, &var_148, *var_140[4]);
            var_b8 = var_118 >> 0xd;
            var_118 = &var_b8;
            var_110 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
            int64_t* var_108_1 = &var_80;
            var_100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
            var_148 = &data_46c700;
            var_140 = 2;
            int64_t var_128_1 = 0;
            int32_t* var_138_1 = &var_118;
            int64_t var_130_1 = 2;
            label_5c38e5:
            core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_98, &var_148);
            goto label_5c3905;
        }
        case 2:
        {
            var_118 = &var_80;
            var_110 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
            var_148 = &data_710f18;
            var_140 = 1;
            int64_t var_128_4 = 0;
            int32_t* var_138_4 = &var_118;
            int64_t var_130_4 = 1;
            goto label_5c38e5;
        }
        case 3:
        {
            chrono::offset::local::Local::now::ha82adb6e05d16f38(&var_148);
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(
                &var_118, &var_148, *var_140[4]);
            var_b8 = var_118 >> 0xd;
            var_118 = &var_b8;
            var_110 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::hca014a89be6ce751;
            int64_t* var_108_2 = &var_80;
            var_100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
            var_148 = &data_46c700;
            var_140 = 2;
            int64_t var_128_2 = 0;
            int32_t* var_138_2 = &var_118;
            int64_t var_130_2 = 2;
            label_5c3962:
            core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_98, &var_148);
            goto label_5c396d;
        }
        case 4:
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(
                &var_98, arg2, arg3);
            label_5c3905:
            rcx_1 = "%Y%m%d%H%M/dev/stdout";
            goto label_5c3989;
        }
        case 5:
        {
            var_118 = &var_80;
            var_110 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h802749042f990904;
            var_148 = &data_710f18;
            var_140 = 1;
            int64_t var_128_5 = 0;
            int32_t* var_138_5 = &var_118;
            int64_t var_130_5 = 1;
            goto label_5c3962;
        }
        case 7:
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he7405723912f7c0b(
                &var_98, arg2, arg3);
            label_5c396d:
            rcx_1 = "%Y%m%d%H%M.%S%Y%m%d%H%M/dev/stdo…";
            label_5c3989:
            var_e8 = var_98;
            int64_t var_e0;
            int64_t var_88;
            chrono::naive::datetime::NaiveDateTime::parse_from_str::hd1f2c37615fc2a8c(&var_148, 
                var_e0, var_88, rcx_1);
            int32_t rax_9 = var_148;
            int128_t* rax_11;
            
            if (!rax_9)
            {
                rax_11 =
                    uu_touch::parse_timestamp::_$u7b$$u7b$closure$u7d$$u7d$::h911368d5f366668b();
                label_5c3c84:
                arg1[1] = rax_11;
                arg1[2] = &data_710e78;
                *arg1 = 1;
            }
            else
            {
                void** const rcx_2 = var_148;
                int32_t var_6c = rax_9;
                void** const var_68_1 = rcx_2;
                _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::h0fa0613822fc0925(&var_148, 1, &var_6c);
                chrono::offset::LocalResult$LT$T$GT$::and_then::h38ad213f398289fd(&var_118, 
                    &var_148, &var_6c);
                
                if (var_118)
                {
                    var_b8 = nullptr;
                    int64_t var_b0;
                    var_b0 = var_e0;
                    char var_a0_2 = 1;
                    var_98 = &var_b8;
                    *var_98[8] = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_148 = &data_710f38;
                    int64_t var_140_2 = 1;
                    int64_t var_128_6 = 0;
                    int128_t* var_138_6 = &var_98;
                    int64_t var_130_6 = 1;
                    int128_t var_50;
                    core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_50, 
                        &var_148);
                    var_130_6 = 1;
                    var_148 = var_50;
                    int64_t var_40;
                    int64_t var_138_7 = var_40;
                    rax_11 = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&var_148);
                    goto label_5c3c84;
                }
                
                int128_t var_114;
                int128_t var_c8 = var_114;
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(
                    &var_148, &var_c8, *var_c8[0xc]);
                
                if (RORD(*var_148[4] * 0xeeeeeeef - 0x11111115, 2) <= 0x4444443 &&
                        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h93c3b4fdd31a96ba(
                        var_e0, var_88, ".60`DateTime - TimeDelta` overfl…", 3))
                    _$LT$chrono..datetime..DateTime$LT$Tz$GT$$u20$as$u20$core..ops..arith..AddAssign$LT$chrono..time_delta..TimeDelta$GT$$GT$::add_assign::hbb08d14e863a0c01(&var_c8);
                
                chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::hdc8fa11fc4c46678(
                    &var_148);
                
                if (!var_148)
                {
                    core::option::expect_failed::h9e03a1f6ff88dbcf(
                        "`DateTime + TimeDelta` overflowe…");
                    /* no return */
                }
                
                var_118 = var_148;
                chrono::datetime::DateTime$LT$Tz$GT$::checked_sub_signed::h40e2b72c9b42b946(
                    &var_148);
                
                if (!var_148)
                {
                    core::option::expect_failed::h9e03a1f6ff88dbcf(
                        "`DateTime - TimeDelta` overflowe…");
                    /* no return */
                }
                
                int32_t var_58_1 = var_140;
                void** const var_60 = var_148;
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(
                    &var_148, &var_c8, *var_c8[0xc]);
                int32_t r15_1 = *var_148[4];
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h44e7199241db0904(
                    &var_148, &var_60, *var_140[4]);
                
                if (r15_1 / 0xe10 != *var_148[4] / 0xe10)
                {
                    var_118 = 0;
                    var_110 = var_80;
                    var_100 = 1;
                    var_b8 = &var_118;
                    int64_t (* var_b0_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                    var_148 = &data_710f28;
                    int64_t var_140_3 = 1;
                    int64_t var_128_7 = 0;
                    int32_t** var_138_8 = &var_b8;
                    int64_t var_130_7 = 1;
                    int128_t var_38;
                    core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_38, 
                        &var_148);
                    var_130_7 = 1;
                    var_148 = var_38;
                    int64_t var_28;
                    int64_t var_138_9 = var_28;
                    rax_11 = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&var_148);
                    goto label_5c3c84;
                }
                
                int64_t rax_21;
                int32_t rdx_13;
                rax_21 = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(&var_c8);
                arg1[1] = rax_21;
                arg1[2] = rdx_13;
                *arg1 = 0;
            }
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb41aa8b20f891843(&var_e8);
            break;
        }
        default:
        {
            var_b8 = nullptr;
            int64_t var_b0_1 = arg2;
            uint64_t var_a8_1 = arg3;
            char var_a0_1 = 1;
            var_e8 = &var_b8;
            int64_t (* var_e0_1)(void* arg1, void* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
            var_148 = &data_710f28;
            int64_t var_140_1 = 1;
            int64_t var_128_3 = 0;
            int32_t*** var_138_3 = &var_e8;
            int64_t var_130_3 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hfcce5e0c4efe3dfb(&var_118, &var_148);
            int32_t var_100_1 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h6ec029cbb0371e9d(&var_118);
            arg1[2] = &data_710e78;
            *arg1 = 1;
        }
    }
    
    return arg1;
}
