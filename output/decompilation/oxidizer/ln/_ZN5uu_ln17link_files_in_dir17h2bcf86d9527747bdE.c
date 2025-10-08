fn uu_ln::link_files_in_dir(a0: i64, a1: i64, a2: &[u8], a3: i64) -> u64 {
    let v0: u8;  // [bp-0x129]
    let v1: void*;  // [bp-0x120], Other Possible Types: core::result::Result<&str, core::str::error::Utf8Error>, struct24, struct32, struct640, u64
    let v2: struct24;  // [bp-0x120], Other Possible Types: struct640, u64
    let v3: struct640;  // [bp-0x120]
    let v4: std::path::PathBuf;  // [bp-0x118], Other Possible Types: struct640, u64
    let v5: struct640;  // [bp-0x118]
    let v6: struct640;  // [bp-0x118], Other Possible Types: u64
    let v7: struct712;  // [bp-0x110], Other Possible Types: u64
    let v8: struct712;  // [bp-0x110]
    let v9: struct712;  // [bp-0x110], Other Possible Types: u64
    let v10: i8;  // [bp-0x100]
    let v11: struct640;  // [bp-0xe8], Other Possible Types: struct712
    let v12: struct24;  // [bp-0xe8], Other Possible Types: u64
    let v13: u64;  // [bp-0xe8]
    let v14: u64;  // [bp-0xe0]
    let v15: u64;  // [bp-0xd8]
    let v16: u8;  // [sp-0xd0]
    let v17: struct640;  // [bp-0xc8]
    let v18: u128;  // [bp-0xc8]
    let v19: u128;  // [bp-0xb8]
    let v20: u64;  // [bp-0x98]
    let v21: u64;  // [bp-0x90]
    let v22: std::path::PathBuf;  // [bp-0x90], Other Possible Types: struct24
    let v23: struct640;  // [bp-0x88]
    let v24: struct640;  // [bp-0x80]
    let v25: i64;  // [bp-0x78]
    let v26: u64;  // [bp-0x70]
    let v27: iNone;  // [sp-0x68]
    let v29: iNone;  // [bp-0x58]
    let v30: iNone;  // [bp-0x48]
    let v33: u64;  // rdx
    let v34: void*;  // rax
    let v35: u8;  // bl
    let v36: void*;  // r12
    let v37: void*;  // rbp
    let v38: u64;  // rax
    let v39: u64;  // rax
    let v40: u64;  // rcx, Other Possible Types: unsigned long
    let v41: u64;  // rax
    let v43: void*;  // rbx

    if !std::path::Path::is_dir(a2) {
        v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2);
        v1 = 0;
        return alloc::boxed::Box<T>::new(&v1) as u64;
    }
    v1 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, std::thread::local::LocalKey<T>::with(), v33);
    v30 = *(&v10 as &i128);
    v29 = v1.field_16;
    v27 = v1.field_0;
    if !a1 {
        return v43;
    }
    v26 = a0 + a1 * 24;
    v0 = *((v25 + 54) as &i8) == 2 & *((v25 + 52) as &i8);
    v34 = a0 + 24;
    v35 = 1;
    loop {
        v36 = v37;
        v37 = v34;
        if v0 && std::path::Path::is_symlink(a2) {
            v1 = v3;
            v5 = v4;
            v8 = v7;
            if std::path::Path::is_file(a2) {
                v20 = std::fs::remove_file(a2);
                if v20 {
                    v17 = v20;
                    v12 = uucore::util_name();
                    v14 = v33;
                    eprint!("{}: ", &v12);
                    v11 = 1;
                    v14 = v33;
                    v15 = v40;
                    v16 = 1;
                    eprintln!("Could not update {}: {}", &v11, &v17);
                    v1 = v2;
                    v5 = v6;
                    v8 = v9;
                } else {
                    v1 = v3;
                    v5 = v4;
                    v8 = v7;
                }
            }
            v7 = v8;
            v4 = v5;
            v3 = v1;
            v5 = v4;
            v8 = v7;
            if std::path::Path::is_dir(a2) {
                v20 = std::fs::remove_dir(a2);
                if v20 {
                    v17 = v20;
                    v12 = uucore::util_name();
                    v14 = v33;
                    eprint!("{}: ", &v12);
                    v11 = 1;
                    v14 = v33;
                    v15 = v40;
                    v16 = 1;
                    eprintln!("Could not update {}: {}", &v11, &v17);
                    v3 = v2;
                    v5 = v6;
                    v8 = v9;
                } else {
                    v3 = v1;
                    v5 = v4;
                    v8 = v7;
                }
            }
            v7 = v8;
            v4 = v5;
            v22 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2);
        } else {
            v1 = core::str::converts::from_utf8(v36[8] as i64, v36[16] as i64);
            match v1 {
                Err(_) => {
                    v12 = uucore::util_name();
                    v14 = v33;
                    eprint!("{}: ", &v12);
                    v11 = 1;
                    v14 = v36[8] as i64;
                    v15 = v36[16] as i64;
                    v16 = 1;
                    eprintln!("cannot stat {}: No such file or directory", &v11);
                    v1 = v2;
                    v4 = v6;
                    v7 = v9;
                    if v37 == v26 {
                        goto LABEL_465d9e;
                    }
                    goto LABEL_465640;
                },
                Ok(_) => {
                    v39 = std::path::Path::file_name(v4, v7);
                    if v39 {
                        v22 = std::path::Path::join(a2, v40, v39);
                    } else {
                        v22 = std::path::Path::join(a2, v40, v4);
                    }
                },
            }
        }
        if hashbrown::map::HashMap<K,V,S,A>::get_inner(&v27, &v21) {
            v12 = uucore::util_name();
            v14 = v33;
            eprint!("{}: ", &v12);
            v18 = *(&v23 as &i128);
            v19 = v36[8] as i128;
            eprintln!("will not overwrite just-created '{}' with '{}'", &v17, &v19);
            v1 = v2;
            v4 = v6;
            v7 = v9;
            v12 = v13;
        } else {
            v41 = uu_ln::link(v36[8] as i64, v36[16] as i64, v23, v24, a3);
            if !v41 {
                goto LABEL_465cf8;
            }
            v17 = v41;
            v12 = uucore::util_name();
            v14 = v33;
            eprint!("{}: ", &v12);
            eprintln!("{}", &v17);
            v1 = v2;
            v4 = v6;
            v7 = v9;
            v12 = v13;
        }
        v11 = v12;
        v3 = v1;
        v35 = 0;
LABEL_465cf8:
        v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v23, v24 as u32);
        v12 = v2;
        v27 = hashbrown::map::HashMap<K,V,S,A>::insert(&v12);
        v1 = v3;
        if v37 == v26 {
            if (v35 & 1) {
                break;
            }
LABEL_465d9e:
            v1 = 1;
            v43 = alloc::boxed::Box<T>::new(&v1) as u64;
            break;
        }
LABEL_465640:
        v3 = v1;
        v34 = v38 + v37;
    }
    return v43;
}
