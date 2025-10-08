
  fn bat::assets::assets_metadata::AssetsMetadata::load_from_folder::h0f2d1fb5c0269172(arg1: *mut i8, arg2: i64, arg3: u64) -> *mut i8

{
    let mut var_120: i8;
    bat::assets::assets_metadata::AssetsMetadata::try_load_from_folder::hea3fe7d33e77c6ce(&var_120, 
        arg2, arg3);
    let var_118: i128;
    let var_108: i128;
    
    if var_120 == 0xd
    {
        let var_f8: i64;
        *arg1.byte_offset(0x28) = var_f8;
        *arg1.byte_offset(0x18) = var_108;
        *arg1.byte_offset(8) = var_118;
        *arg1 = 0xd;
    }
    else if var_120 != 6
    {
        let mut var_138: ();
        std::path::Path::join::hb97e165d6abf39bf(&var_138, arg2, arg3, 
            "syntaxes.binthemes.binbat follow…");
        let var_130: i64;
        let mut var_d0: i64;
        std::fs::metadata::h4d9fc7ae25563c19(&var_d0, var_130);
        let r12_1: i32 = var_d0;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haf24c6c708ccc154(&var_d0);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_138);
        let mut r14_1: i32;
        
        if r12_1 == 2
        {
            std::path::Path::join::hb97e165d6abf39bf(&var_138, arg2, arg3, 
                "themes.binbat follows semantic v…");
            std::fs::metadata::h4d9fc7ae25563c19(&var_d0, var_130);
            r14_1 = var_d0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::haf24c6c708ccc154(&var_d0);
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_138);
        }
        
        if r12_1 != 2 || r14_1 != 2
        {
            *arg1.byte_offset(8) = -0x8000000000000000;
            *arg1.byte_offset(0x28) = 0x3b9aca00;
        }
        else
        {
            *arg1.byte_offset(8) = -0x7fffffffffffffff;
        }
        
        *arg1 = 0xd;
        core::ptr::drop_in_place$LT$bat..error..Error$GT$::head773e43869367f(&var_120);
    }
    else
    {
        let var_e0: i128;
        *arg1.byte_offset(0x40) = var_e0;
        let zmm0_1: i128 = var_120;
        let var_f0: i128;
        *arg1.byte_offset(0x30) = var_f0;
        *arg1.byte_offset(0x20) = var_108;
        *arg1.byte_offset(0x10) = var_118;
        *arg1 = zmm0_1;
    }
    arg1
}
