fn uu_mktemp::make_temp_dir(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x148], Other Possible Types: struct24
    let v1: i64;  // [sp-0x140]
    let v2: i64;  // [sp-0x138]
    let v3: struct24;  // [sp-0x130], Other Possible Types: i64
    let v4: i64;  // [sp-0x128]
    let v5: i64;  // [sp-0x120]
    let v6: i192;  // [bp-0x118], Other Possible Types: struct24
    let v7: i8;  // [bp-0x108]
    let v8: struct24;  // [sp-0x100], Other Possible Types: i192
    let v9: i64;  // [sp-0xe8]
    let v10: i64;  // [sp-0xe0]
    let v11: i64;  // [sp-0xd8]
    let v12: i64;  // [sp-0xd0]
    let v13: struct24;  // [sp-0xc8], Other Possible Types: i64
    let v14: i64;  // [sp-0xc0]
    let v15: i64;  // [sp-0xb8]
    let v16: i64;  // [sp-0xb0]
    let v17: i64;  // [sp-0xa8]
    let v18: i192;  // [sp-0x98], Other Possible Types: struct24
    let v19: struct4;  // [bp-0x80]
    let v20: i64;  // [sp-0x78]
    let v21: i64;  // [sp-0x70]
    let v22: i64;  // [sp-0x68]
    let v23: i64;  // [sp-0x60]
    let v24: i64;  // [sp-0x58]
    let v25: i16;  // [sp-0x50]
    let v26: i128;  // [sp-0x48]
    let v27: i64;  // [sp-0x38]
    let v28: i64;  // [bp+0x8]
    let v29: i8;  // [bp+0x10]
    let v30: i64;  // rbx
    let v33: i64;  // rdx
    let v34: i64;  // rax
    let v35: i64;  // rdx

    v9 = a3;
    v10 = a4;
    v11 = v28;
    v12 = v29;
    v25 = 0;
    v19 = struct4 {
        field_0: 0
    };
    v20 = a3;
    v21 = a4;
    v24 = a5;
    v22 = v11;
    v23 = v12;
    v18 = tempfile::Builder::tempdir_in(&v19, a1, a2);
    if *((&v18 as &char + 16) as &i8) != 2 {
        v0 = tempfile::dir::TempDir::into_path(&v18);
        return struct24 {
            field_0: v0
            field_16: v32
        };
        *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(std::fs::set_permissions(&v0, 448));
        *((a0 + 16) as &i64) = v35;
        *(a0 as &i64) = 0x8000000000000000;
    } else {
        v30 = v18;
        if std::io::error::Error::kind(v30) as i8 {
            *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
            *((a0 + 16) as &i64) = v33;
            v34 = 0x8000000000000000;
            *(a0 as &i64) = 0x8000000000000000;
        }
        v8 = alloc::str::<impl str>::repeat("X", a5);
        v0 = &v9;
        v1 = <&T as core::fmt::Display>::fmt;
        v2 = &v8;
        v3 = <alloc::string::String as core::fmt::Display>::fmt;
        v4 = &v11;
        v5 = <&T as core::fmt::Display>::fmt;
        v13 = &g_41f4d8;
        v14 = 3;
        v17 = 0;
        v15 = &v0;
        v16 = 3;
        core::option::Option<T>::map_or_else();
        v26 = v6;
        v27 = v7;
        v6 = std::path::Path::join(a1, a2, &v26);
        v0 = *((&v6 as &char + 8) as &i128);
        v8 = <T as alloc::string::ToString>::to_string(&v0);
        v13 = <T as alloc::slice::hack::ConvertVec>::to_vec("directory");
        v0 = v13;
        v3 = v8;
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
        *((a0 + 16) as &&i64) = &g_536af0;
        *(a0 as &i64) = 0x8000000000000000;
    }
}
