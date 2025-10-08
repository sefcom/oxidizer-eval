
  fn alacritty::config::window::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..window..Dimensions$GT$::serialize::h522b3a851fe433b9(arg1: u64, arg2: u64, arg3: *mut i64) -> *mut i64

{
    let mut result_1: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, arg3, 2);
    let result: *mut i64 = result_1;
    let var_20: i8;
    
    if var_20 == 3
    {
        return result;
    }
    
    result_1 = result;
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "columnslinesdisplay_offset/home/…", 7, arg1);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hc7b2f370ad8f0396(&result_1, "linesdisplay_offset/home/34r7hm4…", 5, arg2);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_20);
    nullptr
}
