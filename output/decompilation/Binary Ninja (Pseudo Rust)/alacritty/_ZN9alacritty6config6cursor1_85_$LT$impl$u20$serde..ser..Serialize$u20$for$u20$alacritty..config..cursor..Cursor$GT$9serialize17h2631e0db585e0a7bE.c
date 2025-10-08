
  fn alacritty::config::cursor::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..cursor..Cursor$GT$::serialize::h2631e0db585e0a7b(arg1: *mut i64) -> *mut i64

{
    let mut result_1: *mut i64;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, rsi, 6);
    let mut result: *mut i64 = result_1;
    let var_18: i8;
    
    if var_18 != 3
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hf5d42bd2d5b5b7c4(&result_1, *arg1.byte_offset(0xe), *arg1.byte_offset(0xf));
        
        if result == 0
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h4c62f94c6f3174e2(&result_1, *arg1.byte_offset(0xc), *arg1.byte_offset(0xd));
            
            if result == 0
            {
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he34323194a2c6e76(&result_1, "unfocused_hollowspawnnewinstance…", 0x10, *arg1.byte_offset(0x11));
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h15a78651f5e15c60(&result_1, "thicknessblink_intervalblink_tim…", 9, arg1[1]);
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h81a5ee6e99a1bd8b(&result_1, *arg1);
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h284e9b41a00f530a(&result_1, "blink_timeoutConfig error: style…", 0xd, arg1[2]);
                _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
                return 0;
            }
        }
    }
    
    result
}
