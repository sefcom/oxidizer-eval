fn starship::configs::kubernetes::_::<impl serde_core::ser::Serialize for starship::configs::kubernetes::KubernetesConfig>::serialize(a0: i64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x108]
    let v1: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v2: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v3: struct83;  // [bp-0x108]
    let v4: struct8;  // [bp-0xf8]
    let v5: i64;  // [bp-0xf0]
    let v6: iNone;  // [bp-0xe8], Other Possible Types: Option<struct24>
    let v7: iNone;  // [bp-0xd8]
    let v8: iNone;  // [bp-0xc8], Other Possible Types: struct83
    let v9: Option<struct24>;  // [bp-0xb8], Other Possible Types: struct24
    let v10: Option<struct24>;  // [bp-0xa8], Other Possible Types: u64
    let v11: struct24;  // [bp-0xa0]
    let v12: struct8;  // [bp-0x98]
    let v13: struct32;  // [bp-0x88]
    let v14: iNone;  // [bp-0x80]
    let v15: struct40;  // [bp-0x70]
    let v16: iNone;  // [bp-0x60]
    let v17: struct24;  // [bp-0x50]
    let v18: struct72;  // [bp-0x40]
    let v19: struct8;  // [bp-0x38]
    let v20: struct32;  // [bp-0x28]
    let v22: struct24;  // rax
    let v23: struct20;  // rax
    let v24: struct83;  // xmm0

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
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "symbol", a1 + 120);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "format", a1 + 136);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "style", a1 + 152);
            if let None = v1 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "disabled", a1 + 264);
                if let None = v1 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "context_aliases", a1 + 168);
                    if let None = v1 {
                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "user_aliases", a1 + 216);
                        if let None = v1 {
                            v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_extensions", a1);
                            v23 = v2 as i64;
                            if let Some(_) = v2 {
                                return struct32 {
                                    field_0: 9223372036854775814
                                    field_8: v23
                                    field_16: *((&v2 as &char + 8) as &i128)
                                };
                            }
                            v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_files", a1 + 24);
                            v23 = v2 as i64;
                            if v23 == 9223372036854775813 {
                                v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_folders", a1 + 48);
                                v23 = v2 as i64;
                                if v23 == 9223372036854775813 {
                                    v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_env_vars", a1 + 72);
                                    v23 = v2 as i64;
                                    if v23 == 9223372036854775813 {
                                        v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, a1 + 96);
                                        v23 = v2 as i64;
                                        if v23 == 9223372036854775813 {
                                            v10 = v18;
                                            v9 = v17;
                                            v8 = v16;
                                            v24 = *(&v11.field_0 as &i128);
                                            v7 = v15;
                                            v6 = v14;
                                            *(&v4 as &i128) = *(&(&v12)[1] as &i128);
                                            v3 = v24;
                                            <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v3 as u8);
                                            return;
                                        }
                                    }
                                }
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
    *((a0 + 24) as &i64) = *((&v1 as &char + 16) as &i64);
    *((a0 + 8) as &i128) = v1;
}
