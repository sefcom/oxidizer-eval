
  int64_t* alacritty::config::color::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..color..HintColors$GT$::serialize::ha64f33ed1fe44d60(char* arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 2);
    int64_t* result = result_1;
    char var_10;
    
    if (var_10 != 3)
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hf3adf65de168f2fe(&result_1, arg1);
        
        if (!result)
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::ha6bf970f14d2af8e(&result_1, &arg1[8]);
            
            if (!result)
            {
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_10);
                return 0;
            }
        }
    }
    
    return result;
}
