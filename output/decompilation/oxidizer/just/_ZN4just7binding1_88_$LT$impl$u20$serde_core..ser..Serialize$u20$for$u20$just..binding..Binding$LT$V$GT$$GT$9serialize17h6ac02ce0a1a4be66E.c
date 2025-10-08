fn just::binding::_::<impl serde_core::ser::Serialize for just::binding::Binding<V>>::serialize(a0: i64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x18], Other Possible Types: u64
    let v1: u8;  // [bp-0x10]
    let v3: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // cl
    let v4: std::io::stdio::Stdout;  // rax
    let v5: core::result::Result<(), std::io::error::Error>;  // rax
    let v6: u64;  // rax
    let v7: struct80;  // rax

    v0 = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(a1, 4);
    v3 = v1;
    if v1 == 3 {
        return v0.field_0;
    }
    v0 = v0.field_0;
    v4 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "export", *((a0 + 205) as &i8));
    if v4 {
        return v4;
    }
    v5 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, a0 + 128);
    match v5 {
        Err(_) => {
            return v5;
        },
        Ok(_) => {
            v6 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, "private", *((a0 + 206) as &i8) as u8 as u64);
            if v6 {
                return v6;
            }
            v7 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v0, a0);
            if !v7 {
                return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v0, *(&v0.field_8 as &i32) as i8);
            }
            return v7;
        },
    }
}
