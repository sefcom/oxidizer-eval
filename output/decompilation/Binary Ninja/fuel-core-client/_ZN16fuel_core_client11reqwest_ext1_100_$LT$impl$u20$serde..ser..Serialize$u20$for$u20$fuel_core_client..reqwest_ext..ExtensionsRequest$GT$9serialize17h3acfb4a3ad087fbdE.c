
  int64_t fuel_core_client::reqwest_ext::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_client..reqwest_ext..ExtensionsRequest$GT$::serialize::h3acfb4a3ad087fbd(int32_t arg1, uint32_t arg2, int64_t* arg3)

{
    char var_20;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h56a2f01b1bb8435a(&var_20, arg3);
    char rax = var_20;
    int64_t var_18;
    
    if (rax == 2)
        return var_18;
    
    int32_t var_1f;
    int32_t var_2c_1 = var_1f;
    int32_t var_2f_1 = var_1f;
    char var_30 = rax;
    int64_t var_28_1 = var_18;
    int64_t rax_1 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h15146a0456335a6c(&var_30, arg1, arg2);
    
    if (rax_1)
        return rax_1;
    
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h67f16742d5355f95(&var_30);
    return 0;
}
