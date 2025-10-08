fn just::interpreter::_::<impl serde_core::ser::Serialize for just::interpreter::Interpreter>::serialize(a0: i64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x18]
    let v1: struct9;  // [bp-0x18]
    let v2: u8;  // [bp-0x10]
    let v4: struct16;  // cl
    let v5: struct80;  // rax
    let v6: core::option::Option<&str>;  // rax

    v0 = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(a1, 2);
    v4 = v2;
    if v2 == 3 {
        return v0.field_0;
    }
    v5 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
    if v5 {
        return v5;
    }
    v6 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 32) as &i64), *((a0 + 40) as &i64));
    match v6 {
        None => {
            return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v1.field_0, *(&v1.field_8 as &i32) as i8);
        },
        Some(_) => {
            return v6;
        },
    }
}
