fn just::parameter_kind::_::<impl serde_core::ser::Serialize for just::parameter_kind::ParameterKind>::serialize(a0: u8, a1: u64) -> long long {
    if !a0 {
        return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(a1, "plus");
    } else if a0 == 1 {
        return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(a1, "singular");
    } else {
        return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_unit_variant(a1, "star");
    }
}
