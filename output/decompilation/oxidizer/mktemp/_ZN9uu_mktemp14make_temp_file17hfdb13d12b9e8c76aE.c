fn uu_mktemp::make_temp_file(a1: i64, a2: i64, a3: i32, a4: i64, a5: i64, a6: i64, a7: i64) -> Result<struct24, struct24> {
    let a0: i64;  // rdi
    let v0: std::path::PathBuf;  // [bp-0x190]
    let v1: u64;  // [bp-0x180]
    let v2: struct24;  // [bp-0x178]
    let v3: u128;  // [bp-0x178]
    let v4: struct24;  // [bp-0x170]
    let v5: i64;  // [bp-0x168], Other Possible Types: u64, alloc::string::String
    let v6: u64;  // [bp-0x160], Other Possible Types: struct24
    let v7: struct24;  // [bp-0x158]
    let v8: u64;  // [bp-0x150]
    let v9: u64;  // [bp-0x148], Other Possible Types: struct44, struct24
    let v10: u64;  // [bp-0x140]
    let v11: i64;  // [bp-0x138]
    let v12: u64;  // [bp-0x130]
    let v13: void*;  // [bp-0x128], Other Possible Types: u64
    let v14: u64;  // [bp-0x120]
    let v15: u128;  // [bp-0x118], Other Possible Types: alloc::string::String
    let v16: u64;  // [bp-0x110]
    let v17: u64;  // [bp-0xf8]
    let v18: u64;  // [bp-0xf0]
    let v19: u64;  // [bp-0xe8]
    let v20: u64;  // [bp-0xe0]
    let v21: u64;  // [bp-0xd8]
    let v22: struct32;  // [bp-0xd0]
    let v23: u128;  // [bp-0xd0]
    let v24: u32;  // [bp-0xb0]
    let v25: u64;  // [bp-0xa8]
    let v26: u64;  // [bp-0xa0]
    let v27: u64;  // [bp-0x98]
    let v28: u64;  // [bp-0x90]
    let v29: u64;  // [bp-0x88]
    let v30: u16;  // [bp-0x80]
    let v31: u8;  // [bp-0x78]
    let v32: u64;  // [bp-0x68]
    let v33: u128;  // [bp-0x58]
    let v34: u8;  // [bp-0x48]
    let v35: u64;  // rdx

    v18 = a3;
    v19 = a4;
    v20 = a6;
    v21 = a7;
    v30 = 0;
    v24 = 0;
    v25 = a3;
    v26 = a4;
    v29 = a5;
    v27 = a6;
    v28 = a7;
    v22 = tempfile::Builder::tempfile_in(&v24, a1, a2);
    if v22.field_16 as i8 != 2 {
        memcpy(&v34, &v22 as u8, 16);
        v33 = v23;
        v9 = tempfile::file::NamedTempFile<F>::keep(&v33);
        if !v9.field_0 {
            return Ok(struct24 {
                field_0: v9.field_16
                field_16: v13
            });
        }
        v17 = v14;
        memcpy(&v15 as u8, &v9 as u8, 16);
        v15 = *(&v9.field_8 as &i128);
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(v16, v15.vec.buf.cap.__0);
        v5 = v1;
        memcpy(&v2 as u8, &v0, 16);
        v6 = 0x8000000000000000;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: alloc::boxed::Box<T>::new(&v2 as u8)
            field_16: &g_536af0
        };
    } else if std::io::error::Error::kind(v22.field_0 as i64) {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v22.field_0 as i64)
            field_16: v35
        };
    } else {
        v15 = alloc::str::<impl str>::repeat("X", a5);
        v2 = &v18;
        v4 = <&T as core::fmt::Display>::fmt;
        v5 = &v15;
        v6 = <alloc::string::String as core::fmt::Display>::fmt;
        v7 = &v20;
        v8 = <&T as core::fmt::Display>::fmt;
        v9 = &g_41f4d8;
        v10 = 3;
        v13 = 0;
        v11 = &v2;
        v12 = 3;
        v9 = core::option::Option<T>::map_or_else(a2);
        memcpy(&v31, &v0, 16);
        v32 = v1;
        std::path::Path::join(a1);
        memcpy(&v2, &v0 as u8, 16);
        v3 = <T as alloc::string::ToString>::to_string(a2);
        <T as alloc::slice::hack::ConvertVec>::to_vec("file", a3);
        v5 = v11;
        v3 = *(&v9.field_0 as &i128);
        memcpy(&v6, &v15, 16);
        v8 = v15.vec.len;
        return struct24 {
            field_0: 0x8000000000000000
            field_8: alloc::boxed::Box<T>::new(&v3 as u192)
            field_16: &g_536af0
        };
    }
}
