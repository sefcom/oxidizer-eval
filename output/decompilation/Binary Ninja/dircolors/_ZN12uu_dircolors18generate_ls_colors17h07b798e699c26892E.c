
  int128_t* uu_dircolors::generate_ls_colors::h07b798e699c26892(int128_t* arg1, char* arg2, int64_t arg3, int64_t arg4)

{
    char const (** const* rdi_8)[0x18];
    int128_t* result;
    char const (** var_278)[0x18];
    char const (** const var_258)[0x18];
    char const (** const var_240)[0x18];
    char const (*** var_228)[0x18];
    int128_t var_1f8;
    int128_t var_1d8;
    int128_t var_1b8;
    int128_t var_170;
    char const (**** var_160)[0x18];
    int128_t var_158;
    
    if (*arg2 != 2)
    {
        var_240 = nullptr;
        void** var_238_1 = 8;
        int64_t var_230_1 = 0;
        var_258 = &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
        char const (** const var_250_2)[0xa7] = &data_5291b8;
        
        for (int64_t* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_258); i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_258))
        {
            int64_t r15_1 = *i;
            int64_t rbx_1 = i[1];
            var_1f8 = r15_1;
            *var_1f8[8] = rbx_1;
            var_1d8 = *(i + 0x10);
            var_170 = 0;
            int64_t rax_6;
            uint64_t rdx_3;
            rax_6 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2a, &var_170);
            char rax_7 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he3aceff540041b05(
                r15_1, rbx_1, rax_6, rdx_3);
            char const (** rcx_5)[0x18] = "*\x1b[m\t0.0.28Output commands t…";
            
            if (rax_7)
                rcx_5 = 1;
            
            var_278 = rcx_5;
            uint64_t var_270_2 = rax_7 ^ 1;
            var_228 = &var_278;
            int64_t (* var_220_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            int128_t* var_218_2 = &var_1f8;
            int64_t (* var_210_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            var_170 = &data_41bbd8;
            *var_170[8] = 2;
            *var_158[8] = 0;
            char const (**** var_160_1)[0x18] = &var_228;
            var_158 = 2;
            int128_t var_90;
            core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_90, &var_170);
            var_1b8 = var_90;
            int64_t var_80;
            int64_t var_1a8_2 = var_80;
            var_228 = &var_1b8;
            int64_t (* var_220_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            int128_t* var_218_3 = &var_1d8;
            int64_t (* var_210_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            var_170 = &data_5270f8;
            *var_170[8] = 2;
            *var_158[8] = 0;
            var_160 = &var_228;
            var_158 = 2;
            void var_48;
            core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_48, &var_170);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7d8f0025391e3f05(&var_240, &var_48);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_1b8);
        }
        
        uu_dircolors::get_colors_format_strings::h3d385b99c9468f76(&var_170, arg2);
        result = arg1;
        char const (**** var_248_1)[0x18] = var_160;
        var_258 = var_170;
        int64_t var_148;
        int64_t var_1e8_1 = var_148;
        var_1f8 = var_158;
        alloc::str::join_generic_copy::hc84b2afb154a6337(&var_170, var_238_1, var_230_1, arg3, 
            arg4);
        char const (**** var_1c8_1)[0x18] = var_160;
        var_1d8 = var_170;
        uu_dircolors::generate_type_output::h9c6833319feecf38(&var_1b8, arg2);
        var_170 = &var_258;
        *var_170[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        int128_t* var_160_2 = &var_1b8;
        var_158 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        *var_158[8] = &var_1d8;
        int64_t (* var_148_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        int128_t* var_140_1 = &var_1f8;
        int64_t (* var_138_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_228 = &data_527118;
        int64_t var_220_4 = 4;
        int64_t var_208_2 = 0;
        int128_t* var_218_4 = &var_170;
        int64_t var_210_4 = 4;
        core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_278, &var_228);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_1b8);
        int64_t var_268;
        result[1] = var_268;
        *result = var_278;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_1d8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_1f8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h201e2b6c2cdf2ea1(&var_258);
        rdi_8 = &var_240;
    }
    else
    {
        var_278 = nullptr;
        void** var_270_1 = 8;
        int64_t var_268_1 = 0;
        void var_78;
        uu_dircolors::generate_type_output::h9c6833319feecf38(&var_78, arg2);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h7d8f0025391e3f05(&var_278, &var_78);
        var_240 = &anon.84df56382e2e566cd8a063a5d0153d3b.231.llvm.4004663911042702431;
        char const (** const var_238)[0xa7] = &data_5291b8;
        
        for (int64_t* i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_240); i_1; i_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h61adeb40505b726f(&var_240))
        {
            char const (** rbp_1)[0x18] = *i_1;
            int64_t r12_1 = i_1[1];
            var_258 = rbp_1;
            int64_t var_250_1 = r12_1;
            var_1f8 = *(i_1 + 0x10);
            var_170 = 0;
            int64_t rax;
            uint64_t rdx;
            rax = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2a, &var_170);
            char rax_1 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::he3aceff540041b05(
                rbp_1, r12_1, rax, rdx);
            char const* const rcx_1 = "*\x1b[m\t0.0.28Output commands t…";
            
            if (rax_1)
                rcx_1 = 1;
            
            var_1d8 = rcx_1;
            *var_1d8[8] = rax_1 ^ 1;
            var_228 = &var_1f8;
            int64_t (* var_220_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            int128_t* var_218_1 = &var_1d8;
            int64_t (* var_210_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            int64_t* var_208_1 = &var_258;
            int64_t (* var_200_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb1e31a3548e14da4;
            var_170 = 2;
            var_160 = 2;
            *var_158[8] = 0;
            int64_t var_148_1 = 0x20;
            int64_t var_140;
            var_140 = 3;
            int32_t var_25f;
            *var_140[4] = var_25f;
            *var_140[1] = var_25f;
            int64_t var_138_1 = 2;
            int64_t var_128_1 = 2;
            int64_t var_118;
            __builtin_memcpy(&var_118, 
                "\x01\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
            int64_t var_100_1 = 2;
            int64_t var_f0_1 = 2;
            int64_t var_e0;
            __builtin_memcpy(&var_e0, 
                "\x02\x00\x00\x00\x00\x00\x00\x00\x20\x00\x00\x00\x00\x00\x00\x00\x03", 0x11);
            int64_t var_c8_1 = 2;
            int64_t var_b8_1 = 2;
            int64_t var_a8_1 = 0;
            int64_t var_a0_1 = 0x20;
            char var_98_1 = 3;
            int32_t var_94_1 = var_25f;
            int32_t var_97_1 = var_25f;
            var_1b8 = &data_527158;
            *var_1b8[8] = 5;
            int128_t* var_198_1 = &var_170;
            int64_t var_190_1 = 4;
            char const (**** var_1a8_1)[0x18] = &var_228;
            int64_t var_1a0_1 = 3;
            void var_60;
            core::option::Option$LT$T$GT$::map_or_else::h443112b6ce900918(&var_60, &var_1b8);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h7d8f0025391e3f05(&var_278, &var_60);
        }
        
        alloc::str::join_generic_copy::hc84b2afb154a6337(&var_170, var_270_1, var_268_1, 
            "\n:=*\x1b[m\t0.0.28Output comman…", 1);
        result = arg1;
        result[1] = var_160;
        *result = var_170;
        rdi_8 = &var_278;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h344034719bce8318(
        rdi_8);
    return result;
}
