
  fn alacritty::config::ui_config::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..ui_config..Program$GT$::serialize::heea5df14c22c94ef(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    if !(0 + -(*arg1))
    {
        let mut result_2: *mut i64;
        _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_2, arg2, 2);
        let mut result: *mut i64 = result_2;
        let var_18: i8;
        
        if var_18 == 3
        {
            return result;
        }
        
        let mut result_1: *mut i64 = result;
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hb5400f5b6759c993(&result_1, "programstartup_modedynamic_paddi…", 7, arg1[1], arg1[2]);
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcb2c7c9149519398(&result_1, "args\n```.inf(", 4, arg1[4], arg1[5]);
        
        if result != 0
        {
            return result;
        }
        
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
    }
    else
    {
        _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_str::h07d1352c39bdb459(*arg2, arg1[2], arg1[3]);
    }
    
    0
}
