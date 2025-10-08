
  int64_t* alacritty::config::bell::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..bell..BellConfig$GT$::serialize::ha6c225ef1c1c9fde(int64_t* arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 4);
    int64_t* result = result_1;
    char var_18;
    
    if (var_18 != 3)
    {
        result_1 = result;
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h93f4958ac4447d91(&result_1, *(arg1 + 0x32));
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h5e14459ab1ed8fac(&result_1, "commandactionConfig error: hint'…", 7, arg1);
        
        if (!result)
        {
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcaa60fed18aa524e(&result_1, "colorConfig error: animation: Co…", 5, arg1 + 0x33);
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h784573cd3be1eb3a(&result_1, "durationonlylefttrailing\n      …", 8, arg1[6]);
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
            return 0;
        }
    }
    
    return result;
}
