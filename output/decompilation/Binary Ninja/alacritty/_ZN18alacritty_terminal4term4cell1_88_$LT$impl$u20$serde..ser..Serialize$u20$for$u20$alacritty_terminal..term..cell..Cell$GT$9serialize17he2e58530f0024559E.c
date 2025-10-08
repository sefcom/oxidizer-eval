
  int64_t* alacritty_terminal::term::cell::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty_terminal..term..cell..Cell$GT$::serialize::he2e58530f0024559(int64_t* arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 5);
    int64_t* result = result_1;
    char var_18;
    
    if (var_18 != 3)
    {
        result_1 = result;
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hf994ad05a5533ea2(&result_1, arg1[2]);
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h4610b67963a858d6(&result_1, "fgbgflagsextrazerowidthunderline…", &arg1[1]);
        
        if (!result)
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h4610b67963a858d6(&result_1, "bgflagsextrazerowidthunderline_c…", arg1 + 0xc);
            
            if (!result)
            {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h71321809e0b7f4af(&result_1, *(arg1 + 0x14));
                
                if (!result)
                {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h76836ebee1b12461(&result_1, *arg1);
                    
                    if (!result)
                    {
                        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
                        return 0;
                    }
                }
            }
        }
    }
    
    return result;
}
