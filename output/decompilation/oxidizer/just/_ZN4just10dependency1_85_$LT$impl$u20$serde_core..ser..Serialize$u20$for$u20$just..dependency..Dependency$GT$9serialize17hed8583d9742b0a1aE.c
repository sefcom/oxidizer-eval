fn just::dependency::_::<impl serde_core::ser::Serialize for just::dependency::Dependency>::serialize(a0: i64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x18]
    let v1: struct9;  // [bp-0x18]
    let v2: u8;  // [bp-0x10]
    let v4: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // cl
    let v5: u64;  // rax
    let v6: u64;  // rax

    v0 = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(a1, 2);
    v4 = v2;
    if v2 == 3 {
        return v0.field_0;
    }
    v5 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
    if v5 {
        return v5;
    }
    v6 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 24);
    if !v6 {
        return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v1.field_0, *(&v1.field_8 as &i32));
    }
    return v6;
}
