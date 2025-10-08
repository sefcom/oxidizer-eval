fn check_docs::extract_starts_and_ends(a1: i64, a2: i64) -> Result<struct48, struct16> {
    let a0: i64;  // rdi
    let v0: iNone;  // [bp-0xb8], Other Possible Types: struct24
    let v1: struct24;  // [bp-0xb8]
    let v2: iNone;  // [bp-0xb8]
    let v3: u64;  // [bp-0xa8]
    let v4: Result<struct32, struct32>;  // [bp-0x98], Other Possible Types: struct24
    let v5: Result<struct32, struct32>;  // [bp-0x98]
    let v6: u64;  // [bp-0x70]
    let v7: u64;  // [bp-0x68]
    let v8: u64;  // [bp-0x60]
    let v9: u64;  // [bp-0x58]
    let v10: u64;  // [bp-0x50]
    let v11: u64;  // [bp-0x48]
    let v12: struct32;  // [bp-0x40]
    let v14: u64;  // rax
    let v15: u64;  // rax

    v4 = regex::regex::string::Regex::new("^(.+):(\\d+):\\s*(?:/{2,}|/\\*)\\s*ANCHOR\\s*:\\s*([\\w_-]+)\\s*(?:\\*/)?");
    v2 = *((&v4 as &char + 8) as &i128);
    v3 = *((&v4 as &char + 24) as &i64);
    match v4 {
        Ok(_) => {
            v12 = struct32 {
                field_0: v4 as i64
                field_8: v2
                field_24: v3
            };
            check_docs::extract_starts_and_ends::{{closure}}(&v5 as u8, a1, a2, &v12);
            v14 = v7;
            if v6 != 0x8000000000000000 {
                v9 = v6;
                v10 = v14;
                v11 = v8;
                v5 = regex::regex::string::Regex::new("^(.+):(\\d+):\\s*(?:/{2,}|/\\*)\\s*ANCHOR_END\\s*:\\s*([\\w_-]+)\\s*(?:\\*/)?");
                v0 = *((&v5 as &char + 8) as &i128);
                v3 = *((&v5 as &char + 24) as &i64);
                match v5 {
                    Ok(_) => {
                        v12 = struct32 {
                            field_0: v5 as i64
                            field_8: v0
                            field_24: v3
                        };
                        check_docs::extract_starts_and_ends::{{closure}}(&v5 as u8, a1, a2, &v12);
                        v15 = v7;
                        if v6 != 0x8000000000000000 {
                            return Ok(struct48 {
                                field_0: *((&v5 as &char + 64) as &i128)
                                field_16: v11
                                field_24: v6
                                field_32: v7
                                field_40: v8
                            });
                        }
                    },
                    Err(_) => {
                        v4 = v1;
                        v15 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v4);
                    },
                }
                return struct16 {
                    field_0: 0x8000000000000000
                    field_8: v15
                };
            }
        },
        Err(_) => {
            v4 = v0;
            v14 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v4);
        },
    }
    return struct16 {
        field_0: 0x8000000000000000
        field_8: v14
    };
}
