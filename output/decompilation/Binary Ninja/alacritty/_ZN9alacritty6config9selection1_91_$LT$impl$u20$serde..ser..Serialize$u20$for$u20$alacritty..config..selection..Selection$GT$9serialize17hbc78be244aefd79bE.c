
  int64_t* alacritty::config::selection::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..selection..Selection$GT$::serialize::hbc78be244aefd79b(void* arg1)

{
    int64_t* result_1;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 2);
    int64_t* result = result_1;
    char var_18;
    
    if (var_18 == 3)
        return result;
    
    result_1 = result;
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hb5400f5b6759c993(&result_1, "semantic_escape_charssave_to_cli…", 0x15, *(arg1 + 8), *(arg1 + 0x10));
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "save_to_clipboardConfig error: s…", 0x11, *(arg1 + 0x18));
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
    return nullptr;
}
