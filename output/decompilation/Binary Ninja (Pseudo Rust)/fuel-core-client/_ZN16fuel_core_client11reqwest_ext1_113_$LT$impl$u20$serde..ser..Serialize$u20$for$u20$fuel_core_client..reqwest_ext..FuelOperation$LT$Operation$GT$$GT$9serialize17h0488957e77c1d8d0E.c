
  fn fuel_core_client::reqwest_ext::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_client..reqwest_ext..FuelOperation$LT$Operation$GT$$GT$::serialize::h0488957e77c1d8d0(arg1: *mut c_void) -> i64

{
    let mut var_28: i8;
    let rsi: *mut i64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde..ser..Serializer$GT$::serialize_map::h35db61d25056f288(&var_28, rsi);
    let rax: i8 = var_28;
    let var_20: i64;
    
    if rax == 2
    {
        return var_20;
    }
    
    let var_27: i32;
    let var_14_1: i32 = var_27;
    let var_17_1: i32 = var_27;
    let mut var_18: i8 = rax;
    let var_10_1: i64 = var_20;
    let mut rax_1: i64 = _$LT$cynic..operation..Operation$LT$QueryFragment$C$Variables$GT$$u20$as$u20$serde..ser..Serialize$GT$::serialize::h3088d4c4c71a1701(arg1, &var_18);
    
    if rax_1 == 0
    {
        rax_1 = serde::ser::SerializeMap::serialize_entry::ha105efc45127fbc0(&var_18, 
            *arg1.byte_offset(0x50), *arg1.byte_offset(0x54));
        
        if rax_1 == 0
        {
            var_28 = var_18;
            _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde..ser..SerializeMap$GT$::end::h28851836131536ca(&var_28);
            return 0;
        }
    }
    
    rax_1
}
