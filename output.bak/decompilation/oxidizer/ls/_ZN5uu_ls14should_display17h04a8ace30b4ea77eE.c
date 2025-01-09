fn uu_ls::should_display(a0: u32, a1: void*) -> u64 {
    let v0: i16;  // [sp-0x83]
    let v1: i8;  // [sp-0x81]
    let v2: i64;  // [sp-0x80], Other Possible Types: struct24, Result<struct16, struct10>, struct16
    let v3: i64;  // [sp-0x78]
    let v4: struct16;  // [bp-0x68]
    let v5: i64;  // [sp-0x58]
    let v6: struct24;  // [sp-0x48], Other Possible Types: i192
    let v7: struct24;  // [sp-0x30], Other Possible Types: i192
    let v9: i32;  // ebx
    let v10: i64;  // r14
    let v11: i64;  // r15

    if *((a1 + 240) as &i8) == 2 && uu_ls::is_hidden(a0) as i8 {
        return 0;
    }
    v0 = 1;
    v1 = 1;
    v7 = std::fs::DirEntry::file_name(a0);
    v10 = *((&v7 as &char + 8) as &i64);
    v11 = *((&v7 as &char + 16) as &i64);
    v2 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v10, v11);
    if !v2 {
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(v3, v2);
        goto LABEL_527e14;
    } else {
        v6 = std::sys::os_str::bytes::Slice::to_string_lossy(v10, v11);
        if v6 != 0x8000000000000000 {
            v5 = *((&v6 as &char + 16) as &i64);
        } else {
            v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(*((&v6 as &char + 8) as &i64), *((&v6 as &char + 16) as &i64));
LABEL_527e14:
            v5 = *((&v2 as &char + 16) as &i64);
        }
    }
    v4 = struct16 {
        field_0: v12
    };
    *(&v2.field_0 as &struct16) = struct16 {
        field_0: *((a1 + 8) as &i64)
        field_8: *((a1 + 16) as &i64) * 56 + v2
    };
    v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v2, &v4, &v0) | -0x100 | <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v2, &v4, &v0) ^ 1;
    return v9;
}
