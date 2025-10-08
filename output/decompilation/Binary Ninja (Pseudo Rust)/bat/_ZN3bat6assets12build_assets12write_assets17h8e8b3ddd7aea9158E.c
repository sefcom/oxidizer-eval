
  fn bat::assets::build_assets::write_assets::h8e8b3ddd7aea9158(arg1: *mut i8, arg2: *mut i64, arg3: *mut c_void, arg4: *mut i64, arg5: i64, arg6: u64, arg7: i64, arg8: u64) -> *mut c_void

{
    let mut var_90: *mut *mut c_void = std::fs::create_dir_all::h0be3d84d3a1bae95(arg5);
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hd82f0dd660d43339(&var_90);
    let mut var_b8: ();
    std::path::Path::join::hb97e165d6abf39bf(&var_b8, arg5, arg6, 
        "themes.binbat follows semantic v…");
    let var_b0: i64;
    let var_a8: u64;
    bat::assets::build_assets::asset_to_cache::hceb6e937789f3ec5(&var_90, arg2, var_b0, var_a8);
    let mut var_80: i128;
    let mut var_70: i128;
    let var_60: i128;
    let var_50: i128;
    
    if var_90 == 0xd
    {
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_b8);
        std::path::Path::join::hb97e165d6abf39bf(&var_b8, arg5, arg6, 
            "syntaxes.binthemes.binbat follow…");
        bat::assets::build_assets::asset_to_cache::h5a185e70a879210f(&var_90, arg3, var_b0, var_a8);
        
        if var_90 == 0xd
        {
            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_b8);
            
            if 0 + -(*arg4)
            {
                goto 'label_8342c7;
            }
            
            std::path::Path::join::hb97e165d6abf39bf(&var_b8, arg5, arg6, 
                "acknowledgements.binCould not se…");
            bat::assets::build_assets::asset_to_cache::hd02c86fbcb644917(&var_90, arg4[1], arg4[2], 
                var_b0, var_a8);
            
            if var_90 == 0xd
            {
                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_b8);
                'label_8342c7:
                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_b8, arg5, arg6);
                let mut var_40: *mut c_void = &var_b8;
                let var_38_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h5fba9a975e51dcf1;
                var_90 = &data_ace0d8;
                let var_88_1: i64 = 2;
                var_70 = 0;
                var_80 = &var_40;
                *var_80[8] = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_90);
                core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_b8);
                bat::assets::assets_metadata::AssetsMetadata::new::h19ae9540b0248af9(&var_b8, arg7, 
                    arg8);
                bat::assets::assets_metadata::AssetsMetadata::save_to_folder::hae67b37f18712a05(
                    &var_90, &var_b8, arg5, arg6);
                
                if var_90 != 0xd
                {
                    *arg1.byte_offset(0x40) = var_50;
                    let zmm0_2: i128 = var_90;
                    *arg1.byte_offset(0x30) = var_60;
                    *arg1.byte_offset(0x20) = var_70;
                    *arg1.byte_offset(0x10) = var_80;
                    *arg1 = zmm0_2;
                    return core::ptr::drop_in_place$LT$bat..assets..assets_metadata..AssetsMetadata$GT$::h8cc3753e3db2669a(&var_b8);
                }
                
                core::ptr::drop_in_place$LT$bat..assets..assets_metadata..AssetsMetadata$GT$::h8cc3753e3db2669a(&var_b8);
                var_90 = &data_ace0f8;
                let var_88_2: i64 = 1;
                var_80 = 8;
                var_80 = {0};
                let result: *mut c_void = std::io::stdio::_print::h5e446ff973c02de6(&var_90);
                *arg1 = 0xd;
                return result;
            }
        }
    }
    
    *arg1.byte_offset(0x40) = var_50;
    let zmm0_1: i128 = var_90;
    *arg1.byte_offset(0x30) = var_60;
    *arg1.byte_offset(0x20) = var_70;
    *arg1.byte_offset(0x10) = var_80;
    *arg1 = zmm0_1;
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hf251af593e1b1aff(&var_b8)
}
