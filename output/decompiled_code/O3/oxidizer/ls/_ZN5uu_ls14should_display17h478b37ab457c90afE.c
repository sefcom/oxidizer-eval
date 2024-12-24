fn uu_ls::should_display(a0: i64, a1: i64) -> u64 {
    let v0: i16;  // [sp-0x83]
    let v1: i8;  // [sp-0x81]
    let v2: struct24;  // [sp-0x80], Other Possible Types: i64, Result<struct16, struct10>, struct16
    let v3: i64;  // [sp-0x78]
    let v4: i8;  // [bp-0x70]
    let v5: struct16;  // [bp-0x68]
    let v6: i64;  // [sp-0x58]
    let v7: struct24;  // [sp-0x48], Other Possible Types: i192
    let v8: struct24;  // [sp-0x30], Other Possible Types: i192
    let v10: i32;  // ebx
    let v11: i64;  // r14
    let v12: i64;  // r15

    if *((a1 + 240) as &i8) == 2 && uu_ls::is_hidden(a0) as i8 {
        return 0;
    }
    v0 = 1;
    v1 = 1;
    v8 = std::fs::DirEntry::file_name(a0);
    v11 = *((&v8 as &char + 8) as &i64);
    v12 = *((&v8 as &char + 16) as &i64);
    v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v11, v12);
    if !v2 {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(v3, v4);
        goto LABEL_527d64;
    } else {
        v7 = std::sys::os_str::bytes::Slice::to_string_lossy(v11, v12);
        if v7 != 0x8000000000000000 {
            v6 = *((&v7 as &char + 16) as &i64);
        } else {
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((&v7 as &char + 8) as &i64), *((&v7 as &char + 16) as &i64));
LABEL_527d64:
            v6 = *((&v2 as &char + 16) as &i64);
        }
    }
    v5 = struct16 {
        field_0: v13
    };
    *(&v2.field_0 as &struct16) = struct16 {
        field_0: *((a1 + 8) as &i64)
        field_8: *((a1 + 16) as &i64) * 56 + v2
    };
    v10 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v2, &v5, &v0) as i32 | -0x100 | <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v2, &v5, &v0) as i32 ^ 1;
    return v10;
}
