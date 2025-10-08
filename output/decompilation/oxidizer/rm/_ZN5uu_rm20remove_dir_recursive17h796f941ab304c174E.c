fn uu_rm::remove_dir_recursive(a0: &[u8], a1: i64) -> u64 {
    let v0: struct32;  // [bp-0x10a]
    let v1: struct640;  // [bp-0x109]
    let v2: core::option::Option<core::result::Result<std::fs::DirEntry, std::io::error::Error>>;  // [bp-0x108], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>
    let v3: struct640;  // [bp-0xf8]
    let v4: u64;  // [bp-0xe0]
    let v5: struct40;  // [bp-0xd8]
    let v6: struct640;  // [bp-0xd0], Other Possible Types: u64
    let v7: u8;  // [bp-0xc0]
    let v8: struct24;  // [bp-0xb0]
    let v9: u64;  // [bp-0xa8]
    let v10: void*;  // [bp-0xa0]
    let v11: u64;  // [bp-0x98]
    let v12: u128;  // [bp-0x98]
    let v13: u64;  // [bp-0x90]
    let v14: iNone;  // [bp-0x88], Other Possible Types: struct712
    let v16: u64;  // [bp-0x78]
    let v17: struct32;  // [bp-0x68]
    let v18: struct640;  // [bp-0x60]
    let v19: struct32;  // [bp-0x58]
    let v20: struct32;  // [bp-0x50]
    let v21: struct640;  // [bp-0x48]
    let v22: struct9;  // [bp-0x40]
    let v24: i64;  // rbx
    let v25: core::fmt::Arguments;  // r13
    let v26: u64;  // rax
    let v27: struct640;  // rdx
    let v28: i64;  // r12
    let v29: u64;  // rbp
    let v30: iNone;  // xmm1
    let v33: u8;  // bpl
    let v34: u64;  // rax
    let v35: u64;  // rdx
    let v37: u64;  // rdx
    let v39: u64;  // [bp-0x100]
    let v41: struct640;  // [bp-0xd8], Other Possible Types: u64
    let v42: core::fmt::Arguments;  // [bp-0xc8], Other Possible Types: u64
    let v43: struct640;  // [bp-0xb0], Other Possible Types: u64

    v24 = a2;
    v25 = a1;
    v2 = core::str::converts::from_utf8(a0, a1);
    if !(v2 as i8 & 1) && v3 >= 1001 {
        v26 = std::fs::remove_dir_all(a0, a1);
        if v26 {
            v43 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v26, a0, a1);
            v41 = uucore::util_name();
            v6 = v27;
            eprint!("{}: ", &v41);
            eprintln!("{}", &v43);
        }
    } else if !std::path::Path::is_dir(a0, a1) || std::path::Path::is_symlink(a0, a1) {
        uu_rm::remove_file(a0, a1, a2);
    } else {
        v1 = *((a2 + 7) as &i8);
        if *((a2 + 7) as &i8) != 2 || uu_rm::is_dir_empty(a0, a1) || uu_rm::prompt_descend(a0, a1) {
            v22 = std::fs::read_dir(a0, a1);
            v28 = v22.field_8;
            if v28 as u8 != 2 {
                v18 = a2;
                v21 = a1;
                v17 = v22.field_0;
                v19 = v17;
                v0 = v28 as u8;
                v20 = v28 as u8;
                loop {
                    v2 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v19);
                    if let None = v2 {
                        break;
                    }
                    v30 = *((&v2 as &char + 24) as &i128);
                    v12 = *(&v39 as &i128);
                    v16 = v4;
                    v14 = v30;
                    if !v11 {
                        continue;
                    }
                    v5 = struct40 {
                        field_0: *((&v2 as &char + 8) as &i128)
                        field_16: *((&v2 as &char + 24) as &i128)
                        field_32: v4
                    };
                    v8 = std::fs::DirEntry::path(&v5);
                    uu_rm::remove_dir_recursive(v9, v10, v18);
                }
                v25 = v21;
                v24 = v18;
                if v1 == 2 {
                    goto LABEL_45cbfd;
                }
            } else if std::io::error::Error::kind(v17) as u8 == 1 {
                if v1 == 2 {
                    goto LABEL_45cbfd;
                }
            } else {
                if v1 == 2 {
LABEL_45cbfd:
                    if !uu_rm::prompt_dir(a0, v25, *((v24 + 6) as &i8), 2) {
                        return v29 & 4294967295;
                    }
                }
            }
            v34 = std::fs::remove_dir(a0, v25);
            if v34 {
                if !(v33 & 1) {
                    if uu_rm::is_readable(a0, v25) {
                        v43 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v34, a0, v25);
                        v41 = uucore::util_name();
                        v6 = v35;
                        eprint!("{}: ", &v41);
                        eprintln!("{}", &v43);
                    } else {
                        v41 = uucore::util_name();
                        v6 = v37;
                        eprint!("{}: ", &v41);
                        v41 = 1;
                        v6 = a0;
                        v42 = v25;
                        v7 = 1;
                        eprintln!("cannot remove {}: Permission denied", &v41);
                    }
                }
            } else {
                if *((v24 + 5) as &i8) == 1 {
                    uu_rm::normalize(&v11, a0, v25);
                    v41 = 1;
                    v6 = v13;
                    v42 = v14.field_0;
                    v7 = 1;
                    println!("removed directory {}", &v41);
                }
            }
        }
    }
    return v29 & 4294967295;
}
