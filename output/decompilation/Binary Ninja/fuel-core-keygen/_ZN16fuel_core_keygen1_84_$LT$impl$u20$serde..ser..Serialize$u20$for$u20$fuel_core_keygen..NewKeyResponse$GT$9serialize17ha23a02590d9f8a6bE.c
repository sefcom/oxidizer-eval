
  char* fuel_core_keygen::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_keygen..NewKeyResponse$GT$::serialize::ha23a02590d9f8a6b(char* arg1, int64_t* arg2)

{
    uint64_t r12 = arg2[0xf];
    int64_t* var_58;
    _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h7a9ca1aa14a2b47c(&var_58, "NewKeyResponsesecretaddresspeer_…", 0xe);
    int64_t* rcx = var_58;
    char* result;
    
    if (rcx == -0x7ffffffffffffffe)
    {
        *(arg1 + 8) = result;
        *arg1 = 6;
        return result;
    }
    
    int64_t* var_88 = rcx;
    char* result_1 = result;
    int64_t rax_1 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::ha82e0add9300603b(&var_88);
    
    if (!rax_1)
    {
        if (r12)
            rax_1 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h72ca2abd469adf17(&var_88, &arg2[0xf]);
        
        if (!r12 || !rax_1)
        {
            if (*arg2)
            {
                var_58 = arg2;
                rax_1 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h70752fafb90c798c(&var_88, &var_58);
            }
            
            if (!*arg2 || !rax_1)
            {
                rax_1 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he6fe9a1cbe390c78(&var_88, arg2 + 0x99);
                
                if (!rax_1)
                {
                    int128_t var_38;
                    int128_t var_38_1 = var_38;
                    int128_t var_48;
                    int128_t var_48_1 = var_48;
                    var_58 = var_88;
                    return _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h414374fb171b4415(arg1, &var_58);
                }
            }
        }
    }
    
    *(arg1 + 8) = rax_1;
    *arg1 = 6;
    return core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::h84d7b477e9fa0e88(
        &var_88);
}
