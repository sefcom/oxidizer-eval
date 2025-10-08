
  int64_t bat::assets::build_assets::build_theme_set::he10a5c707d4325f2(char* arg1, int64_t arg2, uint64_t arg3, int32_t arg4)

{
    int64_t var_1c8;
    int64_t var_1b8_1;
    int128_t* var_198;
    int128_t var_168;
    char result_1;
    int128_t var_117;
    int128_t var_f8;
    int128_t var_d8;
    
    if (!arg4)
    {
        var_1c8 = 0;
        var_1b8_1 = 0;
    }
    else
    {
        bat::assets::get_integrated_themeset::h537b3cba0b22caf3(&var_198);
        bat::assets::lazy_theme_set::_$LT$impl$u20$core..convert..TryFrom$LT$bat..assets..lazy_theme_set..LazyThemeSet$GT$$u20$for$u20$syntect..highlighting..theme_set..ThemeSet$GT$::try_from::he56e1dfafe0667dc(&result_1);
        char result = result_1;
        
        if (result != 0xd)
        {
            var_168 = var_117;
            *(arg1 + 0x40) = var_d8;
            int128_t var_e8;
            *(arg1 + 0x30) = var_e8;
            *(arg1 + 0x20) = var_f8;
            *(arg1 + 0x10) = var_117;
            *(arg1 + 1) = var_168;
            *arg1 = result;
            return result;
        }
        
        var_1c8 = var_117;
        int64_t var_100;
        var_1b8_1 = var_100;
    }
    
    void var_1b0;
    std::path::Path::join::hb97e165d6abf39bf(&var_1b0, arg2, arg3, 
        "themesNo syntaxes were found in …");
    int64_t var_1a8;
    std::fs::metadata::h4d9fc7ae25563c19(&result_1, var_1a8);
    int32_t r13_1 = result_1;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haf24c6c708ccc154(&result_1);
    uint64_t var_1a0;
    
    if (r13_1 != 2)
    {
        syntect::highlighting::theme_set::ThemeSet::add_from_folder::h48bc82b2adf2a881(&var_168, 
            &var_1c8);
        
        if (var_168 != -0x7ffffffffffffffa)
        {
            int64_t var_128;
            var_d8 = var_128;
            int128_t var_138;
            int128_t var_e8_1 = var_138;
            int128_t var_148;
            int128_t var_f8_1 = var_148;
            int128_t var_159;
            var_117 = var_159;
            result_1 = var_168;
            void var_40;
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_40, var_1a8, var_1a0);
            void* var_60 = &var_40;
            int64_t (* var_58_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
            char* var_50_1 = &result_1;
            int64_t (* var_48_1)(int64_t arg1, int64_t* arg2) = _$LT$syntect..LoadingError$u20$as$u20$core..fmt..Display$GT$::fmt::h5d392441a0aeb0c5;
            var_198 = &data_ace020;
            int64_t var_190_2 = 3;
            int64_t var_178_1 = 0;
            void** var_188_1 = &var_60;
            int64_t var_180_1 = 2;
            std::io::stdio::_print::h5e446ff973c02de6(&var_198);
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_40);
            core::ptr::drop_in_place$LT$syntect..LoadingError$GT$::ha141c8bc02d095c0(&result_1);
        }
    }
    else
    {
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_168, var_1a8, var_1a0);
        var_198 = &var_168;
        int64_t (* var_190_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
        result_1 = &data_ace050;
        *var_117[7] = 2;
        var_f8 = 0;
        *var_117[0xf] = &var_198;
        int64_t var_100_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&result_1);
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_168);
    }
    *var_117[0xf] = var_1b8_1;
    result_1 = var_1c8;
    _$LT$bat..assets..lazy_theme_set..LazyThemeSet$u20$as$u20$core..convert..TryFrom$LT$syntect..highlighting..theme_set..ThemeSet$GT$$GT$::try_from::hcc711b3b4d727cf4(arg1);
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_1b0);
}
