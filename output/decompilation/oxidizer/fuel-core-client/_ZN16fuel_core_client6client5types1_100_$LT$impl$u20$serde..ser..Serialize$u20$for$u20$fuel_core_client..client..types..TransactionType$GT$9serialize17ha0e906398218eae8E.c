fn fuel_core_client::client::types::_::<impl serde::ser::Serialize for fuel_core_client::client::types::TransactionType>::serialize(a0: u64, a1: u64) -> long long {
    if a1 == 9223372036854775814 {
        return <serde_json::value::ser::RawValueEmitter as serde::ser::Serializer>::serialize_unit_variant(a0);
    }
    return <serde_json::value::ser::RawValueEmitter as serde::ser::Serializer>::serialize_newtype_struct(a0);
}
