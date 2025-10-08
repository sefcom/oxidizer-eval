
  int64_t* alacritty::config::ui_config::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..ui_config..Delta$LT$T$GT$$GT$::serialize::h0b9a316c05b9340a(int32_t arg1, int32_t arg2, int64_t* arg3)

{
    int64_t* result_1;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, arg3, 2);
    int64_t* result = result_1;
    char var_20;
    
    if (var_20 == 3)
        return result;
    
    result_1 = result;
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h9dbff1b897f855a2(&result_1, "xynum_framesnum_playsNothingHead…", arg1);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h9dbff1b897f855a2(&result_1, "ynum_framesnum_playsNothingHeade…", arg2);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_20);
    return nullptr;
}
