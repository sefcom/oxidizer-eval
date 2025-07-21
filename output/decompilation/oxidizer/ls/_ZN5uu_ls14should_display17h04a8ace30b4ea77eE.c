fn uu_ls::should_display(a0: i64, a1: i64) -> long long {
    let v0: u16;  // [bp-0x83]
    let v1: u8;  // [bp-0x81]
    let v2: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x80], Other Possible Types: struct16
    let v3: u64;  // [bp-0x78]
    let v4: void*;  // [bp-0x70]
    let v5: struct16;  // [bp-0x68]
    let v7: alloc::borrow::Cow<str>;  // [bp-0x48]
    let v8: u64;  // [bp-0x40]
    let v9: void*;  // [bp-0x38]
    let v10: std::ffi::os_str::OsString;  // [bp-0x30]
    let v11: u64;  // [bp-0x28]
    let v13: u32;  // rcx
    let v14: u32;  // rcx
    let v15: u128;  // xmm0

    if *((a1 + 240) as &i8) == 2 && uu_ls::is_hidden(a0) as i8 {
        return 0;
    }
    v0 = 1;
    v1 = 1;
    v10 = std::fs::DirEntry::file_name(a0);
    v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v11, v10.inner.vec.len);
    match v2 {
        Err(_) => {
            v7 = std::sys::os_str::bytes::Slice::to_string_lossy(v11, v10.inner.vec.len);
            if v7 as i64 == 0x8000000000000000 {
                <T as alloc::slice::hack::ConvertVec>::to_vec(v8, v9, v14);
            }
        },
        Ok(_) => {
            <T as alloc::slice::hack::ConvertVec>::to_vec(v3, v4, v13);
        },
    }
    v5 = struct16 {
        field_0: v15
    };
    v2 = struct16 {
        field_0: *((a1 + 8) as &i64)
        field_8: *((a1 + 16) as &i64) * 56 + *((a1 + 8) as &i64)
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v2, &v5, &v0) & -0x100 | <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v2, &v5, &v0) ^ 1;
}
