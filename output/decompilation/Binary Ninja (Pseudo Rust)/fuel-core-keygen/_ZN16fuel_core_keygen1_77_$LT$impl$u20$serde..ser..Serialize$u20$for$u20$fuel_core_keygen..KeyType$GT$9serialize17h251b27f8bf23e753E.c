
  fn fuel_core_keygen::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_keygen..KeyType$GT$::serialize::h251b27f8bf23e753(arg1: *mut i8, arg2: i8) -> i64

{
    if (arg2 & 1) == 0
    {
        /* tailcall */
        return _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h3966ea39887aa664(arg1, "block-productionno storage space", 0x10);
    }
    
    /* tailcall */
    _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h3966ea39887aa664(arg1, "peeringNewKeyResponsesecretaddre…", 7)
}
