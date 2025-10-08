fn just::keyed::serialize(a0: u64, a1: u64) -> long long {
    let v1: u64;  // rdx

    return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_str(a1, <alloc::sync::Arc<T> as just::keyed::Keyed>::key(a0), v1);
}
