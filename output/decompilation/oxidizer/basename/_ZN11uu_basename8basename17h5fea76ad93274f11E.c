fn uu_basename::basename(a0: &struct24, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: struct24;  // [sp-0xf0]
    let v1: struct24;  // [sp-0xd8], Other Possible Types: struct20, Result<struct16, struct10>
    let v2: struct56;  // [sp-0x98]
    let v3: struct1;  // [bp-0x60]
    let v5: i64;  // r13
    let v7: i64;  // rdx
    let v9: i64;  // rdx
    let v11: i64;  // r12
    let v12: i64;  // r13
    let v13: i64;  // rax

    v5 = a1;
    if v7 {
        v9 = v7;
    } else {
        v9 = a2;
    }
    if v7 {
        v5 = core::str::<impl str>::trim_end_matches(a1, a2);
    }
    v0 = std::sys::os_str::bytes::Slice::to_owned(v5, v9);
    v1 = std::path::Path::components(v0.field_8, v0.field_16);
    v3 = struct1 {
        field_0: 10
    };
    v2 = core::iter::traits::iterator::Iterator::fold(&v1, &v3);
    if v2.field_0 as i8 == 10 {
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: 0
        };
    }
    v1 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(std::path::Component::as_os_str(&v2), a2);
    match v1 {
        Err(_) => {
            core::option::unwrap_failed("src/uu/basename/src/basename.rs"); /* do not return */
        },
        Ok(_) => {
            v11 = *((&v1 as &char + 8) as &i64);
            v12 = *((&v1 as &char + 16) as &i64);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v12, a3, a4) as i8 {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(v11, v12);
                return v1;
            }
            v13 = <&str as core::str::pattern::Pattern>::strip_suffix_of(a3, a4, v11, v12);
            if v13 {
                v11 = v13;
            }
            v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(v11, v12);
            return v1;
        },
    }
}
