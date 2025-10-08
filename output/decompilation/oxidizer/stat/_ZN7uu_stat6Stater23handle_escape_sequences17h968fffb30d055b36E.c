fn uu_stat::Stater::handle_escape_sequences(a0: i64, a1: i64, a2: u64, a3: i64, a4: u64, a5: u64, a6: u64) -> long long {
    let v0: alloc::string::String;  // [bp-0x68], Other Possible Types: core::result::Result<alloc::string::String, std::env::VarError>, u64
    let v1: Result<struct24, struct24>;  // [bp-0x60], Other Possible Types: struct24, u64
    let v2: u32;  // [bp-0x44]
    let v3: u64;  // [bp-0x40]
    let v4: core::fmt::Arguments;  // [bp-0x38]
    let v5: u64;  // r12
    let v6: Result<struct99, struct24>;  // r14, Other Possible Types: unsigned long
    let v7: u64;  // rax
    let v8: core::result::Result<(), core::fmt::Error>;  // r12
    let v9: i64;  // rbx
    let v11: u64;  // rdx
    let v12: u64;  // rax
    let v13: u64;  // rax
    let v14: struct24;  // rdx
    let v15: u64;  // rax
    let v16: u8;  // bpl
    let v17: u32;  // r13d
    let v18: u64;  // 4096
    let v19: struct16;  // bpl
    let v20: u32;  // r13d
    let v21: u8;  // bpl
    let v22: u64;  // r12
    let v24: u8;  // dl
    let v26: u64;  // rdx
    let v28: i64;  // rdx
    let v29: core::fmt::rt::Argument;  // rax
    let v30: core::option::Option<u32>;  // rax:rax

    v5 = *(a3 as &i64);
    v6 = v5 + 1;
    *(a3 as &Result<struct99, struct24>) = v6;
    if v6 >= a4 {
        v0 = uucore::util_name();
        v1 = v28;
        eprint!("{}: warning: ", &v0);
        v29 = eprintln!("backslash at end of format");
        return struct16 {
            field_0: 3
            field_8: 92
        };
    }
    v7 = *((a1 + v5 * 4 + 4) as &i32);
    match (v7) {
        34 => {
            return struct16 {
                field_0: 4
                field_8: 34
            };
        }
        39 => {
            return struct16 {
                field_0: 4
                field_8: 39
            };
        }
        92 => {
            return struct16 {
                field_0: 4
                field_8: 92
            };
        }
        97 => {
            return struct16 {
                field_0: 4
                field_8: 7
            };
        }
        98 => {
            return struct16 {
                field_0: 4
                field_8: 8
            };
        }
        102 => {
            return struct16 {
                field_0: 4
                field_8: 12
            };
        }
        110 => {
            return struct16 {
                field_0: 4
                field_8: 10
            };
        }
        114 => {
            return struct16 {
                field_0: 4
                field_8: 13
            };
        }
        116 => {
            return struct16 {
                field_0: 4
                field_8: 9
            };
        }
        120 => {
            v8 = v5 + 2;
            if v8 >= a4 {
                v0 = uucore::util_name();
                v1 = v14;
                eprint!("{}: warning: ", &v0);
                v15 = eprintln!("incomplete hex escape '\\x'");
                return struct16 {
                    field_0: 4
                    field_8: 120
                };
            }
            v9 = a0;
            v12 = <str as uu_stat::ScanUtil>::scan_char(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v8, a5, a6) as u64, v11, 16);
            if v12 != 0x110000 {
                *(a3 as &Result<struct99, struct24>) = v11 + v6;
                *((v9 + 8) as &u8) = v12;
                *(v9 as &i64) = 4;
                return v12;
            }
            v0 = uucore::util_name();
            v1 = v11;
            eprint!("{}: warning: ", &v0);
            v13 = eprintln!("unrecognized escape '\\x'");
            *((v9 + 8) as &i8) = 120;
            *(v9 as &i64) = 4;
            return v13;
        }
        _ => {
            if (v7 & -0x8) == 48 {
                v4 = a0;
                v16 = 0;
                v17 = 0;
                v18 = a2;
                loop {
                    v20 = v17;
                    v21 = v19;
                    v30 = core::char::methods::<impl char>::to_digit(*((a1 + v6 * 4) as &i32), 8) as u128;
                    if let None = v30 {
                        break;
                    }
                    v19 = v24 + v21 * 8;
                    v6 += 1;
                    *(a3 as &Result<struct99, struct24>) = v6;
                    if v6 >= v22 {
                        break;
                    } else {
                        break;
                    }
                    v17 = v20 + 1;
                    v18 = v3;
                    if v20 >= 2 {
                        break;
                    }
                }
                *(a3 as &unsigned long) = v6 - 1;
                *((v4 + 8) as &struct16) = v19;
                *(v4 as &i64) = 4;
                return v4;
            } else {
                v2 = v7;
                v0 = uucore::util_name();
                v1 = v26;
                eprint!("{}: warning: ", &v0);
                eprintln!("unrecognized escape '\\{}'", &v2);
                return struct16 {
                    field_0: 4
                    field_8: v2 as i8
                };
            }
        }
    }
}
