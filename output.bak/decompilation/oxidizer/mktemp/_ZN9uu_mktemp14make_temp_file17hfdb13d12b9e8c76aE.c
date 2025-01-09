fn uu_mktemp::make_temp_file(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x190], Other Possible Types: i192
    let v1: i8;  // [bp-0x180]
    let v2: i128;  // [sp-0x178], Other Possible Types: struct24
    let v3: i64;  // [sp-0x170]
    let v4: i64;  // [sp-0x168]
    let v5: i64;  // [sp-0x160], Other Possible Types: struct24
    let v6: i64;  // [sp-0x158]
    let v7: i64;  // [sp-0x150]
    let v8: i352;  // [sp-0x148], Other Possible Types: struct24, struct44
    let v9: i64;  // [sp-0x140]
    let v10: i64;  // [sp-0x138]
    let v11: i64;  // [sp-0x130]
    let v12: i64;  // [sp-0x128]
    let v13: i128;  // [sp-0x118], Other Possible Types: struct24
    let v14: i128;  // [sp-0x108]
    let v15: i64;  // [sp-0xf8]
    let v16: i64;  // [sp-0xf0]
    let v17: i64;  // [sp-0xe8]
    let v18: i64;  // [sp-0xe0]
    let v19: i64;  // [sp-0xd8]
    let v20: i256;  // [sp-0xd0], Other Possible Types: struct32
    let v21: struct4;  // [bp-0xb0]
    let v22: i64;  // [sp-0xa8]
    let v23: i64;  // [sp-0xa0]
    let v24: i64;  // [sp-0x98]
    let v25: i64;  // [sp-0x90]
    let v26: i64;  // [sp-0x88]
    let v27: i16;  // [sp-0x80]
    let v28: i128;  // [sp-0x78]
    let v29: i64;  // [sp-0x68]
    let v30: struct32;  // [bp-0x58]
    let v31: i64;  // [bp+0x8]
    let v32: i8;  // [bp+0x10]
    let v33: i64;  // r14
    let v34: i64;  // rdx
    let v35: i64;  // rax

    v16 = a3;
    v17 = a4;
    v18 = v31;
    v19 = v32;
    v27 = 0;
    v21 = struct4 {
        field_0: 0
    };
    v22 = a3;
    v23 = a4;
    v26 = a5;
    v24 = v18;
    v25 = v19;
    v20 = tempfile::Builder::tempfile_in(&v21, a1, a2);
    if *((&v20 as &char + 16) as &i8) == 2 {
        v33 = v20;
        if std::io::error::Error::kind(v33) as i8 {
            *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v33);
            *((a0 + 16) as &i64) = v34;
            v35 = 0x8000000000000000;
            *(a0 as &i64) = 0x8000000000000000;
        }
        v13 = alloc::str::<impl str>::repeat("X", a5);
        v2 = &v16;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &v13;
        v5 = <alloc::string::String as core::fmt::Display>::fmt;
        v6 = &v18;
        v7 = <&T as core::fmt::Display>::fmt;
        v8 = &g_41f4d8;
        v9 = 3;
        v12 = 0;
        v10 = &v2;
        v11 = 3;
        core::option::Option<T>::map_or_else();
        v28 = v0;
        v29 = v1;
        v0 = std::path::Path::join(a1, a2, &v28);
        v2 = *((&v0 as &char + 8) as &i128);
        v13 = <T as alloc::string::ToString>::to_string(&v2);
        v8 = <T as alloc::slice::hack::ConvertVec>::to_vec("file");
        v2 = v8;
        v5 = v13;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
        *((a0 + 16) as &&i64) = &g_536af0;
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        v30 = struct32 {
            field_0: v20
            field_16: *((&v20 as &char + 16) as &i128)
        };
        v8 = tempfile::file::NamedTempFile<F>::keep(&v30);
        return struct24 {
            field_0: *((&v8 as &char + 16) as &i128)
            field_16: v12
        };
        v15 = v12;
        v14 = *((&v8 as &char + 24) as &i128);
        v13 = *((&v8 as &char + 8) as &i128);
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(*((&v13 as &char + 8) as &i64), v14);
        v2 = v0;
        v5 = 0x8000000000000000;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v2);
        *((a0 + 16) as &&i64) = &g_536af0;
        *(a0 as &i64) = 0x8000000000000000;
    }
}
