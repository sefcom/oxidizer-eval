fn uu_rm::prompt_file_permission_readonly(a0: &std::path::Path, a1: i8, a2: i32) -> u64 {
    let v0: struct16;  // [bp-0x120]
    let v1: u64;  // [bp-0x110]
    let v2: u64;  // [bp-0x108]
    let v3: core::fmt::rt::Argument;  // [bp-0x100], Other Possible Types: u64
    let v4: u64;  // [bp-0xf8]
    let v5: u64;  // [bp-0xf0]
    let v6: u8;  // [bp-0xe8]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: std::io::stdio::Stderr
    let v9: u64;  // rbp
    let v10: u8;  // r13b
    let v11: u32;  // ebp
    let v12: u64;  // rdx
    let v13: u64;  // rdi
    let v14: u64;  // rsi
    let v15: core::result::Result<(), std::io::error::Error>;  // rax
    let v16: core::result::Result<(), std::io::error::Error>;  // rax
    let v18: u64;  // rdx
    let v19: u64;  // rdi
    let v20: u64;  // rsi
    let v21: core::result::Result<(), std::io::error::Error>;  // rax
    let v22: void*;  // rax

    v9 = a2;
    if a1 != 2 {
        v10 = 1;
        if (a1 & 1) {
            goto LABEL_45e154;
        }
    }
    std::io::stdio::stdin();
    std::sys::io::is_terminal::isatty::is_terminal();
LABEL_45e154:
    v7 = std::fs::metadata(a0);
    v11 = v9 & -0x100 | 1;
    if ((v10 ^ 1) & v9 == 3) {
        return v11;
    }
    if v7 as i64 == 2 {
LABEL_45e1b5:
        v3 = uucore::util_name();
        v4 = v18;
        eprint!("{}: ", &v3);
        v3 = 1;
        v4 = v19;
        v5 = v20;
        v6 = 1;
        eprint!("remove write-protected regular file {}?", &v3);
        eprint!(" ");
        v7 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
        v21 = <std::io::stdio::Stderr as std::io::Write>::flush(&v7);
        if let Err(_) = v21 {
            v22 = uu_rm::prompt_file::{{closure}}(v21);
            if v22 {
                v0 = struct16 {
                    field_0: v22
                    field_8: &g_4ea7a8
                };
                uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v22) as u32 as u64);
                v1 = uucore::util_name();
                v2 = v18;
                eprintln!("{}: {}", &v1, &v0);
            }
        }
        v11 = uucore::read_yes();
    } else if !uu_rm::is_writable(a0) {
        if *((&v7 as &char + 80) as &i64) {
            goto LABEL_45e1b5;
        }
        v3 = uucore::util_name();
        v4 = v12;
        eprint!("{}: ", &v3);
        v3 = 1;
        v4 = v13;
        v5 = v14;
        v6 = 1;
        eprint!("remove write-protected regular empty file {}?", &v3);
        eprint!(" ");
        v7 = &_ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E.inner;
        v15 = <std::io::stdio::Stderr as std::io::Write>::flush(&v7);
        if let Err(_) = v15 {
            v16 = uu_rm::prompt_file::{{closure}}(v15);
            if let Err(_) = v16 {
                v0 = struct16 {
                    field_0: v16
                    field_8: &g_4ea7a8
                };
                uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v16) as u32 as u64);
                v1 = uucore::util_name();
                v2 = v12;
                eprintln!("{}: {}", &v1, &v0);
            }
        }
        v11 = uucore::read_yes();
    }
    return v11;
}
