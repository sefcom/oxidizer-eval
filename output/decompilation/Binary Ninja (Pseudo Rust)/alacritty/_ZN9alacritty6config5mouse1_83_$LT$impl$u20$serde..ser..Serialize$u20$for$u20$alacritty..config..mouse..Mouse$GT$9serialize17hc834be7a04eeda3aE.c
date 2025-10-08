
  fn alacritty::config::mouse::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..mouse..Mouse$GT$::serialize::hc834be7a04eeda3a(arg1: i8) -> *mut i64

{
    let mut result_1: *mut i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 1);
    let result: *mut i64 = result_1;
    let var_10: i8;
    
    if var_10 == 3
    {
        return result;
    }
    
    result_1 = result;
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, &data_4e9550[0x20], 0x10, arg1);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_10);
    nullptr
}
