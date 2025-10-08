
  int64_t bat::assets::HighlightingAssets::get_theme::h5c1f06a82dc91560(void* arg1, int64_t arg2, uint64_t arg3)

{
    int64_t var_38 = arg2;
    uint64_t var_30 = arg3;
    int64_t result =
        bat::assets::lazy_theme_set::LazyThemeSet::get::heee0fccd6e54090a(arg1 + 0x68, arg2, arg3);
    
    if (!result)
    {
        char rax;
        uint64_t rdx;
        rax = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(arg2, arg3, "ansi-lightansi-dark[unknow", 0xa);
        char rax_1;
        
        if (!rax)
            rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(arg2, arg3, "ansi-dark[unknow", 9);
        
        int64_t* var_e8;
        char const (** const var_d0)[0xa2];
        int128_t var_a0;
        int64_t var_90;
        int64_t var_80;
        
        if (rax || rax_1)
        {
            char var_48_1 = 0;
            int64_t var_50_1 = 0;
            int64_t var_47_1 = 0x1500000006;
            var_80 = -0x8000000000000000;
            char const* const var_78_1 = "[bat warning]Theme '' is depreca…";
            int64_t var_70_1 = 0xd;
            int64_t var_68_1 = -0x7ffffffffffffffe;
            var_e8 = &var_38;
            int64_t (* var_e0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
            var_d0 = &data_ace178;
            int64_t var_c8_1 = 2;
            int64_t var_b0_1 = 0;
            int64_t** var_c0_1 = &var_e8;
            int64_t var_b8_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_a0, 0, rdx, &var_d0);
            var_e8 = var_a0;
            int64_t var_d8_1 = var_90;
            var_a0 = &var_80;
            *var_a0[8] = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
            int64_t** var_90_1 = &var_e8;
            int64_t (* var_88_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_d0 = &data_ace198;
            int64_t var_c8_2 = 3;
            int64_t var_b0_2 = 0;
            int128_t* var_c0_2 = &var_a0;
            int64_t var_b8_2 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_e8);
            core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_80);
            return bat::assets::HighlightingAssets::get_theme::h5c1f06a82dc91560(arg1, "ansibool[", 
                4);
        }
        
        if (arg3)
        {
            char var_48_2 = 0;
            int64_t var_50_2 = 0;
            int64_t var_47_2 = 0x1500000006;
            var_80 = -0x8000000000000000;
            char const* const var_78_2 = "[bat warning]Theme '' is depreca…";
            int64_t var_70_2 = 0xd;
            int64_t var_68_2 = -0x7ffffffffffffffe;
            var_e8 = &var_38;
            int64_t (* var_e0_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5cd1e3edb3ca57a0;
            var_d0 = &data_ace1c8;
            int64_t var_c8_3 = 2;
            int64_t var_b0_3 = 0;
            int64_t** var_c0_3 = &var_e8;
            int64_t var_b8_3 = 1;
            core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_a0, 0, rdx, &var_d0);
            var_e8 = var_a0;
            int64_t var_d8_2 = var_90;
            var_a0 = &var_80;
            *var_a0[8] = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
            int64_t** var_90_2 = &var_e8;
            int64_t (* var_88_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_d0 = &data_ace198;
            int64_t var_c8_4 = 3;
            int64_t var_b0_4 = 0;
            int128_t* var_c0_4 = &var_a0;
            int64_t var_b8_4 = 2;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_d0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_e8);
            core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_80);
        }
        
        int64_t rsi_2 = *(arg1 + 0x80);
        
        if (!rsi_2)
        {
            result = bat::assets::lazy_theme_set::LazyThemeSet::get::heee0fccd6e54090a(arg1 + 0x68, 
                "Monokai Extended", 0x10);
            
            if (!result)
            {
                core::option::expect_failed::h3f620cfb8545dc61("something is very wrong if the d…");
                /* no return */
            }
        }
        else
        {
            result = bat::assets::lazy_theme_set::LazyThemeSet::get::heee0fccd6e54090a(arg1 + 0x68, 
                rsi_2, *(arg1 + 0x88));
            
            if (!result)
            {
                core::option::expect_failed::h3f620cfb8545dc61("something is very wrong if the d…");
                /* no return */
            }
        }
    }
    
    return result;
}
