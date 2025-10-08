fn starship::configs::time::_::<impl serde_core::ser::Serialize for starship::configs::time::TimeConfig>::serialize(a0: i64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x118]
    let v1: Option<struct24>;  // [bp-0x118], Other Possible Types: u192
    let v2: struct8;  // [bp-0x118]
    let v3: Option<struct24>;  // [bp-0x118], Other Possible Types: u192
    let v4: struct69;  // [bp-0x118]
    let v5: u128;  // [bp-0x108]
    let v6: i64;  // [bp-0x100]
    let v7: iNone;  // [bp-0xf8], Other Possible Types: u128
    let v8: iNone;  // [bp-0xe8], Other Possible Types: u128
    let v9: iNone;  // [bp-0xd8], Other Possible Types: u128
    let v10: struct24;  // [bp-0xc8], Other Possible Types: u128
    let v11: struct24;  // [bp-0xb8], Other Possible Types: struct83
    let v12: Option<struct24>;  // [bp-0xa8]
    let v13: Option<struct24>;  // [bp-0x98]
    let v14: struct32;  // [bp-0x88]
    let v15: u128;  // [bp-0x80]
    let v16: Option<struct24>;  // [bp-0x70]
    let v17: struct32;  // [bp-0x68]
    let v18: struct24;  // [bp-0x58]
    let v19: struct24;  // [bp-0x48]
    let v20: struct32;  // [bp-0x38]
    let v21: struct83;  // [bp-0x28]
    let v23: core::str::pattern::CharSearcher;  // r12
    let v24: struct40;  // rax
    let v25: struct72;  // rax
    let v26: struct69;  // xmm0

    v23 = *(a1 as &i64);
    v0 = <toml::table::TableSerializer as serde_core::ser::Serializer>::serialize_struct();
    v24 = v0.field_0;
    v12 = *(&v0.field_8 as &i128);
    v13 = v6;
    if v24 == 0x8000000000000000 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v12
            field_24: v13
        };
    }
    v21 = v11;
    v20 = v10;
    v19 = v9;
    v18 = v8;
    v17 = v7;
    *(&v15 as &Option<struct24>) = v12;
    v16 = v13;
    v14 = v24;
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "format", a1 + 16);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "style", a1 + 32);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "use_12hr", a1 + 80);
            if let None = v1 {
                if v23 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "time_format", a1);
                    if let None = v1 {
                        goto LABEL_c3dfdc;
                    }
                } else {
                    v2 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end();
                    if v2.field_0 == 9223372036854775813 {
LABEL_c3dfdc:
                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "disabled", a1 + 81);
                        if let None = v1 {
                            v3 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "utc_time_offset", a1 + 48);
                            v25 = v3 as i64;
                            if let Some(_) = v3 {
                                return struct32 {
                                    field_0: 9223372036854775814
                                    field_8: v25
                                    field_16: *((&v3 as &char + 8) as &i128)
                                };
                            }
                            v3 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "time_range", a1 + 64);
                            v25 = v3 as i64;
                            if v25 == 9223372036854775813 {
                                v11 = v21;
                                v10 = v20;
                                v9 = v19;
                                v26 = *(&v14.field_0 as &i128);
                                v8 = v18;
                                v7 = v17;
                                v5 = *((&v15 as &char + 8) as &i128) as u128;
                                v4 = v26;
                                <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::end(a0, &v4 as u8);
                                return;
                            }
                            return struct32 {
                                field_0: 9223372036854775814
                                field_8: v25
                                field_16: *((&v3 as &char + 8) as &i128)
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
