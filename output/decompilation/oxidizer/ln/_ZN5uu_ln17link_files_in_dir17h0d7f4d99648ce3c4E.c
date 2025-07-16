fn uu_ln::link_files_in_dir(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> long long {
    let v0: u8;  // [bp-0x129]
    let v1: u64;  // [bp-0x128], Other Possible Types: struct24, core::result::Result<&str, core::str::error::Utf8Error>, struct32, std::path::PathBuf
    let v2: u64;  // [bp-0x128]
    let v3: u64;  // [bp-0x128]
    let v4: u64;  // [bp-0x128]
    let v5: u64;  // [bp-0x120]
    let v6: u64;  // [bp-0x120]
    let v7: u64;  // [bp-0x120]
    let v8: u64;  // [bp-0x118], Other Possible Types: struct584
    let v9: struct584;  // [bp-0x118], Other Possible Types: u64
    let v10: u64;  // [bp-0x118], Other Possible Types: struct584
    let v12: u8;  // [bp-0x108]
    let v13: u64;  // [bp-0xf8]
    let v14: u64;  // [bp-0xf8]
    let v15: u128;  // [bp-0xf8]
    let v16: u64;  // [bp-0xf0]
    let v17: u64;  // [bp-0xe8], Other Possible Types: struct584
    let v18: u8;  // [bp-0xe0]
    let v19: u32;  // [bp-0xcc]
    let v20: u64;  // [bp-0xc8]
    let v21: u128;  // [bp-0xc8]
    let v22: u128;  // [bp-0xb8]
    let v23: u64;  // [bp-0x98]
    let v24: std::path::PathBuf;  // [bp-0x98]
    let v25: struct24;  // [bp-0x98]
    let v26: u64;  // [bp-0x90]
    let v27: u64;  // [bp-0x88]
    let v28: u64;  // [bp-0x78]
    let v29: u64;  // [bp-0x70]
    let v30: u8;  // [bp-0x68]
    let v31: u8;  // [bp-0x58]
    let v32: u8;  // [bp-0x48]
    let v35: u32;  // rdx
    let v36: i64;  // rax
    let v37: i64;  // r15
    let v38: core::result::Result<(), std::io::error::Error>;  // rax
    let v39: core::option::Option<&std::ffi::os_str::OsStr>;  // rax
    let v40: u64;  // rax
    let v41: u64;  // rdx
    let v42: u64;  // rax
    let v43: &u64;  // rdx
    let v44: void*;  // rbx

    if !std::path::Path::is_dir(a2, a3) {
        v1 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
        return alloc::boxed::Box<T>::new(&v1);
    }
    v1 = std::thread::local::LocalKey<T>::try_with();
    v1 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, core::result::Result<T,E>::expect(&v1), v35);
    memcpy(&v32, &v12, 16);
    memcpy(&v31, &v1, 16);
    memcpy(&v30, &v1, 16);
    v28 = a0;
    v29 = a0 + a1 * 24;
    v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v28);
    if !v36 {
        return v44;
    }
    v37 = v36;
    v0 = *((a4 + 54) as &i8) == 2 & *((a4 + 52) as &i8);
    v19 = v36 as u32 & -0x100 | 1;
    do {
        if v0 && std::path::Path::is_symlink() {
            v1 = v2;
            v6 = v5;
            v9 = v8;
            if std::path::Path::is_file(a2, a3) {
                v38 = std::fs::remove_file(a2, a3);
                v1 = v2;
                v6 = v5;
                v9 = v8;
                if let Err(_) = v38 {
                    v20 = v38;
                    v13 = uucore::util_name();
                    v16 = v35;
                    eprint!("{}: ", &v13);
                    v13 = 1;
                    v16 = a2;
                    v17 = a3;
                    v18 = 1;
                    eprintln!("Could not update {}: {}", &v13, &v20);
                    v1 = v3;
                    v6 = v7;
                    v9 = v10;
                }
            }
            v8 = v9;
            v5 = v6;
            v4 = v1;
            v6 = v5;
            v9 = v8;
            if std::path::Path::is_dir(a2, a3) {
                v40 = std::fs::remove_dir(a2, a3);
                v4 = v1;
                v6 = v5;
                v9 = v8;
                if v40 {
                    v20 = v40;
                    v13 = uucore::util_name();
                    v16 = v35;
                    eprint!("{}: ", &v13);
                    v13 = 1;
                    v16 = a2;
                    v17 = a3;
                    v18 = 1;
                    eprintln!("Could not update {}: {}", &v13, &v20);
                    v4 = v3;
                    v6 = v7;
                    v9 = v10;
                }
            }
            v8 = v9;
            v5 = v6;
            v2 = v4;
            v24 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
        } else {
            v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(*((v37 + 8) as &i64), *((v37 + 16) as &i64));
            match v1 {
                Err(_) => {
                    v13 = uucore::util_name();
                    v16 = v35;
                    eprint!("{}: ", &v13);
                    v13 = 1;
                    v16 = *((v37 + 8) as &i64);
                    v17 = *((v37 + 16) as &i64);
                    v18 = 1;
                    eprintln!("cannot stat {}: No such file or directory", &v13);
                    v19 = 0;
                    v1 = v3;
                    v5 = v7;
                    v8 = v10;
                    continue;
                },
                Ok(_) => {
                    v39 = std::path::Path::file_name(v5, v8) as u64;
                    match v39 {
                        Some(_) => {
                            v24 = std::path::Path::join(a2, a3, v39, v35);
                        },
                        None => {
                            v24 = std::path::Path::join(a2, a3, v5, v8);
                        },
                    }
                },
            }
        }
        if hashbrown::map::HashMap<K,V,S,A>::get_inner(&v30, &v23, v41) {
            v13 = uucore::util_name();
            v16 = v35;
            eprint!("{}: ", &v13);
            v21 = *(&v26 as &i128);
            v22 = *((v37 + 8) as &i128);
            eprintln!("will not overwrite just-created '{}' with '{}'", &v20, &v22);
            v1 = v3;
            v5 = v7;
            v8 = v10;
            v13 = v14;
        } else {
            v42 = uu_ln::link(*((v37 + 8) as &i64), *((v37 + 16) as &i64), v26, v27, a4);
            if !v42 {
                goto LABEL_4ba180;
            }
            v20 = v42;
            v13 = uucore::util_name();
            v16 = v35;
            eprint!("{}: ", &v13);
            eprintln!("{}", &v20);
            v1 = v3;
            v5 = v7;
            v8 = v10;
            v13 = v14;
        }
        v2 = v1;
        v19 = 0;
LABEL_4ba180:
        v25 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v43);
        v17 = v8;
        v15 = *(&v2 as &i128);
        hashbrown::map::HashMap<K,V,S,A>::insert(&v30, &v15, a2, a3);
        v1 = v2;
    } while ((v8 = v8, v5 = v5, v2 = v1, v37 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v28), v37));
    if !(v19 as i8 & 1) {
        v44 = alloc::boxed::Box<T>::new(&v2);
    }
    return v44;
}
