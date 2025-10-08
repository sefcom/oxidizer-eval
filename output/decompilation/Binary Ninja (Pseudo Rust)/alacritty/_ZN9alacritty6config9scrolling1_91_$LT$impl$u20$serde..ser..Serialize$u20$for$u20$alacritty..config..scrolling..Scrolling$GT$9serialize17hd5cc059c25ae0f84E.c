
  fn alacritty::config::scrolling::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..scrolling..Scrolling$GT$::serialize::hd5cc059c25ae0f84(arg1: u32, arg2: u8, arg3: *mut i64) -> *mut i64

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
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h284e9b41a00f530a(&result_1, "multiplierhistoryConfig error: m…", 0xa, arg2);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h8089456c6da01b07(&result_1, arg1);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_20);
    nullptr
}
