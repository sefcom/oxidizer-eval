
  fn just::dependency::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$just..dependency..Dependency$GT$::serialize::hed8583d9742b0a1a(arg1: *mut c_void) -> i64

{
    let mut result_1: i64;
    let rsi: u64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hfdad5c5179e3ff91(&result_1, rsi, 2);
    let mut result: i64 = result_1;
    let var_10: i8;
    
    if var_10 != 3
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hb9936a6820c15c91(&result_1, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
        
        if result == 0
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8d5b2ee996fdea5e(&result_1, arg1.byte_offset(0x18));
            
            if result == 0
            {
                /* tailcall */
                return _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::hdc3b867c22c4b60f(result_1, var_10);
            }
        }
    }
    
    result
}
