
  void** uu_numfmt::format::format_string::h3b8df337189cc348(int64_t* arg1, char* arg2, int64_t arg3, char* arg4, char arg5, int64_t arg6)

{
    int64_t rbp = arg3;
    char* r15 = arg2;
    int64_t r12 = *(arg4 + 0x88);
    
    if (-(r12) != -0x8000000000000000)
    {
        char* rax_2;
        int64_t rdx_1;
        rax_2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::ha48df28aef4c1d38(*(arg4 + 0x90), *(arg4 + 0x98), r15, rbp);
        
        if (rax_2)
            rbp = rdx_1;
        
        if (rax_2)
            r15 = rax_2;
    }
    
    int64_t r12_1;
    char r13;
    
    if (*(arg4 + 0x10) != 1)
    {
        r13 = arg4[0xb0];
        
        if (r13 != 5)
            r12_1 = 0;
        else
        {
            r13 = 5;
            
            if (arg4[0xb1] != 5)
                r12_1 = 0;
            else
                r12_1 = uu_numfmt::format::parse_implicit_precision::hb5d21ae12bf7afed(r15, rbp);
        }
    }
    else
    {
        r12_1 = *(arg4 + 0x18);
        r13 = arg4[0xb0];
    }
    
    void** result_2;
    uu_numfmt::format::transform_from::hcd3fb358ec05b121(&result_2, r15, rbp, *(arg4 + 0xa0), r13);
    void** result = result_2;
    int64_t var_100;
    uint128_t zmm0 = var_100;
    
    if (result != -0x8000000000000000)
    {
        arg1[1] = result;
        arg1[2] = zmm0;
        int64_t var_f8;
        arg1[3] = var_f8;
        *arg1 = 1;
    }
    else
    {
        int32_t var_158;
        uu_numfmt::format::transform_to::he005deddceb3df89(&var_158, *(arg4 + 0xa8), arg4[0xb1], 
            arg4[0xca], r12_1, zmm0);
        int32_t rax_4 = var_158;
        int128_t var_150;
        int128_t var_128 = var_150;
        void** result_3;
        void** result_1 = result_3;
        
        if (rax_4 != 1)
        {
            int128_t var_68 = var_128;
            int64_t (* var_f0)(int64_t* arg1, int64_t arg2);
            int128_t var_b8;
            void** result_7;
            void* var_98;
            int64_t rax_7;
            int64_t r12_2;
            
            if (r12 != -0x8000000000000000)
            {
                var_98 = &arg4[0x88];
                result_2 = &var_68;
                int64_t (* var_100_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                void** var_f8_1 = &var_98;
                var_f0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hed06e343d9a3976c;
                var_158 = &data_4195a0;
                var_150 = 2;
                int64_t var_138_1 = 0;
                *var_150[8] = &result_2;
                result_3 = 2;
                core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, &var_158);
                var_b8 = var_128;
                result_7 = result_1;
                rax_7 = arg6;
                
                if (*arg4 & 1)
                    r12_2 = *(arg4 + 8);
                else
                {
                    label_46a7dc:
                    r12_2 = rax_7;
                    
                    if (!(arg5 & 1))
                        r12_2 = *(arg4 + 0xb8);
                }
            }
            else
            {
                result_7 = result_1;
                var_b8 = var_68;
                rax_7 = arg6;
                
                if (!(*arg4 & 1))
                    goto label_46a7dc;
                
                r12_2 = *(arg4 + 8);
            }
            
            int128_t var_d8;
            
            if (!r12_2)
            {
                void** result_8 = result_7;
                var_d8 = var_b8;
            }
            else
            {
                void** result_4;
                
                if (r12_2 <= 0)
                {
                    int64_t rax_13 = -(r12_2);
                    
                    if (rax_13 > 0xffff)
                    {
                        label_46ac6a:
                        var_158 = &data_502460;
                        var_150 = 1;
                        *var_150[8] = 8;
                        result_3 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_158);
                        /* no return */
                    }
                    
                    result_2 = &var_b8;
                    int64_t (* var_100_4)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    int64_t var_f8_4 = 0;
                    var_f0 = rax_13;
                    var_158 = &data_4198c0;
                    var_150 = 1;
                    void* const var_138_4 = &data_41acd8;
                    int64_t var_130_3 = 1;
                    *var_150[8] = &result_2;
                    int64_t var_140_2 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, 
                        &var_158);
                    var_d8 = var_128;
                    result_4 = result_1;
                }
                else if (arg4[0x51] != 1)
                {
                    if (r12_2 > 0xffff)
                        goto label_46ac6a;
                    
                    result_2 = &var_b8;
                    int64_t (* var_100_5)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    int64_t var_f8_5 = 0;
                    var_f0 = r12_2;
                    var_158 = &data_4198c0;
                    var_150 = 1;
                    void* const var_138_5 = &data_41ad08;
                    int64_t var_130_4 = 1;
                    *var_150[8] = &result_2;
                    int64_t var_140_3 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, 
                        &var_158);
                    var_d8 = var_128;
                    result_4 = result_1;
                }
                else
                {
                    if (r12_2 > 0xffff)
                        goto label_46ac6a;
                    
                    int64_t r15_1 = rax_7;
                    result_2 = &var_b8;
                    int64_t (* var_100_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                    int64_t var_f8_2 = 0;
                    var_f0 = r12_2;
                    var_158 = &data_4198c0;
                    var_150 = 1;
                    void* const var_138_2 = &data_41ad38;
                    int64_t var_130_1 = 1;
                    *var_150[8] = &result_2;
                    int64_t var_140 = 2;
                    core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, 
                        &var_158);
                    var_98 = var_128;
                    
                    if (!(arg5 & 1))
                        r15_1 = *(arg4 + 0xb8);
                    
                    if (!r15_1)
                    {
                        void** result_5 = result_1;
                        var_d8 = var_98;
                    }
                    else
                    {
                        if (r15_1 <= 0)
                        {
                            int64_t r15_2 = -(r15_1);
                            
                            if (r15_2 > 0xffff)
                            {
                                label_46aca7:
                                var_158 = &data_502460;
                                var_150 = 1;
                                *var_150[8] = 8;
                                var_140 = {0};
                                core::panicking::panic_fmt::h96f341d36638c225(&var_158);
                                /* no return */
                            }
                            
                            result_2 = &var_98;
                            int64_t (* var_100_6)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            int64_t var_f8_6 = 0;
                            var_f0 = r15_2;
                            var_158 = &data_4198c0;
                            var_150 = 1;
                            void* const var_138_6 = &data_41acd8;
                            int64_t var_130_5 = 1;
                            *var_150[8] = &result_2;
                            int64_t var_140_4 = 2;
                            core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, 
                                &var_158);
                        }
                        else
                        {
                            if (r15_1 > 0xffff)
                                goto label_46aca7;
                            
                            result_2 = &var_98;
                            int64_t (* var_100_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
                            int64_t var_f8_3 = 0;
                            var_f0 = r15_1;
                            var_158 = &data_4198c0;
                            var_150 = 1;
                            void* const var_138_3 = &data_41ad08;
                            int64_t var_130_2 = 1;
                            *var_150[8] = &result_2;
                            int64_t var_140_1 = 2;
                            core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_128, 
                                &var_158);
                        }
                        
                        var_d8 = var_128;
                        void** result_6 = result_1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(
                            &var_98);
                    }
                }
            }
            
            var_158 = &arg4[0x20];
            var_150 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            *var_150[8] = &var_d8;
            int64_t (* var_140_5)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            void* var_138_7 = &arg4[0x38];
            int64_t (* var_130_6)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            result_2 = &data_41aca8;
            int64_t var_100_7 = 3;
            int64_t var_e8_1 = 0;
            int32_t* var_f8_7 = &var_158;
            int64_t var_f0_1 = 3;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::h6181b64f68c0f373(&var_48, &result_2);
            int64_t var_38;
            arg1[3] = var_38;
            *(arg1 + 8) = var_48;
            *arg1 = 0;
            result =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(&var_d8);
            
            if (r12_2)
                result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(
                    &var_b8);
            
            if (r12 != -0x8000000000000000)
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h34fbae09aa78bed8(
                    &var_68);
        }
        else
        {
            result = result_1;
            arg1[3] = result;
            *(arg1 + 8) = var_128;
            *arg1 = 1;
        }
    }
    
    return result;
}
