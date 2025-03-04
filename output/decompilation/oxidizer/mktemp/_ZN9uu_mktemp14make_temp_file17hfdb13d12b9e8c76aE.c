fn uu_mktemp::make_temp_file(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32, a6: u32, a7: u32) -> u64 {
    let v0: struct24;  // [sp-0x190], Other Possible Types: String
    let v1: struct24;  // [sp-0x178], Other Possible Types: int
    let v2: struct24;  // [sp-0x160], Other Possible Types: unsigned long
    let v3: struct24;  // [sp-0x148], Other Possible Types: struct44, unsigned long
    let v4: struct24;  // [sp-0x118], Other Possible Types: int
    let v5: iNone;  // [sp-0x108]
    let v6: i64;  // [sp-0xf8]
    let v7: i64;  // [sp-0xf0]
    let v8: i64;  // [sp-0xe8]
    let v9: i64;  // [sp-0xe0]
    let v10: i64;  // [sp-0xd8]
    let v11: struct32;  // [sp-0xd0]
    let v12: struct4;  // [bp-0xb0]
    let v13: i64;  // [sp-0xa8]
    let v14: i64;  // [sp-0xa0]
    let v15: i64;  // [sp-0x98]
    let v16: i64;  // [sp-0x90]
    let v17: i64;  // [sp-0x88]
    let v18: i16;  // [sp-0x80]
    let v19: iNone;  // [sp-0x78]
    let v20: struct32;  // [sp-0x58]
    let v21: i64;  // r14
    let v22: i64;  // rdx
    let v23: i64;  // rax

    v7 = a3;
    v8 = a4;
    v9 = a6;
    v10 = a7;
    v18 = 0;
    v12 = struct4 {
        field_0: 0
    };
    v13 = a3;
    v14 = a4;
    v17 = a5;
    v15 = a6;
    v16 = a7;
    v11 = tempfile::Builder::tempfile_in(&v12, a1, a2);
    if v11.field_16 as i8 == 2 {
        v21 = v11.field_0 as i64;
        if !std::io::error::Error::kind(v21) as i8 {
            v4 = alloc::str::<impl str>::repeat("X", a5);
            v0 = format!("{}{}{}", &v7, &v4, &v9);
            v19 = v0;
            v0 = std::path::Path::join(a1, a2, &v19);
            v1 = *(&v0.field_8 as &i128);
            v4 = <T as alloc::string::ToString>::to_string(&v1);
            v3 = <T as alloc::slice::hack::ConvertVec>::to_vec("file");
            v1 = v3;
            v2 = v4;
            return v23;
        }
        *((a0 + 8) as &long long) = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v21);
        *((a0 + 16) as &unsigned long) = v22;
        *(a0 as &i64) = 0x8000000000000000;
        return 0x8000000000000000;
    } else {
        v20 = v11;
        v3 = tempfile::file::NamedTempFile<F>::keep(&v20);
        if v3 {
            v6 = v3.field_0;
            v5 = *((&v3.field_16 as &char + 8) as &i128);
            v4 = *(&v3.field_8 as &i128);
            v0 = std::sys::pal::unix::os::split_paths::bytes_to_path((&v4)[8] as i64, v5 as i64);
            v1 = v0;
            v2 = 0x8000000000000000;
            return v23;
        }
        return v23;
    }
}
