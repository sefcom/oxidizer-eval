
  fn just::recipe::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$just..recipe..Recipe$LT$D$GT$$GT$::serialize::h17b47d1a38b72e80(arg1: *mut c_void) -> i64

{
    let mut result_1: i64;
    let rsi: u64;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hfdad5c5179e3ff91(&result_1, rsi, 0xb);
    let mut result: i64 = result_1;
    let var_10: i8;
    
    if var_10 != 3
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h865793240a227b81(&result_1, arg1.byte_offset(0xd8));
        
        if result == 0
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hdb9d80680d23d8c9(&result_1, *arg1.byte_offset(8), *arg1.byte_offset(0x10));
            
            if result == 0
            {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h849704166dbf4570(&result_1, *arg1.byte_offset(0x20), *arg1.byte_offset(0x28));
                
                if result == 0
                {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h3677ce0dede2f030(&result_1, "docexit-messagegroupmacosno-cdno…", 3, 
                        arg1.byte_offset(0x60));
                    
                    if result == 0
                    {
                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hfa8b07ca5a303dcf(&result_1, arg1.byte_offset(0x90));
                        
                        if result == 0
                        {
                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h3677ce0dede2f030(&result_1, "namepathstride: xidstart( ", 8, 
                                arg1.byte_offset(0x78));
                            
                            if result == 0
                            {
                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hdf2286a8d64138fe(&result_1, *arg1.byte_offset(0x50), 
                                    *arg1.byte_offset(0x58));
                                
                                if result == 0
                                {
                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h1938ab3643db0b84(&result_1, *arg1.byte_offset(0xf0));
                                    
                                    if result == 0
                                    {
                                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, "privatescriptwindowsexportvalue", 7, 
                                            *arg1.byte_offset(0xfc));
                                        
                                        if result == 0
                                        {
                                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, 
                                                "quietJUST_QUIETSuppress all outp…", 5, 
                                                *arg1.byte_offset(0xfd));
                                            
                                            if result == 0
                                            {
                                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h8fce071aeefde71f(&result_1, 
                                                    "shebangNo justfile foundGlobal j…", 7, 
                                                    *arg1.byte_offset(0xfe));
                                                
                                                if result == 0
                                                {
                                                    /* tailcall */
                                                    return _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::hdc3b867c22c4b60f(result_1, var_10);
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    
    result
}
