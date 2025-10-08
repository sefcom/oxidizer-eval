
  uint64_t fuel_core_client::client::types::_::_$LT$impl$u20$serde..ser..Serialize$u20$for$u20$fuel_core_client..client..types..TransactionStatus$GT$::serialize::h0609a79bcbdde6d8(char* arg1, int64_t arg2)

{
    int64_t rax = -0x8000000000000000 ^ arg2;
    int64_t rcx = 4;
    
    if (rax < 6)
        rcx = rax;
    
    switch (jump_table_48a5cc[rcx])
    {
        case 0x20b76d:
        {
            uint64_t result = _$LT$serde_json..value..ser..RawValueEmitter$u20$as$u20$serde..ser..Serializer$GT$::serialize_tuple_variant::h78046c57c286514b();
            *(arg1 + 8) = result;
            *arg1 = 6;
            return result;
            break;
        }
    }
}
