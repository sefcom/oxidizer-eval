
  int64_t just::request::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$just..request..Response$GT$::serialize::he71b20c3c8708877(int32_t* arg1, uint64_t arg2)

{
    if (*arg1 != 1)
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::hb0c036a0c7b75497(arg2, &arg1[2]);
    
    /* tailcall */
    return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_newtype_variant::h383a792115b6d474(arg2, *(arg1 + 0x10), *(arg1 + 0x18));
}
