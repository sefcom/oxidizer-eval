fn uu_base32::base_common::Config::from(a1: &struct56) -> Result<struct42, struct24> {
    let a0: u64;  // rsi
    let v0: std::path::PathBuf;  // [bp-0x1b0]
    let v1: u64;  // [bp-0x1a0]
    let v2: void*;  // [bp-0x198], Other Possible Types: u64
    let v3: u128;  // [bp-0x190]
    let v4: u64;  // [bp-0x188]
    let v5: u8;  // [bp-0x180]
    let v6: alloc::string::String;  // [bp-0x178]
    let v7: u32;  // [bp-0x160]
    let v8: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x158], Other Possible Types: struct16, struct56
    let v9: u64;  // [bp-0x158]
    let v10: u64;  // [bp-0x150]
    let v11: struct64;  // [bp-0xa8]
    let v12: struct64;  // [bp-0x68]
    let v13: struct64;  // [bp-0x68]
    let v15: u64;  // r15
    let v16: i64;  // rax
    let v17: i64;  // r15
    let v18: i64;  // rax
    let v19: u64;  // r12
    let v20: u64;  // rax
    let v21: u64;  // rcx
    let v22: i64;  // rdi
    let v23: i64;  // rax
    let v24: u64;  // r12
    let v26: i64;  // rdi
    let v28: u8;  // al
    let v29: u8;  // al
    let v30: i64;  // rdi

    v8 = clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(a0, "file");
    v12 = clap_builder::parser::error::MatchesError::unwrap("file", &v8);
    if v12.field_0 as i64 {
        v11 = v13;
        v16 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v11);
        if !v16 {
            core::option::unwrap_failed(); /* do not return */
        }
        v17 = v16;
        v18 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v11);
        if v18 {
            v2 = 0;
            v3 = *((v18 + 8) as &i128);
            v5 = 1;
            v6 = format!("extra operand {}", &v2);
            v7 = 1;
            alloc::boxed::Box<T>::new(&v6);
            *((v22 + 8) as &u64) = v20;
            *((v22 + 16) as &u64) = v21;
            *(v22 as &i64) = 2;
            return;
        }
        v19 = *((v17 + 8) as &i64);
        v15 = *((v17 + 16) as &i64);
        if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v15, "-") as i8 {
            v8 = std::fs::metadata(v19, v15);
            match v8 {
                Err(_) => {
                    v2 = 1;
                    v3 = v19;
                    v4 = v15;
                    v5 = 0;
                    v6 = format!("{}: No such file or directory", &v2);
                    v7 = 1;
                    alloc::boxed::Box<T>::new(&v6);
                    *((v22 + 8) as &u64) = v20;
                    *((v22 + 16) as &u64) = v21;
                    *(v22 as &i64) = 2;
                    return;
                },
                Ok(_) => {
                    v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(v19, v15);
                },
            }
        }
    }
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v9, a0, "wrap");
    v23 = clap_builder::parser::error::MatchesError::unwrap("wrap", &v9);
    if v23 {
        v8 = uu_base32::base_common::Config::from::{{closure}}(*((v23 + 8) as &i64), *((v23 + 16) as &i64));
        if v8.field_0 {
            *((v26 + 8) as &u64) = v8.field_0;
            *((v26 + 16) as &u64) = v10;
            *(v26 as &i64) = 2;
            return;
        }
    }
    v28 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "decode") as i32;
    v29 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(a0, "ignore-garbage") as i8;
    *((v30 + 32) as &u64) = v1;
    *((v30 + 16) as &i128) = *(&v0.inner.inner.vec.buf.cap as &i128);
    *(v30 as &u64) = v24;
    *((v30 + 8) as &u64) = v15;
    *((v30 + 40) as &u8) = v28;
    *((v30 + 41) as &u8) = v29;
    return;
}
