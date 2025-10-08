fn starship::configs::shell::_::<impl serde_core::ser::Serialize for starship::configs::shell::ShellConfig>::serialize(a0: u64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x108]
    let v1: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v2: struct8;  // [bp-0x108]
    let v3: u128;  // [bp-0x108]
    let v4: struct83;  // [bp-0xf8]
    let v5: i64;  // [bp-0xf0]
    let v6: iNone;  // [bp-0xe8], Other Possible Types: Option<struct24>
    let v7: iNone;  // [bp-0xd8], Other Possible Types: Option<struct24>
    let v8: iNone;  // [bp-0xc8], Other Possible Types: Option<struct24>
    let v9: iNone;  // [bp-0xb8], Other Possible Types: Option<struct24>
    let v10: Option<struct24>;  // [bp-0xa8], Other Possible Types: unsigned long
    let v11: Option<struct24>;  // [bp-0xa0]
    let v12: struct83;  // [bp-0x98]
    let v13: Option<struct24>;  // [bp-0x88]
    let v14: struct83;  // [bp-0x80]
    let v15: Option<struct24>;  // [bp-0x70]
    let v16: Option<struct24>;  // [bp-0x60]
    let v17: Option<struct24>;  // [bp-0x50]
    let v18: Option<struct24>;  // [bp-0x40]
    let v19: struct83;  // [bp-0x38]
    let v20: Option<struct24>;  // [bp-0x28]
    let v22: struct24;  // r12
    let v23: Option<struct48>;  // rax
    let v24: Result<struct32, struct9>;  // rax
    let v25: Option<struct24>;  // xmm0

    v22 = *((a1 + 208) as &i64);
    v0 = <toml::table::TableSerializer as serde_core::ser::Serializer>::serialize_struct();
    v23 = v0.field_0;
    v19 = *(&v0.field_8 as &i128);
    v20 = v5;
    match v23 {
        None => {
            return struct32 {
                field_0: 9223372036854775814
                field_8: v19
                field_24: v20
            };
        },
        Some(_) => {
            v18 = v10;
            v17 = v9;
            v16 = v8;
            v15 = v7;
            v14 = v6;
            v12 = v19;
            v13 = v20;
            v11 = v23;
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "format", a1);
            v24 = v1 as i64;
            if let Some(_) = v1 {
                return struct32 {
                    field_0: 9223372036854775814
                    field_8: v24
                    field_16: *((&v1 as &char + 8) as &i128)
                };
            }
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "bash_indicator", a1 + 16);
            v24 = v1 as i64;
            if v24 == 9223372036854775813 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "fish_indicator", a1 + 32);
                v24 = v1 as i64;
                if v24 == 9223372036854775813 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "zsh_indicator", a1 + 48);
                    v24 = v1 as i64;
                    if v24 == 9223372036854775813 {
                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "powershell_indicator", a1 + 64);
                        v24 = v1 as i64;
                        if v24 == 9223372036854775813 {
                            if v22 {
                                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "pwsh_indicator", a1 + 208);
                            } else {
                                v2 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end();
                            }
                            v24 = v1 as i64;
                            if v24 == 9223372036854775813 {
                                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "ion_indicator", a1 + 80);
                                v24 = v1 as i64;
                                if v24 == 9223372036854775813 {
                                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "elvish_indicator", a1 + 96);
                                    v24 = v1 as i64;
                                    if v24 == 9223372036854775813 {
                                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "tcsh_indicator", a1 + 112);
                                        v24 = v1 as i64;
                                        if v24 == 9223372036854775813 {
                                            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "nu_indicator", a1 + 128);
                                            v24 = v1 as i64;
                                            if v24 == 9223372036854775813 {
                                                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "xonsh_indicator", a1 + 144);
                                                v24 = v1 as i64;
                                                if v24 == 9223372036854775813 {
                                                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "cmd_indicator", a1 + 160);
                                                    v24 = v1 as i64;
                                                    if v24 == 9223372036854775813 {
                                                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "unknown_indicator", a1 + 176);
                                                        v24 = v1 as i64;
                                                        if v24 == 9223372036854775813 {
                                                            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "style", a1 + 192);
                                                            v24 = v1 as i64;
                                                            if v24 == 9223372036854775813 {
                                                                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "disabled", a1 + 224);
                                                                v24 = v1 as i64;
                                                                if v24 == 9223372036854775813 {
                                                                    v10 = v18;
                                                                    v9 = v17;
                                                                    v8 = v16;
                                                                    v25 = v11 as i128;
                                                                    v7 = v15;
                                                                    v6 = v14;
                                                                    *(&v4.field_0 as &i128) = *(&v12.field_8 as &i128);
                                                                    *(&v3 as &Option<struct24>) = v25;
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
                                }
                            }
                        }
                    }
                }
            }
            return struct32 {
                field_0: 9223372036854775814
                field_8: v24
                field_16: *((&v1 as &char + 8) as &i128)
            };
        },
    }
}
