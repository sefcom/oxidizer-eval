fn uu_install::copy_files_into_dir(a0: i64, a1: i64, a2: &std::path::Path, a3: i64) -> u64 {
    let v0: struct16;  // [bp-0x230], Other Possible Types: u64
    let v1: i64;  // [bp-0x228], Other Possible Types: struct_3 *
    let v2: u64;  // [bp-0x220]
    let v3: struct16;  // [bp-0x220], Other Possible Types: struct24, u64
    let v4: u64;  // [bp-0x220]
    let v5: u64;  // [bp-0x218]
    let v6: u64;  // [bp-0x218]
    let v7: core::fmt::Arguments;  // [bp-0x210]
    let v8: core::fmt::Arguments;  // [bp-0x210]
    let v9: struct24;  // [bp-0x200]
    let v10: core::fmt::rt::Argument;  // [bp-0x200]
    let v11: i64;  // [bp-0x1f8]
    let v12: u64;  // [bp-0x1f0]
    let v13: u64;  // [bp-0x1e0]
    let v14: u64;  // [bp-0x1d0]
    let v15: Result<struct176, struct24>;  // [bp-0x1c8], Other Possible Types: core::option::Option<std::path::Component>, core::fmt::rt::Argument
    let v16: core::fmt::rt::Argument;  // [bp-0x1c8]
    let v17: struct56;  // [bp-0x1c8], Other Possible Types: core::fmt::rt::Argument
    let v18: struct16;  // [bp-0x1c0]
    let v19: struct16;  // [bp-0x1c0]
    let v20: i64;  // [bp-0x1b8], Other Possible Types: unsigned long
    let v21: i64;  // [bp-0x1b8]
    let v22: u64;  // [bp-0x1a8]
    let v23: u64;  // [bp-0x1a8]
    let v24: Result<struct176, struct24>;  // [bp-0x198]
    let v25: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x118], Other Possible Types: u64
    let v26: u64;  // [bp-0x118]
    let v27: u64;  // [bp-0x118]
    let v28: struct20;  // [bp-0x118]
    let v29: struct24;  // [bp-0x110], Other Possible Types: core::fmt::rt::Argument
    let v30: core::fmt::rt::Argument;  // [bp-0x110]
    let v31: u128;  // [bp-0x110]
    let v32: u64;  // [bp-0x100]
    let v33: struct56;  // [bp-0x68]
    let v35: u64;  // rcx
    let v36: void*;  // rbx
    let v37: u64;  // r15
    let v38: u64;  // r14
    let v41: i64;  // rdx
    let v43: u64;  // rax
    let v44: i64;  // rdx
    let v46: u32;  // edx

    if !std::path::Path::is_dir(a2) {
        v29 = std::sys::pal::unix::os::split_paths::bytes_to_path(v46);
        v25 = 6;
        return alloc::boxed::Box<T>::new(&v25) as u64;
    }
    if !a1 {
        return 0;
    }
    v13 = v35;
    v14 = a1 * 24;
    v36 = 0;
    do {
        v37 = *((8 + a0 + v36 as &u8) as &i64);
        v38 = *((16 + a0 + v36 as &u8) as &i64);
        v25 = std::fs::metadata(v37, v38);
        v24 as u1408 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(&v25, v37, v38);
        if v15 as i32 == 2 {
            v0 = v18;
            v1 = v20;
            uucore::mods::error::set_exit_code(*((v1 + 88) as &i64)(v18) as u32);
            v10 = uucore::util_name();
            v11 = v41;
            eprintln!("{}: {}", &v10, &v0);
            v27 = v26;
            v15 = v16;
            v3 = v2;
            v6 = v5;
            v7 = v8;
            v29 = v30;
        } else if std::path::Path::is_dir(v37, v38) {
            v9 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v37, v38);
            v27 = 13;
            v32 = v12;
            v31 = *(&v9.field_0 as &i128);
            uucore::mods::error::set_exit_code(1);
            v0 = uucore::util_name();
            v1 = v44;
            eprintln!("{}: {}", &v0, &v27);
            v15 = v17;
            v18 = v19;
            v20 = v21;
            v3 = v2;
            v6 = v5;
            v7 = v8;
            v22 = v23;
        } else {
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(v41 as u32);
            v28 = std::path::Path::components(v37, v38);
            v15 = <std::path::Components as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(&v28);
            if &v15 == "\n" {
                core::option::unwrap_failed(); /* do not return */
            }
            v33 = v17;
            v3 = std::path::PathBuf::push(&v33);
            v43 = uu_install::copy(v37, v38, v6, v7, a3);
            v15 = v16;
            if v43 {
                v0 = struct16 {
                    field_0: v43
                    field_8: v41
                };
                uucore::mods::error::set_exit_code(*((v41 + 88) as &i64)(v43) as u32);
                v10 = uucore::util_name();
                v11 = v41;
                eprintln!("{}: {}", &v10, &v0);
                v27 = v26;
                v15 = v17;
                v18 = v19;
                v20 = v21;
                v29 = v30;
            }
            v25 = v27;
            v27 = v25;
            v3 = v4;
        }
        v4 = v3;
        v16 = v15;
        v36 += 24;
    } while (v14 != v36);
    return 0;
}
