
  fn fuel_core_client::client::types::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_client..client..types..TransactionType$GT$::serialize::ha0e906398218eae8(arg1: *mut i8, arg2: i64) -> i64

{
    if arg2 != -0x7ffffffffffffffa
    {
        /* tailcall */
        return _$LT$serde_json..value..ser..RawValueEmitter$u20$as$u20$serde..ser..Serializer$GT$::serialize_newtype_struct::h072bcdfaf948f118(arg1);
    }
    
    /* tailcall */
    _$LT$serde_json..value..ser..RawValueEmitter$u20$as$u20$serde..ser..Serializer$GT$::serialize_unit_variant::h55ce2992e3d54d3a(arg1)
}
