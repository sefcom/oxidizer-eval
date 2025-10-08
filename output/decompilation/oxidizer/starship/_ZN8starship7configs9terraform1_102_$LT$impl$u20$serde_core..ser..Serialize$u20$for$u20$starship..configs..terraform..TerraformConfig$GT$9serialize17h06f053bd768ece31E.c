fn starship::configs::terraform::_::<impl serde_core::ser::Serialize for starship::configs::terraform::TerraformConfig>::serialize(a0: i64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x108]
    let v1: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v2: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v3: struct24;  // [bp-0x108]
    let v4: struct24;  // [bp-0xf8]
    let v5: struct24;  // [bp-0xf0]
    let v6: iNone;  // [bp-0xe8], Other Possible Types: struct24
    let v7: iNone;  // [bp-0xd8], Other Possible Types: struct72
    let v8: iNone;  // [bp-0xc8], Other Possible Types: struct32
    let v9: iNone;  // [bp-0xb8], Other Possible Types: Option<struct24>
    let v10: struct8;  // [bp-0xa8], Other Possible Types: unsigned long
    let v11: struct24;  // [bp-0x98]
    let v12: struct24;  // [bp-0x88]
    let v13: struct16;  // [bp-0x80]
    let v14: struct24;  // [bp-0x78]
    let v15: core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>;  // [bp-0x68]
    let v16: struct83;  // [bp-0x60]
    let v17: Option<struct24>;  // [bp-0x50]
    let v18: Option<struct24>;  // [bp-0x40]
    let v19: Option<struct24>;  // [bp-0x30]
    let v20: Option<struct24>;  // [bp-0x20]
    let v22: &str;  // rax
    let v23: core::fmt::rt::Argument;  // rax
    let v24: struct24;  // xmm0

    v0 = <toml::table::TableSerializer as serde_core::ser::Serializer>::serialize_struct();
    v22 = v0.field_0;
    v11 = *(&v0.field_8 as &i128);
    v12 = v5;
    if v22 == 0x8000000000000000 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v11
            field_24: v12
        };
    }
    v20 = v10;
    v19 = v9;
    v18 = v8;
    v17 = v7;
    v16 = v6;
    v14 = v11;
    v15 = v12;
    v13 = v22;
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "format", a1 + 96);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "version_format", a1 + 112);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "symbol", a1 + 128);
            if let None = v1 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "style", a1 + 144);
                if let None = v1 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "disabled", a1 + 160);
                    if let None = v1 {
                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "detect_extensions", a1);
                        if let None = v1 {
                            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "detect_files", a1 + 24);
                            if let None = v1 {
                                v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "detect_folders", a1 + 48);
                                v23 = v2 as i64;
                                if let Some(_) = v2 {
                                    return struct32 {
                                        field_0: 9223372036854775814
                                        field_8: v23
                                        field_16: *((&v2 as &char + 8) as &i128)
                                    };
                                }
                                v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, a1 + 72);
                                v23 = v2 as i64;
                                if v23 == 9223372036854775813 {
                                    v10 = v20;
                                    v9 = v19;
                                    v8 = v18;
                                    v24 = *(&v13.field_16 as &i128);
                                    v7 = v17;
                                    v6 = v16;
                                    v4.field_0 = *((&v14.field_0 as &char + 8) as &i128) as u128;
                                    v3 = v24;
                                    <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v3 as u8);
                                    return;
                                }
                                return struct32 {
                                    field_0: 9223372036854775814
                                    field_8: v23
                                    field_16: *((&v2 as &char + 8) as &i128)
                                };
                            }
                        }
                    }
                }
            }
        }
    }
    *((a0 + 24) as &i64) = *((&v1 as &char + 16) as &i64);
    *((a0 + 8) as &i128) = v1;
}
