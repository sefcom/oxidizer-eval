
  fn just::binding::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$just..binding..Binding$LT$V$GT$$GT$::serialize::h6ac02ce0a1a4be66(arg1: *mut i64) -> i64

{
    let mut result_1: i64;
    let rsi: u64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hfdad5c5179e3ff91(&result_1, rsi, 4);
    let mut result: i64 = result_1;
    let var_10: i8;
    
    if var_10 != 3
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "exportvalue", 6, *arg1.byte_offset(0xcd));
        
        if result == 0
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hfa8b07ca5a303dcf(&result_1, &arg1[0x10]);
            
            if result == 0
            {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "privatescriptwindowsexportvalue", 7, *arg1.byte_offset(0xce));
                
                if result == 0
                {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h5bafdab35f8b6ee8(&result_1, arg1);
                    
                    if result == 0
                    {
                        /* tailcall */
                        return _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::hdc3b867c22c4b60f(result_1, var_10);
                    }
                }
            }
        }
    }
    
    result
}
