fn uu_dd::parseargs::Parser::parse_conv_flags(a0: void*, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0x90], Other Possible Types: i192
    let v1: i64;  // [sp-0x78]
    let v2: i64;  // [sp-0x70]
    let v3: struct41;  // [sp-0x68]
    let v4: i16;  // [sp-0x38]
    let v7: struct8;  // rax
    let v8: i64;  // rbp
    let v10: i64;  // rbp
    let v11: i64;  // rax
    let v12: i64;  // rcx

    v3 = <char as core::str::pattern::Pattern>::into_searcher(44, a2, a3);
    v1 = 0;
    v2 = a3;
    v4 = 1;
    v7 = core::str::iter::SplitInternal<P>::next();
    if v7 {
        do {
            v8 = v10;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "ascii") as i8 {
                *((a1 + 160) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "ebcdic") as i8 {
                *((a1 + 161) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "ibm") as i8 {
                *((a1 + 162) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "lcase") as i8 {
                *((a1 + 164) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "ucase") as i8 {
                *((a1 + 163) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "block") as i8 {
                *((a1 + 165) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "unblock") as i8 {
                *((a1 + 166) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "swab") as i8 {
                *((a1 + 167) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "sync") as i8 {
                *((a1 + 168) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "noerror") as i8 {
                *((a1 + 169) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "sparse") as i8 {
                *((a1 + 170) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "excl") as i8 {
                *((a1 + 171) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "nocreat") as i8 {
                *((a1 + 172) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "notrunc") as i8 {
                *((a1 + 173) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "fdatasync") as i8 {
                *((a1 + 174) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, "fsync") as i8 {
                *((a1 + 175) as &i8) = 1;
            } else {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v7, v8);
                v12 = a0;
                *(v12 as &i64) = 6;
                *((v12 + 8) as &i192) = v0;
                v11 = *((&v0 as &char + 16) as &i64);
                *((v12 + 24) as &i64) = v11;
                return v11;
            }
        } while ((v7 = core::str::iter::SplitInternal<P>::next(), v7));
    }
    v11 = a0;
    *(v11 as &i64) = 14;
    return v11;
}
