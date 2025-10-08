fn just::justfile::_::<impl serde_core::ser::Serialize for just::justfile::Justfile>::serialize(a0: i64, a1: u64) -> long long {
    let v0: struct9;  // [bp-0x18]
    let v1: struct9;  // [bp-0x18]
    let v2: u8;  // [bp-0x10]
    let v4: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // cl
    let v5: struct80;  // rax
    let v6: struct24;  // rax
    let v7: struct65;  // rax
    let v8: core::option::Option<&str>;  // rax
    let v9: struct24;  // rax
    let v10: struct12;  // rax
    let v11: Result<struct8, struct4>;  // rax
    let v12: Result<struct8, struct4>;  // rax
    let v13: Result<struct16, struct64>;  // rax
    let v14: u64;  // rax
    let v15: struct18;  // rax

    v0 = <&mut serde_json::ser::Serializer<W,F> as serde_core::ser::Serializer>::serialize_struct(a1, 11);
    v4 = v2;
    if v2 == 3 {
        return v0.field_0;
    }
    v5 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 616);
    if v5 {
        return v5;
    }
    v6 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 640);
    if v6 {
        return v6;
    }
    v7 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 664);
    if v7 {
        return v7;
    }
    v8 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, "doc", a0 + 144);
    match v8 {
        Some(_) => {
            return v8;
        },
        None => {
            v9 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 8) as &i64), *((a0 + 16) as &i64));
            if v9 {
                return v9;
            }
            v10 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 672);
            if v10 {
                return v10;
            }
            v11 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 696);
            match v11 {
                Err(_) => {
                    return v11;
                },
                Ok(_) => {
                    v12 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 168);
                    match v12 {
                        Err(_) => {
                            return v12;
                        },
                        Ok(_) => {
                            v13 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 80) as &i64), *((a0 + 88) as &i64));
                            match v13 {
                                Err(_) => {
                                    return v13;
                                },
                                Ok(_) => {
                                    v14 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, a0 + 568);
                                    if v14 {
                                        return v14;
                                    }
                                    v15 = <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::serialize_field(&v1, *((a0 + 104) as &i64), *((a0 + 112) as &i64));
                                    if !v15 {
                                        return <serde_json::ser::Compound<W,F> as serde_core::ser::SerializeStruct>::end(v1.field_0, *(&v1.field_8 as &i32) as i8);
                                    }
                                    return v15;
                                },
                            }
                        },
                    }
                },
            }
        },
    }
}
