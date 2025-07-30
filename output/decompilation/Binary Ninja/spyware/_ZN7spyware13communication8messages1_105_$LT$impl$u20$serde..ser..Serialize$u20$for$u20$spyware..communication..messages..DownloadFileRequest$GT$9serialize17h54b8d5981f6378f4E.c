
  int32_t* spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..DownloadFileRequest$GT$::serialize::h54b8d5981f6378f4(int32_t* arg1, void* arg2, int64_t* arg3)

{
    int32_t var_40;
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h19528d03ac3c512b(&var_40, arg3, "DownloadFileRequestDownloadFileR…", 0x13, 1);
    int32_t rax = var_40;
    int64_t* var_38;
    char var_30;
    int128_t var_20;
    
    if (rax != 0x21)
    {
        *(arg1 + 0x20) = var_20;
        int128_t var_2f;
        *(arg1 + 0x11) = var_2f;
        *arg1 = rax;
        int32_t var_3c;
        arg1[1] = var_3c;
        *(arg1 + 8) = var_38;
        arg1[4] = var_30;
    }
    else
    {
        int64_t* var_50 = var_38;
        _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h0fe0e64abb5f6595(&var_40, &var_50, "pathINFO-infNonelineshimmips    …", 4, arg2);
        
        if (var_40 != 0x21)
        {
            int128_t zmm0_2 = var_40;
            *(arg1 + 0x20) = var_20;
            *(arg1 + 0x10) = var_30;
            *arg1 = zmm0_2;
        }
        else
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h1114ba35daa4ac40(arg1, var_50, var_30);
    }
    return arg1;
}
