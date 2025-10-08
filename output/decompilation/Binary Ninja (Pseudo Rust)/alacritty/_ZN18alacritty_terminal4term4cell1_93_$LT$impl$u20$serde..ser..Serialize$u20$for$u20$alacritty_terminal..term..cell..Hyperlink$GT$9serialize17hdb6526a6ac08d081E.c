
  fn alacritty_terminal::term::cell::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty_terminal..term..cell..Hyperlink$GT$::serialize::hdb6526a6ac08d081(arg1: *mut c_void) -> *mut i64

{
    let mut result_1: *mut i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 1);
    let mut result: *mut i64 = result_1;
    let var_10: i8;
    
    if var_10 != 3
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h2a5d518520913b2b(&result_1, arg1);
        
        if result == 0
        {
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_10);
            return 0;
        }
    }
    
    result
}
