fn just::keyed::serialize_option(a0: u64, a1: u64) -> long long {
    if a0 {
        return just::keyed::serialize(a0, a1);
    }
    return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_none(a1);
}
