
  int64_t just::justfile::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$just..justfile..Justfile$GT$::serialize::h8c48a974f1b5a4c8(void* arg1)

{
    int64_t result_1;
    uint64_t rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hfdad5c5179e3ff91(&result_1, rsi, 0xb);
    int64_t result = result_1;
    char var_10;
    
    if (var_10 != 3)
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hc4a559eecc64add1(&result_1, arg1 + 0x268);
        
        if (!result)
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h9272b9618aa64743(&result_1, arg1 + 0x280);
            
            if (!result)
            {
                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h89cc352198a95010(&result_1, arg1 + 0x298);
                
                if (!result)
                {
                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h3677ce0dede2f030(&result_1, "docexit-messagegroupmacosno-cdno…", 3, arg1 + 0x90);
                    
                    if (!result)
                    {
                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hdef92a6906f094dc(&result_1, *(arg1 + 8), *(arg1 + 0x10));
                        
                        if (!result)
                        {
                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h91e5e1aad3f58885(&result_1, arg1 + 0x2a0);
                            
                            if (!result)
                            {
                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h9bcef1854e9b8d0f(&result_1, arg1 + 0x2b8);
                                
                                if (!result)
                                {
                                    result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::he8ad11a6f18a3696(&result_1, arg1 + 0xa8);
                                    
                                    if (!result)
                                    {
                                        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h74a968297efe9322(&result_1, *(arg1 + 0x50), *(arg1 + 0x58));
                                        
                                        if (!result)
                                        {
                                            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h97a734596d148c79(&result_1, arg1 + 0x238);
                                            
                                            if (!result)
                                            {
                                                result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hd006d26a9cb30bcb(&result_1, *(arg1 + 0x68), *(arg1 + 0x70));
                                                
                                                if (!result)
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
    
    return result;
}
