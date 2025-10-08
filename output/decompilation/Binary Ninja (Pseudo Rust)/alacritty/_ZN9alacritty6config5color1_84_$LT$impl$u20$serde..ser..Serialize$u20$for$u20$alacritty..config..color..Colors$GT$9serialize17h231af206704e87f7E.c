
  fn alacritty::config::color::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..color..Colors$GT$::serialize::h231af206704e87f7(arg1: *mut c_void) -> *mut i64

{
    let mut result_1: *mut i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 0xe);
    let mut result: *mut i64 = result_1;
    let var_18: i8;
    
    if var_18 != 3
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h1ddec313a7001d1a(&result_1, arg1.byte_offset(0x90));
        
        if result == 0
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h71d7faf466ec259f(&result_1, "cursorfatal runtime error: threa…", 6, arg1.byte_offset(0x28));
            
            if result == 0
            {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h71d7faf466ec259f(&result_1, "vi_mode_cursorselectionnormalbri…", 0xe, 
                    arg1.byte_offset(0x30));
                
                if result == 0
                {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h71d7faf466ec259f(&result_1, "selectionnormalbrightdimindexed_…", 9, 
                        arg1.byte_offset(0x38));
                    
                    if result == 0
                    {
                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h62b8e4a1c01765ba(&result_1, arg1.byte_offset(0x60));
                        
                        if result == 0
                        {
                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h26e6d275d1ada039(&result_1, arg1.byte_offset(0x78));
                            
                            if result == 0
                            {
                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd1df34989ca44a95(&result_1, arg1.byte_offset(0x9e));
                                
                                if result == 0
                                {
                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::ha1e5829f8f90bae3(&result_1, *arg1.byte_offset(8), 
                                        *arg1.byte_offset(0x10));
                                    
                                    if result == 0
                                    {
                                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h6cec2fa8fedcece8(&result_1, arg1.byte_offset(0x40));
                                        
                                        if result == 0
                                        {
                                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h37995c33e0cbb27a(&result_1, arg1.byte_offset(0x18));
                                            
                                            if result == 0
                                            {
                                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hafab9122653b938a(&result_1, arg1.byte_offset(0x50));
                                                
                                                if result == 0
                                                {
                                                    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "transparent_background_colorsfoo…", 
                                                        0x1d, *arg1.byte_offset(0xb7));
                                                    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "draw_bold_text_with_bright_color…", 
                                                        0x21, *arg1.byte_offset(0xb8));
                                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcf81b0961741eeba(&result_1, arg1.byte_offset(0x20));
                                                    
                                                    if result == 0
                                                    {
                                                        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    result
}
