
  int64_t bat::assets::assets_from_cache_or_binary::h4bfa381507131f37(int64_t* arg1, char arg2, int64_t arg3, uint64_t arg4)

{
    char result_1;
    bat::assets::assets_metadata::AssetsMetadata::load_from_folder::h0f2d1fb5c0269172(&result_1, 
        arg3, arg4);
    char result = result_1;
    int64_t var_178;
    int128_t var_170;
    int128_t var_160;
    
    if (result != 0xd)
    {
        int32_t var_17f;
        *(arg1 + 0xc) = var_17f;
        *(arg1 + 9) = var_17f;
        int128_t var_140;
        *(arg1 + 0x48) = var_140;
        int128_t var_150;
        *(arg1 + 0x38) = var_150;
        *(arg1 + 0x28) = var_160;
        *(arg1 + 0x18) = var_170;
        arg1[1] = result;
        arg1[2] = var_178;
        *arg1 = -0x7fffffffffffffff;
        return result;
    }
    
    int128_t var_179;
    int64_t var_c0;
    int128_t var_b8;
    
    if (var_178 != -0x7fffffffffffffff)
    {
        var_c0 = var_178;
        var_b8 = var_170;
        int128_t var_a8_1 = var_160;
        
        if (!bat::assets::assets_metadata::AssetsMetadata::is_compatible_with::h390ab7bdc192b6fc(
            &var_c0, "0.25.0Clearing  ... okay\nskippe…"))
        {
            void var_d8;
            alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_d8, arg3, arg4);
            void* var_190 = &var_d8;
            int64_t (* var_188_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::ha152f904fae7110e;
            result_1 = &data_ac8520;
            int64_t var_178_1 = 2;
            var_160 = 0;
            var_170 = &var_190;
            *var_170[8] = 1;
            int128_t var_f0;
            core::option::Option$LT$T$GT$::map_or_else::ha6af42fd863fbfff(&var_f0, 0, &result_1);
            core::ptr::drop_in_place$LT$regex..error..Error$GT$::h466767d2e8f86b90(&var_d8);
            var_179 = var_f0;
            int64_t var_e0;
            *var_170[7] = var_e0;
            arg1[1] = 0xb;
            *(arg1 + 9) = result_1;
            arg1[3] = var_178_1;
            arg1[4] = *var_170[7];
            *arg1 = -0x7fffffffffffffff;
            return core::ptr::drop_in_place$LT$bat..assets..assets_metadata..AssetsMetadata$GT$::hcbdb297cbd6d0bb1(&var_c0);
        }
        
        core::ptr::drop_in_place$LT$bat..assets..assets_metadata..AssetsMetadata$GT$::hcbdb297cbd6d0bb1(&var_c0);
    }
    
    if (!arg2)
        bat::assets::HighlightingAssets::from_binary::h996409616138bffe(&result_1);
    else
    {
        bat::assets::HighlightingAssets::from_cache::h8cfca79731ebfcd6(&var_c0, arg3, arg4);
        int64_t r14_1 = var_c0;
        
        if (r14_1 != -0x7fffffffffffffff)
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
    
    return memcpy(arg1, &result_1, 0x90);
}
