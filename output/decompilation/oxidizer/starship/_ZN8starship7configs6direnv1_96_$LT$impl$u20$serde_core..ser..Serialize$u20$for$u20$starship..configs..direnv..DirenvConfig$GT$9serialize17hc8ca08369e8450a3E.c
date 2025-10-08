fn starship::configs::direnv::_::<impl serde_core::ser::Serialize for starship::configs::direnv::DirenvConfig>::serialize(a0: i64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x108]
    let v1: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v2: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v3: u128;  // [bp-0x108]
    let v4: struct83;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf0]
    let v6: struct128;  // [bp-0xe8], Other Possible Types: struct92
    let v7: iNone;  // [bp-0xd8], Other Possible Types: Option<struct56>
    let v8: iNone;  // [bp-0xc8], Other Possible Types: struct128
    let v9: iNone;  // [bp-0xb8], Other Possible Types: struct24
    let v10: struct24;  // [bp-0xa8], Other Possible Types: u64
    let v11: struct40;  // [bp-0xa0]
    let v12: struct83;  // [bp-0x98]
    let v13: struct72;  // [bp-0x88]
    let v14: struct92;  // [bp-0x80]
    let v15: Option<struct56>;  // [bp-0x70]
    let v16: struct24;  // [bp-0x60]
    let v17: struct32;  // [bp-0x50]
    let v18: u64;  // [bp-0x40]
    let v19: struct83;  // [bp-0x38]
    let v20: struct40;  // [bp-0x28]
    let v22: struct24;  // rax
    let v23: Option<struct24>;  // rax
    let v24: iNone;  // xmm0

    v0 = <toml::table::TableSerializer as serde_core::ser::Serializer>::serialize_struct();
    v22 = v0.field_0;
    v19 = *(&v0.field_8 as &i128);
    v20 = v5;
    if v22 == 0x8000000000000000 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v19
            field_24: v20
        };
    }
    v18 = v10;
    v17 = v9;
    v16 = v8;
    v15 = v7;
    v14 = v6;
    v12 = v19;
    v13 = v20;
    v11 = v22;
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "format", a1 + 96);
    if let Some(_) = v1 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v1 as i128
            field_24: *((&v1 as &char + 16) as &i64)
        };
    }
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "symbol", a1 + 112);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "style", a1 + 128);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "disabled", a1 + 224);
            if let None = v1 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_extensions", a1);
                if let None = v1 {
                    v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_env_vars", a1 + 24);
                    v23 = v2 as i64;
                    if let None = v2 {
                        v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_files", a1 + 48);
                        v23 = v2 as i64;
                        if v23 == 9223372036854775813 {
                            v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_folders", a1 + 72);
                            v23 = v2 as i64;
                            if v23 == 9223372036854775813 {
                                v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "allowed_msg", a1 + 144);
                                v23 = v2 as i64;
                                if v23 == 9223372036854775813 {
                                    v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "not_allowed_msg", a1 + 160);
                                    v23 = v2 as i64;
                                    if v23 == 9223372036854775813 {
                                        v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "denied_msg", a1 + 176);
                                        v23 = v2 as i64;
                                        if v23 == 9223372036854775813 {
                                            v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "loaded_msg", a1 + 192);
                                            v23 = v2 as i64;
                                            if v23 == 9223372036854775813 {
                                                v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "unloaded_msg", a1 + 208);
                                                v23 = v2 as i64;
                                                if v23 == 9223372036854775813 {
                                                    v10 = v18;
                                                    v9 = v17;
                                                    v8 = v16;
                                                    v24 = *(&v11.field_0 as &i128);
                                                    v7 = v15;
                                                    v6 = v14;
                                                    *(&v4.field_0 as &i128) = *(&v12.field_8 as &i128);
                                                    *(&v3 as void*) = v24;
                                                    <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v3 as u8);
                                                    return;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    *((a0 + 16) as &i128) = *((&v2 as &char + 8) as &i128);
                    *((a0 + 8) as &Option<struct24>) = v23;
                }
            }
        }
    }
    return struct32 {
        field_0: 9223372036854775814
        field_8: v1 as i128
        field_24: *((&v1 as &char + 16) as &i64)
    };
}
