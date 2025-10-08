
  fn just::keyed::serialize_option::h885bdd364792453f(arg1: *mut c_void, arg2: i64) -> i64

{
    if arg1 == 0
    {
        /* tailcall */
        return _$LT$$RF$mut$u20$serde_json..ser..Serializer$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_none::h47d2bc08236b01d7(arg2);
    }
    
    /* tailcall */
    just::keyed::serialize::h7d9d608fbfd25335(arg1, arg2)
}
