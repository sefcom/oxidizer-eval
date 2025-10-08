
  int64_t* alacritty::config::color::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..color..DimColors$GT$::serialize::h2f3ba63fb3cb2406(int64_t arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 8);
    int64_t* result = result_1;
    char var_18;
    
    if (var_18 == 3)
        return result;
    
    result_1 = result;
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcaa60fed18aa524e(&result_1, "blackredgreenyellowmagentawhiteC…", 5, arg1);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcaa60fed18aa524e(&result_1, "redgreenyellowmagentawhiteConfig…", 3, arg1 + 3);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcaa60fed18aa524e(&result_1, "greenyellowmagentawhiteConfig er…", 5, arg1 + 6);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcaa60fed18aa524e(&result_1, "yellowmagentawhiteConfig error: …", 6, arg1 + 9);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcaa60fed18aa524e(&result_1, "bluedarktypeyearq", 4, arg1 + 0xc);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcaa60fed18aa524e(&result_1, "magentawhiteConfig error: black:…", 7, arg1 + 0xf);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcaa60fed18aa524e(&result_1, "cyan.NaNo", 4, arg1 + 0x12);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcaa60fed18aa524e(&result_1, "whiteConfig error: black: Config…", 5, arg1 + 0x15);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
    return nullptr;
}
