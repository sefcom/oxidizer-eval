fn uu_mktemp::make_temp_file(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64, a5: u64, a6: u64, a7: u64) -> int {
    let v0: struct24;  // [bp-0x168], Other Possible Types: u64
    let v1: u128;  // [bp-0x168]
    let v2: u128;  // [bp-0x160]
    let v3: u64;  // [bp-0x158]
    let v4: u128;  // [bp-0x150]
    let v5: u64;  // [bp-0x140]
    let v6: struct24;  // [bp-0x138], Other Possible Types: u128
    let v7: u64;  // [bp-0x130]
    let v8: iNone;  // [bp-0x128], Other Possible Types: u64
    let v9: u64;  // [bp-0x128]
    let v10: u64;  // [bp-0x118]
    let v11: Result<struct36, struct36>;  // [bp-0x108], Other Possible Types: struct24
    let v12: u64;  // [bp-0xf8]
    let v13: u64;  // [bp-0xe8]
    let v14: u64;  // [bp-0xe0]
    let v15: std::path::PathBuf;  // [bp-0xd8], Other Possible Types: struct24
    let v16: u64;  // [bp-0xc8]
    let v17: core::fmt::rt::Argument;  // [bp-0xc0]
    let v18: u64;  // [bp-0xb8]
    let v19: core::fmt::Arguments;  // [bp-0xb0]
    let v20: core::fmt::rt::Argument;  // [bp-0xa8]
    let v21: u32;  // [bp-0xa0]
    let v22: u64;  // [bp-0x98]
    let v23: u64;  // [bp-0x90]
    let v24: u64;  // [bp-0x88]
    let v25: &mut [u8];  // [bp-0x80]
    let v26: u64;  // [bp-0x78]
    let v27: u16;  // [bp-0x70]
    let v28: struct32;  // [bp-0x68]
    let v29: alloc::string::String;  // [bp-0x48]
    let v30: u64;  // rdx

    v17 = a3;
    v18 = a4;
    v19 = a6;
    v20 = a7;
    v27 = 0;
    v21 = 0;
    v22 = a3;
    v23 = a4;
    v26 = a5;
    v24 = a6;
    v25 = a7;
    v28 = tempfile::Builder::tempfile_in(&v21, a1, a2);
    if v28.field_16 as i8 != 2 {
        v11 = tempfile::file::NamedTempFile<F>::keep(&v28);
        match v11 {
            Ok(_) => {
                return struct24 {
                    field_0: *((&v11 as &char + 16) as &i128)
                    field_16: v13
                };
            },
            Err(_) => {
                v10 = v14;
                v8 = *((&v11 as &char + 24) as &i128);
                v6 = *((&v11 as &char + 8) as &i128) as u128;
                v15 = std::sys::pal::unix::os::split_paths::bytes_to_path(v7, v9);
                v4 = v16;
                v2 = *(&v15.inner.inner.inner.buf.inner.cap as &i128) as u128;
                v0 = 0x8000000000000000;
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: alloc::boxed::Box<T>::new(&v0) as u64
                    field_16: &g_4f9098
                };
            },
        }
    } else if std::io::error::Error::kind(v28.field_0 as i64) as u8 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v28.field_0 as i64)
            field_16: v30
        };
    } else {
        v0 = alloc::slice::<impl [T]>::repeat(a5);
        v8 = v3;
        v6 = v0.field_0;
        v29 = format!("{}{}{}", &v17, &v6 as u8, &v19);
        v15 = std::path::Path::join(a1, a2, &v29);
        v1 = *((&v15.field_0 as &char + 8) as &i128);
        v6 = <T as alloc::string::SpecToString>::spec_to_string(&v1);
        v11 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("file");
        v3 = v12;
        v1 = v11.field_0;
        v4 = v6.field_0;
        v5 = v9;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: alloc::boxed::Box<T>::new(&v1) as u64
            field_16: &g_4f9098
        };
    }
}
