fn uu_dd::parseargs::Parser::parse_conv_flags(a0: &Option<struct24>, a1: &struct1, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0x90]
    let v1: i64;  // [sp-0x78]
    let v2: i64;  // [sp-0x70]
    let v3: struct41;  // [sp-0x68]
    let v4: i16;  // [sp-0x38]
    let v7: struct8;  // rax
    let v8: i64;  // rbp
    let v9: i64;  // rdx
    let v10: i64;  // rbp

    v3 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a2, a3);
    v1 = 0;
    v2 = a3;
    v4 = 1;
    v7 = core::str::iter::SplitInternal<P>::next();
    if !v7 {
        return struct8 {
            field_0: 14
        };
    }
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
            return Some(struct24 {
                field_0: v0
                field_16: v11
            });
        }
    } while ((v7 = core::str::iter::SplitInternal<P>::next(), v10 = v9, v7));
}
