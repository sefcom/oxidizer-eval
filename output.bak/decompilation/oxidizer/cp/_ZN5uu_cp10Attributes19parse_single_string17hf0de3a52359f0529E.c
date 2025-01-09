fn uu_cp::Attributes::parse_single_string(a0: &Result<struct24, struct12>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xb8]
    let v1: i32;  // [sp-0xb0]
    let v2: i192;  // [sp-0xa8], Other Possible Types: struct24
    let v3: i64;  // [sp-0x90]
    let v4: i64;  // [sp-0x88]
    let v7: i64;  // [sp-0x68]
    let v8: i64;  // [sp-0x60]
    let v9: i64;  // [sp-0x58]
    let v10: i64;  // [sp-0x50]
    let v11: i64;  // [sp-0x48]
    let v12: i64;  // [sp-0x38]
    let v13: i128;  // [sp-0x30]
    let v14: i8;  // [sp-0x20]
    let v16: i64;  // r14
    let v17: i64;  // r15
    let v18: i64;  // rax

    v2 = alloc::str::<impl str>::to_lowercase(a1, a2);
    v16 = *((&v2 as &char + 8) as &i64);
    v17 = *((&v2 as &char + 16) as &i64);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, "all") as i8 {
        return Err(struct12 {
            field_0: 1103823438081
            field_8: 65793
        });
    }
    v1 = 0;
    v0 = 0;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, "mode") as i8 {
        v18 = &v0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, "ownership") as i8 {
        v18 = &v0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, "timestamps") as i8 {
        v18 = &v0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, "context") as i8 {
        v18 = &v0;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, "link") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, "links") as i8 {
        v18 = &v1;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v16, v17, "xattr") as i8 {
        v18 = &v1;
    } else {
        v12 = 0;
        v13 = *((&v2 as &char + 8) as &i128);
        v14 = 1;
        v3 = &v12;
        v4 = <os_display::Quoted as core::fmt::Display>::fmt;
        v7 = "invalid attribute ";
        v8 = 1;
        v11 = 0;
        v9 = &v3;
        v10 = 1;
        core::option::Option<T>::map_or_else();
        return Ok(struct24 {
            field_0: v5
            field_16: v6
        });
    }
    *(v18 as &i16) = 257;
    return Err(struct12 {
        field_0: v0
        field_8: v1
    });
}
