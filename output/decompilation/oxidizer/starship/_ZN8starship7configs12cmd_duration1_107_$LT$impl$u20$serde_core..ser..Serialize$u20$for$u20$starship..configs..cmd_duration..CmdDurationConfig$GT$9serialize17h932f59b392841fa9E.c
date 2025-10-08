fn starship::configs::cmd_duration::_::<impl serde_core::ser::Serialize for starship::configs::cmd_duration::CmdDurationConfig>::serialize(a0: i64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x118]
    let v1: Option<struct24>;  // [bp-0x118], Other Possible Types: u192
    let v2: Option<struct24>;  // [bp-0x118], Other Possible Types: u192
    let v3: struct8;  // [bp-0x118]
    let v4: struct72;  // [bp-0x118]
    let v5: u128;  // [bp-0x108]
    let v6: i64;  // [bp-0x100]
    let v7: iNone;  // [bp-0xf8], Other Possible Types: struct24
    let v8: iNone;  // [bp-0xe8], Other Possible Types: struct72
    let v9: iNone;  // [bp-0xd8], Other Possible Types: struct32
    let v10: iNone;  // [bp-0xc8], Other Possible Types: Option<struct24>
    let v11: struct8;  // [bp-0xb8], Other Possible Types: unsigned long
    let v12: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0xa8]
    let v13: Option<struct24>;  // [bp-0x98]
    let v14: struct16;  // [bp-0x88]
    let v15: u128;  // [bp-0x80]
    let v16: core::iter::adapters::flatten::Flatten<core::option::IntoIter<core::char::EscapeDebug>>;  // [bp-0x70]
    let v17: struct83;  // [bp-0x68]
    let v18: Option<struct24>;  // [bp-0x58]
    let v19: Option<struct24>;  // [bp-0x48]
    let v20: Option<struct24>;  // [bp-0x38]
    let v21: Option<struct24>;  // [bp-0x28]
    let v23: struct24;  // ebp
    let v24: struct48;  // rax
    let v25: &str;  // rax
    let v26: struct72;  // xmm0

    v23 = *(a1 as &i32);
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
    *(&v15 as &core::result::Result<usize, core::num::error::ParseIntError>) = v12;
    v16 = v13;
    v14 = v24;
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "min_time", a1 + 40);
    if let None = v1 {
        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "format", a1 + 8);
        if let None = v1 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "style", a1 + 24);
            if let None = v1 {
                v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "show_milliseconds", a1 + 56);
                if let None = v1 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "disabled", a1 + 57);
                    if let None = v1 {
                        v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "show_notifications", a1 + 58);
                        if let None = v1 {
                            v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, "min_time_to_notify", a1 + 48);
                            v25 = v2 as i64;
                            if let Some(_) = v2 {
                                return struct32 {
                                    field_0: 9223372036854775814
                                    field_8: v25
                                    field_16: *((&v2 as &char + 8) as &i128)
                                };
                            }
                            if v23 {
                                v2 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v14, a1);
                            } else {
                                v3 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end();
                            }
                            v25 = v2 as i64;
                            if v25 == 9223372036854775813 {
                                v11 = v21;
                                v10 = v20;
                                v9 = v19;
                                v26 = *(&v14.field_16 as &i128);
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
                                field_16: *((&v2 as &char + 8) as &i128)
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
