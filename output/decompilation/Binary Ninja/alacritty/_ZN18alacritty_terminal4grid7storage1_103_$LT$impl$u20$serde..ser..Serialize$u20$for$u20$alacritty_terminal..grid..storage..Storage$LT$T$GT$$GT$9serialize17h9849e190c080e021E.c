
  int64_t* alacritty_terminal::grid::storage::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty_terminal..grid..storage..Storage$LT$T$GT$$GT$::serialize::h9849e190c080e021(void* arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 4);
    int64_t* result = result_1;
    char var_18;
    
    if (var_18 != 3)
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h80a98b7ad9f7c44d(&result_1, *(arg1 + 8), *(arg1 + 0x10));
        
        if (!result)
        {
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "zeroINFOKey1pathAxis -- \x1b[8mb", 4, *(arg1 + 0x18));
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "visible_lineslen/home/34r7hm4n/d…", 0xd, *(arg1 + 0x20));
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "len/home/34r7hm4n/dev/oxidizer/o…", 3, *(arg1 + 0x28));
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
            return 0;
        }
    }
    
    return result;
}
