
  int64_t* alacritty::cli::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$alacritty..cli..IpcGetConfig$GT$::serialize::hc2d465425a3c42bd(char arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t* arg5)

{
    int64_t* result_1;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h3370d4f9db8107e0(&result_1, arg5, 1);
    int64_t* result = result_1;
    char var_28;
    
    if (var_28 == 3)
        return result;
    
    result_1 = result;
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he1b55bffd4d8313a(&result_1, arg1, arg2, arg3, arg4);
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h3b0237f55fddd9f0(*result_1, var_28);
    return nullptr;
}
