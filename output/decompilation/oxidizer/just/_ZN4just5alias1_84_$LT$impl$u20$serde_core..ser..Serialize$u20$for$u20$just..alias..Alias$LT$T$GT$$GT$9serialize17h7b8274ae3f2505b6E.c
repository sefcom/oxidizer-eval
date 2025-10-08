fn just::alias::_::<impl serde_core::ser::Serialize for just::alias::Alias<T>>::serialize(a0: u64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x18]
    let v1: struct9;  // [bp-0x18]
    let v2: u8;  // [bp-0x10]
    let v4: struct16;  // cl
    let v5: core::option::Option<&str>;  // rax
    let v6: core::fmt::rt::Argument;  // rax
    let v7: core::result::Result<(), std::io::error::Error>;  // rax

    v0 = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(a1, 3);
    v4 = v2;
    if v2 == 3 {
        return v0.field_0;
    }
    v5 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0);
    match v5 {
        Some(_) => {
            return v5;
        },
        None => {
            v6 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 32);
            if v6 {
                return v6;
            }
            v7 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 24);
            match v7 {
                Ok(_) => {
                    return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v1.field_0, *(&v1.field_8 as &i32) as i8);
                },
                Err(_) => {
                    return v7;
                },
            }
        },
    }
}
