fn bat::output::OutputType::try_pager(a1: i8, a2: i8, a3: i64, a4: i64) -> : struct57 {
    let a0: u64;  // rdi
    let v0: struct16;  // [bp-0x1d8], Other Possible Types: struct8, struct24
    let v1: struct24;  // [bp-0x1d8]
    let v2: struct24;  // [bp-0x1d0], Other Possible Types: struct48
    let v3: u32;  // [bp-0x1b8]
    let v4: u64;  // [bp-0x1b4]
    let v5: u32;  // [bp-0x1ac]
    let v6: u64;  // [bp-0x1a8]
    let v7: u64;  // [bp-0x1a0]
    let v8: u64;  // [bp-0x198]
    let v9: core::result::Result<usize, core::num::error::ParseIntError>;  // [bp-0x190]
    let v10: iNone;  // [bp-0x188]
    let v11: iNone;  // [bp-0x188], Other Possible Types: struct24
    let v12: u128;  // [bp-0x178]
    let v13: u8;  // [bp-0x170]
    let v14: struct24;  // [bp-0x168]
    let v15: struct32;  // [bp-0x168]
    let v16: u32;  // [bp-0x14c]
    let v17: iNone;  // [bp-0x148]
    let v18: u64;  // [bp-0x138]
    let v19: struct224;  // [bp-0x128], Other Possible Types: struct56, struct8, struct16
    let v20: struct56;  // [bp-0x128]
    let v21: struct16;  // [bp-0x128]
    let v22: struct16;  // [bp-0x128], Other Possible Types: u128
    let v23: u64;  // [bp-0x120]
    let v24: u64;  // [bp-0x118]
    let v25: iNone;  // [bp-0x48]
    let v26: u128;  // [bp-0x38]
    let v28: Result<struct81, struct17>;  // xmm0
    let v29: iNone;  // xmm1
    let v30: struct57;  // eax
    let v31: struct24;  // xmm0
    let v32: Result<struct40, struct16>;  // xmm1
    let v33: std::path::PathBuf;  // xmm0
    let v34: iNone;  // xmm1
    let v35: u64;  // rax
    let v36: u64;  // rdx
    let v37: &std::ffi::os_str::OsStr;  // rsi
    let v38: u8;  // dl
    let v39: u64;  // rax
    let v41: iNone;  // [bp-0x1c8]

    v19 = bat::pager::get_pager(a3, a4);
    if v19.field_0 as i64 == 9223372036854775809 {
        <bat::error::Error as core::convert::From<&str>>::from(a0, "Could not parse pager command.");
        return;
    }
    v25 = *((&v19.field_16 as &char + 8) as &i128);
    v26 = *((&v19.field_32 as &char + 8) as &i128);
    if v19.field_0 as i64 == 0x8000000000000000 {
        v21 = bat::output::OutputType::stdout();
        v28 = *(&v21.field_0 as &i128);
        v29 = v19.field_16;
        return struct64 {
            field_0: 13
            padding_1: <UNKNOWN>
            field_8: v28
            field_24: v29
            field_40: v19.field_32
            field_56: v19.field_48
        };
    }
    v7 = v19.field_0;
    v8 = v23;
    v9 = v24;
    v12 = v26;
    v10 = v25;
    v30 = *((&v12 as &char + 9) as &i8);
    match (v30) {
        0 => {
            return struct1 {
                field_0: 10
            };
        }
        4 => {
            v20 = bat::output::BuiltinPager::new();
            v31 = v20.field_0;
            v32 = v20.field_16;
            return struct64 {
                field_0: 13
                padding_1: <UNKNOWN>
                field_8: v31
                field_24: v32
                field_40: v20.field_32
                field_56: v20.field_48
            };
        }
        _ => {
            v0 = grep_cli::decompress::resolve_binary(&v7);
            if v0 == 1 {
                v21 = bat::output::OutputType::stdout();
                v33 = *(&v21.field_0 as &i128);
                v34 = v19.field_16;
                return struct64 {
                    field_0: 13
                    padding_1: <UNKNOWN>
                    field_8: v33
                    field_24: v34
                    field_40: v19.field_32
                    field_56: v19.field_48
                };
            }
            v14 = v2;
            v19 = std::process::Command::new(&v14);
            v18 = v12;
            v17 = v10;
            if *((&v12 as &char + 9) as &i8) == 1 {
                if v13 != 2 && v18 {
                    v0 = v11;
                    v22 = std::process::Command::args(&v0);
                } else {
                    v19 = std::process::Command::arg("-R");
                    if !a1 {
                        v19 = std::process::Command::arg("-F");
                    }
                    if a2 != 2 && (a2 & 1) {
                        v19 = std::process::Command::arg("-S");
                    }
                    v22 = std::process::Command::arg("-K");
                    v35 = bat::less::retrieve_less_version(&v7);
                    if !((530 <= v36 | v35) & v35 != 2) {
                        v22 = std::process::Command::arg("--no-init");
                    }
                }
                std::process::Command::env(&v22);
            } else {
                v0 = v11;
                v19 = std::process::Command::args(&v0);
            }
            v19 = std::process::Command::stdin(v37, v38);
            v15 = std::process::Command::spawn(&v19);
            if v15.field_0 == 1 {
                v0 = bat::output::OutputType::try_pager::{{closure}}(v15.field_4 as i64);
            } else {
                v39 = *(&(&v15.field_0)[1] as &i64);
                *(&v41 as &i128) = *((&v15.field_4 as &char + 4) as &i128);
                v3 = v16;
                v1 = 3;
                v2 = v39;
                break;
            }
            return struct72 {
                field_0: 13
                padding_1: <UNKNOWN>
                field_8: v1
                field_16: v2
                field_24: v41 as i128
                field_40: v3
                field_44: <UNKNOWN>
                field_52: v6
                field_56: <UNKNOWN>
            };
        }
    }
}
