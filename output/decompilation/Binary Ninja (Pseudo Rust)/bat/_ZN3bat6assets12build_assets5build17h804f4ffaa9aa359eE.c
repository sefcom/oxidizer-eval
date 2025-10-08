
  fn bat::assets::build_assets::build::h804f4ffaa9aa359e(arg1: *mut i8, arg2: i64, arg3: u64, arg4: i32, arg5: i8, arg6: i64, arg7: u64, arg8: i64, arg9: u64) -> *mut i8

{
    let mut var_168: i8;
    bat::assets::build_assets::build_theme_set::he10a5c707d4325f2(&var_168, arg2, arg3, arg4);
    let rax: i8 = var_168;
    let var_167: i128;
    let var_148: i128;
    let var_138: i128;
    let var_128: i128;
    let mut var_f8: i128;
    
    if rax != 0xd
    {
        var_f8 = var_167;
        *arg1.byte_offset(0x40) = var_128;
        *arg1.byte_offset(0x30) = var_138;
        *arg1.byte_offset(0x20) = var_148;
        *arg1.byte_offset(0x10) = var_167;
        *arg1.byte_offset(1) = var_f8;
        *arg1 = rax;
    }
    else
    {
        let mut var_118: i128 = var_167;
        let var_150: i64;
        let var_108_1: i64 = var_150;
        bat::assets::build_assets::build_syntax_set_builder::h8312703e95b68659(&var_168, arg2, 
            arg3, arg4);
        let rax_2: i8 = var_168;
        
        if rax_2 != 0xd
        {
            var_f8 = var_167;
            *arg1.byte_offset(0x48) = *var_128[8];
            *arg1.byte_offset(0x38) = var_138;
            *arg1.byte_offset(0x30) = var_138;
            let zmm0_1: i128 = var_f8;
            *arg1.byte_offset(0x21) = var_148;
            let var_157: i128;
            *arg1.byte_offset(0x11) = var_157;
            *arg1.byte_offset(1) = zmm0_1;
            *arg1 = rax_2;
        }
        else
        {
            let mut var_68: i128 = var_167;
            let var_58_1: i128 = var_150;
            let var_48_1: i128 = var_148;
            syntect::parsing::syntax_set::SyntaxSetBuilder::build::h5ed9f770ef579f80(&var_f8, 
                &var_68);
            bat::assets::build_assets::acknowledgements::build_acknowledgements::h985f29fe48cdf84e(
                &var_168, arg2, arg3, arg5);
            let rax_3: i8 = var_168;
            
            if rax_3 != 0xd
            {
                *arg1.byte_offset(0x40) = var_128;
                *arg1.byte_offset(0x30) = var_138;
                *arg1.byte_offset(0x20) = var_148;
                *arg1.byte_offset(0x10) = var_167;
                *arg1.byte_offset(1) = var_167;
                *arg1 = rax_3;
                core::ptr::drop_in_place$LT$syntect..parsing..syntax_set..SyntaxSet$GT$::hb4e548531bab001a(&var_f8);
            }
            else
            {
                let mut var_a8: i128 = var_167;
                let var_98_1: i64 = var_150;
                bat::assets::build_assets::print_unlinked_contexts::hfe9c6fb076e98778(&var_f8);
                bat::assets::build_assets::write_assets::h8e8b3ddd7aea9158(arg1, &var_118, &var_f8, 
                    &var_a8, arg6, arg7, arg8, arg9);
                core::ptr::drop_in_place$LT$regex..error..Error$GT$::h92380712fca2cb32(&var_a8);
                core::ptr::drop_in_place$LT$syntect..parsing..syntax_set..SyntaxSet$GT$::hb4e548531bab001a(&var_f8);
            }
        }
        
        core::ptr::drop_in_place$LT$bat..assets..lazy_theme_set..LazyThemeSet$GT$::h22a7dc710ec7648e(&var_118);
    }
    arg1
}
