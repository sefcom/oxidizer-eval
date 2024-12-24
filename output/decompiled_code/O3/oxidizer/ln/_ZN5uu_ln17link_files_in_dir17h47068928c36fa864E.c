fn uu_ln::link_files_in_dir(a0: u32, a1: u32, a2: u32, a3: u32, a4: &u64, a5: u32) -> u64 {
    let v0: i8;  // [sp-0x129]
    let v1: i64;  // [sp-0x128], Other Possible Types: struct24, Result<struct16, struct10>, struct32, Option<struct16>
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i64;  // [sp-0x110]
    let v6: i64;  // [sp-0xf8]
    let v7: i64;  // [sp-0xf0]
    let v8: i64;  // [sp-0xe8]
    let v9: i8;  // [bp-0xe0]
    let v10: i32;  // [sp-0xcc]
    let v11: i64;  // [sp-0xc8]
    let v12: i128;  // [bp-0xb8]
    let v13: struct24;  // [sp-0x98], Other Possible Types: i192
    let v14: struct64;  // [bp-0x78]
    let v15: struct16;  // [sp-0x68]
    let v17: i64;  // rsi
    let v18: i64;  // rdx
    let v19: i64;  // rax
    let v20: i256;  // ymm0
    let v21: i256;  // ymm0
    let v22: i64;  // rax
    let v23: i64;  // rbp
    let v24: i64;  // r12
    let v25: i64;  // rax
    let v26: i64;  // r12
    let v27: i64;  // rbp
    let v28: i64;  // rcx
    let v29: i64;  // rax
    let v30: i64;  // rax
    let v31: i64;  // rdx
    let v32: i64;  // rcx
    let v33: i64;  // r8
    let v34: i64;  // r9
    let v35: i64;  // rax
    let v36: i128;  // xmm0
    let v37: i128;  // xmm0
    let v38: i128;  // xmm0

    if !std::path::Path::is_dir(a2, a3) as i8 {
        v1 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2, a3);
        v4 = 0x8000000000000000;
        v19 = alloc::boxed::Box<T>::new(&v1);
        return v19;
    }
    v1 = std::thread::local::LocalKey<T>::try_with(v17, v18);
    v1 = hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1, core::result::Result<T,E>::expect(&v1), v18);
    v21 = v20 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1;
    v14 = struct64 {
        field_0: a0
        field_8: a0 + a1 * 24
        field_16: v20 as u128
        field_32: *((&v1 as &char + 16) as &i128)
        field_48: v5
    };
    v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14);
    if !v22 {
LABEL_4b9efe:
        v19 = 0;
    } else {
        v0 = *((a4 + 54) as &i8) == 2 & *((a4 + 52) as &i8);
        v10 = v22 | -0x100 | 1;
        do {
            if v0 && std::path::Path::is_symlink(a2, a3) as i8 {
                v1 = v1;
                v2 = v2;
                v3 = v3;
                if std::path::Path::is_file(a2, a3) as i8 {
                    v25 = std::fs::remove_file(a2, a3, v18);
                    v1 = v1;
                    v2 = v2;
                    v3 = v3;
                    if v25 {
                        v11 = v25;
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
                    v30 = std::fs::remove_dir(a2, a3, v18);
                    v1 = v1;
                    v2 = v2;
                    v3 = v3;
                    if v30 {
                        v11 = v30;
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
                v23 = *((v22 + 8) as &i64);
                v24 = *((v22 + 16) as &i64);
                v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v23, v24);
                if !v1 {
                    v26 = v2;
                    v27 = v3;
                    v29 = std::path::Path::file_name(v26, v27, v18, v28);
                    if !v29 {
                        v13 = std::path::Path::join(a2, a3, v26, v27);
                    } else {
                        v13 = std::path::Path::join(a2, a3, v29, v18);
                    }
                } else {
                    v6 = uucore::util_name();
                    v7 = v18;
                    eprint!("{:?}: ", &v6);
                    v6 = 1;
                    v7 = v23;
                    v8 = v24;
                    v9 = 1;
                    eprintln!("cannot stat {:?}: No such file or directory", &v6);
                    v10 = 0;
                    v1 = v1;
                    v2 = v2;
                    v3 = v3;
                    continue;
                }
            }
            if hashbrown::map::HashMap<K,V,S,A>::get_inner(&v14, &v13, v31, v32, v33, v34) {
                v6 = uucore::util_name();
                v7 = v18;
                eprint!("{:?}: ", &v6);
                v36 = *((&v13 as &char + 8) as &i128);
                v11 = v36;
                v37 = *((v22 + 8) as &i128);
                v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v37;
                v12 = v37;
                eprintln!("will not overwrite just-created '{:?}' with '{:?}'", &v11, &v12);
                v1 = v1;
                v2 = v2;
                v3 = v3;
            } else {
                v35 = uu_ln::link() as i64;
                if !v35 {
                    goto LABEL_4b9e60;
                }
                v11 = v35;
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
LABEL_4b9e60:
            v1 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v13);
            v8 = v1.field_16;
            v38 = v1;
            v21 = v21 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38;
            v6 = v38;
            v15 = hashbrown::map::HashMap<K,V,S,A>::insert(&v6);
            v1 = v1;
            v2 = v2;
            v3 = v3;
        } while ((v3 = v3, v2 = v2, v1 = v1, v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14), v22));
        if (v3 = v3, v2 = v2, v1 = v1, v22 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v14), v22) {
            goto LABEL_4b9efe;
        }
        v1.24 = 9223372036854775809;
        v19 = alloc::boxed::Box<T>::new(&v1);
    }
    return v19;
}
