
  fn bat::assets::assets_from_cache_or_binary::h4bfa381507131f37(arg1: *mut i64, arg2: i8, arg3: i64, arg4: u64) -> i64

{
    let mut result_1: i8;
    bat::assets::assets_metadata::AssetsMetadata::load_from_folder::h0f2d1fb5c0269172(&result_1, 
        arg3, arg4);
    let result: i8 = result_1;
    let var_178: i64;
    let mut var_170: i128;
    let mut var_160: i128;
    
    if result != 0xd
    {
        let var_17f: i32;
        *arg1.byte_offset(0xc) = var_17f;
        *arg1.byte_offset(9) = var_17f;
        let var_140: i128;
        *arg1.byte_offset(0x48) = var_140;
        let var_150: i128;
        *arg1.byte_offset(0x38) = var_150;
        *arg1.byte_offset(0x28) = var_160;
        *arg1.byte_offset(0x18) = var_170;
        arg1[1] = result;
        arg1[2] = var_178;
        *arg1 = -0x7fffffffffffffff;
        return result;
    }
    
    let mut var_179: i128;
    let mut var_c0: i64;
    let mut var_b8: i128;
    
    if var_178 != -0x7fffffffffffffff
    {
        var_c0 = var_178;
        var_b8 = var_170;
        let var_a8_1: i128 = var_160;
        
        if bat::assets::assets_metadata::AssetsMetadata::is_compatible_with::h390ab7bdc192b6fc(
            &var_c0, "0.25.0Clearing  ... okay\nskippe…") == 0
        {
            let mut var_d8: ();
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_d8, arg3, arg4);
            let mut var_190: *mut c_void = &var_d8;
            let var_188_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
            result_1 = &data_ac8520;
            let var_178_1: i64 = 2;
            var_160 = 0;
            var_170 = &var_190;
            *var_170[8] = 1;
            let mut var_f0: i128;
            core::option::Option$LT$T$GT$::map_or_else::ha6af42fd863fbfff(&var_f0, 0, &result_1);
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(&var_d8);
            var_179 = var_f0;
            let var_e0: i64;
            *var_170[7] = var_e0;
            arg1[1] = 0xb;
            *arg1.byte_offset(9) = result_1;
            arg1[3] = var_178_1;
            arg1[4] = *var_170[7];
            *arg1 = -0x7fffffffffffffff;
            return core::ptr::drop_in_place$LT$bat..assets..assets_metadata..AssetsMetadata$GT$::hcbdb297cbd6d0bb1(&var_c0);
        }
        
        core::ptr::drop_in_place$LT$bat..assets..assets_metadata..AssetsMetadata$GT$::hcbdb297cbd6d0bb1(&var_c0);
    }
    
    if arg2 == 0
    {
        bat::assets::HighlightingAssets::from_binary::h996409616138bffe(&result_1);
    }
    else
    {
        bat::assets::HighlightingAssets::from_cache::h8cfca79731ebfcd6(&var_c0, arg3, arg4);
        let r14_1: i64 = var_c0;
        
        if r14_1 != -0x7fffffffffffffff
        {
            memcpy(&*var_179[1], &var_b8, 0x88);
            result_1 = r14_1;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$bat..assets..HighlightingAssets$C$bat..error..Error$GT$$GT$::h8d52ca6aed5eca66(&var_c0);
            bat::assets::HighlightingAssets::from_binary::h996409616138bffe(&result_1);
        }
    }
    
    memcpy(arg1, &result_1, 0x90)
}
