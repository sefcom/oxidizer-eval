fn starship::configs::odin::_::<impl serde_core::ser::Serialize for starship::configs::odin::OdinConfig>::serialize(a0: u64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x108]
    let v1: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v2: u128;  // [bp-0x108]
    let v3: struct83;  // [bp-0xf8]
    let v4: u64;  // [bp-0xf0]
    let v5: iNone;  // [bp-0xe8], Other Possible Types: Option<struct24>
    let v6: iNone;  // [bp-0xd8], Other Possible Types: Option<struct24>
    let v7: iNone;  // [bp-0xc8], Other Possible Types: Option<struct24>
    let v8: iNone;  // [bp-0xb8], Other Possible Types: Option<struct24>
    let v9: struct83;  // [bp-0xa8], Other Possible Types: u64
    let v10: struct83;  // [bp-0x98]
    let v11: struct40;  // [bp-0x88]
    let v12: struct24;  // [bp-0x80]
    let v13: struct83;  // [bp-0x78]
    let v14: struct40;  // [bp-0x68]
    let v15: struct83;  // [bp-0x60]
    let v16: Option<struct24>;  // [bp-0x50]
    let v17: Option<struct24>;  // [bp-0x40]
    let v18: Option<struct24>;  // [bp-0x30]
    let v19: struct16;  // [bp-0x20]
    let v21: struct24;  // rax
    let v22: Option<struct48>;  // xmm0

    v0 = <toml::table::TableSerializer as serde_core::ser::Serializer>::serialize_struct();
    v21 = v0.field_0;
    v10 = *(&v0.field_8 as &i128);
    v11 = v4;
    if v21 == 0x8000000000000000 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v10
            field_24: v11
        };
    }
    v19 = v9;
    v18 = v8;
    v17 = v7;
    v16 = v6;
    v15 = v5;
    v13 = v10;
    v14 = v11;
    v12 = v21;
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "format", a1 + 72);
    if let Some(_) = v1 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v1 as i128
            field_24: *((&v1 as &char + 16) as &i64)
        };
    }
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "show_commit", a1 + 120);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "symbol", a1 + 88);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "style", a1 + 104);
            if let None = v1 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "disabled", a1 + 121);
                if let None = v1 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "detect_extensions", a1);
                    if let None = v1 {
                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "detect_files", a1 + 24);
                        if let None = v1 {
                            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "detect_folders", a1 + 48);
                            if let None = v1 {
                                v9 = v19;
                                v8 = v18;
                                v7 = v17;
                                v22 = *(&v12.field_0 as &i128);
                                v6 = v16;
                                v5 = v15;
                                *(&v3.field_0 as &i128) = *(&v13.field_8 as &i128);
                                *(&v2 as &Option<struct48>) = v22;
                                <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v2 as u8);
                                return;
                            }
                        }
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
