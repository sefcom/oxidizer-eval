
  int64_t* bat::assets::build_assets::build_syntax_set_builder::h8312703e95b68659(char* arg1, int64_t arg2, uint64_t arg3, int32_t arg4)

{
    int128_t var_188;
    int128_t var_178;
    int128_t var_168;
    void** const var_138;
    int128_t var_128;
    int64_t var_118;
    int128_t var_78;
    
    if (!arg4)
    {
        var_138 = nullptr;
        int64_t var_130_1 = 8;
        var_128 = {0};
        var_118 = 8;
        int64_t var_110_1 = 0;
        syntect::parsing::syntax_set::SyntaxSetBuilder::add_plain_text_syntax::h344334e751e271aa(
            &var_138);
        var_168 = var_118;
        var_178 = var_128;
        var_188 = var_138;
    }
    else
    {
        bat::assets::asset_from_contents::h9aa831f69bef887d(&var_138, &data_4a0048, 0xf1a71, 
            "n/adata integrated in binary is …");
        core::result::Result$LT$T$C$E$GT$::expect::he666caa0949183cb(&var_78, &var_138);
        syntect::parsing::syntax_set::SyntaxSet::into_builder::h7b8a6624b72752ee(&var_188, &var_78);
    }
    
    void var_150;
    std::path::Path::join::hb97e165d6abf39bf(&var_150, arg2, arg3, &data_484020);
    int64_t var_148;
    std::fs::metadata::h4d9fc7ae25563c19(&var_138, var_148);
    int32_t r12 = var_138;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haf24c6c708ccc154(&var_138);
    
    if (r12 == 2)
    {
        uint64_t var_140;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_78, var_148, var_140);
        int128_t* var_88 = &var_78;
        int64_t (* var_80_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
        var_138 = &data_ace070;
        int64_t var_130_2 = 2;
        int64_t var_118_1 = 0;
        var_128 = &var_88;
        *var_128[8] = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_138);
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_78);
        int128_t zmm0_2 = var_188;
        *(arg1 + 0x28) = var_168;
        *(arg1 + 0x18) = var_178;
        *(arg1 + 8) = zmm0_2;
        *arg1 = 0xd;
        return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_150);
    }
    
    int64_t* result =
        syntect::parsing::syntax_set::SyntaxSetBuilder::add_from_folder::he9adfc661692b083(
        &var_138, &var_188, &var_150);
    int128_t zmm0_3;
    
    if (var_138 == -0x7ffffffffffffffa)
    {
        zmm0_3 = var_188;
        *(arg1 + 0x28) = var_168;
        *(arg1 + 0x18) = var_178;
        *(arg1 + 8) = zmm0_3;
        *arg1 = 0xd;
        return result;
    }
    
    int64_t var_f8;
    int64_t var_38_1 = var_f8;
    zmm0_3 = var_138;
    int128_t zmm2_3 = var_118;
    int128_t var_108;
    int128_t var_48_1 = var_108;
    int128_t var_58_1 = zmm2_3;
    int128_t var_68_1 = var_128;
    var_78 = zmm0_3;
    *var_118[7] = zmm2_3;
    *var_138[7] = zmm0_3;
    *arg1 = 3;
    *(arg1 + 1) = var_138;
    *(arg1 + 0x11) = var_128;
    *(arg1 + 0x21) = var_118;
    *(arg1 + 0x31) = var_108;
    *(arg1 + 0x40) = *var_108[0xf];
    *(arg1 + 0x48) = var_f8;
    return core::ptr::drop_in_place$LT$syntect..parsing..syntax_set..SyntaxSetBuilder$GT$::h51c5002042f8c4f0(&var_188);
}
