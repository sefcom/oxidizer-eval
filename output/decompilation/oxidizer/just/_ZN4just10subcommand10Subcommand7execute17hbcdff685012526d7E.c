fn just::subcommand::Subcommand::execute(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: &mut [u8];  // [bp-0x7e8]
    let v1: iNone;  // [bp-0x7d8]
    let v2: struct80;  // [bp-0x7c8]
    let v3: struct80;  // [bp-0x7b8]
    let v4: struct80;  // [bp-0x7a8]
    let v5: struct56;  // [bp-0x798]
    let v6: u64;  // [bp-0x788]
    let v7: struct24;  // [bp-0x778]
    let v8: struct48;  // [bp-0x770]
    let v9: u32;  // [bp-0x768]
    let v10: iNone;  // [bp-0x760]
    let v11: struct20;  // [bp-0x750]
    let v12: struct48;  // [bp-0x748]
    let v13: struct24;  // [bp-0x738]
    let v14: Result<struct864, struct112>;  // [bp-0x6f0], Other Possible Types: u8
    let v15: struct48;  // [bp-0x6e9]
    let v16: i8;  // [bp-0x6e8]
    let v17: struct24;  // [bp-0x6d9]
    let v18: i8;  // [bp-0x6d8]
    let v19: struct80;  // [bp-0x6c8], Other Possible Types: char
    let v20: struct80;  // [bp-0x6b8]
    let v21: u128;  // [bp-0x6a8]
    let v22: u128;  // [bp-0x698]
    let v23: u64;  // [bp-0x688]
    let v32: u8;  // [bp-0x320]
    let v34: struct72;  // r14
    let v35: struct24;  // rax
    let v36: struct24;  // xmm1
    let v37: struct20;  // rcx

    v34 = *(a1 as &i64);
    match (v34 ^ 0x8000000000000000) {
        0 => {
            just::subcommand::Subcommand::changelog();
            return struct1 {
                field_0: 56
            };
        }
        1 | 2 | 4 | 5 | 6 | 7 | 8 | 10 => {
            break;
        }
        3 => {
            just::subcommand::Subcommand::completions(*((a1 + 8) as &i32));
            return struct1 {
                field_0: 56
            };
        }
        9 => {
            just::subcommand::Subcommand::init(a0, a2);
            return a0;
        }
        11 => {
            just::subcommand::Subcommand::man(a0);
            return a0;
        }
        12 => {
            just::subcommand::Subcommand::request(a0, a1 + 8);
            return a0;
        }
        _ => {
            just::search::Search::find(&v14, (*((a2 + 120) as &i64) == 0x8000000000000000 ? 0 : *((a2 + 128) as &i64)), *((a2 + 136) as &i64), *((a2 + 32) as &i64), *((a2 + 40) as &i64), a2 + 264);
            v35 = *(&v14 as &i64);
            v12 = *(&v16 as &i128);
            v13 = *(&v18 as &i128);
            if v35 == 0x8000000000000000 {
                v17 = v13;
                v15 = v12;
                v36 = *((&v15.field_0 as &char + 9) as &i128);
                return struct48 {
                    field_0: 42
                    field_1: <UNKNOWN>
                    field_17: <UNKNOWN>
                    field_32: <UNKNOWN>
                };
            }
            v37 = *(&v19 as &i64);
            v8 = v12;
            v10 = v13;
            v7 = v35;
            v11 = v37;
            if v34 == 9223372036854775813 {
                just::subcommand::Subcommand::edit(a0, &v7);
            }
            v14 = just::subcommand::Subcommand::compile(a2, a3, v8.field_0 as i64, v9);
            v0 = *((&v14 as &char + 8) as &i128);
            v1 = *((&v14 as &char + 24) as &i128);
            v2 = v19;
            v3 = v20;
            v4 = v21;
            v5 = v22;
            v6 = v23;
            match v14 {
                Ok(_) => {
                    memcpy(&v32, &v14 as u8, 752);
                },
                Err(_) => {
                    return struct104 {
                        field_0: v0
                        field_16: v1
                        field_32: v2
                        field_48: v3
                        field_64: v4
                        field_80: v5
                        field_96: v6
                    };
                },
            }
        }
    }
}
