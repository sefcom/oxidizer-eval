fn uu_mktemp::make_temp_dir(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i128;  // [sp-0x148], Other Possible Types: struct24
    let v1: i64;  // [sp-0x138]
    let v2: i128;  // [bp-0x130]
    let v3: i64;  // [sp-0x120]
    let v4: i192;  // [sp-0x118], Other Possible Types: struct24
    let v5: i192;  // [sp-0x100], Other Possible Types: struct24
    let v6: i64;  // [sp-0xe8]
    let v7: i64;  // [sp-0xe0]
    let v8: i64;  // [sp-0xd8]
    let v9: i64;  // [sp-0xd0]
    let v10: i192;  // [sp-0xc8], Other Possible Types: struct24
    let v11: struct24;  // [sp-0x98], Other Possible Types: i192
    let v12: struct4;  // [bp-0x80]
    let v13: i64;  // [sp-0x78]
    let v14: i64;  // [sp-0x70]
    let v15: i64;  // [sp-0x68]
    let v16: i64;  // [sp-0x60]
    let v17: i64;  // [sp-0x58]
    let v18: i16;  // [sp-0x50]
    let v19: i128;  // [sp-0x48]
    let v20: i64;  // [sp-0x38]
    let v21: i64;  // [bp+0x8]
    let v22: i8;  // [bp+0x10]
    let v23: i64;  // rbx
    let v24: i64;  // rdx
    let v25: i64;  // rax
    let v27: i64;  // rax

    v6 = a3;
    v7 = a4;
    v8 = v21;
    v9 = v22;
    v18 = 0;
    v12 = struct4 {
        field_0: 0
    };
    v13 = a3;
    v14 = a4;
    v17 = a5;
    v15 = v8;
    v16 = v9;
    v11 = tempfile::Builder::tempdir_in(&v12, a1, a2);
    if *((&v11 as &char + 16) as &i8) != 2 {
        v0 = tempfile::dir::TempDir::into_path(&v11);
        v25 = std::fs::set_permissions(&v0, 448, v24);
        if !v25 {
            v27 = v0.field_16;
            return struct24 {
                field_0: v0
                field_16: v27
            };
        }
        return struct24 {
            field_0: 0x8000000000000000
            field_8:             uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v25)
            field_16: v24
        };
    } else {
        v23 = v11;
        if std::io::error::Error::kind(v23) as i8 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8:                 uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23)
                field_16: v26
            };
        }
        v5 = alloc::str::<impl str>::repeat("X", a5);
        v4 = format!("{:?}{:?}{:?}", &v6, &v5, &v8);
        v19 = v4;
        v20 = *((&v4 as &char + 16) as &i64);
        v4 = std::path::Path::join(a1, a2, &v19);
        v0 = *((&v4 as &char + 8) as &i128);
        <T as alloc::string::ToString>::to_string(&v5, &v0);
        v10 = <T as alloc::slice::hack::ConvertVec>::to_vec("directory");
        v1 = v10.field_16;
        v0 = v10;
        v2 = v5;
        v3 = *((&v5 as &char + 16) as &i64);
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
        *((a0 + 16) as &&i64) = &g_536330;
        *(a0 as &i64) = 0x8000000000000000;
        return v27;
    }
}
