
  fn just::parameter_kind::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$just..parameter_kind..ParameterKind$GT$::serialize::h013d3f2a84fa87c4(arg1: i8, arg2: i64) -> i64

{
    if arg1 == 0
    {
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "plusUtf8.b", 4);
    }
    
    if arg1 != 1
    {
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "staro", 4);
    }
    
    /* tailcall */
    _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_unit_variant::h7a8eff1851e7fafb(arg2, "singulararmenianEthiopic", 8)
}
