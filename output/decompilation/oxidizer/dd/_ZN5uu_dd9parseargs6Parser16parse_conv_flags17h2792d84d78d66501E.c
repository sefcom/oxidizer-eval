fn uu_dd::parseargs::Parser::parse_conv_flags(a0: &Option<struct24>, a1: &struct1, a2: u32, a3: u32) -> u64 {
    let v0: struct24;  // [sp-0x90]
    let v1: struct16;  // [bp-0x78]
    let v2: struct41;  // [sp-0x68]
    let v3: i16;  // [sp-0x38]
    let v5: i64;  // rax
    let v6: i64;  // rbx
    let v7: i64;  // rdx
    let v8: i64;  // rbp

    v2 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a2, a3);
    v1 = struct16 {
        field_0: 0
        field_8: a3
    };
    v3 = 1;
    v5 = core::str::iter::SplitInternal<P>::next(&v1);
    if !v5 {
        return struct8 {
            field_0: 14
        };
    }
    v6 = v5;
    v8 = v7;
    do {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "ascii") as i8 {
            *((a1 + 160) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "ebcdic") as i8 {
            *((a1 + 161) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "ibm") as i8 {
            *((a1 + 162) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "lcase") as i8 {
            *((a1 + 164) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "ucase") as i8 {
            *((a1 + 163) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "block") as i8 {
            *((a1 + 165) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "unblock") as i8 {
            *((a1 + 166) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "swab") as i8 {
            *((a1 + 167) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "sync") as i8 {
            *((a1 + 168) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "noerror") as i8 {
            *((a1 + 169) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "sparse") as i8 {
            *((a1 + 170) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "excl") as i8 {
            *((a1 + 171) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "nocreat") as i8 {
            *((a1 + 172) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "notrunc") as i8 {
            *((a1 + 173) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "fdatasync") as i8 {
            *((a1 + 174) as &i8) = 1;
        } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v6, v8, "fsync") as i8 {
            *((a1 + 175) as &i8) = 1;
        } else {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v6, v8);
            return Some(struct8 {
                field_8: <UNKNOWN>
            });
        }
    } while ((v6 = core::str::iter::SplitInternal<P>::next(&v1), v8 = v7, v6));
}
