fn fuel_core_client::reqwest_ext::_::<impl serde::ser::Serialize for fuel_core_client::reqwest_ext::ExtensionsRequest>::serialize(a0: u32, a1: u32, a2: u64) -> long long {
    let v0: u64;  // [bp-0x30]
    let v1: u32;  // [bp-0x2f]
    let v2: u32;  // [bp-0x2c]
    let v3: u64;  // [bp-0x28]
    let v4: struct10;  // [bp-0x20]
    let v5: u32;  // [bp-0x1c]
    let v7: u64;  // rax

    v4 = <&mut serde_json::ser::Serializer<W,F> as serde::ser::Serializer>::serialize_struct(a2);
    if v4.field_0 as i8 == 2 {
        return v4.field_8;
    }
    v2 = v5;
    v1 = *((&v4.field_0 as &char + 1) as &i32);
    v0 = v4.field_0 as i8;
    v3 = v4.field_8;
    v7 = <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::serialize_field(&v0, a0, a1);
    if !v7 {
        <serde_json::ser::Compound<W,F> as serde::ser::SerializeStruct>::end(&v0);
        return 0;
    }
    return v7;
}
