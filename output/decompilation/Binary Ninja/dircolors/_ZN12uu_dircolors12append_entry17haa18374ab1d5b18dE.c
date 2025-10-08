
  int64_t* uu_dircolors::append_entry::haa18374ab1d5b18d(int64_t* arg1, int64_t* arg2, char* arg3, int64_t arg4, uint64_t arg5, int64_t arg6, uint64_t arg7, int128_t arg8)

{
    int64_t var_50 = arg4;
    uint64_t var_48 = arg5;
    int64_t var_40 = arg6;
    uint64_t var_38 = arg7;
    int128_t var_60 = arg8;
    int32_t var_f8;
    int64_t* var_c0;
    int128_t var_a0;
    int64_t var_90;
    void** const var_88;
    
    if (!core::str::pattern::Pattern::is_prefix_of::h6e83327a0a48e578(arg4, arg5))
    {
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc62722f7a17ae0a(arg6, arg7, "optionscolorunrecognized keyword…", 7))
            *arg1 = -0x8000000000000000;
        else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc62722f7a17ae0a(arg6, arg7, "colorunrecognized keyword \x1b[0…", 5))
            *arg1 = -0x8000000000000000;
        else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hfc62722f7a17ae0a(arg6, arg7, "eightbitESTRPIPENotFoundTimedOut…", 8))
        {
            var_88 = &data_4f7cb8;
            void** const var_80_1 =
                &uucore::features::colors::FILE_ATTRIBUTE_CODES::h3c0cf231055d2aee;
            int64_t* rax_8 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find::h13321c5277c7ef75(&var_88, &var_40);
            
            if (!rax_8)
            {
                var_c0 = &var_50;
                int64_t (* var_b8_5)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
                var_f8 = &data_4f5ec0;
                int64_t var_f0_4 = 1;
                int64_t var_d8_5 = 0;
                int64_t** var_e8_5 = &var_c0;
                int64_t var_e0_4 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(arg1, &var_f8);
            }
            else
            {
                void* var_68 = &rax_8[2];
                
                if (*arg3 != 2)
                {
                    var_c0 = &var_68;
                    int64_t (* var_b8_6)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0284718a7e282620;
                    int128_t* var_b0_4 = &var_60;
                    int64_t (* var_a8_4)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
                    var_f8 = &data_4f5e90;
                    int64_t var_f0_5 = 3;
                    int64_t var_d8_6 = 0;
                }
                else
                {
                    var_c0 = &var_60;
                    int64_t (* var_b8_4)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
                    void** var_b0_3 = &var_68;
                    int64_t (* var_a8_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h0284718a7e282620;
                    var_f8 = &data_4f5ed0;
                    int64_t var_f0_3 = 4;
                    void* const var_d8_4 = &data_41c128;
                    int64_t var_d0_2 = 3;
                }
                
                int64_t** var_e8_6 = &var_c0;
                int64_t var_e0_5 = 2;
                core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_a0, &var_f8);
                int64_t rsi_14 = *var_a0[8];
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hee3cea90a974f94a(arg2, rsi_14, var_90 + rsi_14);
                *arg1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_a0);
            }
        }
        else
            *arg1 = -0x8000000000000000;
    }
    else
    {
        var_f8 = 0;
        
        if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h84f44b8554ae9ebf(arg4, arg5, 
            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2e, &var_f8)))
        {
            var_c0 = &var_50;
            int64_t (* var_b8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_f8 = &data_4f5e80;
            int64_t var_f0_1 = 1;
            int64_t var_d8_1 = 0;
            int64_t** var_e8_1 = &var_c0;
            int64_t var_e0_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_88, &var_f8);
            
            if (*arg3 == 2)
                goto label_4692e7;
            
            goto label_4691f2;
        }
        
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h6fd947b551626403(&var_88, arg4, arg5);
        int64_t var_f0_2;
        
        if (*arg3 != 2)
        {
            label_4691f2:
            var_c0 = &var_88;
            int64_t (* var_b8_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            int128_t* var_b0_1 = &var_60;
            int64_t (* var_a8_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            var_f8 = &data_4f5e90;
            var_f0_2 = 3;
            int64_t var_d8_2 = 0;
            int64_t** var_e8_2 = &var_c0;
            int64_t var_e0_2 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_a0, &var_f8);
        }
        else
        {
            label_4692e7:
            var_c0 = &var_60;
            int64_t (* var_b8_3)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc346f95847262c6f;
            int64_t* var_b0_2 = &var_88;
            int64_t (* var_a8_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_f8 = &data_4f5ed0;
            var_f0_2 = 4;
            void* const var_d8_3 = &data_41c128;
            int64_t var_d0_1 = 3;
            int64_t** var_e8_3 = &var_c0;
            int64_t var_e0_3 = 2;
            core::option::Option$LT$T$GT$::map_or_else::h5bf0e5c4a7ca1769(&var_a0, &var_f8);
        }
        
        var_f8 = var_a0;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hee3cea90a974f94a(arg2, var_f0_2, var_90 + var_f0_2);
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_f8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::he21a9fb453b36e4f(&var_88);
    }
    return arg1;
}
