
  int128_t* uu_dircolors::generate_ls_colors::h913fd92084aef0eb(int128_t* arg1, char* arg2, int64_t arg3, int64_t arg4)

{
    int128_t* result;
    int64_t* rdi_6;
    int64_t var_1b8;
    int32_t var_1a0;
    void** const var_158;
    int128_t var_128;
    int128_t var_108;
    int128_t var_e8;
    
    if (*arg2 != 2)
    {
        int64_t var_b0 = 0;
        int64_t var_a8_1 = 8;
        int64_t var_a0_1 = 0;
        char const (** const var_80_1)[0x18] = &data_4f6c68;
        int64_t i = 0x18;
        int64_t* var_160_1 = &var_b0;
        void** const* var_190_3;
        int64_t var_188_3;
        int64_t var_c8;
        
        do
        {
            int64_t r12_2 = *(var_80_1 + i - 0x18);
            int64_t r15_1 = *(var_80_1 + i - 0x10);
            var_c8 = r12_2;
            int64_t var_c0_1 = r15_1;
            var_128 = *(var_80_1 + i - 8);
            var_1a0 = 0;
            char rax_7 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h84f44b8554ae9ebf(
                r12_2, r15_1, 
                core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2a, &var_1a0));
            char const* const rcx_1 = "*";
            
            if (rax_7)
                rcx_1 = 1;
            
            var_108 = rcx_1;
            *var_108[8] = rax_7 ^ 1;
            var_158 = &var_108;
            int64_t (* var_150_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            int64_t* var_148_2 = &var_c8;
            int64_t (* var_140_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_1a0 = &data_41c1c0;
            int64_t var_198_2 = 2;
            int64_t var_180_2 = 0;
            void** const* var_190_2 = &var_158;
            int64_t var_188_2 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_1b8, &var_1a0);
            var_e8 = var_1b8;
            var_158 = &var_e8;
            int64_t (* var_150_3)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            int128_t* var_148_3 = &var_128;
            int64_t (* var_140_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_1a0 = &data_4f5ce0;
            int64_t var_198_3 = 2;
            int64_t var_180_3 = 0;
            var_190_3 = &var_158;
            var_188_3 = 2;
            void var_48;
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_48, &var_1a0);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h60526611d18df024(&var_b0, &var_48);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_e8);
            i += 0x20;
        } while (i != 0x1058);
        
        uu_dircolors::get_colors_format_strings::h31238be5fa82f8cf(&var_1a0, arg2);
        void** const* var_b8_1 = var_190_3;
        var_c8 = var_1a0;
        int64_t var_178;
        int64_t var_118_1 = var_178;
        var_128 = var_188_3;
        alloc::str::join_generic_copy::h8b37c6cf08035dd4(&var_1a0, var_a8_1, var_a0_1, arg3, arg4);
        void** const* var_f8_1 = var_190_3;
        var_108 = var_1a0;
        uu_dircolors::generate_type_output::h04462d82bde79245(&var_1b8, arg2);
        var_1a0 = &var_c8;
        int64_t (* var_198_4)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        int64_t* var_190_4 = &var_1b8;
        int64_t (* var_188_4)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        int128_t* var_180_4 = &var_108;
        int64_t (* var_178_2)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        int128_t* var_170_1 = &var_128;
        int64_t (* var_168_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_158 = &data_4f5d00;
        int64_t var_150_4 = 4;
        int64_t var_138_2 = 0;
        int32_t* var_148_4 = &var_1a0;
        int64_t var_140_4 = 4;
        core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_e8, &var_158);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_1b8);
        result = arg1;
        int64_t var_1a8;
        result[1] = var_1a8;
        *result = var_e8;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_108);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_128);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_c8);
        rdi_6 = &var_b0;
    }
    else
    {
        var_1b8 = 0;
        int64_t var_1b0_1 = 8;
        int64_t var_1a8_1 = 0;
        void var_78;
        uu_dircolors::generate_type_output::h04462d82bde79245(&var_78, arg2);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h60526611d18df024(&var_1b8, &var_78);
        int64_t i_1 = 0x18;
        int64_t* var_160 = &var_1b8;
        int128_t* var_190_1;
        
        do
        {
            int64_t rbp_1 = *(i_1 + 0x4f6c50);
            int64_t r12_1 = *(i_1 + &uucore::features::colors::FILE_TYPES::h9917bb83e012dc61);
            var_128 = rbp_1;
            *var_128[8] = r12_1;
            var_108 = *(i_1 + 0x4f6c60);
            var_1a0 = 0;
            char rax_2 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h84f44b8554ae9ebf(
                rbp_1, r12_1, 
                core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2a, &var_1a0));
            char const* const rcx = "*";
            
            if (rax_2)
                rcx = 1;
            
            var_e8 = rcx;
            *var_e8[8] = rax_2 ^ 1;
            var_1a0 = &var_108;
            int64_t (* var_198_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_190_1 = &var_e8;
            int64_t (* var_188_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            int128_t* var_180_1 = &var_128;
            int64_t (* var_178_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_158 = &data_4f5d58;
            int64_t var_150_1 = 5;
            void* const var_138_1 = &data_41c328;
            int64_t var_130_1 = 4;
            int32_t* var_148_1 = &var_1a0;
            int64_t var_140_1 = 3;
            void var_60;
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_60, &var_158);
            alloc::vec::Vec$LT$T$C$A$GT$::push::h60526611d18df024(&var_1b8, &var_60);
            i_1 += 0x20;
        } while (i_1 != 0x1058);
        
        alloc::str::join_generic_copy::h8b37c6cf08035dd4(&var_1a0, var_1b0_1, var_1a8_1, 
            "\n:\x1b[m\t", 1);
        result = arg1;
        result[1] = var_190_1;
        *result = var_1a0;
        rdi_6 = &var_1b8;
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbd7984742b77bb31(
        rdi_6);
    return result;
}
