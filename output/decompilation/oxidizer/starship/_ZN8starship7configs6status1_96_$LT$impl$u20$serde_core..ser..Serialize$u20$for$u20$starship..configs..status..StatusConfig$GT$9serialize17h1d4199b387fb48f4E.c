fn starship::configs::status::_::<impl serde_core::ser::Serialize for starship::configs::status::StatusConfig>::serialize(a0: u64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x118]
    let v1: Option<struct24>;  // [bp-0x118], Other Possible Types: u192
    let v2: struct8;  // [bp-0x118]
    let v3: struct8;  // [bp-0x118]
    let v4: struct8;  // [bp-0x118]
    let v5: u128;  // [bp-0x118]
    let v6: u128;  // [bp-0x108]
    let v7: i64;  // [bp-0x100]
    let v8: iNone;  // [bp-0xf8], Other Possible Types: struct72
    let v9: iNone;  // [bp-0xe8], Other Possible Types: struct64
    let v10: iNone;  // [bp-0xd8], Other Possible Types: struct92
    let v11: iNone;  // [bp-0xc8], Other Possible Types: Result<struct72, struct24>
    let v12: Option<struct56>;  // [bp-0xb8], Other Possible Types: unsigned long
    let v13: struct8;  // [bp-0xb0]
    let v14: u128;  // [bp-0xa8]
    let v15: Option<struct24>;  // [bp-0x98]
    let v16: Option<struct24>;  // [bp-0x90]
    let v17: Option<struct24>;  // [bp-0x80]
    let v18: Option<struct24>;  // [bp-0x70]
    let v19: Option<struct24>;  // [bp-0x60]
    let v20: Option<struct24>;  // [bp-0x50]
    let v21: Option<struct24>;  // [bp-0x48]
    let v22: Option<struct161>;  // [bp-0x38]
    let v24: struct16;  // rbp
    let v25: &str;  // r13
    let v26: struct24;  // r12
    let v27: struct24;  // rax
    let v28: Result<struct24, struct16>;  // rax
    let v29: Option<struct24>;  // xmm0

    v24 = *(a1 as &i64);
    v25 = *((a1 + 16) as &i64);
    v26 = *((a1 + 32) as &i64);
    v0 = <toml::table::TableSerializer as serde_core::ser::Serializer>::serialize_struct();
    v27 = v0.field_0;
    v21 = *(&v0.field_8 as &i128);
    v22 = v7;
    if v27 == 0x8000000000000000 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v21
            field_24: v22
        };
    }
    v20 = v12;
    v19 = v11;
    v18 = v10;
    v17 = v9;
    v16 = v8;
    *(&v14 as &Option<struct24>) = v21;
    v15 = v22;
    v13 = v27;
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "format", a1 + 48);
    v28 = v1 as i64;
    if let Some(_) = v1 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v28
            field_16: *((&v1 as &char + 8) as &i128)
        };
    }
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "symbol", a1 + 64);
    v28 = v1 as i64;
    if v28 == 9223372036854775813 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "success_symbol", a1 + 80);
        v28 = v1 as i64;
        if v28 == 9223372036854775813 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "not_executable_symbol", a1 + 96);
            v28 = v1 as i64;
            if v28 == 9223372036854775813 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "not_found_symbol", a1 + 112);
                v28 = v1 as i64;
                if v28 == 9223372036854775813 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "sigint_symbol", a1 + 128);
                    v28 = v1 as i64;
                    if v28 == 9223372036854775813 {
                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "signal_symbol", a1 + 144);
                        v28 = v1 as i64;
                        if v28 == 9223372036854775813 {
                            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "style", a1 + 160);
                            v28 = v1 as i64;
                            if v28 == 9223372036854775813 {
                                if v24 {
                                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "success_style", a1);
                                } else {
                                    v2 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end();
                                }
                                v28 = v1 as i64;
                                if v28 == 9223372036854775813 {
                                    if v25 {
                                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "failure_style", a1 + 16);
                                    } else {
                                        v3 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end();
                                    }
                                    v28 = v1 as i64;
                                    if v28 == 9223372036854775813 {
                                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "map_symbol", a1 + 208);
                                        v28 = v1 as i64;
                                        if v28 == 9223372036854775813 {
                                            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "recognize_signal_code", a1 + 209);
                                            v28 = v1 as i64;
                                            if v28 == 9223372036854775813 {
                                                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "pipestatus", a1 + 210);
                                                v28 = v1 as i64;
                                                if v28 == 9223372036854775813 {
                                                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "pipestatus_separator", a1 + 176);
                                                    v28 = v1 as i64;
                                                    if v28 == 9223372036854775813 {
                                                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "pipestatus_format", a1 + 192);
                                                        v28 = v1 as i64;
                                                        if v28 == 9223372036854775813 {
                                                            if v26 {
                                                                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "pipestatus_segment_format", a1 + 32);
                                                            } else {
                                                                v4 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end();
                                                            }
                                                            v28 = v1 as i64;
                                                            if v28 == 9223372036854775813 {
                                                                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "disabled", a1 + 211);
                                                                v28 = v1 as i64;
                                                                if v28 == 9223372036854775813 {
                                                                    v12 = v20;
                                                                    v11 = v19;
                                                                    v10 = v18;
                                                                    v29 = *(&v13 as &i128);
                                                                    v9 = v17;
                                                                    v8 = v16;
                                                                    v6 = *((&v14 as &char + 8) as &i128);
                                                                    *(&v5 as &Option<struct24>) = v29;
                                                                    <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v5);
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
    }
    return struct32 {
        field_0: 9223372036854775814
        field_8: v28
        field_16: *((&v1 as &char + 8) as &i128)
    };
}
