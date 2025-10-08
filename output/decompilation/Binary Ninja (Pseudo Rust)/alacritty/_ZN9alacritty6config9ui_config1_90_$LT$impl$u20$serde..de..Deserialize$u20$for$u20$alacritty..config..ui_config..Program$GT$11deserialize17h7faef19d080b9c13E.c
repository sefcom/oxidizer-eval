
  fn alacritty::config::ui_config::_::_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$alacritty..config..ui_config..Program$GT$::deserialize::h7faef19d080b9c13(arg1: *mut i64, arg2: *mut i64) -> *mut c_void

{
    let mut result_1: i64;
    serde::de::Deserializer::__deserialize_content::hfc6145ffe17218a1(&result_1, arg2);
    let result: i64 = result_1;
    let var_d8: i128;
    let mut var_88: i128 = var_d8;
    let var_c8: i128;
    let var_b8: i128;
    let var_a8: i128;
    let var_98: i128;
    
    if result != 2
    {
        *arg1.byte_offset(0x48) = var_98;
        *arg1.byte_offset(0x38) = var_a8;
        *arg1.byte_offset(0x28) = var_b8;
        let zmm0: i128 = var_88;
        *arg1.byte_offset(0x18) = var_c8;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = result;
        return result;
    }
    
    let mut var_28: i128 = var_88;
    let var_18: i128 = var_c8;
    _$LT$serde..__private..de..content..ContentRefDeserializer$LT$E$GT$$u20$as$u20$serde..de..Deserializer$GT$::deserialize_str::h17013d9036b6d277(&result_1, &var_28);
    let mut var_78_1: i128;
    let mut var_68: i128;
    
    if result_1 != 2
    {
        var_88 = result_1;
        let var_38_1: i64 = *var_98[8];
        let var_48_1: i128 = var_a8;
        let var_58_1: i128 = var_b8;
        var_68 = var_c8;
        var_78_1 = var_d8;
        
        if var_88 == 2
        {
            goto 'label_89eedb;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty..config..ui_config..Program$C$toml..de..error..Error$GT$$GT$::h0ea6ca3974fdae48(&var_88);
        _$LT$serde..__private..de..content..ContentRefDeserializer$LT$E$GT$$u20$as$u20$serde..de..Deserializer$GT$::deserialize_any::hb117eb769db66dc7(&result_1, &var_28);
        
        if result_1 != 2
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alacritty..config..ui_config..Program$C$toml..de..error..Error$GT$$GT$::h0ea6ca3974fdae48(&result_1);
            _$LT$toml..de..error..Error$u20$as$u20$serde..de..Error$GT$::custom::h31496777fd5d78c5(
                &result_1, "data did not match any variant o…", 0x37);
            arg1[0xa] = *var_98[8];
            *arg1.byte_offset(0x40) = var_a8;
            let zmm0_3: i128 = result_1;
            *arg1.byte_offset(0x30) = var_b8;
            *arg1.byte_offset(0x20) = var_c8;
            *arg1.byte_offset(0x10) = var_d8;
            *arg1 = zmm0_3;
        }
        else
        {
            *arg1.byte_offset(0x28) = var_b8;
            *arg1.byte_offset(0x18) = var_c8;
            *arg1.byte_offset(8) = var_d8;
            *arg1 = 2;
        }
    }
    else
    {
        var_68 = var_c8;
        var_78_1 = var_d8;
        *var_88[8] = -0x8000000000000000;
        'label_89eedb:
        let rax_2: i64 = *var_88[8];
        *arg1.byte_offset(0x28) = var_68;
        arg1[3] = *var_78_1[8];
        arg1[4] = var_68;
        arg1[1] = rax_2;
        arg1[2] = var_78_1;
        *arg1 = 2;
    }
    core::ptr::drop_in_place$LT$serde..__private..de..content..Content$GT$::h85327c26d338e1c8(
        &var_28)
}
