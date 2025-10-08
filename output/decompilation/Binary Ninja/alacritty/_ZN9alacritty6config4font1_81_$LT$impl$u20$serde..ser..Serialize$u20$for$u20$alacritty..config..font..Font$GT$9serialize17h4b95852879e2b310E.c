
  int64_t* alacritty::config::font::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..font..Font$GT$::serialize::h4b95852879e2b310(void* arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 9);
    int64_t* result = result_1;
    char var_18;
    
    if (var_18 != 3)
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h61835a098f3ea790(&result_1, "offsetGaveUpHaystackTooLongUnsup…", 6, *(arg1 + 0xc4), *(arg1 + 0xc5));
        
        if (!result)
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h61835a098f3ea790(&result_1, "glyph_offsetitalicbold_italicbui…", 0xc, *(arg1 + 0xc6), 
                *(arg1 + 0xc7));
            
            if (!result)
            {
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "use_thin_strokesglObjectPtrLabel…", 0x10, *(arg1 + 0xc8));
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he7b6e7b5cb79b69e(&result_1, arg1);
                
                if (!result)
                {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h0cedf239ce9f5e24(&result_1, "bolddesc of dumb\x1b[5me", 4, arg1 + 0x30);
                    
                    if (!result)
                    {
                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h0cedf239ce9f5e24(&result_1, "italicbold_italicbuiltin_box_dra…", 6, arg1 + 0x60);
                        
                        if (!result)
                        {
                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h0cedf239ce9f5e24(&result_1, "bold_italicbuiltin_box_drawingCo…", 0xb, 
                                arg1 + 0x90);
                            
                            if (!result)
                            {
                                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h6e804f055b9e11c7(&result_1, *(arg1 + 0xc0));
                                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "builtin_box_drawingConfig error:…", 0x13, 
                                    *(arg1 + 0xc9));
                                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    
    return result;
}
