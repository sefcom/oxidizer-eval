
  fn bat::assets::build_assets::build_syntax_set_builder::h8312703e95b68659(arg1: *mut i8, arg2: i64, arg3: u64, arg4: i32) -> *mut i64

{
    let mut var_188: i128;
    let mut var_178: i128;
    let mut var_168: i128;
    let mut var_138: *mut *mut c_void;
    let mut var_128: i128;
    let mut var_118: i64;
    let mut var_78: i128;
    
    if arg4 == 0
    {
        var_138 = nullptr;
        let var_130_1: i64 = 8;
        var_128 = {0};
        var_118 = 8;
        let var_110_1: i64 = 0;
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
    
    let mut var_150: ();
    std::path::Path::join::hb97e165d6abf39bf(&var_150, arg2, arg3, &data_484020);
    let var_148: i64;
    std::fs::metadata::h4d9fc7ae25563c19(&var_138, var_148);
    let r12: i32 = var_138;
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haf24c6c708ccc154(&var_138);
    
    if r12 == 2
    {
        let var_140: u64;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_78, var_148, var_140);
        let mut var_88: *mut i128 = &var_78;
        let var_80_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
        var_138 = &data_ace070;
        let var_130_2: i64 = 2;
        let var_118_1: i64 = 0;
        var_128 = &var_88;
        *var_128[8] = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_138);
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_78);
        let zmm0_2: i128 = var_188;
        *arg1.byte_offset(0x28) = var_168;
        *arg1.byte_offset(0x18) = var_178;
        *arg1.byte_offset(8) = zmm0_2;
        *arg1 = 0xd;
        return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_150);
    }
    
    let result: *mut i64 =
        syntect::parsing::syntax_set::SyntaxSetBuilder::add_from_folder::he9adfc661692b083(
        &var_138, &var_188, &var_150);
    let mut zmm0_3: i128;
    
    if var_138 == -0x7ffffffffffffffa
    {
        zmm0_3 = var_188;
        *arg1.byte_offset(0x28) = var_168;
        *arg1.byte_offset(0x18) = var_178;
        *arg1.byte_offset(8) = zmm0_3;
        *arg1 = 0xd;
        return result;
    }
    
    let var_f8: i64;
    let var_38_1: i64 = var_f8;
    zmm0_3 = var_138;
    let zmm2_3: i128 = var_118;
    let var_108: i128;
    let var_48_1: i128 = var_108;
    let var_58_1: i128 = zmm2_3;
    let var_68_1: i128 = var_128;
    var_78 = zmm0_3;
    *var_118[7] = zmm2_3;
    *var_138[7] = zmm0_3;
    *arg1 = 3;
    *arg1.byte_offset(1) = var_138;
    *arg1.byte_offset(0x11) = var_128;
    *arg1.byte_offset(0x21) = var_118;
    *arg1.byte_offset(0x31) = var_108;
    *arg1.byte_offset(0x40) = *var_108[0xf];
    *arg1.byte_offset(0x48) = var_f8;
    core::ptr::drop_in_place$LT$syntect..parsing..syntax_set..SyntaxSetBuilder$GT$::h51c5002042f8c4f0(&var_188)
}
