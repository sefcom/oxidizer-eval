
  fn fuel_core_client::reqwest_ext::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_client..reqwest_ext..ExtensionsRequest$GT$::serialize::h3acfb4a3ad087fbd(arg1: i32, arg2: u32, arg3: *mut i64) -> i64

{
    let mut var_20: i8;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h56a2f01b1bb8435a(&var_20, arg3);
    let rax: i8 = var_20;
    let var_18: i64;
    
    if rax == 2
    {
        return var_18;
    }
    
    let var_1f: i32;
    let var_2c_1: i32 = var_1f;
    let var_2f_1: i32 = var_1f;
    let mut var_30: i8 = rax;
    let var_28_1: i64 = var_18;
    let rax_1: i64 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h15146a0456335a6c(&var_30, arg1, arg2);
    
    if rax_1 != 0
    {
        return rax_1;
    }
    
    _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h67f16742d5355f95(&var_30);
    0
}
