
  int64_t* uu_touch::parse_timestamp::h36e945b547dfef75(int64_t* arg1, char* arg2, uint64_t arg3)

{
    char* var_a8 = arg2;
    uint64_t var_a0 = arg3;
    char const (** const var_148)[0xcc];
    int64_t var_140;
    int64_t var_138;
    int32_t var_118;
    uint64_t (* var_110)(int32_t* arg1);
    int32_t var_100;
    int32_t* var_f8;
    char const (** const var_d8)[0xcc];
    char const (** const rax_6)[0xcc];
    char const* const rcx_1;
    int64_t r14_1;
    int64_t r15_1;
    int32_t zmm0[0x4];
    
    switch (_$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(arg2, &arg2[arg3], zmm0) - 8)
    {
        case 0:
        {
            chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_148);
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h9565526034328997(
                &var_118, &var_148, *var_140[4]);
            var_d8 = var_118 >> 0xd;
            var_118 = &var_d8;
            var_110 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
            char** var_108_1 = &var_a8;
            var_100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h18af96482be5ae0f;
            var_148 = &data_4574b0;
            var_140 = 2;
            int64_t var_128_1 = 0;
            int32_t* var_138_1 = &var_118;
            int64_t var_130_1 = 2;
            char const (** var_70)[0xcc];
            core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_70, &var_148);
            rax_6 = var_70;
            int64_t var_68;
            r14_1 = var_68;
            rcx_1 = "%Y%m%d%H%M%Y%m%dUTC%#z%#z([\+-])…";
            int64_t var_60;
            r15_1 = var_60;
            label_53b22d:
            var_d8 = rax_6;
            int64_t var_d0_2 = r14_1;
            int64_t var_c8_2 = r15_1;
            chrono::naive::datetime::NaiveDateTime::parse_from_str::hdc760f858f0e9f44(&var_148, 
                r14_1, r15_1, rcx_1);
            int32_t rax_10 = var_148;
            uint64_t rax_12;
            
            if (!rax_10)
            {
                rax_12 =
                    uu_touch::parse_timestamp::_$u7b$$u7b$closure$u7d$$u7d$::hacc50b88b119b6d2();
                label_53b4f0:
                arg1[1] = rax_12;
                arg1[2] = &data_679e10;
                *arg1 = 1;
            }
            else
            {
                char const (** const rcx_6)[0xcc] = var_148;
                int32_t var_b4 = rax_10;
                char const (** const var_b0_1)[0xcc] = rcx_6;
                _$LT$chrono..offset..local..Local$u20$as$u20$chrono..offset..TimeZone$GT$::offset_from_local_datetime::hccb4fb7298479e9d(&var_118, 1, &var_b4);
                chrono::offset::LocalResult$LT$T$GT$::and_then::h5026d116032789f9(&var_148, 
                    &var_118, &var_b4);
                
                if (var_148)
                {
                    var_118 = 0;
                    int64_t var_110_1 = r14_1;
                    int64_t var_108_3 = r15_1;
                    var_100 = 1;
                    var_f8 = &var_118;
                    int64_t (* var_f0_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_148 = &data_679ef0;
                    int64_t var_140_2 = 1;
                    int64_t var_128_4 = 0;
                    int32_t** var_138_4 = &var_f8;
                    int64_t var_130_4 = 1;
                    int128_t var_58;
                    core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_58, 
                        &var_148);
                    var_130_4 = 1;
                    var_148 = var_58;
                    int64_t var_48;
                    int64_t var_138_5 = var_48;
                    rax_12 = alloc::boxed::Box$LT$T$GT$::new::hd8fce8cb627455b5(&var_148);
                    goto label_53b4f0;
                }
                
                int128_t var_e8 = *var_148[4];
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h9565526034328997(
                    &var_148, &var_e8, *var_e8[0xc]);
                
                if (RORD(*var_148[4] * 0xeeeeeeef - 0x11111115, 2) <= 0x4444443 &&
                        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::ha781efaf1b0d4b49(
                        r14_1, r15_1))
                    _$LT$chrono..datetime..DateTime$LT$Tz$GT$$u20$as$u20$core..ops..arith..AddAssign$LT$chrono..time_delta..TimeDelta$GT$$GT$::add_assign::h3f81febb7b5eceb4(&var_e8, 1);
                
                chrono::datetime::DateTime$LT$Tz$GT$::checked_add_signed::h6c9caf6d3908e4a7(
                    &var_148, &var_e8);
                
                if (!var_148)
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "`DateTime + TimeDelta` overflowe…");
                    /* no return */
                }
                
                var_118 = var_148;
                chrono::datetime::DateTime$LT$Tz$GT$::checked_sub_signed::h2934f7ae0d27804e(
                    &var_148, &var_118);
                
                if (!var_148)
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "`DateTime - TimeDelta` overflowe…");
                    /* no return */
                }
                
                int32_t var_90_1 = var_140;
                char const (** const var_98)[0xcc] = var_148;
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h9565526034328997(
                    &var_148, &var_e8, *var_e8[0xc]);
                int32_t r15_2 = *var_148[4];
                chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h9565526034328997(
                    &var_148, &var_98, *var_140[4]);
                
                if (r15_2 / 0xe10 != *var_148[4] / 0xe10)
                {
                    var_118 = 0;
                    var_110 = var_a8;
                    var_100 = 1;
                    var_f8 = &var_118;
                    int64_t (* var_f0_3)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_148 = &data_679f00;
                    int64_t var_140_3 = 1;
                    int64_t var_128_5 = 0;
                    int32_t** var_138_6 = &var_f8;
                    int64_t var_130_5 = 1;
                    int128_t var_40;
                    core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_40, 
                        &var_148);
                    var_130_5 = 1;
                    var_148 = var_40;
                    int64_t var_30;
                    int64_t var_138_7 = var_30;
                    rax_12 = alloc::boxed::Box$LT$T$GT$::new::hd8fce8cb627455b5(&var_148);
                    goto label_53b4f0;
                }
                
                int64_t rax_22;
                int32_t rdx_15;
                rax_22 = uu_touch::datetime_to_filetime::h5b8a0eb5c393ab6a(&var_e8);
                arg1[1] = rax_22;
                arg1[2] = rdx_15;
                *arg1 = 0;
            }
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hc61d8ef8308f20d8(&var_d8);
            break;
        }
        case 2:
        {
            uu_touch::prepend_century::h599b7f098e7e4682(&var_148, arg2, arg3);
            rax_6 = var_148;
            r14_1 = var_140;
            r15_1 = var_138;
            
            if (-(rax_6) != -0x8000000000000000)
                goto label_53b1df;
            
            label_53b20c:
            arg1[1] = r14_1;
            arg1[2] = r15_1;
            *arg1 = 1;
            break;
        }
        case 3:
        {
            chrono::offset::local::Local::now::hd3cc0dab6e1d709b(&var_148);
            chrono::naive::datetime::NaiveDateTime::overflowing_add_offset::h9565526034328997(
                &var_118, &var_148, *var_140[4]);
            var_d8 = var_118 >> 0xd;
            var_118 = &var_d8;
            var_110 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
            char** var_108_2 = &var_a8;
            var_100 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h18af96482be5ae0f;
            var_148 = &data_4574b0;
            var_140 = 2;
            int64_t var_128_2 = 0;
            int32_t* var_138_2 = &var_118;
            int64_t var_130_2 = 2;
            char const (** var_88)[0xcc];
            core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_88, &var_148);
            rax_6 = var_88;
            int64_t var_80;
            r14_1 = var_80;
            rcx_1 = "%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC…";
            int64_t var_78;
            r15_1 = var_78;
            goto label_53b22d;
        }
        case 4:
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h443e6c10e45cdc42(&var_148, arg2, arg3);
            rax_6 = var_148;
            r14_1 = var_140;
            r15_1 = var_138;
            label_53b1df:
            rcx_1 = "%Y%m%d%H%M%Y%m%dUTC%#z%#z([\+-])…";
            goto label_53b22d;
        }
        case 5:
        {
            uu_touch::prepend_century::h599b7f098e7e4682(&var_148, arg2, arg3);
            rax_6 = var_148;
            r14_1 = var_140;
            r15_1 = var_138;
            
            if (-(rax_6) != -0x8000000000000000)
                goto label_53b226;
            
            goto label_53b20c;
        }
        case 7:
        {
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h443e6c10e45cdc42(&var_148, arg2, arg3);
            rax_6 = var_148;
            r14_1 = var_140;
            r15_1 = var_138;
            label_53b226:
            rcx_1 = "%Y%m%d%H%M.%S%Y%m%d%H%M%Y%m%dUTC…";
            goto label_53b22d;
        }
        default:
        {
            var_d8 = nullptr;
            char* var_d0_1 = arg2;
            uint64_t var_c8_1 = arg3;
            char var_c0_1 = 1;
            var_f8 = &var_d8;
            int64_t (* var_f0_1)(int32_t* arg1, int64_t* arg2) =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_148 = &data_679f00;
            int64_t var_140_1 = 1;
            int64_t var_128_3 = 0;
            int32_t** var_138_3 = &var_f8;
            int64_t var_130_3 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h42b45f6f6f73b099(&var_118, &var_148);
            int32_t var_100_1 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hd8fce8cb627455b5(&var_118);
            arg1[2] = &data_679e10;
            *arg1 = 1;
        }
    }
    
    return arg1;
}
