fn uu_mktemp::make_temp_file(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x190], Other Possible Types: struct24
    let v1: i192;  // [bp-0x178]
    let v2: i64;  // [sp-0x160]
    let v3: i64;  // [sp-0x150]
    let v4: i192;  // [sp-0x148], Other Possible Types: struct24, struct44
    let v5: i128;  // [sp-0x118], Other Possible Types: struct24
    let v6: i128;  // [sp-0x108]
    let v7: i64;  // [sp-0xf8]
    let v8: i64;  // [sp-0xf0]
    let v9: i64;  // [sp-0xe8]
    let v10: i64;  // [sp-0xe0]
    let v11: i64;  // [sp-0xd8]
    let v12: struct32;  // [sp-0xd0], Other Possible Types: i256
    let v13: struct4;  // [bp-0xb0]
    let v14: i64;  // [sp-0xa8]
    let v15: i64;  // [sp-0xa0]
    let v16: i64;  // [sp-0x98]
    let v17: i64;  // [sp-0x90]
    let v18: i64;  // [sp-0x88]
    let v19: i16;  // [sp-0x80]
    let v20: i192;  // [bp-0x78]
    let v21: i256;  // [bp-0x58]
    let v22: i64;  // [bp+0x8]
    let v23: i8;  // [bp+0x10]
    let v24: i64;  // r14
    let v25: i64;  // rdx
    let v27: i64;  // rax

    v8 = a3;
    v9 = a4;
    v10 = v22;
    v11 = v23;
    v19 = 0;
    v13 = struct4 {
        field_0: 0
    };
    v14 = a3;
    v15 = a4;
    v18 = a5;
    v16 = v10;
    v17 = v11;
    v12 = tempfile::Builder::tempfile_in(&v13, a1, a2);
    if *((&v12 as &char + 16) as &i8) == 2 {
        v24 = v12;
        if std::io::error::Error::kind(v24) as i8 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8:                 uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v24)
                field_16: v26
            };
        }
        v5 = alloc::str::<impl str>::repeat("X", a5);
        v0 = format!("{:?}{:?}{:?}", &v8, &v5, &v10);
        v20 = v0;
        v0 = std::path::Path::join(a1, a2, &v20);
        v1 = *((&v0 as &char + 8) as &i128);
        <T as alloc::string::ToString>::to_string(&v5, &v1);
        v4 = <T as alloc::slice::hack::ConvertVec>::to_vec("file");
        v1 = v4;
        v2 = v5;
        v3 = *((&v5 as &char + 16) as &i64);
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
        *((a0 + 16) as &&i64) = &g_536330;
        *(a0 as &i64) = 0x8000000000000000;
        return v27;
    } else {
        v21 = v12;
        v4 = tempfile::file::NamedTempFile<F>::keep(&v21, v25);
        if !v4 {
            return struct24 {
                field_0: *((&v4 as &char + 16) as &i128)
                field_16: v4.field_32
            };
        }
        v7 = v4;
        v6 = *((&v4 as &char + 24) as &i128);
        v5 = *((&v4 as &char + 8) as &i128);
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(*((&v5 as &char + 8) as &i64), v6);
        v1 = v0;
        v2 = 0x8000000000000000;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
        *((a0 + 16) as &&i64) = &g_536330;
        *(a0 as &i64) = 0x8000000000000000;
        return v27;
    }
}
