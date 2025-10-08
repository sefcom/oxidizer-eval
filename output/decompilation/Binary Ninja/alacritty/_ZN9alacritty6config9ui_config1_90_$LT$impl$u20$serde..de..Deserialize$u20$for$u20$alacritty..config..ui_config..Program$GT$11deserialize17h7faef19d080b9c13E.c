
  void* alacritty::config::ui_config::_::_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$alacritty..config..ui_config..Program$GT$::deserialize::h7faef19d080b9c13(int64_t* arg1, int64_t* arg2)

{
    int64_t result_1;
    serde::de::Deserializer::__deserialize_content::hfc6145ffe17218a1(&result_1, arg2);
    int64_t result = result_1;
    int128_t var_d8;
    int128_t var_88 = var_d8;
    int128_t var_c8;
    int128_t var_b8;
    int128_t var_a8;
    int128_t var_98;
    
    if (result != 2)
    {
        *(arg1 + 0x48) = var_98;
        *(arg1 + 0x38) = var_a8;
        *(arg1 + 0x28) = var_b8;
        int128_t zmm0 = var_88;
        *(arg1 + 0x18) = var_c8;
        *(arg1 + 8) = zmm0;
        *arg1 = result;
        return result;
    }
    
    int128_t var_28 = var_88;
    int128_t var_18 = var_c8;
    _$LT$serde..__private..de..content..ContentRefDeserializer$LT$E$GT$$u20$as$u20$serde..de..Deserializer$GT$::deserialize_str::h17013d9036b6d277(&result_1, &var_28);
    int128_t var_78_1;
    int128_t var_68;
    
    if (result_1 != 2)
    {
        var_88 = result_1;
        int64_t var_38_1 = *var_98[8];
        int128_t var_48_1 = var_a8;
        int128_t var_58_1 = var_b8;
        var_68 = var_c8;
        var_78_1 = var_d8;
        
        if (var_88 == 2)
            goto label_89eedb;
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty..config..ui_config..Program$C$toml..de..error..Error$GT$$GT$::h0ea6ca3974fdae48(&var_88);
        _$LT$serde..__private..de..content..ContentRefDeserializer$LT$E$GT$$u20$as$u20$serde..de..Deserializer$GT$::deserialize_any::hb117eb769db66dc7(&result_1, &var_28);
        
        if (result_1 != 2)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty..config..ui_config..Program$C$toml..de..error..Error$GT$$GT$::h0ea6ca3974fdae48(&result_1);
            _$LT$toml..de..error..Error$u20$as$u20$serde..de..Error$GT$::custom::h31496777fd5d78c5(
                &result_1, "data did not match any variant o…", 0x37);
            arg1[0xa] = *var_98[8];
            *(arg1 + 0x40) = var_a8;
            int128_t zmm0_3 = result_1;
            *(arg1 + 0x30) = var_b8;
            *(arg1 + 0x20) = var_c8;
            *(arg1 + 0x10) = var_d8;
            *arg1 = zmm0_3;
        }
        else
        {
            *(arg1 + 0x28) = var_b8;
            *(arg1 + 0x18) = var_c8;
            *(arg1 + 8) = var_d8;
            *arg1 = 2;
        }
    }
    else
    {
        var_68 = var_c8;
        var_78_1 = var_d8;
        *var_88[8] = -0x8000000000000000;
        label_89eedb:
        int64_t rax_2 = *var_88[8];
        *(arg1 + 0x28) = var_68;
        arg1[3] = *var_78_1[8];
        arg1[4] = var_68;
        arg1[1] = rax_2;
        arg1[2] = var_78_1;
        *arg1 = 2;
    }
    return 
        core::ptr::drop_in_place$LT$serde..__private..de..content..Content$GT$::h85327c26d338e1c8(
        &var_28);
}
