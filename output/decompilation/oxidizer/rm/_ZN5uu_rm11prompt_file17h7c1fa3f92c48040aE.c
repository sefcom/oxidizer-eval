fn uu_rm::prompt_file(a0: &std::path::Path, a1: i8, a2: i32) -> u64 {
    let v0: struct16;  // [bp-0x158], Other Possible Types: u64
    let v1: u64;  // [bp-0x150]
    let v2: std::io::stdio::Stderr;  // [bp-0x148], Other Possible Types: u64
    let v3: u64;  // [bp-0x140]
    let v4: u64;  // [bp-0x138]
    let v5: u8;  // [bp-0x130]
    let v6: u64;  // [bp-0x118]
    let v7: core::result::Result<(), std::io::error::Error>;  // [bp-0x110], Other Possible Types: u64
    let v8: u64;  // [bp-0x108]
    let v9: u8;  // [bp-0x100]
    let v10: u64;  // [bp-0xf8]
    let v11: struct16;  // [bp-0xf0]
    let v12: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: std::io::stdio::Stderr
    let v13: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v15: u64;  // rbx
    let v16: u64;  // r13
    let v17: alloc::string::String;  // ebp
    let v18: u64;  // rdi
    let v19: struct640;  // rdi
    let v20: u64;  // rdx
    let v21: u64;  // rdi
    let v22: u64;  // rsi
    let v23: core::result::Result<(), std::io::error::Error>;  // rax
    let v24: void*;  // rax
    let v28: u64;  // rdx
    let v29: u64;  // rdi
    let v30: u64;  // rsi
    let v31: core::result::Result<(), std::io::error::Error>;  // rax
    let v32: core::fmt::rt::Argument;  // rax
    let v34: u64;  // rdx
    let v35: u64;  // rdi
    let v36: u64;  // rsi
    let v37: core::result::Result<(), std::io::error::Error>;  // rax
    let v38: void*;  // rax
    let v46: u8;  // rsi

    v15 = a2;
    v16 = v15 & 4294967295;
    v17 = vvar_93{reg 56} & -0x100 | 1;
    if v16 != 2 {
        if !v16 {
            return vvar_93{reg 56} & -0x100 | 1;
        }
LABEL_45dc56:
        v13 = std::fs::metadata(a0);
        if let Ok(_) = v13 {
            if v15 as u8 != 2 || !uu_rm::is_writable(a0) as u8 {
                return uu_rm::prompt_file_permission_readonly(a0, v46, a1);
            }
            if *((&v13 as &char + 80) as &i64) {
                v2 = uucore::util_name();
                v3 = v28;
                eprint!("{}: ", &v2);
                v2 = 1;
                v3 = v29;
                v4 = v30;
                v5 = 1;
                eprint!("remove file {}?", &v2);
                eprint!(" ");
                v12 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
                v31 = <std::io::stdio::Stderr as std::io::Write>::flush(&v12);
                if let Err(_) = v31 {
                    v32 = uu_rm::prompt_file::{{closure}}(v31);
                    if v32 {
                        v0 = struct16 {
                            field_0: v32
                            field_8: &g_4ea7a8
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v32) as u32 as u64);
                        v6 = uucore::util_name();
                        v7 = v28;
                        eprintln!("{}: {}", &v6, &v0);
                    }
                }
            } else {
                v2 = uucore::util_name();
                v3 = v34;
                eprint!("{}: ", &v2);
                v2 = 1;
                v3 = v35;
                v4 = v36;
                v5 = 1;
                eprint!("remove regular empty file {}?", &v2);
                eprint!(" ");
                v12 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
                v37 = <std::io::stdio::Stderr as std::io::Write>::flush(&v12);
                if let Err(_) = v37 {
                    v38 = uu_rm::prompt_file::{{closure}}(v37);
                    if v38 {
                        v0 = struct16 {
                            field_0: v38
                            field_8: &g_4ea7a8
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v38) as u32 as u64);
                        v6 = uucore::util_name();
                        v7 = v34;
                        eprintln!("{}: {}", &v6, &v0);
                    }
                }
            }
            return uucore::read_yes() as u32 as u64;
            return uu_rm::prompt_file_permission_readonly(a0, v46, a1);
        }
    } else {
        v12 = std::fs::symlink_metadata(a0);
        v18 = 2;
        v10 = v12 as i64;
        v19 = 2;
        if v12 as i64 == 2 || (0xf000 & *((&v12 as &char + 56) as &i32)) != 0xa000 {
            goto LABEL_45dc56;
        }
        v6 = uucore::util_name();
        v7 = v20;
        eprint!("{}: ", &v6);
        v6 = 1;
        v7 = v21;
        v8 = v22;
        v9 = 1;
        eprint!("remove symbolic link {}?", &v6);
        eprint!(" ");
        v2 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
        v23 = <std::io::stdio::Stderr as std::io::Write>::flush(&v2);
        if let Err(_) = v23 {
            v24 = uu_rm::prompt_file::{{closure}}(v23);
            if v24 {
                v11 = struct16 {
                    field_0: v24
                    field_8: &g_4ea7a8
                };
                uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v24) as u32 as u64);
                v0 = uucore::util_name();
                v1 = v20;
                eprintln!("{}: {}", &v0, &v11);
            }
        }
        v17 = uucore::read_yes();
    }
    return v17 as u64;
}
