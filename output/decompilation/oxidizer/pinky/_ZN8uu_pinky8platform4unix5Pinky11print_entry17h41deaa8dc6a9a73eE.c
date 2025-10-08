fn uu_pinky::platform::unix::Pinky::print_entry(a0: i64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x1c0]
    let v1: u64;  // [bp-0x1b8]
    let v2: u64;  // [bp-0x1b0]
    let v3: Result<struct24, struct16>;  // [bp-0x1a8], Other Possible Types: core::fmt::rt::Argument, struct128, struct24, core::fmt::Arguments
    let v4: u128;  // [bp-0x1a8]
    let v5: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x1a8]
    let v6: u64;  // [bp-0x1a0]
    let v7: core::fmt::rt::Argument;  // [bp-0x198], Other Possible Types: u64
    let v8: u128;  // [bp-0x198]
    let v9: core::fmt::rt::Argument;  // [bp-0x188]
    let v10: u128;  // [bp-0x188]
    let v11: u32;  // [bp-0xf4]
    let v12: void*;  // [bp-0xf0]
    let v13: core::fmt::Arguments;  // [bp-0xe8], Other Possible Types: core::fmt::rt::Argument, struct24, u64
    let v14: struct24;  // [bp-0xe8], Other Possible Types: u64
    let v15: Result<struct128, struct16>;  // [bp-0xe8]
    let v16: u64;  // [bp-0xe0]
    let v17: core::fmt::rt::Argument;  // [bp-0xd8], Other Possible Types: u64
    let v18: u128;  // [bp-0xd8]
    let v19: u128;  // [bp-0xb8]
    let v20: u128;  // [bp-0xa8]
    let v21: u128;  // [bp-0x98]
    let v22: u128;  // [bp-0x88]
    let v23: struct16;  // [bp-0x60], Other Possible Types: struct24
    let v24: u64;  // [bp-0x58]
    let v25: u64;  // [bp-0x50]
    let v26: Option<struct24>;  // [bp-0x48]
    let v28: u32;  // eax
    let v29: void*;  // r15
    let v33: u64;  // rbx

    v23 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/dev");
    v3 = uucore::features::utmpx::Utmpx::tty_device(a1);
    v23 = std::path::PathBuf::push(v6, v7);
    v5 = std::fs::metadata(v24, v25);
    v11 = v28;
    v0 = uucore::features::utmpx::Utmpx::user(a1);
    v13 = core::fmt::rt::Argument {
        ty: &v0
    };
    v17 = core::fmt::rt::Argument {
        ty: 0
    };
    v3 = core::fmt::Arguments {
        pieces: [&g_419240]
        args: [v14, v18]
        fmt: &g_41a668
    };
    std::io::stdio::_print(&v3);
    if *((a0 + 26) as &i8) {
        v0 = uucore::features::utmpx::Utmpx::user(a1);
        v13 = <uucore::features::entries::Passwd as uucore::features::entries::Locate<&str>>::locate(v1, v2);
        if (((0 ^ v15 as i64) & (0 ^ -(v14))) >> 63) as char {
            print!(" {}", "        ???");
        } else {
            v12 = v29;
            v3 = struct128 {
                field_0: v15 as i128
                field_16: *((&v15 as &char + 16) as &i128)
                field_32: *((&v15 as &char + 32) as &i128)
                field_48: v19
                field_64: v20
                field_80: v21
                field_96: v22
                field_112: *((&v15 as &char + 112) as &i128)
            };
            v26 = uu_pinky::platform::unix::gecos_to_fullname(&v3);
            match v26 {
                None => {
                    print!(" {}", "        ???");
                    v29 = v12;
                },
                Some(_) => {
                    v17 = *((&v26 as &char + 16) as &i64);
                    v13 = v26 as i128 as u128;
                    print!(" {}", &v13 as u1024);
                    v29 = v12;
                },
            }
        }
    }
    v0 = uucore::features::utmpx::Utmpx::tty_device(a1);
    v3 = core::fmt::rt::Argument {
        ty: &v11
    };
    v7 = core::fmt::rt::Argument {
        ty: &v0
    };
    v9 = core::fmt::rt::Argument {
        ty: 0
    };
    v13 = core::fmt::Arguments {
        pieces: [" ", &g_4f8fa0]
        args: [v4, v8, v10]
        fmt: &g_41a708
    };
    std::io::stdio::_print(&v13);
    if *((a0 + 24) as &i8) {
        if v29 {
            v13 = uu_pinky::platform::unix::idle_string(v29);
            print!(" {}", &v13);
        } else {
            print!(" {}", "?????");
        }
    }
    uu_pinky::platform::unix::time_string(&v14, a1);
    print!(" {}", &v14);
    v13 = uucore::features::utmpx::Utmpx::host(a1);
    if *((a0 + 29) as &i8) && v18 {
        v3 = uucore::features::utmpx::Utmpx::canon_host(a1);
        if (((0 ^ v3 as i64) & (0 ^ -(v4))) >> 63) as char {
            return v33;
        }
        v13 = v3 as i64;
        v16 = 1;
        v17 = *((&v3 as &char + 16) as &i64);
        print!(" {}", &v13);
    }
    v3 = core::fmt::Arguments {
        pieces: ["\n"]
        args: []
        fmt: 0
    };
    std::io::stdio::_print(&v3);
    return v33;
}
