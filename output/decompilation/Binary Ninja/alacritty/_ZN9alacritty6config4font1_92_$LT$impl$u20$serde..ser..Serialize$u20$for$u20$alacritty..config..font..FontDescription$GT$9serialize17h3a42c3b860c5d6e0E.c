
  int64_t* alacritty::config::font::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..font..FontDescription$GT$::serialize::h3a42c3b860c5d6e0(void* arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 2);
    int64_t* result = result_1;
    char var_18;
    
    if (var_18 == 3)
        return result;
    
    result_1 = result;
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hb5400f5b6759c993(&result_1, "familyConfig error: family: Conf…", 6, *(arg1 + 8), *(arg1 + 0x10));
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h5427b222cf220ecc(&result_1, "styleApiSetLoggerErrorCalibrated…", 5, arg1 + 0x18);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
    return nullptr;
}
