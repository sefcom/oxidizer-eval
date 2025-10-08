fn starship::configs::hg_state::_::<impl serde_core::ser::Serialize for starship::configs::hg_state::HgStateConfig>::serialize(a0: i64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x108]
    let v1: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v2: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v3: struct40;  // [bp-0x108]
    let v4: struct32;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf0]
    let v6: iNone;  // [bp-0xe8], Other Possible Types: Option<struct24>
    let v7: iNone;  // [bp-0xd8], Other Possible Types: Option<struct24>
    let v8: iNone;  // [bp-0xc8]
    let v9: iNone;  // [bp-0xb8], Other Possible Types: struct40
    let v10: struct83;  // [bp-0xa8], Other Possible Types: unsigned long
    let v11: Option<struct24>;  // [bp-0xa0]
    let v12: struct32;  // [bp-0x98]
    let v13: struct8;  // [bp-0x88]
    let v14: iNone;  // [bp-0x80]
    let v15: iNone;  // [bp-0x70]
    let v16: iNone;  // [bp-0x60]
    let v17: struct40;  // [bp-0x50]
    let v18: Result<struct32, struct9>;  // [bp-0x40]
    let v19: struct32;  // [bp-0x38]
    let v20: struct72;  // [bp-0x28]
    let v22: struct24;  // rax
    let v23: struct56;  // rax
    let v24: struct40;  // xmm0

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
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "merge", a1);
    if let Some(_) = v1 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v1 as i128
            field_24: *((&v1 as &char + 16) as &i64)
        };
    }
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "rebase", a1 + 16);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "update", a1 + 32);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "bisect", a1 + 48);
            if let None = v1 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "shelve", a1 + 64);
                if let None = v1 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "graft", a1 + 80);
                    if let None = v1 {
                        v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "transplant", a1 + 96);
                        v23 = v2 as i64;
                        if let None = v2 {
                            v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "histedit", a1 + 112);
                            v23 = v2 as i64;
                            if v23 == 9223372036854775813 {
                                v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "style", a1 + 128);
                                v23 = v2 as i64;
                                if v23 == 9223372036854775813 {
                                    v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "format", a1 + 144);
                                    v23 = v2 as i64;
                                    if v23 == 9223372036854775813 {
                                        v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v11, "disabled", a1 + 160);
                                        v23 = v2 as i64;
                                        if v23 == 9223372036854775813 {
                                            v10 = v18;
                                            v9 = v17;
                                            v8 = v16;
                                            v24 = v11 as i128;
                                            v7 = v15;
                                            v6 = v14;
                                            *(&v4.field_0 as &i128) = *(&v12.field_8 as &i128);
                                            v3 = v24;
                                            <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v3 as u8);
                                            return;
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
