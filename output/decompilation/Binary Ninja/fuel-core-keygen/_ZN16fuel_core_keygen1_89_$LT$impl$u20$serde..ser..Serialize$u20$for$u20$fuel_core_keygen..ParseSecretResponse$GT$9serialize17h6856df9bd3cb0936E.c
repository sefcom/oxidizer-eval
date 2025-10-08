
  char* fuel_core_keygen::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_keygen..ParseSecretResponse$GT$::serialize::h6856df9bd3cb0936(char* arg1, int64_t* arg2)

{
    uint64_t r12 = arg2[0xb];
    int64_t* var_88;
    _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h7a9ca1aa14a2b47c(&var_88, "ParseSecretResponsea formatting …", 0x13);
    int64_t* rax = var_88;
    char* result;
    
    if (rax == -0x7ffffffffffffffe)
    {
        *(arg1 + 8) = result;
        *arg1 = 6;
        return result;
    }
    
    int64_t* var_50 = rax;
    char* result_1 = result;
    int64_t rax_2;
    
    if (r12)
        rax_2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h72ca2abd469adf17(&var_50, &arg2[0xb]);
    
    if (!r12 || !rax_2)
    {
        if (*arg2)
        {
            var_88 = arg2;
            rax_2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h70752fafb90c798c(&var_50, &var_88);
        }
        
        if (!*arg2 || !rax_2)
        {
            rax_2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he6fe9a1cbe390c78(&var_50, arg2 + 0x79);
            
            if (!rax_2)
            {
                int128_t var_68;
                int128_t var_68_1 = var_68;
                int128_t var_78;
                int128_t var_78_1 = var_78;
                var_88 = var_50;
                return _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h414374fb171b4415(arg1, &var_88);
            }
        }
    }
    
    *(arg1 + 8) = rax_2;
    *arg1 = 6;
    return core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::h84d7b477e9fa0e88(
        &var_50);
}
