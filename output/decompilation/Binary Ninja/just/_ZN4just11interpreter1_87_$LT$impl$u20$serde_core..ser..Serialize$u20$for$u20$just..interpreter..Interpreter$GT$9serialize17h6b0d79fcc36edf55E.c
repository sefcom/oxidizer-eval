
  int64_t just::interpreter::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$just..interpreter..Interpreter$GT$::serialize::h6b0d79fcc36edf55(void* arg1)

{
    int64_t result_1;
    uint64_t rsi;
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_struct::hfdad5c5179e3ff91(&result_1, rsi, 2);
    int64_t result = result_1;
    char var_10;
    
    if (var_10 != 3)
    {
        result_1 = result;
        result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hea2c6c8d9163c7f7(&result_1, *(arg1 + 8), *(arg1 + 0x10));
        
        if (!result)
        {
            result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h948252368f2890fc(&result_1, *(arg1 + 0x20), *(arg1 + 0x28));
            
            if (!result)
                /* tailcall */
                return _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::hdc3b867c22c4b60f(result_1, var_10);
        }
    }
    
    return result;
}
