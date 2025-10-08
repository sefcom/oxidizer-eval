
  fn alacritty::config::terminal::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..terminal..Terminal$GT$::serialize::h8fb47fc5333df8f7(arg1: *mut i64) -> *mut i64

{
    let mut result_1: *mut i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 2);
    let mut result: *mut i64 = result_1;
    let var_18: i8;
    
    if var_18 != 3
    {
        result_1 = result;
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hfa2f75eb15c05f9c(&result_1, arg1[6]);
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h5e14459ab1ed8fac(&result_1, "shellSkipping migration for none…", 5, arg1);
        
        if result == 0
        {
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
            return 0;
        }
    }
    
    result
}
