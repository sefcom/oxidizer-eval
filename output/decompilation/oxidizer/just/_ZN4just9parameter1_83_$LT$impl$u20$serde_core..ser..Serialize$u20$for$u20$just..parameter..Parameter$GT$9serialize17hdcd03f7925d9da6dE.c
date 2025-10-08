fn just::parameter::_::<impl serde_core::ser::Serialize for just::parameter::Parameter>::serialize(a0: i64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x18]
    let v1: struct9;  // [bp-0x18]
    let v2: u8;  // [bp-0x10]
    let v4: u8;  // cl
    let v5: u64;  // rax
    let v6: struct24;  // rax
    let v7: core::result::Result<(), std::io::error::Error>;  // rax
    let v8: struct157;  // rax

    v0 = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(a1, 4);
    v4 = v2;
    if v2 == 3 {
        return v0.field_0;
    }
    v5 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0);
    if v5 {
        return v5;
    }
    v6 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, "export", *((a0 + 200) as &i32));
    if v6 {
        return v6;
    }
    v7 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 201) as &i8));
    match v7 {
        Err(_) => {
            return v7;
        },
        Ok(_) => {
            v8 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 128);
            if !v8 {
                return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v1.field_0, *(&v1.field_8 as &i32) as i8);
            }
            return v8;
        },
    }
}
