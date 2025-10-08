fn fd::output::print_entry(a0: u64, a1: u64, a2: i64) -> long long {
    let v0: core::fmt::Arguments;  // [bp-0x98]
    let v1: u128;  // [bp-0x68]
    let v2: u64;  // [bp-0x58]
    let v3: core::fmt::rt::Argument;  // [bp-0x50]
    let v4: u128;  // [bp-0x50]
    let v5: struct24;  // [bp-0x40]
    let v8: u64;  // 4100
    let v9: u64;  // cc_ndep
    let v10: struct112;  // bpl
    let v11: u64;  // r15
    let v12: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // rax
    let v13: u64;  // rax
    let v14: Result<struct24, struct24>;  // rax
    let v15: u64;  // rax

    if *((a2 + 488) as &i8) {
        v5 = fd::hyperlink::PathUrl::new(fd::dir_entry::DirEntry::path(a1), a2);
        v8 = v5.field_0;
        v10 = _ccall(1, 8, 0, v8, v9);
        if !((((0 ^ v8) & (0 ^ -(v8))) >> 63) as char) {
            v2 = *((&v5.field_8 as &char + 8) as &i64);
            v1 = *(&v5.field_0 as &i128);
            v3 = core::fmt::rt::Argument {
                ty: &v1 as u8
            };
            v0 = core::fmt::Arguments {
                pieces: ["\x1b]8;;", "\x1b\\"]
                args: [v4]
                fmt: 0
            };
            v11 = std::io::Write::write_fmt(a0, &v0);
            if v11 {
                return v11;
            }
        }
        if *((a2 + 48) as &i32) != 2 {
            goto LABEL_5f69b0;
        }
LABEL_5f6985:
        if (((0 ^ *((a2 + 200) as &i64)) & (0 ^ -(*((a2 + 200) as &i64)))) >> 63) as char {
            v12 = fd::output::print_entry_uncolorized(a0, a1, a2);
            if let Ok(_) = v12 {
                return v12;
            }
        } else {
            v13 = fd::output::print_entry_colorized(a0, a1, a2, a2 + 200);
            if v13 {
                return v13;
            }
        }
    } else {
        if *((a2 + 48) as &i32) == 2 {
            goto LABEL_5f6985;
        }
LABEL_5f69b0:
        v14 = fd::output::print_entry_format(a0, a1, a2, a2 + 48);
        if let Ok(_) = v14 {
            return v14;
        }
    }
    if v10 {
        v0 = core::fmt::Arguments {
            pieces: ["\x1b]8;;\x1b\\"]
            args: []
            fmt: 0
        };
        v15 = std::io::Write::write_fmt(a0, &v0);
        if v15 {
            return v15;
        }
    }
    v0 = core::fmt::Arguments {
        pieces: &[&str] {
            ptr: (!*((a2 + 482) as &i8) ? "\n" : "\x00")
            len: 1
        }
        args: []
        fmt: 0
    };
    return std::io::Write::write_fmt(a0, &v0);
}
