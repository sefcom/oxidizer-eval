
  int64_t* alacritty::config::ui_config::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..ui_config..Program$GT$::serialize::heea5df14c22c94ef(int64_t* arg1, int64_t* arg2)

{
    if (!(0 + -(*arg1)))
    {
        int64_t* result_2;
        _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_2, arg2, 2);
        int64_t* result = result_2;
        char var_18;
        
        if (var_18 == 3)
            return result;
        
        int64_t* result_1 = result;
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hb5400f5b6759c993(&result_1, "programstartup_modedynamic_paddi…", 7, arg1[1], arg1[2]);
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hcb2c7c9149519398(&result_1, "args\n```.inf(", 4, arg1[4], arg1[5]);
        
        if (result)
            return result;
        
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_18);
    }
    else
        _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_str::h07d1352c39bdb459(*arg2, arg1[2], arg1[3]);
    
    return 0;
}
