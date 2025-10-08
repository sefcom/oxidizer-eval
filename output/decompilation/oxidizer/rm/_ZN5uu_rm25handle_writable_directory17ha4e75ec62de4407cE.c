fn uu_rm::handle_writable_directory(a0: i64, a1: i64, a2: i8, a3: i8, a4: i32) -> u64 {
    let v0: std::io::stdio::Stderr;  // [bp-0xa0]
    let v1: struct16;  // [bp-0x70]
    let v2: core::fmt::Arguments;  // [bp-0x60], Other Possible Types: u64
    let v3: struct16;  // [bp-0x58], Other Possible Types: u64
    let v4: core::fmt::Arguments;  // [bp-0x50], Other Possible Types: core::fmt::rt::Argument, u64
    let v5: core::fmt::rt::Argument;  // [bp-0x48], Other Possible Types: std::io::stdio::Stderr, u64
    let v6: u64;  // [bp-0x40]
    let v7: std::io::stdio::Stderr;  // [bp-0x38], Other Possible Types: u8
    let v9: u64;  // r15
    let v10: u64;  // rax
    let v11: u64;  // rax
    let v12: u64;  // rdx
    let v13: core::result::Result<(), std::io::error::Error>;  // rax
    let v14: void*;  // rax
    let v16: u64;  // rdx
    let v17: core::result::Result<(), std::io::error::Error>;  // rax
    let v18: void*;  // rax
    let v20: u64;  // rdx
    let v21: core::result::Result<(), std::io::error::Error>;  // rax
    let v22: void*;  // rax
    let v24: u64;  // rdx
    let v25: core::result::Result<(), std::io::error::Error>;  // rax
    let v26: void*;  // rax

    v9 = a4;
    if a2 == 2 || !(a2 & 1) {
        std::io::stdio::stdin();
        v10 = std::sys::io::is_terminal::isatty::is_terminal();
        v11 = v10 & -0x100 | 1;
        if ((v10 ^ 1) & a3 == 3) {
            return v10 & -0x100 | 1;
        }
    }
    if !(v9 & 0x100) {
        if v9 >= 0 {
            v4 = uucore::util_name();
            v5 = v12;
            eprint!("{}: ", &v4);
            v4 = 1;
            v5 = a0;
            v6 = a1;
            v7 = 1;
            eprint!("attempt removal of inaccessible directory {}?", &v4);
            eprint!(" ");
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
            v13 = <std::io::stdio::Stderr as std::io::Write>::flush(&v0);
            if let Err(_) = v13 {
                v14 = uu_rm::prompt_file::{{closure}}(v13);
                if v14 {
                    v1 = struct16 {
                        field_0: v14
                        field_8: &g_4ea7a8
                    };
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v14) as u32 as u64);
                    v2 = uucore::util_name();
                    v3 = v12;
                    eprintln!("{}: {}", &v2, &v1);
                }
            }
        } else if a3 == 2 {
            v4 = uucore::util_name();
            v5 = v16;
            eprint!("{}: ", &v4);
            v4 = 1;
            v5 = a0;
            v6 = a1;
            v7 = 1;
            eprint!("attempt removal of inaccessible directory {}?", &v4);
            eprint!(" ");
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
            v17 = <std::io::stdio::Stderr as std::io::Write>::flush(&v0);
            if let Err(_) = v17 {
                v18 = uu_rm::prompt_file::{{closure}}(v17);
                if v18 {
                    v1 = struct16 {
                        field_0: v18
                        field_8: &g_4ea7a8
                    };
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v18) as u32 as u64);
                    v2 = uucore::util_name();
                    v3 = v16;
                    eprintln!("{}: {}", &v2, &v1);
                }
            }
        } else {
            return v11 & -0x100 | 1;
        }
    } else {
        if v9 >= 0 {
            v4 = uucore::util_name();
            v5 = v20;
            eprint!("{}: ", &v4);
            v4 = 1;
            v5 = a0;
            v6 = a1;
            v7 = 1;
            eprint!("remove write-protected directory {}?", &v4);
            eprint!(" ");
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
            v21 = <std::io::stdio::Stderr as std::io::Write>::flush(&v0);
            if let Err(_) = v21 {
                v22 = uu_rm::prompt_file::{{closure}}(v21);
                if v22 {
                    v1 = struct16 {
                        field_0: v22
                        field_8: &g_4ea7a8
                    };
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v22) as u32 as u64);
                    v2 = uucore::util_name();
                    v3 = v20;
                    eprintln!("{}: {}", &v2, &v1);
                }
            }
        } else if a3 == 2 {
            v4 = uucore::util_name();
            v5 = v24;
            eprint!("{}: ", &v4);
            v4 = 1;
            v5 = a0;
            v6 = a1;
            v7 = 1;
            eprint!("remove directory {}?", &v4);
            eprint!(" ");
            v0 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
            v25 = <std::io::stdio::Stderr as std::io::Write>::flush(&v0);
            if let Err(_) = v25 {
                v26 = uu_rm::prompt_file::{{closure}}(v25);
                if v26 {
                    v1 = struct16 {
                        field_0: v26
                        field_8: &g_4ea7a8
                    };
                    uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v26) as u32 as u64);
                    v2 = uucore::util_name();
                    v3 = v24;
                    eprintln!("{}: {}", &v2, &v1);
                }
            }
        } else {
            return v11 & -0x100 | 1;
        }
    }
    return uucore::read_yes();
}
