fn starship::configs::git_state::_::<impl serde_core::ser::Serialize for starship::configs::git_state::GitStateConfig>::serialize(a0: i64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x108]
    let v1: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v2: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v3: &str;  // [bp-0x108]
    let v4: struct16;  // [bp-0xf8]
    let v5: struct16;  // [bp-0xf0]
    let v6: Option<struct24>;  // [bp-0xe8], Other Possible Types: u128
    let v7: iNone;  // [bp-0xd8], Other Possible Types: Option<struct24>
    let v8: Option<struct24>;  // [bp-0xc8], Other Possible Types: struct8
    let v9: iNone;  // [bp-0xb8], Other Possible Types: Option<struct24>
    let v10: struct8;  // [bp-0xa8], Other Possible Types: u64
    let v11: struct24;  // [bp-0xa0]
    let v12: struct16;  // [bp-0x98]
    let v13: struct72;  // [bp-0x88]
    let v14: struct32;  // [bp-0x80]
    let v15: Option<struct24>;  // [bp-0x70]
    let v16: struct8;  // [bp-0x60]
    let v17: struct32;  // [bp-0x50]
    let v18: struct24;  // [bp-0x40]
    let v19: struct16;  // [bp-0x38]
    let v20: struct16;  // [bp-0x28]
    let v22: struct24;  // rax
    let v23: core::fmt::rt::Argument;  // rax
    let v24: &str;  // xmm0

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
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "rebase", a1);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "merge", a1 + 16);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "revert", a1 + 32);
            if let None = v1 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "cherry_pick", a1 + 48);
                if let None = v1 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "bisect", a1 + 64);
                    if let None = v1 {
                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "am", a1 + 80);
                        if let None = v1 {
                            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "am_or_rebase", a1 + 96);
                            if let None = v1 {
                                v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "style", a1 + 112);
                                v23 = v2 as i64;
                                if let Some(_) = v2 {
                                    return struct32 {
                                        field_0: 9223372036854775814
                                        field_8: v23
                                        field_16: *((&v2 as &char + 8) as &i128)
                                    };
                                }
                                v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "format", a1 + 128);
                                v23 = v2 as i64;
                                if v23 == 9223372036854775813 {
                                    v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "disabled", a1 + 144);
                                    v23 = v2 as i64;
                                    if v23 == 9223372036854775813 {
                                        v10 = v18;
                                        v9 = v17;
                                        v8 = v16;
                                        v24 = *(&v11.field_0 as &i128);
                                        v7 = v15;
                                        v6 = v14;
                                        *(&v4.field_16 as &i128) = *(&v12.field_40 as &i128);
                                        v3 = v24;
                                        <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v3 as u8);
                                        return;
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
    }
    *((a0 + 24) as &i64) = *((&v1 as &char + 16) as &i64);
    *((a0 + 8) as &i128) = v1;
}
