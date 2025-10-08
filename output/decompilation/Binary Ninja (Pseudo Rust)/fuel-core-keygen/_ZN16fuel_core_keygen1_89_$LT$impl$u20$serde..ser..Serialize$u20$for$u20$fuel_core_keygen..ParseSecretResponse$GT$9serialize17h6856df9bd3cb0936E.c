
  fn fuel_core_keygen::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_keygen..ParseSecretResponse$GT$::serialize::h6856df9bd3cb0936(arg1: *mut i8, arg2: *mut i64) -> *mut i8

{
    let r12: u64 = arg2[0xb];
    let mut var_88: *mut i64;
    _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_struct::h7a9ca1aa14a2b47c(&var_88, "ParseSecretResponsea formatting …", 0x13);
    let rax: *mut i64 = var_88;
    let result: *mut i8;
    
    if rax == -0x7ffffffffffffffe
    {
        *arg1.byte_offset(8) = result;
        *arg1 = 6;
        return result;
    }
    
    let mut var_50: *mut i64 = rax;
    let result_1: *mut i8 = result;
    let mut rax_2: i64;
    
    if r12 != 0
    {
        rax_2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h72ca2abd469adf17(&var_50, &arg2[0xb]);
    }
    
    if r12 == 0 || rax_2 == 0
    {
        if *arg2 != 0
        {
            var_88 = arg2;
            rax_2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::h70752fafb90c798c(&var_50, &var_88);
        }
        
        if *arg2 == 0 || rax_2 == 0
        {
            rax_2 = _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::serialize_field::he6fe9a1cbe390c78(&var_50, arg2.byte_offset(0x79));
            
            if rax_2 == 0
            {
                let var_68: i128;
                let var_68_1: i128 = var_68;
                let var_78: i128;
                let var_78_1: i128 = var_78;
                var_88 = var_50;
                return _$LT$serde_json..value..ser..SerializeMap$u20$as$u20$serde..ser..SerializeStruct$GT$::end::h414374fb171b4415(arg1, &var_88);
            }
        }
    }
    
    *arg1.byte_offset(8) = rax_2;
    *arg1 = 6;
    core::ptr::drop_in_place$LT$serde_json..value..ser..SerializeMap$GT$::h84d7b477e9fa0e88(&var_50)
}
