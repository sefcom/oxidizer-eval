fn starship::configs::custom::_::<impl serde_core::ser::Serialize for starship::configs::custom::CustomConfig>::serialize(a0: u64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x118]
    let v1: Option<struct24>;  // [bp-0x118], Other Possible Types: u192
    let v3: struct8;  // [bp-0x118]
    let v4: u128;  // [bp-0x118]
    let v5: u128;  // [bp-0x108]
    let v6: i64;  // [bp-0x100]
    let v7: iNone;  // [bp-0xf8], Other Possible Types: struct92
    let v8: iNone;  // [bp-0xe8], Other Possible Types: Option<struct56>
    let v9: iNone;  // [bp-0xd8], Other Possible Types: Option<struct161>
    let v10: struct24;  // [bp-0xc8], Other Possible Types: u128
    let v11: Result<struct72, struct24>;  // [bp-0xb8], Other Possible Types: u64
    let v12: Option<struct24>;  // [bp-0xb0]
    let v13: u128;  // [bp-0xa8]
    let v14: struct92;  // [bp-0x98]
    let v15: struct24;  // [bp-0x90]
    let v16: Result<struct72, struct24>;  // [bp-0x80]
    let v17: Result<struct57, struct49>;  // [bp-0x70]
    let v18: struct92;  // [bp-0x60]
    let v19: struct92;  // [bp-0x50]
    let v20: Result<struct57, struct49>;  // [bp-0x48]
    let v21: struct24;  // [bp-0x38]
    let v23: Option<struct24>;  // r12
    let v24: &str;  // bpl
    let v25: core::fmt::Arguments;  // rax
    let v26: struct16;  // rax
    let v27: u128;  // xmm0

    v23 = *((a1 + 192) as &i64);
    v24 = *((a1 + 212) as &i8);
    v0 = <toml::table::TableSerializer as serde_core::ser::Serializer>::serialize_struct();
    v25 = v0.field_0;
    v20 = *(&v0.field_8 as &i128);
    v21 = v6;
    if v25 == 0x8000000000000000 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v20
            field_24: v21
        };
    }
    v19 = v11;
    v18 = v10;
    v17 = v9;
    v16 = v8;
    v15 = v7;
    *(&v13 as &Result<struct57, struct49>) = v20;
    v14 = v21;
    v12 = v25;
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "format", a1 + 96);
    v26 = v1 as i64;
    if let Some(_) = v1 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v26
            field_16: *((&v1 as &char + 8) as &i128)
        };
    }
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "symbol", a1 + 112);
    v26 = v1 as i64;
    if v26 == 9223372036854775813 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "command", a1 + 128);
        v26 = v1 as i64;
        if v26 == 9223372036854775813 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, a1 + 176);
            v26 = v1 as i64;
            if v26 == 9223372036854775813 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "require_repo", a1 + 208);
                v26 = v1 as i64;
                if v26 == 9223372036854775813 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "shell", a1);
                    v26 = v1 as i64;
                    if v26 == 9223372036854775813 {
                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "description", a1 + 144);
                        v26 = v1 as i64;
                        if v26 == 9223372036854775813 {
                            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "style", a1 + 160);
                            v26 = v1 as i64;
                            if v26 == 9223372036854775813 {
                                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "disabled", a1 + 209);
                                v26 = v1 as i64;
                                if v26 == 9223372036854775813 {
                                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "detect_files", a1 + 24);
                                    v26 = v1 as i64;
                                    if v26 == 9223372036854775813 {
                                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "detect_extensions", a1 + 48);
                                        v26 = v1 as i64;
                                        if v26 == 9223372036854775813 {
                                            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "detect_folders", a1 + 72);
                                            v26 = v1 as i64;
                                            if v26 == 9223372036854775813 {
                                                if let None = v23 {
                                                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "os", a1 + 192);
                                                }
                                                v26 = v1 as i64;
                                                if v26 == 9223372036854775813 {
                                                    if v24 != 2 {
                                                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, a1 + 212);
                                                    } else {
                                                        v3 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end();
                                                    }
                                                    v26 = v1 as i64;
                                                    if v26 == 9223372036854775813 {
                                                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "ignore_timeout", a1 + 210);
                                                        v26 = v1 as i64;
                                                        if v26 == 9223372036854775813 {
                                                            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "unsafe_no_escape", a1 + 211);
                                                            v26 = v1 as i64;
                                                            if v26 == 9223372036854775813 {
                                                                v11 = v19;
                                                                v10 = v18;
                                                                v9 = v17;
                                                                v27 = v12 as i128;
                                                                v8 = v16;
                                                                v7 = v15;
                                                                v5 = *((&v13 as &char + 8) as &i128);
                                                                v4 = v27;
                                                                <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v4);
                                                                return;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return struct32 {
        field_0: 9223372036854775814
        field_8: v26
        field_16: *((&v1 as &char + 8) as &i128)
    };
}
