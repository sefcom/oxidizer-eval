fn uu_mktemp::make_temp_file(a1: i64, a2: i64, a3: i32, a4: i64, a5: i64, a6: i64, a7: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: std::path::PathBuf;  // [bp-0x190]
    let v1: u64;  // [bp-0x180]
    let v2: u128;  // [bp-0x178], Other Possible Types: struct24
    let v3: u128;  // [bp-0x178]
    let v4: struct24;  // [bp-0x170]
    let v5: std::sys::os_str::bytes::Buf;  // [bp-0x168], Other Possible Types: u64, struct_0 *
    let v6: u128;  // [bp-0x160], Other Possible Types: struct24
    let v7: i64;  // [bp-0x158]
    let v8: u64;  // [bp-0x150]
    let v9: u64;  // [bp-0x148], Other Possible Types: Result<struct36, struct36>, struct24
    let v10: u64;  // [bp-0x140]
    let v11: i64;  // [bp-0x138]
    let v12: u64;  // [bp-0x130]
    let v13: void*;  // [bp-0x128], Other Possible Types: u64
    let v14: u64;  // [bp-0x120]
    let v15: u128;  // [bp-0x118], Other Possible Types: std::sys::os_str::bytes::Buf
    let v16: u64;  // [bp-0x110]
    let v17: struct24;  // [bp-0x108]
    let v18: u64;  // [bp-0xf8]
    let v19: u64;  // [bp-0xf0]
    let v20: u64;  // [bp-0xe8]
    let v21: u64;  // [bp-0xe0]
    let v22: u64;  // [bp-0xd8]
    let v23: struct32;  // [bp-0xd0]
    let v24: struct32;  // [bp-0xd0]
    let v25: u32;  // [bp-0xb0]
    let v26: u64;  // [bp-0xa8]
    let v27: u64;  // [bp-0xa0]
    let v28: u64;  // [bp-0x98]
    let v29: u64;  // [bp-0x90]
    let v30: u64;  // [bp-0x88]
    let v31: u16;  // [bp-0x80]
    let v32: u128;  // [bp-0x78]
    let v33: u64;  // [bp-0x68]
    let v34: struct32;  // [bp-0x58]
    let v35: u64;  // rdx

    v19 = a3;
    v20 = a4;
    v21 = a6;
    v22 = a7;
    v31 = 0;
    v25 = 0;
    v26 = a3;
    v27 = a4;
    v30 = a5;
    v28 = a6;
    v29 = a7;
    v23 = tempfile::Builder::tempfile_in(&v25, a1, a2);
    if v23.field_16 as i8 != 2 {
        v34 = v24;
        v9 = tempfile::file::NamedTempFile<F>::keep(&v34);
        match v9 {
            Ok(_) => {
                return Ok(struct24 {
                    field_0: *((&v9 as &char + 16) as &i128)
                    field_16: v13
                });
            },
            Err(_) => {
                v18 = v14;
                v17 = *((&v9 as &char + 24) as &i128);
                v15 = *((&v9 as &char + 8) as &i128) as u128;
                v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(v16, v17.field_0 as i64);
                v5 = v1;
                v2 = *(&v0.inner.inner.inner.buf.cap as &i128) as u128;
                v6 = 0x8000000000000000;
                return struct24 {
                    field_0: 0x8000000000000000
                    field_8: alloc::boxed::Box<T>::new(&v2 as u8)
                    field_16: &g_536af0
                };
            },
        }
    } else if std::io::error::Error::kind(v23.field_0 as i64) {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23.field_0 as i64)
            field_16: v35
        };
    } else {
        v15 = alloc::str::<impl str>::repeat("X", a5);
        v2 = &v19;
        v4 = <&T as core::fmt::Display>::fmt;
        v5 = &v15;
        v6 = <alloc::string::String as core::fmt::Display>::fmt;
        v7 = &v21;
        v8 = <&T as core::fmt::Display>::fmt;
        v9 = &g_41f4d8;
        v10 = 3;
        v13 = 0;
        v11 = &v2;
        v12 = 3;
        v9 = core::option::Option<T>::map_or_else(a2);
        v32 = *(&v0.inner.inner.inner.buf.cap as &i128);
        v33 = v1;
        std::path::Path::join(a1);
        v2 = *(&v0.inner.inner.inner.buf.cap as &i128);
        v3 = <T as alloc::string::ToString>::to_string(a2);
        <T as alloc::slice::hack::ConvertVec>::to_vec("file", a3);
        v5 = v11;
        v3 = v9.field_0;
        v6 = *(&v15.inner.buf.cap as &i128);
        v8 = v15.inner.len;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: alloc::boxed::Box<T>::new(&v3 as u192)
            field_16: &g_536af0
        };
    }
}
