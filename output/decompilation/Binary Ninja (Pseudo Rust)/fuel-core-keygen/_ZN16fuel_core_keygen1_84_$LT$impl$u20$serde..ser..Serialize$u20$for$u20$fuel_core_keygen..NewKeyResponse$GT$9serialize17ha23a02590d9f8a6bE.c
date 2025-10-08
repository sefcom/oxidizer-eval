
  fn fuel_core_keygen::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_keygen..NewKeyResponse$GT$::serialize::ha23a02590d9f8a6b(arg1: *mut i8, arg2: *mut i64) -> *mut i8

{
    let r12: u64 = arg2[0xf];
    let mut var_58: *mut i64;
    _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h7a9ca1aa14a2b47c(&var_58, "NewKeyResponsesecretaddresspeer_…", 0xe);
    let rcx: *mut i64 = var_58;
    let result: *mut i8;
    
    if rcx == -0x7ffffffffffffffe
    {
        *arg1.byte_offset(8) = result;
        *arg1 = 6;
        return result;
    }
    
    let mut var_88: *mut i64 = rcx;
    let result_1: *mut i8 = result;
    let mut rax_1: i64 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::ha82e0add9300603b(&var_88);
    
    if rax_1 == 0
    {
        if r12 != 0
        {
            rax_1 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h72ca2abd469adf17(&var_88, &arg2[0xf]);
        }
        
        if r12 == 0 || rax_1 == 0
        {
            if *arg2 != 0
            {
                var_58 = arg2;
                rax_1 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h70752fafb90c798c(&var_88, &var_58);
            }
            
            if *arg2 == 0 || rax_1 == 0
            {
                rax_1 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he6fe9a1cbe390c78(&var_88, arg2.byte_offset(0x99));
                
                if rax_1 == 0
                {
                    let var_38: i128;
                    let var_38_1: i128 = var_38;
                    let var_48: i128;
                    let var_48_1: i128 = var_48;
                    var_58 = var_88;
                    return _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h414374fb171b4415(arg1, &var_58);
                }
            }
        }
    }
    
    *arg1.byte_offset(8) = rax_1;
    *arg1 = 6;
    core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::h84d7b477e9fa0e88(&var_88)
}
