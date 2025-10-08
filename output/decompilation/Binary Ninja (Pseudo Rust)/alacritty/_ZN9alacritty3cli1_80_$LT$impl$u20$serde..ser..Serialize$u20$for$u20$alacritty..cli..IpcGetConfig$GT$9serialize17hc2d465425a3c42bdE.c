
  fn alacritty::cli::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..cli..IpcGetConfig$GT$::serialize::hc2d465425a3c42bd(arg1: i8, arg2: i64, arg3: i64, arg4: i64, arg5: *mut i64) -> *mut i64

{
    let mut result_1: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, arg5, 1);
    let result: *mut i64 = result_1;
    let var_28: i8;
    
    if var_28 == 3
    {
        return result;
    }
    
    result_1 = result;
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he1b55bffd4d8313a(&result_1, arg1, arg2, arg3, arg4);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_28);
    nullptr
}
