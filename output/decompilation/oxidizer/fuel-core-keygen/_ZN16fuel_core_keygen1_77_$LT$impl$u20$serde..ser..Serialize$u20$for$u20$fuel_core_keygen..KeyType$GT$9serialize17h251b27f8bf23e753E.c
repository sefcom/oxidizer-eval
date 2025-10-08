fn fuel_core_keygen::_::<impl serde::ser::Serialize for fuel_core_keygen::KeyType>::serialize(a0: u64, a1: u8) -> long long {
    if (a1 & 1) {
        return <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_unit_variant(a0, "peering");
    }
    return <serde_json::value::ser::Serializer as serde::ser::Serializer>::serialize_unit_variant(a0, "block-production");
}
