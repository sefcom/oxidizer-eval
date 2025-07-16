fn uu_base32::base_common::Config::from(a1: &struct32) -> Result<struct42, struct24> {
    let a0: u64;  // rsi
    let v0: std::path::PathBuf;  // [bp-0x1b0]
    let v1: u64;  // [bp-0x1a0]
    let v2: void*;  // [bp-0x198], Other Possible Types: u64
    let v3: u128;  // [bp-0x190]
    let v4: u64;  // [bp-0x188]
    let v5: u8;  // [bp-0x180]
    let v6: std::sys::os_str::bytes::Buf;  // [bp-0x178]
    let v7: u32;  // [bp-0x160]
    let v8: struct56;  // [bp-0x158], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>, struct16
    let v9: u64;  // [bp-0x158]
    let v10: u64;  // [bp-0x150]
    let v11: u128;  // [bp-0xa8]
    let v12: u128;  // [bp-0x98]
    let v13: u128;  // [bp-0x88]
    let v14: u8;  // [bp-0x78]
    let v15: struct64;  // [bp-0x68]
    let v16: u128;  // [bp-0x58]
    let v17: u128;  // [bp-0x48]
    let v19: u64;  // r15
    let v20: i64;  // rax
    let v21: i64;  // r15
    let v22: i64;  // rax
    let v23: u64;  // r12
    let v24: u64;  // rax
    let v25: u64;  // rcx
    let v26: i64;  // rdi
    let v27: i64;  // rax
    let v28: u64;  // r12
    let v30: i64;  // rdi
    let v32: u8;  // al
    let v33: u8;  // al
    let v34: i64;  // rdi

    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a0, "file");
    v15 = clap_builder::parser::error::MatchesError::unwrap("file", &v8);
    if v15.field_0 as i64 {
        memcpy(&v14, &v15, 16);
        v13 = v17;
        v12 = v16;
        memcpy(stack_base + -168, stack_base + -104, 16);
        v20 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v11);
        if !v20 {
            core::option::unwrap_failed(); /* do not return */
        }
        v21 = v20;
        v22 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v11);
        if v22 {
            v2 = 0;
            v3 = *((v22 + 8) as &i128);
            v5 = 1;
            v6 = format!("extra operand {}", &v2);
            v7 = 1;
            alloc::boxed::Box<T>::new(&v6);
            *((v26 + 8) as &u64) = v24;
            *((v26 + 16) as &u64) = v25;
            *(v26 as &i64) = 2;
            return;
        }
        v23 = *((v21 + 8) as &i64);
        v19 = *((v21 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v23, v19, "-") as i8 {
            v8 = std::fs::metadata(v23, v19);
            match v8 {
                Err(_) => {
                    v2 = 1;
                    v3 = v23;
                    v4 = v19;
                    v5 = 0;
                    v6 = format!("{}: No such file or directory", &v2);
                    v7 = 1;
                    alloc::boxed::Box<T>::new(&v6);
                    *((v26 + 8) as &u64) = v24;
                    *((v26 + 16) as &u64) = v25;
                    *(v26 as &i64) = 2;
                    return;
                },
                Ok(_) => {
                    v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(v23, v19);
                },
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, a0, "wrap");
    v27 = clap_builder::parser::error::MatchesError::unwrap("wrap", &v9);
    if v27 {
        v8 = uu_base32::base_common::Config::from::{{closure}}(*((v27 + 8) as &i64), *((v27 + 16) as &i64));
        if v8.field_0 {
            *((v30 + 8) as &u64) = v8.field_0;
            *((v30 + 16) as &u64) = v10;
            *(v30 as &i64) = 2;
            return;
        }
    }
    v32 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "decode") as i32;
    v33 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ignore-garbage") as i8;
    *((v34 + 32) as &u64) = v1;
    *((v34 + 16) as &i128) = *(&v0.inner.inner.inner.buf.cap as &i128);
    *(v34 as &u64) = v28;
    *((v34 + 8) as &u64) = v19;
    *((v34 + 40) as &u8) = v32;
    *((v34 + 41) as &u8) = v33;
    return;
}
