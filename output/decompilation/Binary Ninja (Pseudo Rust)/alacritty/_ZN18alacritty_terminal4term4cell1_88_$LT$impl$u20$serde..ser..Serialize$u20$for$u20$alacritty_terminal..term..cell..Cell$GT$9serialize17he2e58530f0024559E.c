
  fn alacritty_terminal::term::cell::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty_terminal..term..cell..Cell$GT$::serialize::he2e58530f0024559(arg1: *mut i64) -> *mut i64

{
    let mut result_1: *mut i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 5);
    let mut result: *mut i64 = result_1;
    let var_18: i8;
    
    if var_18 != 3
    {
        result_1 = result;
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hf994ad05a5533ea2(&result_1, arg1[2]);
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h4610b67963a858d6(&result_1, "fgbgflagsextrazerowidthunderline…", &arg1[1]);
        
        if result == 0
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h4610b67963a858d6(&result_1, "bgflagsextrazerowidthunderline_c…", arg1.byte_offset(0xc));
            
            if result == 0
            {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h71321809e0b7f4af(&result_1, *arg1.byte_offset(0x14));
                
                if result == 0
                {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h76836ebee1b12461(&result_1, *arg1);
                    
                    if result == 0
                    {
                        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
                        return 0;
                    }
                }
            }
        }
    }
    
    result
}
