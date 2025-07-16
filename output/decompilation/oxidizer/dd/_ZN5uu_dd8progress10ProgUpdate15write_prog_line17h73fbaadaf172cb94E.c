fn uu_dd::progress::ProgUpdate::write_prog_line(a0: i64, a1: i64, a2: i32) -> long long {
    let v0: u64;  // [bp-0x178]
    let v1: u64;  // [bp-0x170]
    let v2: u384;  // [bp-0x160]
    let v3: u128;  // [bp-0x130], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v4: u128;  // [bp-0x130]
    let v5: u128;  // [bp-0x120]
    let v6: u128;  // [bp-0x120], Other Possible Types: struct32
    let v7: u128;  // [bp-0x110]
    let v8: u128;  // [bp-0x110], Other Possible Types: struct9
    let v9: u128;  // [bp-0x100]
    let v10: u128;  // [bp-0x100], Other Possible Types: struct32
    let v11: u128;  // [bp-0xf0]
    let v12: u128;  // [bp-0xf0], Other Possible Types: core::time::Duration, struct32
    let v13: u128;  // [bp-0xe0]
    let v14: struct24;  // [bp-0xe0], Other Possible Types: u128
    let v15: iNone;  // [bp-0xd0]
    let v16: struct32;  // [bp-0xd0]
    let v17: i64;  // [bp-0xc0]
    let v18: u64;  // [bp-0xb8]
    let v19: i64;  // [bp-0xb0]
    let v20: i64;  // [bp-0xa8]
    let v21: u192;  // [bp-0xa0]
    let v22: u64;  // [bp-0x88]
    let v23: u64;  // [bp-0x80]
    let v24: u8;  // [bp-0x78]
    let v25: u8;  // [bp-0x60]
    let v26: u8;  // [bp-0x48]
    let v27: u64;  // [bp-0x30]
    let v28: u64;  // [bp-0x28]
    let v30: u64;  // r12
    let v31: u64;  // rbx
    let v32: core::result::Result<u64, std::io::error::Error>;  // rbp
    let v34: u64;  // rdx
    let v35: u32;  // r8
    let v36: u32;  // r9
    let v37: u64;  // rax
    let v38: u64;  // rax
    let v39: u64;  // rax
    let v40: core::result::Result<(), std::io::error::Error>;  // rax
    let v41: core::result::Result<(), std::io::error::Error>;  // rax
    let v42: core::result::Result<(), std::io::error::Error>;  // rax
    let v43: core::result::Result<(), std::io::error::Error>;  // rax

    v28 = v30;
    v27 = v31;
    v32 = a2;
    v0 = *((a0 + 48) as &i64);
    v1 = *((a0 + 56) as &i64);
    uu_dd::numbers::to_magnitude_and_suffix(&v24, v0, v1, 1);
    uu_dd::numbers::to_magnitude_and_suffix(&v25, v0, v1, 0);
    v37 = __udivti3(v0, v1, core::cmp::max_by((*((a0 + 8) as &i32) * 1125899907 >> 50) + *(a0 as &i64) * 1000, *(a0 as &i64) / 18446744073709552 + (((*((a0 + 8) as &i32) * 1125899907 >> 50) + *(a0 as &i64) * 1000 <= *((a0 + 8) as &i32) * 1125899907 >> 50 ? 1 : 0) & 1)), v34, v35, v36);
    uu_dd::numbers::to_magnitude_and_suffix(&v26, v37 * 1000, v37 / 18446744073709552 + v34 * 1000, 1);
    v17 = (!(v32 & 255) ? 1 : &g_426a85);
    v18 = v32 & 4294967295;
    v19 = (v32 as u8 ? 1 : &g_426a84);
    v20 = v18 ^ 1;
    v21 = struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v3 = struct21 {
        field_0: 0
        field_8: 6
        field_16: 2
        field_17: 0
    };
    v38 = <uucore::features::format::num_format::Float as uucore::features::format::num_format::Formatter>::fmt(&v3, &v21);
    if v38 {
        v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v38);
    } else {
        v3 = core::str::converts::from_utf8(0x1, None);
        v22 = core::result::Result<T,E>::unwrap(&v3);
        v23 = v34;
        if UnaryOp GetMSBs == 65535 {
            v3 = core::fmt::rt::Argument {
                ty: &v17
            };
            v5 = core::fmt::rt::Argument {
                ty: &v0
            };
            v7 = core::fmt::rt::Argument {
                ty: &v22
            };
            v9 = core::fmt::rt::Argument {
                ty: &v26
            };
            v11 = core::fmt::rt::Argument {
                ty: &v19
            };
            v2 = core::fmt::Arguments {
                pieces: [&g_562308, &g_562318, " byte copied, ", " s, ", "/s"]
                args: [v4, v6, v8, v10, v12]
                fmt: 0
            };
            v40 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v2);
            match v40 {
                Ok(_) => {
                    return 0;
                },
                Err(_) => {
                    v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v40);
                },
            }
        } else if amd64g_calculate_condition(2, 16, v1, (v0 < 1000) as u8 as u64, (v0 < 1000) as u8 as u64) as char {
            v3 = core::fmt::rt::Argument {
                ty: &v17
            };
            v5 = core::fmt::rt::Argument {
                ty: &v0
            };
            v7 = core::fmt::rt::Argument {
                ty: &v22
            };
            v9 = core::fmt::rt::Argument {
                ty: &v26
            };
            v11 = core::fmt::rt::Argument {
                ty: &v19
            };
            v2 = core::fmt::Arguments {
                pieces: [&g_562358, &g_562368, " bytes copied, ", " s, ", "/s"]
                args: [v4, v6, v8, v10, v12]
                fmt: 0
            };
            v41 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v2);
            match v41 {
                Ok(_) => {
                    return 0;
                },
                Err(_) => {
                    v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v41);
                },
            }
        } else if amd64g_calculate_condition(2, 16, v1, (v0 < 0x400) as u8 as u64, (v0 < 0x400) as u8 as u64) as char {
            v3 = core::fmt::rt::Argument {
                ty: &v17
            };
            v5 = core::fmt::rt::Argument {
                ty: &v0
            };
            v7 = core::fmt::rt::Argument {
                ty: &v24
            };
            v9 = core::fmt::rt::Argument {
                ty: &v22
            };
            v11 = core::fmt::rt::Argument {
                ty: &v26
            };
            v13 = core::fmt::rt::Argument {
                ty: &v19
            };
            v2 = core::fmt::Arguments {
                pieces: [&g_5623a8, &g_5623b8, " bytes (", ") copied, ", " s, ", "/s"]
                args: [v4, v6, v8, v10, v12, v14]
                fmt: 0
            };
            v42 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v2);
            match v42 {
                Ok(_) => {
                    return 0;
                },
                Err(_) => {
                    v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42);
                },
            }
        } else {
            v3 = core::fmt::rt::Argument {
                ty: &v17
            };
            v5 = core::fmt::rt::Argument {
                ty: &v0
            };
            v7 = core::fmt::rt::Argument {
                ty: &v24
            };
            v9 = core::fmt::rt::Argument {
                ty: &v25
            };
            v11 = core::fmt::rt::Argument {
                ty: &v22
            };
            v13 = core::fmt::rt::Argument {
                ty: &v26
            };
            v15 = core::fmt::rt::Argument {
                ty: &v19
            };
            v2 = core::fmt::Arguments {
                pieces: [&g_562408, &g_562418, " bytes (", ", ", ") copied, ", " s, ", "/s"]
                args: [v4, v6, v8, v10, v12, v14, v16]
                fmt: 0
            };
            v43 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v2);
            match v43 {
                Ok(_) => {
                    return 0;
                },
                Err(_) => {
                    v39 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v43);
                },
            }
        }
    }
    return v39;
}
