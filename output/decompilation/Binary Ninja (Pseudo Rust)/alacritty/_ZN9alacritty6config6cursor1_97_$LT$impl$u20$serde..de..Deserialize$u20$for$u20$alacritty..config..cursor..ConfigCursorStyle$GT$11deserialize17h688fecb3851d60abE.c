
  fn alacritty::config::cursor::_::_$LT$impl$u20$serde..de..Deserialize$u20$for$u20$alacritty..config..cursor..ConfigCursorStyle$GT$::deserialize::h688fecb3851d60ab(arg1: *mut i64, arg2: *mut i64) -> *mut c_void

{
    let mut result_1: i64;
    serde::de::Deserializer::__deserialize_content::hfc6145ffe17218a1(&result_1, arg2);
    let result: i64 = result_1;
    let var_d8: i128;
    let mut var_68: i128 = var_d8;
    let var_c8: i128;
    let var_b8: i128;
    let var_a8: i128;
    let var_98: i128;
    
    if result != 2
    {
        *arg1.byte_offset(0x48) = var_98;
        *arg1.byte_offset(0x38) = var_a8;
        *arg1.byte_offset(0x28) = var_b8;
        let zmm0: i128 = var_68;
        *arg1.byte_offset(0x18) = var_c8;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = result;
        return result;
    }
    
    let mut var_88: i128 = var_68;
    let var_78: i128 = var_c8;
    _$LT$serde..__private..de..content..ContentRefDeserializer$LT$E$GT$$u20$as$u20$serde..de..Deserializer$GT$::deserialize_str::hd54370478f20d73e(&result_1, &var_88);
    
    if result_1 != 2
    {
        var_68 = result_1;
        let var_18_1: i64 = *var_98[8];
        let var_28_1: i128 = var_a8;
        let var_38_1: i128 = var_b8;
        let var_48_1: i128 = var_c8;
        let var_58_1: i128 = var_d8;
        
        if var_68 == 2
        {
            goto 'label_88a5af;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$$LP$$RP$$GT$$C$toml..de..error..Error$GT$$GT$::h7cf16e246e4aec5e(&var_68);
        _$LT$serde..__private..de..content..ContentRefDeserializer$LT$E$GT$$u20$as$u20$serde..de..Deserializer$GT$::deserialize_any::h1c9d6a43b8218dec(&result_1, &var_88);
        
        if result_1 != 2
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$$LP$$RP$$GT$$C$toml..de..error..Error$GT$$GT$::h7cf16e246e4aec5e(&result_1);
            _$LT$toml..de..error..Error$u20$as$u20$serde..de..Error$GT$::custom::h31496777fd5d78c5(
                &result_1, "data did not match any variant o…", 0x41);
            arg1[0xa] = *var_98[8];
            *arg1.byte_offset(0x40) = var_a8;
            let zmm0_2: i128 = result_1;
            *arg1.byte_offset(0x30) = var_b8;
            *arg1.byte_offset(0x20) = var_c8;
            *arg1.byte_offset(0x10) = var_d8;
            *arg1 = zmm0_2;
        }
        else
        {
            arg1[1] = var_d8;
            *arg1 = 2;
            core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$$LP$$RP$$GT$$C$toml..de..error..Error$GT$$GT$::h7cf16e246e4aec5e(&result_1);
        }
    }
    else
    {
        *var_68[8] = 3;
        *var_68[9] = var_d8;
        var_68 = 2;
        'label_88a5af:
        arg1[1] = *var_68[8];
        *arg1 = 2;
        core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$$LP$$RP$$GT$$C$toml..de..error..Error$GT$$GT$::h7cf16e246e4aec5e(&var_68);
    }
    
    core::ptr::drop_in_place$LT$serde..__private..de..content..Content$GT$::h85327c26d338e1c8(
        &var_88)
}
