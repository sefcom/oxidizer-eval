fn just::recipe::_::<impl serde_core::ser::Serialize for just::recipe::Recipe<D>>::serialize(a0: i64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x18]
    let v1: struct9;  // [bp-0x18]
    let v2: u8;  // [bp-0x10]
    let v4: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // cl
    let v5: struct80;  // rax
    let v6: core::option::Option<&str>;  // rax
    let v7: u64;  // rax
    let v8: struct80;  // rax
    let v9: struct24;  // rax
    let v10: struct25;  // rax
    let v11: struct24;  // rax
    let v12: core::iter::adapters::flatten::FlatMap<core::str::iter::Chars, core::char::EscapeDebug, core::str::CharEscapeDebugContinue>;  // rax
    let v13: struct72;  // rax
    let v14: core::fmt::rt::Argument;  // rax
    let v15: struct81;  // rax

    v0 = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(a1, 11);
    v4 = v2;
    if v2 == 3 {
        return v0.field_0;
    }
    v5 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 216);
    if v5 {
        return v5;
    }
    v6 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
    match v6 {
        Some(_) => {
            return v6;
        },
        None => {
            v7 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 32) as &i64), *((a0 + 40) as &i64));
            if v7 {
                return v7;
            }
            v8 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, "doc", a0 + 96);
            if v8 {
                return v8;
            }
            v9 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 144);
            if v9 {
                return v9;
            }
            v10 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, "namepath", a0 + 120);
            if v10 {
                return v10;
            }
            v11 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 80) as &i64), *((a0 + 88) as &i64));
            if v11 {
                return v11;
            }
            v12 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 240) as &i64));
            if v12 {
                return v12;
            }
            v13 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, "private", *((a0 + 252) as &i32) as u32 as u64);
            if v13 {
                return v13;
            }
            v14 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, "quiet", *((a0 + 253) as &i8) as u8 as u64);
            if v14 {
                return v14;
            }
            v15 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, "shebang", *((a0 + 254) as &i8) as u8 as u64);
            if !v15 {
                return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v1.field_0, *(&v1.field_8 as &i32) as i8);
            }
            return v15;
        },
    }
}
