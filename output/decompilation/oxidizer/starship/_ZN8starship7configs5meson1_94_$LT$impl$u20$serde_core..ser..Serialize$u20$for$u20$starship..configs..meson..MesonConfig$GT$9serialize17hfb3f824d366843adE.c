fn starship::configs::meson::_::<impl serde_core::ser::Serialize for starship::configs::meson::MesonConfig>::serialize(a0: u64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x108]
    let v1: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v2: struct16;  // [bp-0x108]
    let v3: u128;  // [bp-0xf8]
    let v4: u64;  // [bp-0xf0]
    let v5: iNone;  // [bp-0xe8], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v6: struct16;  // [bp-0xd8], Other Possible Types: struct24
    let v7: iNone;  // [bp-0xc8], Other Possible Types: struct40
    let v8: iNone;  // [bp-0xb8], Other Possible Types: struct40
    let v9: struct24;  // [bp-0xa8], Other Possible Types: struct83
    let v10: struct20;  // [bp-0x98]
    let v11: struct24;  // [bp-0x88]
    let v12: struct104;  // [bp-0x80]
    let v13: iNone;  // [bp-0x60]
    let v14: u128;  // [bp-0x50]
    let v15: u128;  // [bp-0x40]
    let v16: iNone;  // [bp-0x30]
    let v17: u64;  // [bp-0x20]
    let v19: struct24;  // rax
    let v20: struct16;  // xmm0

    v0 = <toml::table::TableSerializer as serde_core::ser::Serializer>::serialize_struct();
    v19 = v0.field_0;
    v10 = *(&v0.field_8 as &i128);
    v11 = v4;
    if v19 == 0x8000000000000000 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v10
            field_24: v11
        };
    }
    v12 = struct104 {
        field_0: v19
        field_8: v10
        field_24: v11
        field_32: v5
        field_48: v6
        field_64: v7
        field_80: v8
        field_96: v9
    };
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, a1 + 64);
    if let Some(_) = v1 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v1 as i128
            field_24: *((&v1 as &char + 16) as &i64)
        };
    }
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "truncation_symbol", a1);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "format", a1 + 16);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "symbol", a1 + 32);
            if let None = v1 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "style", a1 + 48);
                if let None = v1 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "disabled", a1 + 68);
                    if let None = v1 {
                        v9 = v17;
                        v8 = v16;
                        v7 = v15;
                        v20 = *(&v12.field_0 as &i128);
                        v6 = v14;
                        v5 = v13;
                        v3 = *((&v12.field_8 as &char + 8) as &i128) as u128;
                        v2 = v20;
                        <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v2 as u8);
                        return;
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
