fn uu_mktemp::make_temp_dir(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i128;  // [sp-0x148], Other Possible Types: struct24, struct16
    let v1: i64;  // [sp-0x138]
    let v2: struct24;  // [sp-0x130], Other Possible Types: i64
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [sp-0x120]
    let v5: i8;  // [bp-0x118], Other Possible Types: struct24
    let v6: i8;  // [bp-0x108]
    let v7: struct24;  // [sp-0x100], Other Possible Types: i192
    let v8: i64;  // [sp-0xe8]
    let v9: i64;  // [sp-0xe0]
    let v10: i64;  // [sp-0xd8]
    let v11: i64;  // [sp-0xd0]
    let v12: struct24;  // [sp-0xc8], Other Possible Types: i64
    let v13: i64;  // [sp-0xc0]
    let v14: i64;  // [sp-0xb8]
    let v15: i64;  // [sp-0xb0]
    let v16: i64;  // [sp-0xa8]
    let v17: i192;  // [sp-0x98], Other Possible Types: struct24
    let v18: struct4;  // [bp-0x80]
    let v19: i64;  // [sp-0x78]
    let v20: i64;  // [sp-0x70]
    let v21: i64;  // [sp-0x68]
    let v22: i64;  // [sp-0x60]
    let v23: i64;  // [sp-0x58]
    let v24: i16;  // [sp-0x50]
    let v25: i128;  // [sp-0x48]
    let v26: i64;  // [sp-0x38]
    let v27: i64;  // [bp+0x8]
    let v28: i8;  // [bp+0x10]
    let v29: i64;  // rbx
    let v30: i64;  // rdx
    let v31: i64;  // rax

    v8 = a3;
    v9 = a4;
    v10 = v27;
    v11 = v28;
    v24 = 0;
    v18 = struct4 {
        field_0: 0
    };
    v19 = a3;
    v20 = a4;
    v23 = a5;
    v21 = v10;
    v22 = v11;
    v17 = tempfile::Builder::tempdir_in(&v18, a1, a2);
    if *((&v17 as &char + 16) as &i8) != 2 {
        v0 = tempfile::dir::TempDir::into_path(&v17);
        if !std::fs::set_permissions(&v0, 448) {
            v31 = v1;
            return struct24 {
                field_0: v0
                field_16: v31
            };
        }
    } else {
        v29 = v17;
        if std::io::error::Error::kind(v29) as i8 {
            *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
            *((a0 + 16) as &i64) = v30;
            v31 = 0x8000000000000000;
            *(a0 as &i64) = 0x8000000000000000;
        }
        v7 = alloc::str::<impl str>::repeat("X", a5);
        v0 = struct16 {
            field_0: &v8
            field_8: <&T as core::fmt::Display>::fmt
        };
        v1 = &v7;
        v2 = <alloc::string::String as core::fmt::Display>::fmt;
        v3 = &v10;
        v4 = <&T as core::fmt::Display>::fmt;
        v12 = &g_41f4d8;
        v13 = 3;
        v16 = 0;
        v14 = &v0;
        v15 = 3;
        core::option::Option<T>::map_or_else();
        v25 = v5;
        v26 = v6;
        v5 = std::path::Path::join(a1, a2, &v25);
        v0 = *((&v5 as &char + 8) as &i128);
        v7 = <T as alloc::string::ToString>::to_string(&v0);
        v12 = <T as alloc::slice::hack::ConvertVec>::to_vec("directory");
        v0 = v12;
        v2 = v7;
    }
}
