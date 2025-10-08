
  fn bat::assets::HighlightingAssets::from_cache::h8cfca79731ebfcd6(arg1: *mut i128, arg2: i64, arg3: u64) -> *mut i128

{
    let mut var_b8: i128;
    std::path::Path::join::hb97e165d6abf39bf(&var_b8, arg2, arg3, 
        "syntaxes.binthemes.binbat follow…");
    let mut var_a0: ();
    std::path::Path::join::hb97e165d6abf39bf(&var_a0, arg2, arg3, 
        "themes.binbat follows semantic v…");
    let var_98: i64;
    let mut var_68: i8;
    bat::assets::asset_from_cache::h3795340a0ae6536f(&var_68, var_98);
    let rcx: i8 = var_68;
    let var_67: i128;
    
    if rcx != 0xd
    {
        let var_28: i128;
        *arg1.byte_offset(0x48) = var_28;
        let var_38: i128;
        *arg1.byte_offset(0x38) = var_38;
        let var_48: i128;
        *arg1.byte_offset(0x28) = var_48;
        *arg1.byte_offset(0x18) = var_67;
        *arg1.byte_offset(9) = var_67;
        *arg1.byte_offset(8) = rcx;
        *arg1 = -0x7fffffffffffffff;
        core::ptr::drop_in_place$LT$bat..assets..serialized_syntax_set..SerializedSyntaxSet$GT$::h6dfb02adb4d69a30(&var_b8);
    }
    else
    {
        let mut var_79: i128;
        let var_50: i64;
        *var_79[8] = var_50;
        let var_88: i128 = var_67;
        *arg1.byte_offset(0x78) = var_50;
        *arg1.byte_offset(0x68) = var_67;
        *arg1 = var_b8;
        let var_a8: i64;
        arg1[1] = var_a8;
        *arg1.byte_offset(0x18) = -0x8000000000000000;
        arg1[8] = 0;
    }
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_a0);
    arg1
}
