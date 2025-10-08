
  fn alacritty::config::color::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..color..MatchColors$GT$::serialize::hb02bc6f60f76127d(arg1: *mut i8) -> *mut i64

{
    let mut result_1: *mut i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 2);
    let result: *mut i64 = result_1;
    let var_18: i8;
    
    if var_18 == 3
    {
        return result;
    }
    
    result_1 = result;
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h1982d51700ef5f91(&result_1, "foregroundbackgroundConfig error…", arg1);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h1982d51700ef5f91(&result_1, "backgroundConfig error: foregrou…", &arg1[4]);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
    nullptr
}
