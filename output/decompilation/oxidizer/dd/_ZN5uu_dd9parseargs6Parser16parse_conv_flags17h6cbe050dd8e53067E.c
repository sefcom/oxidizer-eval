fn uu_dd::parseargs::Parser::parse_conv_flags(a0: i64, a1: i64, a2: &str) -> u64 {
    let v0: i64;  // [bp-0x98]
    let v1: struct24;  // [bp-0x90]
    let v2: u64;  // [bp-0x80]
    let v3: struct16;  // [bp-0x78]
    let v4: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v5: u16;  // [bp-0x38]
    let v7: u64;  // rdx
    let v8: u64;  // rcx
    let v9: void*;  // rax
    let v10: void*;  // rbx
    let v12: u64;  // rbp

    v4 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, v7, v8);
    v3 = struct16 {
        field_0: 0
        field_8: v8
    };
    v5 = 1;
    v9 = core::str::iter::SplitInternal<P>::next(&v3);
    if v9 {
        do {
            v12 = v7;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "ascii") {
                *((a1 + 160) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "ebcdic") {
                *((a1 + 161) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "ibm") {
                *((a1 + 162) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "lcase") {
                *((a1 + 164) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "ucase") {
                *((a1 + 163) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "block") {
                *((a1 + 165) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "unblock") {
                *((a1 + 166) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "swab") {
                *((a1 + 167) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "sync") {
                *((a1 + 168) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "noerror") {
                *((a1 + 169) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "sparse") {
                *((a1 + 170) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "excl") {
                *((a1 + 171) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "nocreat") {
                *((a1 + 172) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "notrunc") {
                *((a1 + 173) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "fdatasync") {
                *((a1 + 174) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v10, v12, "fsync") {
                *((a1 + 175) as &i8) = 1;
            } else {
                v1 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, v12);
                *(v0 as &i64) = 6;
                *((v0 + 8) as &i128) = *(&v1.field_0 as &i128);
                *((v0 + 24) as &u64) = v2;
                return v2;
            }
            v10 = core::str::iter::SplitInternal<P>::next(&v3);
        } while (v9);
    }
    *(v0 as &i64) = 14;
    return a0;
}
