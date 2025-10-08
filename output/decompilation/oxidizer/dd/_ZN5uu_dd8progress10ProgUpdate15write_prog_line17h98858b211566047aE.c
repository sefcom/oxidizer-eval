fn uu_dd::progress::ProgUpdate::write_prog_line(a0: i64, a1: u64, a2: u32) -> long long {
    let v0: void*;  // [bp-0x178], Other Possible Types: core::fmt::Arguments
    let v1: void*;  // [bp-0x168]
    let v2: u32;  // [bp-0x160]
    let v3: u8;  // [bp-0x15c]
    let v4: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x148], Other Possible Types: core::fmt::rt::Argument, u8
    let v5: struct32;  // [bp-0x148], Other Possible Types: u128
    let v6: core::fmt::rt::Argument;  // [bp-0x138]
    let v7: iNone;  // [bp-0x138], Other Possible Types: u128
    let v8: core::fmt::rt::Argument;  // [bp-0x128]
    let v9: struct32;  // [bp-0x128], Other Possible Types: u128
    let v10: core::fmt::rt::Argument;  // [bp-0x118]
    let v11: struct32;  // [bp-0x118], Other Possible Types: u128
    let v12: core::fmt::rt::Argument;  // [bp-0x108]
    let v13: struct9;  // [bp-0x108], Other Possible Types: u128
    let v14: core::fmt::rt::Argument;  // [bp-0xf8]
    let v15: u128;  // [bp-0xf8]
    let v16: core::fmt::rt::Argument;  // [bp-0xe8]
    let v17: u128;  // [bp-0xe8]
    let v18: void*;  // [bp-0xd0]
    let v19: u64;  // [bp-0xc8]
    let v20: void*;  // [bp-0xc0]
    let v21: u64;  // [bp-0xb8]
    let v22: u64;  // [bp-0xb0]
    let v23: i64;  // [bp-0xa8]
    let v24: u64;  // [bp-0xa0]
    let v25: i64;  // [bp-0x98]
    let v26: i64;  // [bp-0x90]
    let v27: struct16;  // [bp-0x88]
    let v28: struct24;  // [bp-0x78]
    let v29: struct24;  // [bp-0x60]
    let v30: struct24;  // [bp-0x48]
    let v31: u64;  // [bp-0x28]
    let v32: u64;  // [bp-0x20]
    let v34: u64;  // r13
    let v35: u64;  // r12
    let v37: u64;  // rdx
    let v38: u32;  // r8
    let v39: u32;  // r9
    let v40: struct33;  // rax
    let v42: u64;  // rax
    let v43: struct32;  // rbx
    let v44: core::result::Result<(), std::io::error::Error>;  // rax
    let v45: core::result::Result<u64, core::num::error::ParseIntError>;  // rax
    let v46: core::result::Result<(), std::io::error::Error>;  // rax
    let v47: core::result::Result<(), std::io::error::Error>;  // rax
    let v48: core::result::Result<(), std::io::error::Error>;  // rax

    v32 = v34;
    v31 = v35;
    v21 = *((a0 + 48) as &i64);
    v22 = *((a0 + 56) as &i64);
    v28 = uu_dd::numbers::to_magnitude_and_suffix(v21, v22, 1);
    v29 = uu_dd::numbers::to_magnitude_and_suffix(v21, v22, 0);
    v40 = __udivti3(v21, v22, core::cmp::Ord::max((*((a0 + 8) as &i32) * 1125899907 >> 50) + *(a0 as &i64) * 1000, *(a0 as &i64) / 18446744073709552 + (((*((a0 + 8) as &i32) * 1125899907 >> 50) + *(a0 as &i64) * 1000 <= *((a0 + 8) as &i32) * 1125899907 >> 50 ? 1 : 0) & 1)), v37, v38, v39);
    v30 = uu_dd::numbers::to_magnitude_and_suffix((v40 * 1000) as u64, v40 / 18446744073709552 + v37 * 1000, 1);
    v23 = (!(a2 & 255) ? 1 : &g_421c2d);
    v24 = a2;
    v25 = (a2 ? 1 : &g_421c2c);
    v26 = v24 ^ 1;
    v18 = 0;
    v19 = 1;
    v20 = 0;
    v3 = 2;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    <uucore::features::extendedbigdecimal::ExtendedBigDecimal as core::convert::From<f64>>::from(&v4);
    v42 = <uucore::features::format::num_format::Float as uucore::features::format::num_format::Formatter<&uucore::features::extendedbigdecimal::ExtendedBigDecimal>>::fmt(&v0, &v18, &v4) as u64;
    if v42 {
        v43 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v42);
        return v43;
    }
    v4 = core::str::converts::from_utf8(0x1, None);
    v27 = struct16 {
        field_0: core::result::Result<T,E>::unwrap(&v4)
        field_8: v37
    };
    if v21 == 1 && !v22 {
        v4 = core::fmt::rt::Argument {
            ty: &v23
        };
        v6 = core::fmt::rt::Argument {
            ty: &v21
        };
        v8 = core::fmt::rt::Argument {
            ty: &v27
        };
        v10 = core::fmt::rt::Argument {
            ty: &v30
        };
        v12 = core::fmt::rt::Argument {
            ty: &v25
        };
        v0 = core::fmt::Arguments {
            pieces: [&g_53d990, &g_53d9a0, " byte copied, ", " s, ", "/s"]
            args: [v5, v7, v9, v11, v13]
            fmt: 0
        };
        v44 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v0);
        match v44 {
            Ok(_) => {
                return v43;
            },
            Err(_) => {
                v45 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v44);
            },
        }
    } else if _ccall(2, 16, v22, (v21 < 1000) as u8 as u64, (v21 < 1000) as u8 as u64) as char {
        v4 = core::fmt::rt::Argument {
            ty: &v23
        };
        v6 = core::fmt::rt::Argument {
            ty: &v21
        };
        v8 = core::fmt::rt::Argument {
            ty: &v27
        };
        v10 = core::fmt::rt::Argument {
            ty: &v30
        };
        v12 = core::fmt::rt::Argument {
            ty: &v25
        };
        v0 = core::fmt::Arguments {
            pieces: [&g_53d9e0, &g_53d9f0, " bytes copied, ", " s, ", "/s"]
            args: [v5, v7, v9, v11, v13]
            fmt: 0
        };
        v46 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v0);
        match v46 {
            Ok(_) => {
                return v43;
            },
            Err(_) => {
                v45 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v46);
            },
        }
    } else if _ccall(2, 16, v22, (v21 < 0x400) as u8 as u64, (v21 < 0x400) as u8 as u64) as char {
        v4 = core::fmt::rt::Argument {
            ty: &v23
        };
        v6 = core::fmt::rt::Argument {
            ty: &v21
        };
        v8 = core::fmt::rt::Argument {
            ty: &v28
        };
        v10 = core::fmt::rt::Argument {
            ty: &v27
        };
        v12 = core::fmt::rt::Argument {
            ty: &v30
        };
        v14 = core::fmt::rt::Argument {
            ty: &v25
        };
        v0 = core::fmt::Arguments {
            pieces: [&g_53da30, &g_53da40, " bytes (", ") copied, ", " s, ", "/s"]
            args: [v5, v7, v9, v11, v13, v15]
            fmt: 0
        };
        v47 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v0);
        match v47 {
            Ok(_) => {
                return v43;
            },
            Err(_) => {
                v45 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v47);
            },
        }
    } else {
        v4 = core::fmt::rt::Argument {
            ty: &v23
        };
        v6 = core::fmt::rt::Argument {
            ty: &v21
        };
        v8 = core::fmt::rt::Argument {
            ty: &v28
        };
        v10 = core::fmt::rt::Argument {
            ty: &v29
        };
        v12 = core::fmt::rt::Argument {
            ty: &v27
        };
        v14 = core::fmt::rt::Argument {
            ty: &v30
        };
        v16 = core::fmt::rt::Argument {
            ty: &v25
        };
        v0 = core::fmt::Arguments {
            pieces: [&g_53da90, &g_53daa0, " bytes (", ", ", ") copied, ", " s, ", "/s"]
            args: [v5, v7, v9, v11, v13, v15, v17]
            fmt: 0
        };
        v48 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(a1, &v0);
        match v48 {
            Ok(_) => {
                return v43;
            },
            Err(_) => {
                v45 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v48);
            },
        }
    }
    v43 = v45;
    return v43;
}
