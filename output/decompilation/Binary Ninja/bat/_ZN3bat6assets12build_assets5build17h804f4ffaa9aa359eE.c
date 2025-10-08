
  char* bat::assets::build_assets::build::h804f4ffaa9aa359e(char* arg1, int64_t arg2, uint64_t arg3, int32_t arg4, char arg5, int64_t arg6, uint64_t arg7, int64_t arg8, uint64_t arg9)

{
    char var_168;
    bat::assets::build_assets::build_theme_set::he10a5c707d4325f2(&var_168, arg2, arg3, arg4);
    char rax = var_168;
    int128_t var_167;
    int128_t var_148;
    int128_t var_138;
    int128_t var_128;
    int128_t var_f8;
    
    if (rax != 0xd)
    {
        var_f8 = var_167;
        *(arg1 + 0x40) = var_128;
        *(arg1 + 0x30) = var_138;
        *(arg1 + 0x20) = var_148;
        *(arg1 + 0x10) = var_167;
        *(arg1 + 1) = var_f8;
        *arg1 = rax;
    }
    else
    {
        int128_t var_118 = var_167;
        int64_t var_150;
        int64_t var_108_1 = var_150;
        bat::assets::build_assets::build_syntax_set_builder::h8312703e95b68659(&var_168, arg2, 
            arg3, arg4);
        char rax_2 = var_168;
        
        if (rax_2 != 0xd)
        {
            var_f8 = var_167;
            *(arg1 + 0x48) = *var_128[8];
            *(arg1 + 0x38) = var_138;
            *(arg1 + 0x30) = var_138;
            int128_t zmm0_1 = var_f8;
            *(arg1 + 0x21) = var_148;
            int128_t var_157;
            *(arg1 + 0x11) = var_157;
            *(arg1 + 1) = zmm0_1;
            *arg1 = rax_2;
        }
        else
        {
            int128_t var_68 = var_167;
            int128_t var_58_1 = var_150;
            int128_t var_48_1 = var_148;
            syntect::parsing::syntax_set::SyntaxSetBuilder::build::h5ed9f770ef579f80(&var_f8, 
                &var_68);
            bat::assets::build_assets::acknowledgements::build_acknowledgements::h985f29fe48cdf84e(
                &var_168, arg2, arg3, arg5);
            char rax_3 = var_168;
            
            if (rax_3 != 0xd)
            {
                *(arg1 + 0x40) = var_128;
                *(arg1 + 0x30) = var_138;
                *(arg1 + 0x20) = var_148;
                *(arg1 + 0x10) = var_167;
                *(arg1 + 1) = var_167;
                *arg1 = rax_3;
                core::ptr::drop_in_place$LT$syntect..parsing..syntax_set..SyntaxSet$GT$::hb4e548531bab001a(&var_f8);
            }
            else
            {
                int128_t var_a8 = var_167;
                int64_t var_98_1 = var_150;
                bat::assets::build_assets::print_unlinked_contexts::hfe9c6fb076e98778(&var_f8);
                bat::assets::build_assets::write_assets::h8e8b3ddd7aea9158(arg1, &var_118, &var_f8, 
                    &var_a8, arg6, arg7, arg8, arg9);
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h92380712fca2cb32(&var_a8);
                core::ptr::drop_in_place$LT$syntect..parsing..syntax_set..SyntaxSet$GT$::hb4e548531bab001a(&var_f8);
            }
        }
        
        core::ptr::drop_in_place$LT$bat..assets..lazy_theme_set..LazyThemeSet$GT$::h22a7dc710ec7648e(&var_118);
    }
    return arg1;
}
