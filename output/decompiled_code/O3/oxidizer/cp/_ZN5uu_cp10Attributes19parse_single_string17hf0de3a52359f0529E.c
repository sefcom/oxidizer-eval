fn uu_cp::Attributes::parse_single_string(a0: &Result<struct24, struct12>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xb8]
    let v1: i32;  // [sp-0xb0]
    let v2: struct24;  // [sp-0xa8], Other Possible Types: i192
    let v3: i192;  // [sp-0x80]
    let v4: i64;  // [sp-0x38]
    let v5: i128;  // [sp-0x30]
    let v6: i8;  // [sp-0x20]
    let v8: i64;  // r14
    let v9: i64;  // r15
    let v10: i64;  // rax

    v2 = alloc::str::<impl str>::to_lowercase(a1, a2);
    v8 = *((&v2 as &char + 8) as &i64);
    v9 = *((&v2 as &char + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "all") as i8 {
        *((a0 + 8) as &i64) = 1103823438081;
        *((a0 + 16) as &i32) = 65793;
    } else {
        v1 = 0;
        v0 = 0;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "mode") as i8 {
            v10 = &v0;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "ownership") as i8 {
            v10 = &v0;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "timestamps") as i8 {
            v10 = &v0;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "context") as i8 {
            v10 = &v0;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "link") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "links") as i8 {
            v10 = &v1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, "xattr") as i8 {
            v10 = &v1;
        } else {
            v4 = 0;
            v5 = *((&v2 as &char + 8) as &i128);
            v6 = 1;
            v3 = format!("invalid attribute {:?}", &v4);
            *((a0 + 24) as &i64) = *((&v3 as &char + 16) as &i64);
            *((a0 + 8) as &i192) = v3;
            *(a0 as &i64) = 9;
            return a0;
        }
        *(v10 as &i16) = 257;
        *((a0 + 16) as &i32) = v1;
        *((a0 + 8) as &i64) = v0;
    }
    return struct8 {
        field_0: 13
    };
}
