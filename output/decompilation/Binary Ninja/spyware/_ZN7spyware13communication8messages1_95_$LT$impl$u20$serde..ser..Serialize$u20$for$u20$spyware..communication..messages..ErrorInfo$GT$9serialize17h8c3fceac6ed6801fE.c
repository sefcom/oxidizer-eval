
  int32_t* spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..ErrorInfo$GT$::serialize::h8c3fceac6ed6801f(int32_t* arg1, void* arg2, int64_t* arg3)

{
    int32_t var_50;
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h19528d03ac3c512b(&var_50, arg3, "ErrorInforaw_os_erroras_stringRu…", 9, 2);
    int32_t rax = var_50;
    int64_t* var_48;
    char var_40;
    int128_t var_30;
    
    if (rax != 0x21)
    {
        *(arg1 + 0x20) = var_30;
        int128_t var_3f;
        *(arg1 + 0x11) = var_3f;
        *arg1 = rax;
        int32_t var_4c;
        arg1[1] = var_4c;
        *(arg1 + 8) = var_48;
        arg1[4] = var_40;
    }
    else
    {
        int64_t* var_20 = var_48;
        _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hee229ea0e2191163(&var_50, &var_20, "raw_os_erroras_stringRunCommandR…", 0xc, arg2 + 0x18);
        
        if (var_50 != 0x21)
        {
            label_44ec99:
            int128_t zmm0_2 = var_50;
            *(arg1 + 0x20) = var_30;
            *(arg1 + 0x10) = var_40;
            *arg1 = zmm0_2;
        }
        else
        {
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h0fe0e64abb5f6595(&var_50, &var_20, "as_stringRunCommandRequestcomman…", 9, arg2);
            
            if (var_50 != 0x21)
                goto label_44ec99;
            
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h1114ba35daa4ac40(arg1, var_20, var_40);
        }
    }
    return arg1;
}
