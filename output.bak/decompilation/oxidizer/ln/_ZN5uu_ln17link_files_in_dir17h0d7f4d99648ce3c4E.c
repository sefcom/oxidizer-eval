fn uu_ln::link_files_in_dir(a0: u32, a1: u32, a2: u32, a3: u32, a4: &u64) -> u64 {
    let v0: i8;  // [sp-0x129]
    let v1: i256;  // [sp-0x128], Other Possible Types: struct24, struct32, Option<struct16>, Result<struct16, struct10>
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i64;  // [sp-0x110]
    let v6: i64;  // [sp-0xf8], Other Possible Types: struct24
    let v7: i64;  // [sp-0xf0]
    let v8: i64;  // [sp-0xe8]
    let v9: i8;  // [bp-0xe0]
    let v10: i32;  // [sp-0xcc]
    let v11: i64;  // [sp-0xc8]
    let v12: i128;  // [bp-0xb8]
    let v13: struct24;  // [sp-0x98], Other Possible Types: i192
    let v14: struct64;  // [bp-0x78]
    let v15: struct16;  // [sp-0x68]
    let v17: i64;  // rax
    let v18: i64;  // rdx
    let v19: i256;  // ymm0
    let v20: i256;  // ymm0
    let v21: i64;  // rax
    let v22: i64;  // rbp
    let v23: i64;  // r12
    let v24: i64;  // rax
    let v25: i64;  // r12
    let v26: i64;  // rbp
    let v27: i64;  // rax
    let v28: i64;  // rax
    let v29: i64;  // rax
    let v30: i128;  // xmm0
    let v31: i128;  // xmm0

    if !std::path::Path::is_dir(a2, a3) as i8 {
        v1 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
        v4 = 0x8000000000000000;
        v17 = alloc::boxed::Box<T>::new(&v1);
        return v17;
    }
    v1 = std::thread::local::LocalKey<T>::try_with();
    v1 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, core::result::Result<T,E>::expect(&v1), v18);
    v20 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1;
    v14 = struct64 {
        field_0: a0
        field_8: a0 + a1 * 24
        field_16: v15
        field_32: *((&v1 as &char + 16) as &i128)
        field_48: v5
    };
    v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
    if !v21 {
LABEL_4ba21e:
        v17 = 0;
    } else {
        v0 = *((a4 + 54) as &i8) == 2 & *((a4 + 52) as &i8);
        v10 = v21 | -0x100 | 1;
        do {
            if v0 && std::path::Path::is_symlink(a2, a3) as i8 {
                v1 = v1;
                v2 = v2;
                v3 = v3;
                if std::path::Path::is_file(a2, a3) as i8 {
                    v24 = std::fs::remove_file(a2, a3);
                    v1 = v1;
                    v2 = v2;
                    v3 = v3;
                    if v24 {
                        v11 = v24;
                        v6 = uucore::util_name();
                        v7 = v18;
                        eprint!("{:?}: ", &v6);
                        v6 = 1;
                        v7 = a2;
                        v8 = a3;
                        v9 = 1;
                        eprintln!("Could not update {:?}: {:?}", &v6, &v11);
                        v1 = v1;
                        v2 = v2;
                        v3 = v3;
                    }
                }
                v3 = v3;
                v2 = v2;
                v1 = v1;
                v1 = v1;
                v2 = v2;
                v3 = v3;
                if std::path::Path::is_dir(a2, a3) as i8 {
                    v28 = std::fs::remove_dir(a2, a3);
                    v1 = v1;
                    v2 = v2;
                    v3 = v3;
                    if v28 {
                        v11 = v28;
                        v6 = uucore::util_name();
                        v7 = v18;
                        eprint!("{:?}: ", &v6);
                        v6 = 1;
                        v7 = a2;
                        v8 = a3;
                        v9 = 1;
                        eprintln!("Could not update {:?}: {:?}", &v6, &v11);
                        v1 = v1;
                        v2 = v2;
                        v3 = v3;
                    }
                }
                v3 = v3;
                v2 = v2;
                v1 = v1;
                v13 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
            } else {
                v22 = *((v21 + 8) as &i64);
                v23 = *((v21 + 16) as &i64);
                v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v22, v23);
                if !v1 {
                    v25 = v2;
                    v26 = v3;
                    v27 = std::path::Path::file_name(v25, v26);
                    if !v27 {
                        v13 = std::path::Path::join(a2, a3, v25, v26);
                    } else {
                        v13 = std::path::Path::join(a2, a3, v27, v18);
                    }
                } else {
                    v6 = uucore::util_name();
                    v7 = v18;
                    eprint!("{:?}: ", &v6);
                    v6 = 1;
                    v7 = v22;
                    v8 = v23;
                    v9 = 1;
                    eprintln!("cannot stat {:?}: No such file or directory", &v6);
                    v10 = 0;
                    v1 = v1;
                    v2 = v2;
                    v3 = v3;
                    continue;
                }
            }
            if hashbrown::map::HashMap<K,V,S,A>::get_inner(&v14, &v13) {
                v6 = uucore::util_name();
                v7 = v18;
                eprint!("{:?}: ", &v6);
                v30 = *((&v13 as &char + 8) as &i128);
                v11 = v30;
                v31 = *((v21 + 8) as &i128);
                v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
                v12 = v31;
                eprintln!("will not overwrite just-created '{:?}' with '{:?}'", &v11, &v12);
                v1 = v1;
                v2 = v2;
                v3 = v3;
            } else {
                v29 = uu_ln::link(*((v21 + 8) as &i64), *((v21 + 16) as &i64), *((&v13 as &char + 8) as &i64), *((&v13 as &char + 16) as &i64), a4);
                if !v29 {
                    goto LABEL_4ba180;
                }
                v11 = v29;
                v6 = uucore::util_name();
                v7 = v18;
                eprint!("{:?}: ", &v6);
                eprintln!("{:?}", &v11);
                v1 = v1;
                v2 = v2;
                v3 = v3;
            }
            v3 = v3;
            v2 = v2;
            v1 = v1;
            v10 = 0;
LABEL_4ba180:
            v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v13);
            v20 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1;
            *(&v6.field_0 as &struct24) = struct24 {
                field_0: v19 as u128
                field_16: v3
            };
            v15 = hashbrown::map::HashMap<K,V,S,A>::insert(&v6);
            v1 = v1;
            v2 = v2;
            v3 = v3;
        } while ((v3 = v3, v2 = v2, v1 = v1, v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14), v21));
        if (v3 = v3, v2 = v2, v1 = v1, v21 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14), v21) {
            goto LABEL_4ba21e;
        }
        v4 = 9223372036854775809;
        v17 = alloc::boxed::Box<T>::new(&v1);
    }
    return v17;
}
