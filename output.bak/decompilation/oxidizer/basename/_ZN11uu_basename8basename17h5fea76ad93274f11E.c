fn uu_basename::basename(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i192;  // [sp-0xf0], Other Possible Types: struct24
    let v1: i160;  // [sp-0xd8], Other Possible Types: struct24, struct20, Result<struct16, struct10>
    let v2: i448;  // [sp-0x98], Other Possible Types: struct56
    let v3: struct1;  // [bp-0x60]
    let v6: i64;  // rdx
    let v7: i64;  // 4096
    let v9: i64;  // rax
    let v10: i64;  // r12
    let v11: i64;  // r13
    let v12: i64;  // rax
    let v13: i64;  // r13
    let v14: i64;  // rax

    if v6 {
        v7 = v6;
    } else {
        v7 = a2;
    }
    if v6 {
        v9 = core::str::<impl str>::trim_end_matches(a1, a2);
    } else {
        v9 = a1;
    }
    v0 = std::sys::os_str::bytes::Slice::to_owned(v9, v7);
    v1 = std::path::Path::components(*((&v0 as &char + 8) as &i64), *((&v0 as &char + 16) as &i64));
    v3 = struct1 {
        field_0: 10
    };
    v2 = core::iter::traits::iterator::Iterator::fold(&v1, &v3);
    return struct24 {
        field_0: 0
        field_8: 1
        field_16: 0
    };
    v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(std::path::Component::as_os_str(&v2), v6);
    match v1 {
        Err(_) => {
            core::option::unwrap_failed("src/uu/basename/src/basename.rs"); /* do not return */
        },
        Ok(_) => {
            v10 = *((&v1 as &char + 8) as &i64);
            v11 = v1;
        },
    }
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v11, a3, a4) as i8 {
        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(v10, v11);
        return v1;
    }
    v12 = <&str as core::str::pattern::Pattern>::strip_suffix_of(a3, a4, v10, v11);
    if !v12 {
        v13 = v11;
    } else {
        v13 = v6;
    }
    if v12 {
        v14 = v12;
    } else {
        v14 = v10;
    }
    v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(v14, v13);
}
