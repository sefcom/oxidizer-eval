fn uu_install::copy_file(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x168], Other Possible Types: struct24
    let v1: u64;  // [bp-0x168]
    let v2: void*;  // [bp-0x160]
    let v3: u64;  // [bp-0x158]
    let v4: struct24;  // [bp-0x150], Other Possible Types: u32
    let v5: u64;  // [bp-0x150]
    let v6: void*;  // [bp-0x148], Other Possible Types: u64
    let v7: core::fmt::rt::Argument;  // [bp-0x140], Other Possible Types: u64
    let v8: struct24;  // [bp-0x138], Other Possible Types: u64
    let v9: struct4;  // [bp-0x138]
    let v10: std::io::error::Error;  // [bp-0x130], Other Possible Types: struct24, u64
    let v11: struct16;  // [bp-0x128]
    let v12: struct16;  // [bp-0x128], Other Possible Types: u128
    let v13: u64;  // [bp-0x118]
    let v14: iNone;  // [bp-0x110]
    let v15: u64;  // [bp-0x100]
    let v16: iNone;  // [bp-0xf8], Other Possible Types: std::io::error::Error, u64
    let v17: u64;  // [bp-0xe8]
    let v18: struct24;  // [bp-0xe0], Other Possible Types: Result<struct4, struct8>, u64
    let v19: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: u64
    let v20: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xe0]
    let v21: u32;  // [bp-0xdc]
    let v22: u128;  // [bp-0xd8]
    let v23: u64;  // [bp-0xd8]
    let v24: u64;  // [bp-0xd0]
    let v25: core::fmt::rt::Argument;  // [bp-0xc8], Other Possible Types: u64
    let v26: iNone;  // [bp-0xc0]
    let v27: struct16;  // [bp-0xb0]
    let v29: u64;  // rdi
    let v30: struct16;  // rbx
    let v33: u64;  // rdx
    let v34: u64;  // rax

    v0 = std::fs::canonicalize(a2, a3);
    if (((0 ^ v0 as i64) & (0 ^ -(v1))) >> 63) as char {
LABEL_468bae:
        if std::path::Path::is_dir(a2, a3) && !std::path::Path::is_dir(a0, a1) {
            v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2);
            v18 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v2, v3);
            v17 = v24;
            v16 = *(&v18.field_0 as &i128);
            v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0);
            v8 = <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(v6, v7);
            v27 = v11;
            v26 = *(&v8.field_0 as &i128);
            *(&v22 as void*) = v16;
            v25 = v17;
            v19 = 15;
            return alloc::boxed::Box<T>::new(&v18) as u64;
        }
        v16 = std::fs::remove_file(a2, a3);
        if v16 {
            v1 = v16;
            if std::io::error::Error::kind(v16) as u8 {
                v8 = uucore::util_name();
                v10 = v33;
                eprint!("{}: ", &v8);
                v5 = a2;
                v6 = a3;
                eprintln!("Failed to remove existing file {}. Error: {}", &v5, &v1);
                v23 = v22;
                v11 = v12;
            }
        }
        v20 = std::fs::metadata(a0, a1);
        if v20 as i32 == 2 {
            v16 = v23;
            v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0);
            v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2);
            v13 = v3;
            v12 = *(&v0.field_0 as &i128);
            v14 = *(&v4.field_0 as &i128);
            v15 = v7;
            v10 = v16;
            v8 = 8;
            alloc::boxed::Box<T>::new(&v8);
        } else if (0xf000 & *((&v20 as &char + 56) as &i32)) == 0x1000 || (0xf000 & *((&v20 as &char + 56) as &i32)) == 0x6000 || (0xf000 & *((&v20 as &char + 56) as &i32)) == 0x2000 {
            v18 = std::fs::File::open(a0, a1);
            match v18 {
                Err(_) => {
                    return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
                },
                Ok(v4) => {
                    v18 = std::fs::File::create(a2, a3);
                    match v18 {
                        Err(_) => {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23);
                        },
                        Ok(v9) => {
                            v18 = uucore::features::buf_copy::linux::copy_stream(&v4 as u64, &v9 as u64);
                        },
                    }
                },
            }
            return v30;
        } else {
            uu_install::copy_normal_file(a0, a1, a2, a3);
        }
        return v34;
    } else {
        v19 = std::fs::canonicalize(a0, a1);
        v29 = v23;
        if let Err(_) = v19 {
            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
            return v30;
        }
        v8 = v19 as i64;
        v10 = v29;
        v11 = v24;
        if !<std::path::PathBuf as core::cmp::PartialEq>::eq(v29, v11) {
            goto LABEL_468bae;
        }
        v4 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0);
        v8 = std::sys::pal::unix::os::split_paths::bytes_to_path(a2);
        v25 = v7;
        v22 = *(&v4.field_0 as &i128);
        v26 = *(&v8.field_0 as &i128);
        v27 = v11;
        v18 = 16;
        alloc::boxed::Box<T>::new(&v19);
        goto LABEL_0x46902e;
    }
}
