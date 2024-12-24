fn uu_mktemp::make_temp_dir(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> u64 {
    let v0: i128;  // [sp-0x148], Other Possible Types: struct24
    let v1: i128;  // [bp-0x130]
    let v2: i64;  // [sp-0x120]
    let v3: i192;  // [sp-0x118], Other Possible Types: struct24
    let v4: struct24;  // [sp-0x100], Other Possible Types: i192
    let v5: i64;  // [sp-0xe8]
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: i64;  // [sp-0xd0]
    let v9: struct24;  // [sp-0xc8], Other Possible Types: i192
    let v10: struct24;  // [sp-0x98], Other Possible Types: i192
    let v11: struct4;  // [bp-0x80]
    let v12: i64;  // [sp-0x78]
    let v13: i64;  // [sp-0x70]
    let v14: i64;  // [sp-0x68]
    let v15: i64;  // [sp-0x60]
    let v16: i64;  // [sp-0x58]
    let v17: i16;  // [sp-0x50]
    let v18: i192;  // [bp-0x48]
    let v19: i64;  // [bp+0x8]
    let v20: i8;  // [bp+0x10]
    let v21: i64;  // rbx
    let v22: i64;  // rdx
    let v23: i64;  // rax
    let v25: i64;  // rax

    v5 = a3;
    v6 = a4;
    v7 = v19;
    v8 = v20;
    v17 = 0;
    v11 = struct4 {
        field_0: 0
    };
    v12 = a3;
    v13 = a4;
    v16 = a5;
    v14 = v7;
    v15 = v8;
    v10 = tempfile::Builder::tempdir_in(&v11, a1, a2);
    if *((&v10 as &char + 16) as &i8) != 2 {
        v0 = tempfile::dir::TempDir::into_path(&v10);
        v23 = std::fs::set_permissions(&v0, 448, v22);
        if !v23 {
            v25 = v0.field_16;
            return struct24 {
                field_0: v0
                field_16: v25
            };
        }
        return struct24 {
            field_0: 0x8000000000000000
            field_8:             uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v23)
            field_16: v22
        };
    } else {
        v21 = v10;
        if std::io::error::Error::kind(v21) as i8 {
            return struct24 {
                field_0: 0x8000000000000000
                field_8:                 uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21)
                field_16: v24
            };
        }
        v4 = alloc::str::<impl str>::repeat("X", a5);
        v3 = format!("{:?}{:?}{:?}", &v5, &v4, &v7);
        v18 = v3;
        v3 = std::path::Path::join(a1, a2, &v18);
        v0 = *((&v3 as &char + 8) as &i128);
        <T as alloc::string::ToString>::to_string(&v4, &v0);
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("directory");
        v0 = v9;
        v1 = v4;
        v2 = *((&v4 as &char + 16) as &i64);
        *((a0 + 8) as &double) = alloc::boxed::Box<T>::new(&v0);
        *((a0 + 16) as &&i64) = &g_536330;
        *(a0 as &i64) = 0x8000000000000000;
        return v25;
    }
}
