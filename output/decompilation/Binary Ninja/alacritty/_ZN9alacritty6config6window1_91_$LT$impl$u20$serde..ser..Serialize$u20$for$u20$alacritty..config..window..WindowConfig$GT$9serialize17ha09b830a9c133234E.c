
  int64_t* alacritty::config::window::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..window..WindowConfig$GT$::serialize::ha09b830a9c133234(void* arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 0xe);
    int64_t* result = result_1;
    char var_18;
    
    if (var_18 != 3)
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h744c49a8bcb13573(&result_1, arg1 + 0x60);
        
        if (!result)
        {
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::habd7c1c57f4a3963(&result_1, *(arg1 + 0x7a));
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h0a08959a8d08803b(&result_1, *(arg1 + 0x7b));
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "dynamic_paddingdynamic_titleopac…", 0xf, *(arg1 + 0x74));
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "dynamic_titleopacityoption_as_al…", 0xd, *(arg1 + 0x75));
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hf8718f1fc562fb45(&result_1, arg1);
            
            if (!result)
            {
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h15a78651f5e15c60(&result_1, "opacityoption_as_altpaddingdecor…", 7, *(arg1 + 0x6c));
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "blurHintTRUEz", 4, *(arg1 + 0x76));
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h17ee4998ca2a5cb9(&result_1, *(arg1 + 0x7c));
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "resize_incrementscontent_protect…", 0x11, *(arg1 + 0x77));
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h6f20702cbdb64c63(&result_1, *(arg1 + 0x70), *(arg1 + 0x72));
                
                if (!result)
                {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd9a15b3003ad25f6(&result_1, *(arg1 + 0x50), *(arg1 + 0x58));
                    
                    if (!result)
                    {
                        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h52baf4ca4dc79868(&result_1, *(arg1 + 0x79));
                        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h92dc711be8209396(&result_1, *(arg1 + 0x78));
                        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
                        return 0;
                    }
                }
            }
        }
    }
    
    return result;
}
