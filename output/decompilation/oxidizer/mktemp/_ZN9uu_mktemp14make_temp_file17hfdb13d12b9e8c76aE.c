fn uu_mktemp::make_temp_file(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x190], Other Possible Types: struct24
    let v1: i8;  // [bp-0x180]
    let v2: struct24;  // [bp-0x178], Other Possible Types: i128, struct16
    let v3: i64;  // [sp-0x168]
    let v4: i64;  // [sp-0x160], Other Possible Types: struct24
    let v5: i64;  // [sp-0x158]
    let v6: i64;  // [sp-0x150]
    let v7: i64;  // [sp-0x148], Other Possible Types: struct44, struct24
    let v8: i64;  // [sp-0x140]
    let v9: i64;  // [sp-0x138]
    let v10: i64;  // [sp-0x130]
    let v11: i64;  // [sp-0x128]
    let v12: i192;  // [sp-0x118], Other Possible Types: struct24
    let v13: i128;  // [sp-0x108]
    let v14: i64;  // [sp-0xf8]
    let v15: i64;  // [sp-0xf0]
    let v16: i64;  // [sp-0xe8]
    let v17: i64;  // [sp-0xe0]
    let v18: i64;  // [sp-0xd8]
    let v19: struct32;  // [sp-0xd0], Other Possible Types: i256
    let v20: struct4;  // [bp-0xb0]
    let v21: i64;  // [sp-0xa8]
    let v22: i64;  // [sp-0xa0]
    let v23: i64;  // [sp-0x98]
    let v24: i64;  // [sp-0x90]
    let v25: i64;  // [sp-0x88]
    let v26: i16;  // [sp-0x80]
    let v27: i128;  // [sp-0x78]
    let v28: i64;  // [sp-0x68]
    let v29: struct32;  // [sp-0x58], Other Possible Types: i256
    let v30: i64;  // [bp+0x8]
    let v31: i8;  // [bp+0x10]
    let v32: i64;  // r14
    let v33: i64;  // rdx
    let v34: i64;  // rax

    v15 = a3;
    v16 = a4;
    v17 = v30;
    v18 = v31;
    v26 = 0;
    v20 = struct4 {
        field_0: 0
    };
    v21 = a3;
    v22 = a4;
    v25 = a5;
    v23 = v17;
    v24 = v18;
    v19 = tempfile::Builder::tempfile_in(&v20, a1, a2);
    if *((&v19 as &char + 16) as &i8) == 2 {
        v32 = v19;
        if !std::io::error::Error::kind(v32) as i8 {
            v12 = alloc::str::<impl str>::repeat("X", a5);
            v2 = struct16 {
                field_0: &v15
                field_8: <&T as core::fmt::Display>::fmt
            };
            v3 = &v12;
            v4 = <alloc::string::String as core::fmt::Display>::fmt;
            v5 = &v17;
            v6 = <&T as core::fmt::Display>::fmt;
            v7 = &g_41f4d8;
            v8 = 3;
            v11 = 0;
            v9 = &v2;
            v10 = 3;
            core::option::Option<T>::map_or_else();
            v27 = v0;
            v28 = v1;
            v0 = std::path::Path::join(a1, a2, &v27);
            v2 = *((&v0 as &char + 8) as &i128);
            v12 = <T as alloc::string::ToString>::to_string(&v2);
            v7 = <T as alloc::slice::hack::ConvertVec>::to_vec("file");
            v2 = v7;
            v4 = v12;
            return v34;
        }
        *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v32);
        *((a0 + 16) as &i64) = v33;
        v34 = 0x8000000000000000;
        *(a0 as &i64) = 0x8000000000000000;
        return 0x8000000000000000;
    } else {
        v29 = v19;
        v7 = tempfile::file::NamedTempFile<F>::keep(&v29);
        if v7 {
            v14 = v7;
            v13 = *((&v7 as &char + 24) as &i128);
            v12 = *((&v7 as &char + 8) as &i128);
            v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(*((&v12 as &char + 8) as &i64), v13);
            v2 = v0;
            v4 = 0x8000000000000000;
            return v34;
        }
        return v34;
    }
}
