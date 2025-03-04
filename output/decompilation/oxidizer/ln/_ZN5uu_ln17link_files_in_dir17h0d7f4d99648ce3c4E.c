fn uu_ln::link_files_in_dir(a0: u32, a1: u32, a2: u32, a3: u32, a4: &u64) -> u64 {
    let v0: i8;  // [sp-0x129]
    let v1: struct24;  // [sp-0x128], Other Possible Types: Option<struct16>, unsigned long, Result<struct16, struct10>, struct32
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i64;  // [sp-0x110]
    let v6: i64;  // [sp-0xf8], Other Possible Types: struct24
    let v7: i64;  // [sp-0xf0]
    let v8: i64;  // [sp-0xe8]
    let v9: i8;  // [bp-0xe0]
    let v10: i32;  // [sp-0xcc]
    let v11: i64;  // [sp-0xc8], Other Possible Types: int
    let v12: iNone;  // [bp-0xb8]
    let v13: struct24;  // [sp-0x98], Other Possible Types: int
    let v14: struct64;  // [bp-0x78], Other Possible Types: int
    let v15: struct16;  // [sp-0x68]
    let v17: i64;  // rax
    let v18: i64;  // rdx
    let v20: iNone;  // ymm0
    let v21: iNone;  // ymm0
    let v22: i64;  // rax
    let v23: i64;  // r15
    let v24: i64;  // rbp
    let v25: i64;  // r12
    let v26: i64;  // rax
    let v27: i64;  // r12
    let v28: i64;  // rbp
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // rax
    let v32: iNone;  // xmm0
    let v33: iNone;  // xmm0
    let v35: i64;  // rbx

    if !std::path::Path::is_dir(a2, a3) as i8 {
        v1 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
        v4 = 0x8000000000000000;
        v17 = alloc::boxed::Box<T>::new(&v1);
        return v17;
    }
    v1 = std::thread::local::LocalKey<T>::try_with();
    v1 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, core::result::Result<T,E>::expect(&v1), v18);
    v21 = v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1.field_0;
    v14 = struct64 {
        field_0: a0
        field_8: a0 + a1 * 24
        field_16: v19
        field_32: v1.field_16
        field_48: *(&v5 as &i128)
    };
    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
    if !v22 {
LABEL_4ba21e:
    } else {
        v23 = v22;
        v0 = *((a4 + 54) as &i8) == 2 & *((a4 + 52) as &i8);
        v10 = (v22 & -0x100 | 1) as u32;
        do {
            if v0 && std::path::Path::is_symlink(a2, a3) as i8 {
                if std::path::Path::is_file(a2, a3) as i8 {
                    v26 = std::fs::remove_file(a2, a3);
                    if v26 {
                        v11 = v26;
                        v7 = v18;
                        v6 = 1;
                        v7 = a2;
                        v8 = a3;
                        *(&v9 as &i8) = 1;
                        show_error!("Could not update {}: {}", &v6, &v11);
                    }
                }
                if std::path::Path::is_dir(a2, a3) as i8 {
                    v30 = std::fs::remove_dir(a2, a3);
                    if v30 {
                        v11 = v30;
                        v7 = v18;
                        v6 = 1;
                        v7 = a2;
                        v8 = a3;
                        *(&v9 as &i8) = 1;
                        show_error!("Could not update {}: {}", &v6, &v11);
                    }
                }
                v13 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
            } else {
                v24 = *((v23 + 8) as &i64);
                v25 = *((v23 + 16) as &i64);
                v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v24, v25);
                if !v1 {
                    v27 = v2;
                    v28 = v3;
                    v29 = std::path::Path::file_name(v27, v28);
                    if !v29 {
                        v13 = std::path::Path::join(a2, a3, v27, v28);
                    } else {
                        v13 = std::path::Path::join(a2, a3, v29, v18);
                    }
                } else {
                    v7 = v18;
                    v6 = 1;
                    v7 = v24;
                    v8 = v25;
                    *(&v9 as &i8) = 1;
                    show_error!("cannot stat {}: No such file or directory", &v6);
                    v10 = 0;
                    continue;
                }
            }
            if hashbrown::map::HashMap<K,V,S,A>::get_inner(&v14, &v13) {
                v7 = v18;
                v32 = (&v13)[8] as i128;
                v11 = v32;
                v33 = *((v23 + 8) as &i128);
                v21 = (v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 as u256;
                v12 = v33;
                show_error!("will not overwrite just-created '{}' with '{}'", &v11, &v12);
            } else {
                v31 = uu_ln::link(*((v23 + 8) as &i64), *((v23 + 16) as &i64), (&v13)[8] as i64, (&v13)[16] as i64, a4);
                if !v31 {
                    goto LABEL_4ba180;
                }
                v11 = v31;
                v7 = v18;
                show_error!("{}", &v11);
            }
            v10 = 0;
LABEL_4ba180:
            v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v13);
            v21 = v21 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v1.field_0 as &i128);
            *(&v6.field_0 as &struct24) = struct24 {
                field_0: v34
                field_16: v3
            };
            v15 = hashbrown::map::HashMap<K,V,S,A>::insert(&v6);
        } while ((v23 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14), v23));
        if !(!(v10 as i8 & 1)) {
            goto LABEL_4ba21e;
        }
        v4 = 9223372036854775809;
        alloc::boxed::Box<T>::new(&v1);
    }
    v17 = v35;
    return v17;
}
