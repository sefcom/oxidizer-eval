fn starship::configs::python::_::<impl serde_core::ser::Serialize for starship::configs::python::PythonConfig>::serialize(a0: i64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x108]
    let v1: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v2: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v3: u128;  // [bp-0x108]
    let v4: struct40;  // [bp-0xf8]
    let v5: i64;  // [bp-0xf0]
    let v6: iNone;  // [bp-0xe8], Other Possible Types: Option<struct24>
    let v7: iNone;  // [bp-0xd8], Other Possible Types: Option<struct24>
    let v8: iNone;  // [bp-0xc8], Other Possible Types: Option<struct24>
    let v9: iNone;  // [bp-0xb8], Other Possible Types: Option<struct24>
    let v10: Option<struct24>;  // [bp-0xa8], Other Possible Types: unsigned long
    let v11: Option<struct24>;  // [bp-0xa0]
    let v12: struct40;  // [bp-0x98]
    let v13: Option<struct24>;  // [bp-0x88]
    let v14: Option<struct24>;  // [bp-0x80]
    let v15: Option<struct24>;  // [bp-0x70]
    let v16: Option<struct24>;  // [bp-0x60]
    let v17: Option<struct24>;  // [bp-0x50]
    let v18: i64;  // [bp-0x40]
    let v19: struct40;  // [bp-0x38]
    let v20: i64;  // [bp-0x28]
    let v22: struct24;  // rax
    let v23: struct56;  // rax
    let v24: Option<struct24>;  // xmm0

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
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "pyenv_version_name", a1 + 200);
    if let Some(_) = v1 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v1 as i128
            field_24: *((&v1 as &char + 16) as &i64)
        };
    }
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "pyenv_prefix", a1 + 120);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, a1);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "format", a1 + 136);
            if let None = v1 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "version_format", a1 + 152);
                if let None = v1 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "style", a1 + 168);
                    if let None = v1 {
                        v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "symbol", a1 + 184);
                        v23 = v2 as i64;
                        if let None = v2 {
                            v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "disabled", a1 + 201);
                            v23 = v2 as i64;
                            if v23 == 9223372036854775813 {
                                v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_extensions", a1 + 24);
                                v23 = v2 as i64;
                                if v23 == 9223372036854775813 {
                                    v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_files", a1 + 48);
                                    v23 = v2 as i64;
                                    if v23 == 9223372036854775813 {
                                        v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_folders", a1 + 72);
                                        v23 = v2 as i64;
                                        if v23 == 9223372036854775813 {
                                            v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "detect_env_vars", a1 + 96);
                                            v23 = v2 as i64;
                                            if v23 == 9223372036854775813 {
                                                v10 = v18;
                                                v9 = v17;
                                                v8 = v16;
                                                v24 = v11 as i128;
                                                v7 = v15;
                                                v6 = v14;
                                                *(&v4.field_0 as &i128) = *(&v12.field_8 as &i128);
                                                *(&v3 as &Option<struct24>) = v24;
                                                <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v3 as u8);
                                                return;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        *((a0 + 16) as &i128) = *((&v2 as &char + 8) as &i128);
                        *((a0 + 8) as &struct56) = v23;
                    }
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
