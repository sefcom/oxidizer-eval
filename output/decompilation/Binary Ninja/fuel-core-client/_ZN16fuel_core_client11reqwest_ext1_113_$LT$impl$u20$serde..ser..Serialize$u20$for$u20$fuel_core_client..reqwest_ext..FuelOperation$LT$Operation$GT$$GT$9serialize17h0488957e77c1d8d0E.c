
  int64_t fuel_core_client::reqwest_ext::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_client..reqwest_ext..FuelOperation$LT$Operation$GT$$GT$::serialize::h0488957e77c1d8d0(void* arg1)

{
    char var_28;
    int64_t* rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_map::h35db61d25056f288(&var_28, rsi);
    char rax = var_28;
    int64_t var_20;
    
    if (rax == 2)
        return var_20;
    
    int32_t var_27;
    int32_t var_14_1 = var_27;
    int32_t var_17_1 = var_27;
    char var_18 = rax;
    int64_t var_10_1 = var_20;
    int64_t rax_1 = _$LT$cynic..operation..Operation$LT$QueryFragment$C$Variables$GT$$u20$as$u20$serde..ser..Serialize$GT$::serialize::h3088d4c4c71a1701(arg1, &var_18);
    
    if (!rax_1)
    {
        rax_1 = serde::ser::SerializeMap::serialize_entry::ha105efc45127fbc0(&var_18, 
            *(arg1 + 0x50), *(arg1 + 0x54));
        
        if (!rax_1)
        {
            var_28 = var_18;
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeMap$GT$::end::h28851836131536ca(&var_28);
            return 0;
        }
    }
    
    return rax_1;
}
