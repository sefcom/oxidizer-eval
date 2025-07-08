
  int128_t* const uu_numfmt::format::format_string::h230c6a9d10700455(int64_t* arg1, char* arg2, void* arg3, int64_t* arg4, int64_t arg5, int64_t arg6)

{
    int64_t var_158 = arg6;
    void* r15 = arg3;
    char* rbp = arg2;
    int64_t rcx = arg4[0x11];
    
    if (rcx != -0x8000000000000000)
    {
        char* rax_1;
        void* rdx_1;
        rax_1 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::h989ea700a39d3e29(arg4[0x12], arg4[0x13], rbp, r15);
        
        if (rax_1)
            rbp = rax_1;
        
        if (rax_1)
            r15 = rdx_1;
    }
    
    uint64_t rax_2;
    uint64_t r13;
    
    if (!arg4[2])
    {
        rax_2 = arg4[0x16];
        r13 = 0;
        
        if (rax_2 == 5 && *(arg4 + 0xb1) == 5)
        {
            r13 = uu_numfmt::format::parse_implicit_precision::habeeb6a1b0c09cbd(rbp, r15);
            rax_2 = 5;
        }
    }
    else
    {
        r13 = arg4[3];
        rax_2 = arg4[0x16];
    }
    
    int128_t* const result_1;
    uu_numfmt::format::transform_from::h06c22e665722480c(&result_1, rbp, r15, arg4[0x14], rax_2);
    int128_t* const result = result_1;
    int64_t var_1b8;
    uint64_t zmm0[0x2] = var_1b8;
    
    if (result != -0x8000000000000000)
    {
        arg1[1] = result;
        arg1[2] = zmm0;
        int64_t var_1b0;
        arg1[3] = var_1b0;
        *arg1 = 1;
    }
    else
    {
        void* var_190;
        uu_numfmt::format::transform_to::hb7e422fe87e2abd5(&var_190, arg4[0x15], *(arg4 + 0xb1), 
            *(arg4 + 0xc9), r13, zmm0);
        bool cond:1_1 = !var_190;
        int128_t var_188;
        int128_t var_1e8 = var_188;
        int128_t* result_2;
        
        if (cond:1_1)
        {
            int128_t var_118 = var_1e8;
            int128_t var_148;
            int128_t* result_3;
            int128_t* rax_6;
            int64_t r13_1;
            
            if (rcx != -0x8000000000000000)
            {
                var_1e8 = &arg4[0x11];
                result_1 = &var_118;
                int64_t (* var_1b8_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                int128_t* var_1b0_1 = &var_1e8;
                int64_t (* var_1a8_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4dc19265c681ac20;
                var_190 = &data_41a370;
                var_188 = 2;
                int64_t var_170_1 = 0;
                *var_188[8] = &result_1;
                int64_t var_178 = 2;
                int32_t var_14c_1 = "s/miniz_oxide-0.7.4/src/inflate/…";
                int128_t var_c0;
                core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_c0, &var_190);
                var_148 = var_c0;
                int128_t* result_5;
                result_3 = result_5;
                rax_6 = 1;
                
                if (*arg4)
                    r13_1 = arg4[1];
                else
                {
                    label_4c43c2:
                    r13_1 = var_158;
                    
                    if (!arg5)
                        r13_1 = arg4[0x17];
                }
            }
            else
            {
                result_3 = result_2;
                var_148 = var_118;
                rax_6 = nullptr;
                
                if (!*arg4)
                    goto label_4c43c2;
                
                r13_1 = arg4[1];
            }
            
            int32_t var_14c_2 = rax_6;
            
            if (!r13_1)
            {
                int128_t* result_4 = result_3;
                var_1e8 = var_148;
            }
            else
            {
                if (r13_1 > 0 && *(arg4 + 0x51))
                {
                    var_1e8 = &var_148;
                    *var_1e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    int64_t var_1d8_2 = r13_1;
                    int64_t var_1d0_1 = 0;
                    var_190 = 2;
                    *var_188[8] = 1;
                    int64_t var_178_1 = 1;
                    int64_t var_170_2 = 0;
                    int64_t var_168_1 = 0x30;
                    char var_160_1 = 1;
                    result_1 = &data_416000;
                    int64_t var_1b8_2 = 1;
                    void** var_1a0_1 = &var_190;
                    int64_t var_198_1 = 1;
                    int128_t* var_1b0_2 = &var_1e8;
                    int64_t var_1a8_2 = 2;
                    rbp = 1;
                    int128_t var_d8;
                    core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_d8, 
                        &result_1);
                    int64_t var_c8;
                    int64_t var_e8_1 = var_c8;
                    int128_t var_f8 = var_d8;
                    
                    if (!arg5)
                        var_158 = arg4[0x17];
                    
                    if (!var_158)
                    {
                        int64_t var_1d8_8 = var_c8;
                        var_1e8 = var_d8;
                    }
                    else
                    {
                        void* r12_1;
                        
                        if (var_158 <= 0)
                        {
                            var_1e8 = &var_f8;
                            *var_1e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            int64_t var_1d8_9 = -(var_158);
                            int64_t var_1d0_5 = 0;
                            var_190 = 2;
                            *var_188[8] = 1;
                            int64_t var_178_5 = 1;
                            int64_t var_170_6 = 0;
                            int64_t var_168_5 = 0x20;
                            char var_160_5 = 0;
                            result_1 = &data_416000;
                            int64_t var_1b8_6 = 1;
                            void** var_1a0_5 = &var_190;
                            int64_t var_198_5 = 1;
                            int128_t* var_1b0_6 = &var_1e8;
                            int64_t var_1a8_6 = 2;
                            void var_48;
                            r12_1 = &var_48;
                            core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_48, 
                                &result_1);
                        }
                        else
                        {
                            var_1e8 = &var_f8;
                            *var_1e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                            int64_t var_1d8_3 = var_158;
                            int64_t var_1d0_2 = 0;
                            var_190 = 2;
                            *var_188[8] = 1;
                            int64_t var_178_2 = 1;
                            int64_t var_170_3 = 0;
                            int64_t var_168_2 = 0x20;
                            char var_160_2 = 1;
                            result_1 = &data_416000;
                            int64_t var_1b8_3 = 1;
                            void** var_1a0_2 = &var_190;
                            int64_t var_198_2 = 1;
                            int128_t* var_1b0_3 = &var_1e8;
                            int64_t var_1a8_3 = 2;
                            void var_60;
                            r12_1 = &var_60;
                            core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_60, 
                                &result_1);
                        }
                        
                        int64_t var_1d8_10 = *(r12_1 + 0x10);
                        var_1e8 = *r12_1;
                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(
                            &var_f8);
                    }
                }
                else if (r13_1 <= 0)
                {
                    var_1e8 = &var_148;
                    *var_1e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    int64_t var_1d8_6 = -(r13_1);
                    int64_t var_1d0_4 = 0;
                    var_190 = 2;
                    *var_188[8] = 1;
                    int64_t var_178_4 = 1;
                    int64_t var_170_5 = 0;
                    int64_t var_168_4 = 0x20;
                    char var_160_4 = 0;
                    result_1 = &data_416000;
                    int64_t var_1b8_5 = 1;
                    void** var_1a0_4 = &var_190;
                    int64_t var_198_4 = 1;
                    int128_t* var_1b0_5 = &var_1e8;
                    int64_t var_1a8_5 = 2;
                    rbp = 1;
                    int128_t var_90;
                    core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_90, 
                        &result_1);
                    var_1e8 = var_90;
                    int64_t var_80;
                    int64_t var_1d8_7 = var_80;
                }
                else
                {
                    var_1e8 = &var_148;
                    *var_1e8[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                    int64_t var_1d8_4 = r13_1;
                    int64_t var_1d0_3 = 0;
                    var_190 = 2;
                    *var_188[8] = 1;
                    int64_t var_178_3 = 1;
                    int64_t var_170_4 = 0;
                    int64_t var_168_3 = 0x20;
                    char var_160_3 = 1;
                    result_1 = &data_416000;
                    int64_t var_1b8_4 = 1;
                    void** var_1a0_3 = &var_190;
                    int64_t var_198_3 = 1;
                    int128_t* var_1b0_4 = &var_1e8;
                    int64_t var_1a8_4 = 2;
                    rbp = 1;
                    int128_t var_a8;
                    core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_a8, 
                        &result_1);
                    var_1e8 = var_a8;
                    int64_t var_98;
                    int64_t var_1d8_5 = var_98;
                }
                
                rbp = 1;
            }
            
            var_190 = &arg4[4];
            var_188 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            *var_188[8] = &var_1e8;
            int64_t (* var_178_6)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            void* var_170_7 = &arg4[7];
            int64_t (* var_168_6)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            result_1 = &data_423118;
            int64_t var_1b8_7 = 3;
            int64_t var_1a0_6 = 0;
            void** var_1b0_7 = &var_190;
            int64_t var_1a8_7 = 3;
            int128_t var_78;
            core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&var_78, &result_1);
            int64_t var_68;
            arg1[3] = var_68;
            *(arg1 + 8) = var_78;
            *arg1 = 0;
            result =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&var_1e8);
            
            if (r13_1)
                result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(
                    &var_148);
            
            if (rcx != -0x8000000000000000)
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(
                    &var_118);
        }
        else
        {
            result = result_2;
            arg1[3] = result;
            *(arg1 + 8) = var_1e8;
            *arg1 = 1;
        }
    }
    
    return result;
}
