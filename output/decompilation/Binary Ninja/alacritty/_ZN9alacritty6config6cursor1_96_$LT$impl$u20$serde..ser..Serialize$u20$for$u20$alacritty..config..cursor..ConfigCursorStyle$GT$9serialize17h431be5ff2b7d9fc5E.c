
  int64_t* alacritty::config::cursor::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..cursor..ConfigCursorStyle$GT$::serialize::h431be5ff2b7d9fc5(char arg1, char arg2, int64_t* arg3)

{
    if (arg1 != 3)
    {
        int64_t* result_2;
        _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_2, arg3, 2);
        int64_t* result = result_2;
        char var_20;
        
        if (var_20 == 3)
            return result;
        
        int64_t* result_1 = result;
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h81499fddd266ffa4(&result_1, arg1);
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hbaa674dcf246b469(&result_1, arg2);
        _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_20);
    }
    else
        alacritty::config::cursor::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..config..cursor..CursorShape$GT$::serialize::h9b011caabb010f23(arg2, *arg3);
    
    return nullptr;
}
