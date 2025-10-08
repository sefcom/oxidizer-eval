
  fn fuel_core_client::client::types::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_client..client..types..TransactionStatus$GT$::serialize::h0609a79bcbdde6d8(arg1: *mut i8, arg2: i64) -> u64

{
    let rax: i64 = -0x8000000000000000 ^ arg2;
    let mut rcx: i64 = 4;
    
    if rax < 6
    {
        rcx = rax;
    }
    
    match jump_table_48a5cc[rcx]
    {
        0x20b793 =>
        {
            let result: u64 = _$LT$serde_json..value..ser..RawValueEmitter$u20$as$u20$serde..ser..Serializer$GT$::serialize_tuple_variant::h78046c57c286514b();
            *arg1.byte_offset(8) = result;
            *arg1 = 6;
            result
        }
    }
}
