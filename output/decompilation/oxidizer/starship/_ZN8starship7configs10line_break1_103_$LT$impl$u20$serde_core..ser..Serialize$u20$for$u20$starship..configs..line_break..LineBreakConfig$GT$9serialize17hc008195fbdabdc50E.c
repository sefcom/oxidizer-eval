fn starship::configs::line_break::_::<impl serde_core::ser::Serialize for starship::configs::line_break::LineBreakConfig>::serialize(a0: u64, a1: u64) -> int {
    let v0: struct24;  // [bp-0x108]
    let v1: struct24;  // [bp-0xf8]
    let v2: struct83;  // [bp-0xe8]
    let v3: Option<struct24>;  // [bp-0xe8]
    let v4: u128;  // [bp-0xe8]
    let v5: struct24;  // [bp-0xd8]
    let v6: i64;  // [bp-0xd0]
    let v7: struct16;  // [bp-0xc8], Other Possible Types: u128
    let v8: iNone;  // [bp-0xb8], Other Possible Types: Option<struct24>
    let v9: iNone;  // [bp-0xa8], Other Possible Types: struct24
    let v10: iNone;  // [bp-0x98], Other Possible Types: Option<struct24>
    let v11: Result<struct32, struct9>;  // [bp-0x88], Other Possible Types: u64
    let v12: Result<struct24, struct24>;  // [bp-0x80]
    let v13: struct24;  // [bp-0x78]
    let v14: struct24;  // [bp-0x68]
    let v15: struct66;  // [bp-0x60]
    let v16: core::str::pattern::CharSearcher;  // [bp-0x50]
    let v17: Option<struct48>;  // [bp-0x40]
    let v18: Option<struct24>;  // [bp-0x30]
    let v19: struct24;  // [bp-0x20]
    let v21: &mut [u8];  // rax
    let v22: Option<struct48>;  // xmm0

    v2 = <toml::table::TableSerializer as serde_core::ser::Serializer>::serialize_struct();
    v21 = v2.field_0;
    v0 = *(&v2.field_8 as &i128);
    v1 = v6;
    if v21 == 0x8000000000000000 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v0
            field_24: v1
        };
    }
    v19 = v11;
    v18 = v10;
    v17 = v9;
    v16 = v8;
    v15 = v7;
    v13 = v0;
    v14 = v1;
    v12 = v21;
    v3 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v12, "disabled", a1);
    match v3 {
        Some(_) => {
            return struct32 {
                field_0: 9223372036854775814
                field_8: v3 as i128
                field_24: *((&v3 as &char + 16) as &i64)
            };
        },
        None => {
            v11 = v19;
            v10 = v18;
            v9 = v17;
            v22 = v12 as i128;
            v8 = v16;
            v7 = v15;
            v5.field_0 = *((&v13.field_0 as &char + 8) as &i128) as u128;
            *(&v4 as &Option<struct48>) = v22;
            <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v4 as u8);
            return;
        },
    }
}
