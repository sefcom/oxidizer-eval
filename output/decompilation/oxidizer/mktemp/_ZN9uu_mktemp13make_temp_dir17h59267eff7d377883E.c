fn uu_mktemp::make_temp_dir(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32, a7: u32) -> u64 {
    let v0: struct24;  // [sp-0x148], Other Possible Types: int
    let v1: i64;  // [sp-0x138]
    let v2: struct24;  // [sp-0x130]
    let v3: struct24;  // [sp-0x118], Other Possible Types: String
    let v4: struct24;  // [sp-0x100]
    let v5: i64;  // [sp-0xe8]
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: i64;  // [sp-0xd0]
    let v9: struct24;  // [sp-0xc8]
    let v10: struct24;  // [sp-0x98]
    let v11: struct4;  // [bp-0x80]
    let v12: i64;  // [sp-0x78]
    let v13: i64;  // [sp-0x70]
    let v14: i64;  // [sp-0x68]
    let v15: i64;  // [sp-0x60]
    let v16: i64;  // [sp-0x58]
    let v17: i16;  // [sp-0x50]
    let v18: iNone;  // [sp-0x48]
    let v19: i64;  // rbx
    let v20: i64;  // rdx
    let v21: i64;  // rax

    v5 = a3;
    v6 = a4;
    v7 = a6;
    v8 = a7;
    v17 = 0;
    v11 = struct4 {
        field_0: 0
    };
    v12 = a3;
    v13 = a4;
    v16 = a5;
    v14 = a6;
    v15 = a7;
    v10 = tempfile::Builder::tempdir_in(&v11, a1, a2);
    if v10.field_16 as i8 != 2 {
        v0 = tempfile::dir::TempDir::into_path(&v10);
        if !std::fs::set_permissions(&v0, 448) {
            v21 = v1;
            return struct24 {
                field_0: v0.field_0
                field_16: v21
            };
        }
    } else {
        v19 = v10.field_0 as i64;
        if std::io::error::Error::kind(v19) as i8 {
            *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v19);
            *((a0 + 16) as &unsigned long) = v20;
            v21 = 0x8000000000000000;
            *(a0 as &i64) = 0x8000000000000000;
        }
        v4 = alloc::str::<impl str>::repeat("X", a5);
        v3 = format!("{}{}{}", &v5, &v4, &v7);
        v18 = v3;
        v3 = std::path::Path::join(a1, a2, &v18);
        v0 = *((&v3.field_0 as &char + 8) as &i128);
        v4 = <T as alloc::string::ToString>::to_string(&v0);
        v9 = <T as alloc::slice::hack::ConvertVec>::to_vec("directory");
        v0 = v9;
        v2 = v4;
    }
}
