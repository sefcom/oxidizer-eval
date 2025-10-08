fn just::attribute_set::_::<impl serde_core::ser::Serialize for just::attribute_set::AttributeSet>::serialize(a0: u64, a1: u64) -> long long {
    return <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_newtype_struct(a1, a0);
}
