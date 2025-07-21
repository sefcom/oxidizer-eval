fn uu_mv::handle_two_paths(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u64;  // [bp-0x1b8]
    let v1: struct16;  // [bp-0x1a8], Other Possible Types: struct24, std::path::Components, struct25, u64
    let v2: u64;  // [bp-0x1a0]
    let v3: u64;  // [bp-0x198]
    let v4: u8;  // [bp-0x190]
    let v5: struct24;  // [bp-0x168], Other Possible Types: struct25, u64
    let v6: u64;  // [bp-0x160]
    let v7: u64;  // [bp-0x158]
    let v8: u8;  // [bp-0x150]
    let v9: u64;  // [bp-0x148]
    let v10: u64;  // [bp-0x140]
    let v11: struct16;  // [bp-0x138], Other Possible Types: struct24
    let v12: u64;  // [bp-0x128]
    let v13: i64;  // [bp-0x120], Other Possible Types: struct16, struct24
    let v14: u64;  // [bp-0x118]
    let v15: i64;  // [bp-0x110], Other Possible Types: u64
    let v16: u64;  // [bp-0x108]
    let v17: u64;  // [bp-0x100]
    let v18: std::path::PathBuf;  // [bp-0xf8], Other Possible Types: struct24, struct32, core::result::Result<std::fs::Metadata, std::io::error::Error>, u64
    let v19: std::path::Components;  // [bp-0xf8]
    let v20: std::path::Components;  // [bp-0xf8]
    let v21: struct24;  // [bp-0xf0], Other Possible Types: u64
    let v22: i64;  // [bp-0xe8], Other Possible Types: u64
    let v23: u64;  // [bp-0xe0]
    let v24: void*;  // [bp-0xd8], Other Possible Types: u128
    let v25: u64;  // [bp-0xc8]
    let v26: u8;  // [bp-0x48]
    let v28: u8;  // r13b
    let v29: u64;  // rax
    let v30: u64;  // r15
    let v31: u64;  // rbp
    let v33: u64;  // r12
    let v34: u64;  // r15
    let v35: u8;  // r13b
    let v36: u8;  // al
    let v37: u64;  // r13
    let v38: u64;  // r12
    let v40: u32;  // eax
    let v41: u64;  // rax

    v28 = *((a4 + 54) as &i8);
    if v28 == 1 && uucore::features::backup_control::source_is_target_backup(a0, a1, a2, a3, *((a4 + 8) as &i64), *((a4 + 16) as &i64)) as i8 {
        v5 = 1;
        v6 = a2;
        v7 = a3;
        v8 = 1;
        v1 = 1;
        v2 = a0;
        v3 = a1;
        v4 = 1;
        v13 = &v5;
        v14 = <os_display::Quoted as core::fmt::Display>::fmt;
        v15 = &v1;
        v16 = <os_display::Quoted as core::fmt::Display>::fmt;
        v18 = "backing up ";
        v21 = 3;
        v24 = 0;
        v22 = &v13;
        v23 = 2;
        v18 = core::option::Option<T>::map_or_else(a2);
        v29 = std::io::error::Error::new(0, &v26);
        goto LABEL_0x4e9a93;
    }
    v0 = a2;
    v10 = a3;
    v18 = std::fs::symlink_metadata(a0, a1);
    if let Err(_) = v18 {
        if uucore::features::fs::path_ends_with_terminator(a0, a1) as i8 {
            v1 = struct25 {
                field_0: 1
                field_8: a0
                field_16: a1
                field_24: 1
            };
            v21 = <T as alloc::string::ToString>::to_string(&v1);
        } else {
            v1 = struct25 {
                field_0: 1
                field_8: a0
                field_16: a1
                field_24: 1
            };
            v21 = <T as alloc::string::ToString>::to_string(&v1);
        }
        goto LABEL_0x4e9a93;
    }
    v17 = a1;
    v1 = std::path::Path::components(a0, v17);
    v30 = a0;
    v19 = std::path::Path::components(v0, v10);
    v31 = v17;
    v1 = std::path::Components {
        path: &[u8] {
            ptr: <UNKNOWN>
            len: <UNKNOWN>
        }
        prefix: <UNKNOWN>
        front: <UNKNOWN>
        back: <UNKNOWN>
        has_physical_root: <UNKNOWN>
    };
    if !<std::path::Components as core::cmp::PartialEq>::eq(&v1, &v19) && !uucore::features::fs::are_hardlinks_to_same_file(v30, v31, v0, v10) as i8 {
        if !(!v28 && uucore::features::fs::are_hardlinks_or_one_way_symlink_to_same_file(v30, v31, v0, v10) as i8) {
            goto LABEL_4e93c2;
        }
LABEL_4e9549:
        v34 = v9;
        v1 = std::path::Path::components(v34, v31);
        v20 = std::path::Path::components(".");
        if <std::path::Components as core::cmp::PartialEq>::eq(&v1, &v20) || std::path::Path::ends_with(v34, v31, "/.") || std::path::Path::is_file(v34, v31) {
            v5 = struct25 {
                field_0: 1
                field_8: v34
                field_16: v31
                field_24: 1
            };
            v11 = <T as alloc::string::ToString>::to_string(&v5);
            v1 = struct25 {
                field_0: 1
                field_8: v0
                field_16: v10
                field_24: 1
            };
            v13 = <T as alloc::string::ToString>::to_string(&v1);
            v23 = v12;
            v21 = v11.field_0;
            v24 = v13.field_0;
            v25 = v15;
            v18 = 2;
            goto LABEL_0x4e9a93;
        } else {
            v1 = struct16 {
                field_0: v34
                field_8: v31
            };
            v21 = <T as alloc::string::ToString>::to_string(&v1);
        }
    }
    if !v28 {
        goto LABEL_4e9549;
    }
LABEL_4e93c2:
    v33 = v10;
    v35 = std::path::Path::is_dir(v0, v33);
    v36 = std::path::Path::is_dir(v9, v31);
    if !uucore::features::fs::path_ends_with_terminator(v0, v33) as i8 {
        if !v35 {
            goto LABEL_4e966c;
        }
LABEL_4e94ac:
        if !*((a4 + 48) as &i8) {
            v37 = v0;
            if !std::path::Path::starts_with(v37, v33, v9, v31) {
                v18 = std::sys::pal::unix::os::split_paths::bytes_to_path(v9, v31);
                return uu_mv::move_files_into_dir(&v18, 1, v37, v33, a4);
            }
            v11 = struct16 {
                field_0: v9
                field_8: v31
            };
            v5 = <T as alloc::string::ToString>::to_string(&v11);
            v13 = struct16 {
                field_0: v37
                field_8: v33
            };
            v1 = <T as alloc::string::ToString>::to_string(&v13);
            v23 = v7;
            v21 = v5.field_0;
            v24 = v1.field_0;
            v25 = v3;
            v18 = 4;
            goto LABEL_0x4e9a93;
        } else if std::path::Path::is_dir(v9, v31) {
            v18 = struct32 {
                field_0: v9
                field_8: v31
                field_16: v0
                field_24: v33
            };
            return <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_mv::rename(v9, v31, v22, v33, a4, 0), &v18);
        } else {
            v1 = struct25 {
                field_0: 1
                field_8: v0
                field_16: v33
                field_24: 1
            };
            v21 = <T as alloc::string::ToString>::to_string(&v1);
        }
        goto LABEL_0x4e9a93;
    }
    if !(!v35) {
        goto LABEL_4e94ac;
    }
    if !v36 && !*((a4 + 48) as &i8) && *((a4 + 55) as &i8) != 2 {
        v1 = struct25 {
            field_0: 1
            field_8: v0
            field_16: v33
            field_24: 1
        };
        v21 = <T as alloc::string::ToString>::to_string(&v1);
        goto LABEL_0x4e9a93;
    }
LABEL_4e966c:
    v18 = std::fs::metadata(v0, v33);
    v38 = v9;
    if v18 as i32 == 2 || !std::path::Path::is_dir(v38, v31) {
        v41 = uu_mv::rename(v38, v31, v0, v10, a4, 0);
        return (!v41 ? 0 : uu_mv::handle_two_paths::{{closure}}(v41));
    }
    v40 = *((a4 + 53) as &i8);
}
