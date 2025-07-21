fn uu_dd::parseargs::Parser::parse_conv_flags(a0: i64, a1: i64, a2: i64, a3: i32) -> long long {
    let v0: i64;  // [bp-0x98]
    let v1: u128;  // [bp-0x90]
    let v2: u64;  // [bp-0x80]
    let v3: core::str::iter::SplitInternal<char>;  // [bp-0x78]
    let v4: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v5: u16;  // [bp-0x38]
    let v7: core::option::Option<&str>;  // rax
    let v8: core::option::Option<&str>;  // rbx
    let v9: u64;  // rdx
    let v11: void*;  // rbp

    v4 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a2, a3);
    v3 = core::str::iter::SplitInternal<char> {
        start: 0
        end: a3 as u64
        matcher: core::str::pattern::CharSearcher {
            haystack: &str {
                data_ptr: <UNKNOWN>
                length: <UNKNOWN>
            }
            finger: <UNKNOWN>
            finger_back: <UNKNOWN>
            utf8_encoded: <UNKNOWN>
            needle: <UNKNOWN>
            utf8_size: <UNKNOWN>
        }
        finished: <UNKNOWN>
    };
    v5 = 1;
    v7 = core::str::iter::SplitInternal<P>::next(&v3) as u64;
    if let Some(_) = v7 {
        do {
            v11 = v9;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "ascii") as i8 {
                *((a1 + 160) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "ebcdic") as i8 {
                *((a1 + 161) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "ibm") as i8 {
                *((a1 + 162) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "lcase") as i8 {
                *((a1 + 164) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "ucase") as i8 {
                *((a1 + 163) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "block") as i8 {
                *((a1 + 165) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "unblock") as i8 {
                *((a1 + 166) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "swab") as i8 {
                *((a1 + 167) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "sync") as i8 {
                *((a1 + 168) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "noerror") as i8 {
                *((a1 + 169) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "sparse") as i8 {
                *((a1 + 170) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "excl") as i8 {
                *((a1 + 171) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "nocreat") as i8 {
                *((a1 + 172) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "notrunc") as i8 {
                *((a1 + 173) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "fdatasync") as i8 {
                *((a1 + 174) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v11 as u32, "fsync") as i8 {
                *((a1 + 175) as &i8) = 1;
            } else {
                <T as alloc::slice::hack::ConvertVec>::to_vec(v8, v11, a3);
                *(v0 as &i64) = 6;
                *((v0 + 8) as &u128) = v1;
                *((v0 + 24) as &u64) = v2;
                return v2;
            }
            v8 = core::str::iter::SplitInternal<P>::next(&v3) as u64;
        } while (v7);
    }
    *(v0 as &i64) = 14;
    return a0;
}
