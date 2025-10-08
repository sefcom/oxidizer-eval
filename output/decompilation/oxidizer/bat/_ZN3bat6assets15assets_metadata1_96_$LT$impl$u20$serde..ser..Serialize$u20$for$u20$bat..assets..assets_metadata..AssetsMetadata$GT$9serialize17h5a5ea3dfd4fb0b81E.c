fn bat::assets::assets_metadata::_::<impl serde::ser::Serialize for bat::assets::assets_metadata::AssetsMetadata>::serialize(a0: u64, a1: u64) -> long long {
    let v0: Result<struct80, struct9>;  // [bp-0x18]
    let v2: i64;  // rax
    let v3: u64;  // rdx
    let v4: struct24;  // rax
    let v5: u64;  // rdx

    v0 = v2;
    if (<&mut serde_yaml::ser::Serializer<W> as serde::ser::Serializer>::serialize_struct(a1) & 1) {
        return v5;
    }
    v4 = <&mut serde_yaml::ser::Serializer<W> as serde::ser::SerializeStruct>::serialize_field(v3, a0);
    if v4 {
        return v4;
    }
    v4 = <&mut serde_yaml::ser::Serializer<W> as serde::ser::SerializeStruct>::serialize_field(v3, a0 + 24);
    if !v4 {
        return <&mut serde_yaml::ser::Serializer<W> as serde::ser::SerializeStruct>::end(v3);
    }
    return v4;
}
