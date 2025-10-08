
  char* fuel_core_client::client::types::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_client..client..types..TransactionResponse$GT$::serialize::he11dc95e6be1e411(char* arg1, int64_t* arg2)

{
    int64_t var_48;
    _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h7a9ca1aa14a2b47c(&var_48, "TransactionResponseResolvedOutpu…", 0x13);
    int64_t rcx = var_48;
    int64_t result;
    
    if (rcx == -0x7ffffffffffffffe)
    {
        *(arg1 + 8) = result;
        *arg1 = 6;
        return result;
    }
    
    int64_t var_78 = rcx;
    int64_t result_1 = result;
    int64_t rax_1 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::hd5d0fafbf02edf13(&var_78, &arg2[0x11]);
    
    if (!rax_1)
    {
        rax_1 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h1b7a9fe931d70210(&var_78, arg2);
        
        if (!rax_1)
        {
            int128_t var_28;
            int128_t var_28_1 = var_28;
            int128_t var_38;
            int128_t var_38_1 = var_38;
            var_48 = var_78;
            return _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h414374fb171b4415(arg1, &var_48);
        }
    }
    
    *(arg1 + 8) = rax_1;
    *arg1 = 6;
    return core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::h8b43c782ab8dd56f(
        &var_78);
}
