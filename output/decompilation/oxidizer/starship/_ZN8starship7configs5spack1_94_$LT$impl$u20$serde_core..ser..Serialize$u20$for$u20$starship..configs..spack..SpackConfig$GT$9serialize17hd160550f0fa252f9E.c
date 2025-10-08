fn starship::configs::spack::_::<impl serde_core::ser::Serialize for starship::configs::spack::SpackConfig>::serialize(a0: u64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x108]
    let v1: Option<struct24>;  // [bp-0x108], Other Possible Types: u192
    let v2: struct24;  // [bp-0x108]
    let v3: struct24;  // [bp-0xf8]
    let v4: &str;  // [bp-0xf0]
    let v5: Option<struct24>;  // [bp-0xe8], Other Possible Types: u128
    let v6: Option<struct24>;  // [bp-0xd8], Other Possible Types: u128
    let v7: Option<struct56>;  // [bp-0xc8], Other Possible Types: u128
    let v8: Result<struct32, struct9>;  // [bp-0xb8], Other Possible Types: struct20
    let v9: Option<struct48>;  // [bp-0xa8], Other Possible Types: unsigned long
    let v10: struct24;  // [bp-0x98]
    let v11: &str;  // [bp-0x88]
    let v12: Option<struct24>;  // [bp-0x80]
    let v13: struct24;  // [bp-0x78]
    let v14: struct24;  // [bp-0x68]
    let v15: struct69;  // [bp-0x60]
    let v16: struct24;  // [bp-0x50]
    let v17: struct24;  // [bp-0x40]
    let v18: struct20;  // [bp-0x30]
    let v19: Option<struct161>;  // [bp-0x20]
    let v21: struct24;  // rax
    let v22: struct24;  // xmm0

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
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "truncation_length", a1 + 48);
    if let Some(_) = v1 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v1 as i128
            field_24: *((&v1 as &char + 16) as &i64)
        };
    }
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "format", a1);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "symbol", a1 + 16);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "style", a1 + 32);
            if let None = v1 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "disabled", a1 + 56);
                if let None = v1 {
                    v9 = v19;
                    v8 = v18;
                    v7 = v17;
                    v22 = v12 as i128;
                    v6 = v16;
                    v5 = v15;
                    *(&v3.field_0 as &i128) = *(&v13.field_8 as &i128);
                    v2 = v22;
                    <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v2 as u8);
                    return;
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
