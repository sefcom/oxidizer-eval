fn just::request::_::<impl serde_core::ser::Serialize for just::request::Response>::serialize(a0: i64, a1: u64) -> long long {
    if *(a0 as &i32) != 1 {
        return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(a1, a0 + 8);
    }
    return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_variant(a1, *((a0 + 16) as &i64), *((a0 + 24) as &i64));
}
