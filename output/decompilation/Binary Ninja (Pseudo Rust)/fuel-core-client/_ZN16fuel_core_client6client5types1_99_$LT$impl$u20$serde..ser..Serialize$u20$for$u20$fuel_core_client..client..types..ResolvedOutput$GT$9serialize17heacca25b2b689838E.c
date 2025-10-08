
  fn fuel_core_client::client::types::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_client..client..types..ResolvedOutput$GT$::serialize::heacca25b2b689838(arg1: *mut i8, arg2: *mut i32) -> *mut i8

{
    let mut var_48: i64;
    _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h7a9ca1aa14a2b47c(&var_48, "ResolvedOutputexpected a header …", 0xe);
    let rcx: i64 = var_48;
    let result: i64;
    
    if rcx == -0x7ffffffffffffffe
    {
        *arg1.byte_offset(8) = result;
        *arg1 = 6;
        return result;
    }
    
    let mut var_78: i64 = rcx;
    let result_1: i64 = result;
    let mut rax_1: i64 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h6b26aebc0afc3946(&var_78);
    
    if rax_1 == 0
    {
        rax_1 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h581d46ad0e6849ca(&var_78, arg2);
        
        if rax_1 == 0
        {
            let var_28: i128;
            let var_28_1: i128 = var_28;
            let var_38: i128;
            let var_38_1: i128 = var_38;
            var_48 = var_78;
            return _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h414374fb171b4415(arg1, &var_48);
        }
    }
    
    *arg1.byte_offset(8) = rax_1;
    *arg1 = 6;
    core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::h8b43c782ab8dd56f(&var_78)
}
