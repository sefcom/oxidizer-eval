fn uu_mktemp::make_temp_file(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i192;  // [sp-0x190], Other Possible Types: struct24
    let v1: i128;  // [bp-0x178]
    let v2: i64;  // [sp-0x168]
    let v3: i64;  // [sp-0x160]
    let v4: i64;  // [sp-0x150]
    let v5: i192;  // [sp-0x148], Other Possible Types: struct44, struct24
    let v6: i192;  // [sp-0x118], Other Possible Types: struct24
    let v7: i128;  // [sp-0x108]
    let v8: i64;  // [sp-0xf8]
    let v9: i64;  // [sp-0xf0]
    let v10: i64;  // [sp-0xe8]
    let v11: i64;  // [sp-0xe0]
    let v12: i64;  // [sp-0xd8]
    let v13: struct32;  // [sp-0xd0], Other Possible Types: i256
    let v14: struct4;  // [bp-0xb0]
    let v15: i64;  // [sp-0xa8]
    let v16: i64;  // [sp-0xa0]
    let v17: i64;  // [sp-0x98]
    let v18: i64;  // [sp-0x90]
    let v19: i64;  // [sp-0x88]
    let v20: i16;  // [sp-0x80]
    let v21: i128;  // [sp-0x78]
    let v22: i64;  // [sp-0x68]
    let v23: struct32;  // [bp-0x58]
    let v24: i64;  // [bp+0x8]
    let v25: i8;  // [bp+0x10]
    let v26: i64;  // r14
    let v27: i64;  // rdx
    let v29: i64;  // rax

    v9 = a3;
    v10 = a4;
    v11 = v24;
    v12 = v25;
    v20 = 0;
    v14 = struct4 {
        field_0: 0
    };
    v15 = a3;
    v16 = a4;
    v19 = a5;
    v17 = v11;
    v18 = v12;
    v13 = tempfile::Builder::tempfile_in(&v14, a1, a2);
    if *((&v13 as &char + 16) as &i8) == 2 {
        v26 = v13;
        if std::io::error::Error::kind(v26) as i8 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8:                 uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v26)
                field_16: v28
            };
        }
        v6 = alloc::str::<impl str>::repeat("X", a5);
        v0 = format!("{:?}{:?}{:?}", &v9, &v6, &v11);
        v21 = v0;
        v22 = *((&v0 as &char + 16) as &i64);
        v0 = std::path::Path::join(a1, a2, &v21);
        v1 = *((&v0 as &char + 8) as &i128);
        <T as alloc::string::ToString>::to_string(&v6, &v1);
        v5 = <T as alloc::slice::hack::ConvertVec>::to_vec("file");
        v2 = v5.field_16;
        v1 = v5;
        v3 = v6;
        v4 = *((&v6 as &char + 16) as &i64);
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
        *((a0 + 16) as &&i64) = &g_536330;
        *(a0 as &i64) = 0x8000000000000000;
        return v29;
    } else {
        v23 = struct32 {
            field_0: v13
            field_16: *((&v13 as &char + 16) as &i128)
        };
        v5 = tempfile::file::NamedTempFile<F>::keep(&v23, v27);
        if !v5 {
            return struct24 {
                field_0: *((&v5 as &char + 16) as &i128)
                field_16: v5.field_32
            };
        }
        v8 = v5;
        v7 = *((&v5 as &char + 24) as &i128);
        v6 = *((&v5 as &char + 8) as &i128);
        v0 = std::sys::pal::unix::os::split_paths::bytes_to_path(*((&v6 as &char + 8) as &i64), v7);
        v2 = *((&v0 as &char + 16) as &i64);
        v1 = v0;
        v3 = 0x8000000000000000;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v1);
        *((a0 + 16) as &&i64) = &g_536330;
        *(a0 as &i64) = 0x8000000000000000;
        return v29;
    }
}
