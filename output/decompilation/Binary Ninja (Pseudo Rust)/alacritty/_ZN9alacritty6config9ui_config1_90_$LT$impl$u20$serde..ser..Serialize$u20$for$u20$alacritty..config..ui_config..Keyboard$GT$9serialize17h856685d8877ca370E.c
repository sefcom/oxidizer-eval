
  fn alacritty::config::ui_config::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..ui_config..Keyboard$GT$::serialize::h856685d8877ca370(arg1: *mut i64) -> *mut i64

{
    let mut result_1: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, arg1, 0);
    let result: *mut i64 = result_1;
    let var_8: i8;
    
    if var_8 == 3
    {
        return result;
    }
    
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result, var_8);
    nullptr
}
