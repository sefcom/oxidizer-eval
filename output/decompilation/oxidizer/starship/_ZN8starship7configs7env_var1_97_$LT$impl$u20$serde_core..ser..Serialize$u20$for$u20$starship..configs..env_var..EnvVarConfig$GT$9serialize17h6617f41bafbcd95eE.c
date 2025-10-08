fn starship::configs::env_var::_::<impl serde_core::ser::Serialize for starship::configs::env_var::EnvVarConfig>::serialize(a0: i64, a1: u64) -> int {
    let v0: struct83;  // [bp-0x118]
    let v1: Option<struct24>;  // [bp-0x118], Other Possible Types: u192
    let v2: struct8;  // [bp-0x118]
    let v5: i64;  // [bp-0x100]
    let v6: iNone;  // [bp-0xf8]
    let v7: iNone;  // [bp-0xe8]
    let v8: iNone;  // [bp-0xd8]
    let v9: iNone;  // [bp-0xc8]
    let v10: i64;  // [bp-0xb8]
    let v11: iNone;  // [bp-0xa8]
    let v12: Option<struct24>;  // [bp-0x98]
    let v13: struct24;  // [bp-0x90]
    let v14: u128;  // [bp-0x88]
    let v15: struct83;  // [bp-0x78]
    let v16: Option<struct24>;  // [bp-0x70]
    let v17: Option<struct24>;  // [bp-0x60]
    let v18: Option<struct24>;  // [bp-0x50]
    let v19: Option<struct24>;  // [bp-0x40]
    let v20: Option<struct24>;  // [bp-0x30]
    let v22: struct40;  // r13
    let v23: Option<struct48>;  // r12
    let v24: struct24;  // rax
    let v25: struct24;  // rax

    v22 = *((a1 + 64) as &i64);
    v23 = *((a1 + 80) as &i64);
    v0 = <toml::table::TableSerializer as serde_core::ser::Serializer>::serialize_struct();
    v24 = v0.field_0;
    v11 = *(&v0.field_8 as &i128);
    v12 = v5;
    if v24 == 0x8000000000000000 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v11
            field_24: v12
        };
    }
    v20 = v10;
    v19 = v9;
    v18 = v8;
    v17 = v7;
    v16 = v6;
    *(&v14 as void*) = v11;
    v15 = v12;
    v13 = v24;
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "symbol", a1);
    if let Some(_) = v1 {
        return struct32 {
            field_0: 9223372036854775814
            field_8: v1 as i128
            field_24: *((&v1 as &char + 16) as &i64)
        };
    }
    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "style", a1 + 16);
    if let None = v1 {
        if v22 {
            v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "variable", a1 + 64);
            if let None = v1 {
                goto LABEL_bf7385;
            }
        } else {
            v2 = <serde::private::ser::FlatMapSerializeStruct<M> as serde_core::ser::SerializeStruct>::end();
            if v2.field_0 == 9223372036854775813 {
LABEL_bf7385:
                if let None = v23 {
                    v1 = <toml::value::ValueSerializeMap as serde_core::ser::SerializeStruct>::serialize_field(&v13, "default", a1 + 80);
                    v25 = v1 as i64;
                    if v25 == 9223372036854775813 {
                        goto LABEL_0xbf7410;
                    }
                }
                *((a0 + 16) as &i128) = *((&v1 as &char + 8) as &i128);
                *((a0 + 8) as &struct24) = v25;
            }
        }
    }
    return struct32 {
        field_0: 9223372036854775814
        field_8: v1 as i128
        field_24: *((&v1 as &char + 16) as &i64)
    };
}
