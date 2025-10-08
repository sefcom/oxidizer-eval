
  int64_t* alacritty::config::window::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..window..Dimensions$GT$::serialize::h522b3a851fe433b9(uint64_t arg1, uint64_t arg2, int64_t* arg3)

{
    int64_t* result_1;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, arg3, 2);
    int64_t* result = result_1;
    char var_20;
    
    if (var_20 == 3)
        return result;
    
    result_1 = result;
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "columnslinesdisplay_offset/home/…", 7, arg1);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "linesdisplay_offset/home/34r7hm4…", 5, arg2);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_20);
    return nullptr;
}
