fn uu_ls::should_display(a0: u64, a1: i64) -> long long {
    let v0: u16;  // [bp-0x83]
    let v1: u8;  // [bp-0x81]
    let v2: struct24;  // [bp-0x80]
    let v3: core::result::Result<&str, core::str::error::Utf8Error>;  // [sp-0x80], Other Possible Types: struct16
    let v4: u64;  // [bp-0x78]
    let v5: struct40;  // [bp-0x70]
    let v6: struct16;  // [bp-0x68]
    let v8: Result<struct24, struct24>;  // [bp-0x50]
    let v9: i64;  // [bp-0x50]
    let v10: i64;  // [bp-0x48]
    let v11: i64;  // [bp-0x40]
    let v12: struct24;  // [bp-0x38]
    let v13: u64;  // [bp-0x30]
    let v15: struct16;  // xmm0

    if *((a1 + 248) as &i8) == 2 && uu_ls::is_hidden(a0) {
        return 0;
    }
    v0 = 1;
    v1 = 1;
    v12 = std::fs::DirEntry::file_name(a0);
    v3 = core::str::converts::from_utf8(v13, v12.field_16);
    match v3 {
        Err(_) => {
            v8 = alloc::string::String::from_utf8_lossy(v13, v12.field_16);
            if (((0 ^ v8 as i64) & (0 ^ -(v9))) >> 63) as char {
                v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, v11);
            }
        },
        Ok(_) => {
            v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v4, v5);
        },
    }
    v6 = v15;
    v3 = struct16 {
        field_0: *((a1 + 8) as &i64)
        field_8: *((a1 + 16) as &i64) * 56 + *((a1 + 8) as &i64)
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v3, &v6, &v0) & 255 & -0x100 | <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v3, &v6, &v0) ^ 1;
}
