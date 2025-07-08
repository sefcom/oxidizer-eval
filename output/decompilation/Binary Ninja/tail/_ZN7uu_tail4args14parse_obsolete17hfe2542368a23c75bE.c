
  int64_t* uu_tail::args::parse_obsolete::hfe2542368a23c75b(int64_t* arg1, void* arg2, void* arg3)

{
    char var_90;
    uu_tail::parse::parse_obsolete::h38d0198c01039e5a(&var_90, arg2);
    char var_86;
    uint32_t rax = var_86;
    
    if (rax == 2)
    {
        uint64_t r12_1 = var_90;
        void var_a8;
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_a8, *(arg2 + 8), 
            *(arg2 + 0x10));
        char const (** const var_118)[0x52];
        int64_t var_100_1;
        int64_t* var_e0;
        void* var_c8;
        int128_t var_c0;
        int128_t var_a0;
        void* r14_1;
        
        switch (r12_1)
        {
            case 0:
            {
                var_c8 = nullptr;
                int128_t var_c0_1 = var_a0;
                char var_b0_1 = 1;
                var_e0 = &var_c8;
                int64_t (* var_d8_1)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_118 = &data_5bb630;
                int64_t var_110_1 = 2;
                int64_t var_f8_1 = 0;
                int64_t** var_108_1 = &var_e0;
                var_100_1 = 1;
                void var_80;
                r14_1 = &var_80;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_80, &var_118);
                break;
            }
            case 1:
            {
                var_c8 = nullptr;
                int128_t var_c0_2 = var_a0;
                char var_b0_2 = 1;
                var_e0 = &var_c8;
                int64_t (* var_d8_3)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_118 = &data_5bb650;
                int64_t var_110_4 = 1;
                int64_t var_f8_4 = 0;
                int64_t** var_108_4 = &var_e0;
                var_100_1 = 1;
                void var_68;
                r14_1 = &var_68;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_68, &var_118);
                break;
            }
            case 2:
            {
                void* rax_1 = var_a0;
                var_c8 = rax_1;
                var_c0 = *var_a0[8] + rax_1;
                int64_t rax_2 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::advance_by::h7ba654970d2c1b3e(&var_c8);
                int32_t rax_6;
                int32_t rdx_2;
                
                if (!rax_2)
                    rax_6 =
                        core::str::validations::next_code_point::habe44cbb115926fa(&var_c8, arg1);
                
                if (rax_2 || !rax_6 || rdx_2 == 0x110000)
                    rdx_2 = 0;
                
                int32_t var_cc = rdx_2;
                var_e0 = &var_cc;
                void* (* var_d8_2)(int32_t* arg1, int64_t* arg2) =
                    _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::hfe75cd72bcd9c522;
                var_118 = &data_5bb660;
                int64_t var_110_2 = 1;
                int64_t var_f8_2 = 0;
                int64_t** var_108_2 = &var_e0;
                var_100_1 = 1;
                void var_50;
                r14_1 = &var_50;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_50, &var_118);
                break;
            }
            case 3:
            {
                var_c8 = &var_a8;
                var_c0 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h3266cc735e754328;
                var_118 = &data_5bb670;
                int64_t var_110_3 = 2;
                int64_t var_f8_3 = 0;
                void** var_108_3 = &var_c8;
                var_100_1 = 1;
                void var_38;
                r14_1 = &var_38;
                core::option::Option$LT$T$GT$::map_or_else::hb4ba59fb1ad49b60(&var_38, &var_118);
                break;
            }
        }
        
        int64_t var_108_5 = *(r14_1 + 0x10);
        var_118 = *r14_1;
        var_100_1 = 1;
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7645b42f7bfbf581(&var_118);
        arg1[2] = &data_5bb3c8;
        *arg1 = 6;
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h890545819f3c5be0(&var_a8);
    }
    else if (rax != 3)
        uu_tail::args::Settings::from_obsolete_args::hf9c13cdfe31c2b03(arg1, &var_90, arg3);
    else
        *arg1 = 5;
    
    return arg1;
}
