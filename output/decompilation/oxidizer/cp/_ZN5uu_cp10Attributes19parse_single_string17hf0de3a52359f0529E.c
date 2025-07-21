fn uu_cp::Attributes::parse_single_string(a1: i64, a2: i64) -> Result<struct24, struct12> {
    let a0: u64;  // rsi
    let v0: void*;  // [bp-0xb8]
    let v1: u64;  // [bp-0xb0]
    let v2: alloc::string::String;  // [bp-0xa8]
    let v3: i64;  // [bp-0x90]
    let v4: u64;  // [bp-0x88]
    let v5: u128;  // [bp-0x80]
    let v6: u64;  // [bp-0x70]
    let v7: struct24;  // [bp-0x68], Other Possible Types: u64
    let v8: u64;  // [bp-0x60]
    let v9: i64;  // [bp-0x58]
    let v10: u64;  // [bp-0x50]
    let v11: void*;  // [bp-0x48]
    let v12: void*;  // [bp-0x38]
    let v13: u128;  // [bp-0x30]
    let v14: u8;  // [bp-0x20]
    let v16: i64;  // rdi
    let v17: i64;  // rax
    let v18: i64;  // rdi

    v2 = alloc::str::<impl str>::to_lowercase(a0, a1);
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "all") as i8 {
        *((v16 + 8) as &i64) = 1103823438081;
        *((v16 + 16) as &i32) = 65793;
        goto LABEL_5019f1;
    } else {
        *(&v1 as &i32) = 0;
        v0 = 0;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "mode") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "ownership") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "timestamps") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "context") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "link") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "links") as i8 || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, "xattr") as i8 {
            *(v17 as &i16) = 257;
            *((v16 + 16) as &i32) = v1;
            *((v16 + 8) as &void*) = v0;
LABEL_5019f1:
            *(v16 as &i64) = 13;
        } else {
            v12 = 0;
            v13 = *(&v2.vec.buf.ptr as &i128);
            v14 = 1;
            v3 = &v12;
            v4 = <os_display::Quoted as core::fmt::Display>::fmt;
            v7 = "invalid attribute ";
            v8 = 1;
            v11 = 0;
            v9 = &v3;
            v10 = 1;
            v7 = core::option::Option<T>::map_or_else(a1);
            *((v18 + 24) as &u64) = v6;
            *((v18 + 8) as &u128) = v5;
            *(v18 as &i64) = 9;
        }
    }
    return;
}
