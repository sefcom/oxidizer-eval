fn uu_install::strip_file(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct8;  // [bp-0x1c0], Other Possible Types: unsigned int
    let v1: iNone;  // [bp-0x1b8], Other Possible Types: struct24
    let v2: struct24;  // [bp-0x1b8]
    let v4: struct16;  // [bp-0x198], Other Possible Types: struct24, u64
    let v5: struct24;  // [bp-0x198]
    let v6: u64;  // [bp-0x188]
    let v7: u64;  // [bp-0x180]
    let v8: struct24;  // [bp-0x150], Other Possible Types: u64
    let v9: u64;  // [bp-0x140]
    let v10: Result<struct4, struct8>;  // [bp-0x138]
    let v11: u32;  // [bp-0x134]
    let v12: struct8;  // [bp-0x130]
    let v13: alloc::string::String;  // [bp-0x128]
    let v14: u64;  // [bp-0x118]
    let v15: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x110], Other Possible Types: struct16
    let v16: struct157;  // [bp-0x110]
    let v17: struct24;  // [bp-0x110]
    let v19: u64;  // r13
    let v21: u64;  // rcx
    let v22: u64;  // r14
    let v23: u64;  // rbx
    let v24: &mut [u8];  // rax:rdx
    let v25: u128;  // [bp-0x190]

    v15 = core::str::converts::from_utf8(a0, a1);
    v16 = 0;
    v24 = core::char::methods::encode_utf8_raw(45, &v16, a2);
    if core::slice::<impl [T]>::starts_with(v19, (!v16.field_0 as i8 ? *((&v15 as &char + 16) as &i64) : 0), v24.data_ptr, v21) {
        v17 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(".");
        v6 = v17.field_16;
        v4 = *(&v17.field_0 as &i128);
        v4 = std::path::PathBuf::push(a0, a1);
    } else {
        v1 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0);
    }
    std::process::Command::new(&v16, a2 + 24);
    v15 = std::process::Command::arg(&v1);
    v10 = std::process::Command::status(&v15);
    match v10 {
        Err(v0) => {
            v4 = v2;
            v8 = std::fs::remove_file(&v4);
            v8 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
            v7 = v9;
            v25 = *(&v8.field_0 as &i128) as u128;
            v4 = 9;
            v22 = alloc::boxed::Box<T>::new(&v4) as u64;
        },
        Ok(_) => {
            v23 = v11 as u64;
            if !v23 as u32 {
                return 0;
            }
            v5 = v2;
            v8 = std::fs::remove_file(&v5);
            if (v23 as u8 & 127) {
                core::option::unwrap_failed(); /* do not return */
            }
            v0 = (v23 >> 8) as u32;
            v13 = format!("strip process terminated abnormally - exit code: {}", &v0 as u64);
            v25 = *(&v13.vec.buf.inner.cap as &i128) as u128;
            v7 = v14;
            v4 = 9;
            v22 = alloc::boxed::Box<T>::new(&v4) as u64;
        },
    }
    return v22;
}
