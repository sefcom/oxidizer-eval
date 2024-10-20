fn uu_join::parse_separator(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: Enum;  // [sp-0x88], Other Possible Types: Arguments, i64
    let v1: i64;  // [sp-0x80]
    let v2: i64;  // [sp-0x78]
    let v3: i64;  // [sp-0x58]
    let v4: i64;  // [sp-0x50]
    let v5: Argument;  // [bp-0x48]
    let v6: String;  // [sp-0x38], Other Possible Types: i192
    let v7: i32;  // [sp-0x20]
    let v9: i64;  // rax
    let v10: i64;  // rax
    let v11: i64;  // rsi
    let v12: i64;  // rdx
    let v13: i64;  // rcx
    let v14: i64;  // rax
    let v15: i64;  // rbx
    let v16: i64;  // rax
    let v17: i64;  // r8
    let v18: i32;  // r9d
    let v19: i32;  // r11d
    let v20: i32;  // r10d
    let v21: i64;  // rcx
    let v22: i32;  // edx
    let v23: i32;  // r9d
    let v24: i32;  // esi
    let v25: i128;  // xmm0

    if a2 == 1 {
        v9 = *(a1 as &i8);
        *(a0 as &i64) = 0x8000000000000000;
        *((a0 + 8) as &i8) = v9;
        return v9;
    } else if a2 {
        v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a1, a2);
        if v0 {
            v10 = __rust_alloc(24, 1);
            v15 = v10;
            *(v10 as &i128) = 60362812332964617531427533093191184238;
            *((v15 + 16) as &i64) = 7089074970947778914;
            v16 = __rust_alloc(32, 8);
            *(v16 as &i64) = 24;
            *((v16 + 8) as &i64) = v15;
            *((v16 + 16) as &i64) = 24;
            *((v16 + 24) as &i32) = 1;
        } else {
            v11 = v1;
            v12 = v2;
            v3 = v11;
            v4 = v12;
            if !v12 {
                core::option::expect_failed(); /* do not return */
            }
            v13 = v11 + v12;
            v14 = *(v11 as &i8);
            if v14 < 0 {
                v18 = v14 & 31;
                v19 = *((v11 + 1) as &i8) & 63;
                if (v14 & 255) <= 223 {
                    v17 = v11 + 2;
                    v14 = v18 * 64 | v19;
                    if v17 == v13 {
                        vvar_348{reg 16} = <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a0, v11, v12);
                        return v9;
                    }
                } else {
                    v20 = *((v11 + 2) as &i8) & 63 | v19 * 64;
                    if (v14 & 255) < 240 {
                        v17 = v11 + 3;
                        v14 = v20 | v18 * 0x1000;
                        if v17 == v13 {
                            vvar_343{reg 16} = <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a0, v11, v12);
                            return v9;
                        }
                    } else {
                        v17 = v11 + 4;
                        v14 = *((v11 + 3) as &i8) & 63 | v20 * 64 | (v18 & 7) * 0x40000;
                        if v17 == v13 {
                            v9 = <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a0, v11, v12);
                            return v9;
                        }
                    }
                }
            } else {
                v17 = v11 + 1;
                if v17 == v13 {
                    vvar_338{reg 16} = <alloc::vec::Vec<u8> as core::convert::From<&str>>::from(a0, v11, v12);
                    return v9;
                }
            }
            v21 = *(v17 as &i8);
            if v21 < 0 {
                v22 = v21 & 31;
                v23 = *((v17 + 1) as &i8) & 63;
                if (v21 & 255) <= 223 {
                    v21 = v22 * 64 | v23;
                } else {
                    v24 = *((v17 + 2) as &i8) & 63 | v23 * 64;
                    v21 = ((v21 & 255 & 255) < 240 ? *((v17 + 3) as &i8) & 63 | v24 * 64 | (v22 & 7) * 0x40000 : v24 | v22 * 0x1000);
                }
            }
            if v14 == 92 && v21 == 48 {
                *(a0 as &i64) = 0x8000000000000000;
                *((a0 + 8) as &i8) = 0;
                return 0x8000000000000000;
            }
            v5 = Argument {
                value: &v3
                formatter: <&T as core::fmt::Display>::fmt
            };
            v0 = Arguments {
                pieces: ["multi-character tab "]
                args: [&v5]
                fmt: None
            };
            v6 = alloc::fmt::format::format_inner(&v0);
            v7 = 1;
            v16 = __rust_alloc(32, 8);
            v25 = v6;
            *((v16 + 16) as &i192) = v6;
            *(v16 as &i128) = v25;
        }
        *((a0 + 8) as &i64) = v16;
        *((a0 + 16) as &&i64) = &g_4fdb88;
        *(a0 as &i64) = 9223372036854775812;
        return 9223372036854775812;
    } else {
        *(a0 as &i64) = 9223372036854775810;
        return 9223372036854775810;
    }
}
