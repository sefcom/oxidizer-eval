
  int64_t* alacritty_terminal::term::cell::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty_terminal..term..cell..CellExtra$GT$::serialize::h61b66a901d7f204c(void* arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 3);
    int64_t* result = result_1;
    char var_10;
    
    if (var_10 != 3)
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h2b169c7ee56f4491(&result_1, *(arg1 + 8), *(arg1 + 0x10));
        
        if (!result)
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h4b7e1d50300048a1(&result_1, arg1 + 0x20);
            
            if (!result)
            {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h0b28fde527a9f077(&result_1, *(arg1 + 0x18));
                
                if (!result)
                {
                    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_10);
                    return 0;
                }
            }
        }
    }
    
    return result;
}
