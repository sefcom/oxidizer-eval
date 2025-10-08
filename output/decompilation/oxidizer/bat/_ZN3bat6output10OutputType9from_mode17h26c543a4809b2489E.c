fn bat::output::OutputType::from_mode(a1: i8, a2: i8, a3: i64, a4: i64) -> Result<struct81, struct57> {
    let a0: i64;  // rdi
    let v0: struct57;  // [bp-0x98], Other Possible Types: u512
    let v1: struct16;  // [bp-0x98]
    let v2: struct24;  // [bp-0x88]
    let v3: struct24;  // [bp-0x78]
    let v4: struct40;  // [bp-0x68]
    let v5: i64;  // [bp-0x60]
    let v6: &str;  // [bp-0x58]
    let v7: Result<struct40, struct16>;  // [bp-0x48], Other Possible Types: struct24
    let v8: iNone;  // [bp-0x48]
    let v9: Result<struct80, struct9>;  // [bp-0x38]
    let v10: u128;  // [bp-0x38]
    let v11: struct24;  // [bp-0x28]
    let v12: u128;  // [bp-0x19]
    let v13: struct40;  // [bp-0x11]
    let v15: core::result::Result<&str, core::str::error::Utf8Error>;  // al
    let v16: struct24;  // xmm0
    let v17: struct24;  // xmm1
    let v18: struct24;  // xmm2
    let v19: struct24;  // al
    let v20: struct24;  // xmm1
    let v21: struct24;  // xmm2
    let v22: iNone;  // xmm0
    let v23: Result<struct40, struct32>;  // xmm1
    let v24: struct24;  // xmm2

    if a1 {
        if a1 == 1 {
            v0 = bat::output::OutputType::try_pager(None, a2, a3, a4);
            v15 = v0.field_0;
            if &v0 != "\r" {
                v16 = *(&(&v0.field_0)[1] as &i128);
                v17 = *((&v0.field_16 as &char + 1) as &i128);
                v18 = *((&v0.field_24 as &char + 9) as &i128);
                v12 = *(&v0.field_44 as &i128);
                v11 = v18;
                v9 = v17;
                v7 = v16;
                return Ok(struct88 {
                    field_0: v15
                    field_1: <UNKNOWN>
                    field_17: <UNKNOWN>
                    field_33: <UNKNOWN>
                    field_48: <UNKNOWN>
                    field_64: <UNKNOWN>
                });
            }
LABEL_83cdc2:
            v13 = v5;
            v20 = *((&v0 as &char + 24) as &i128);
            v21 = *((&v0 as &char + 40) as &i128);
            *(&v1.field_0 as &i128) = *((&v0 as &char + 8) as &i128);
            v2 = v20;
            v3 = v21;
            v4 = v13;
        } else {
            v1 = bat::output::OutputType::stdout();
        }
        return struct64 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: *(&v1.field_0 as &i128)
            field_24: v2.field_0
            field_40: v3.field_0
            field_56: v4
        };
    } else {
        v0 = bat::output::OutputType::try_pager(0x1, a2, a3, a4);
        v19 = v0.field_0;
        if &v0 != "\r" {
            v22 = *(&(&v0.field_0)[1] as &i128);
            v23 = *((&v0.field_16 as &char + 1) as &i128);
            v24 = *((&v0.field_24 as &char + 9) as &i128);
            v12 = *(&v0.field_44 as &i128);
            v11 = v24;
            v10 = v23;
            v8 = v22;
            return Ok(struct88 {
                field_0: v19
                field_1: <UNKNOWN>
                field_17: <UNKNOWN>
                field_33: <UNKNOWN>
                field_48: <UNKNOWN>
                field_64: <UNKNOWN>
            });
        }
        goto LABEL_83cdc2;
    }
}
