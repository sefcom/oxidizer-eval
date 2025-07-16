fn uu_dd::parseargs::Parser::parse_output_flags(a1: i64, a2: i64, a3: i32) -> : struct8 {
    let a0: i64;  // rsi
    let v0: i64;  // [bp-0x138]
    let v1: u64;  // [bp-0x130]
    let v2: u64;  // [bp-0x128]
    let v3: u64;  // [bp-0x120]
    let v4: u64;  // [bp-0x118]
    let v5: u64;  // [bp-0x110]
    let v6: u64;  // [bp-0x108]
    let v7: u64;  // [bp-0x100]
    let v8: void*;  // [bp-0xf0]
    let v9: u64;  // [bp-0xe8]
    let v10: u64;  // [bp-0xe0]
    let v11: u128;  // [bp-0xd8]
    let v12: u64;  // [bp-0xc8]
    let v13: u128;  // [bp-0xc0]
    let v14: u64;  // [bp-0xb0]
    let v15: u128;  // [bp-0xa8]
    let v16: u64;  // [bp-0x98]
    let v17: u128;  // [bp-0x90]
    let v18: u64;  // [bp-0x80]
    let v19: u440;  // [bp-0x78]
    let v20: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v21: u16;  // [bp-0x38]
    let v23: core::option::Option<&str>;  // rax
    let v24: core::option::Option<&str>;  // rbp
    let v25: u64;  // rdx
    let v26: u64;  // r13
    let v27: void*;  // r13
    let v29: u64;  // rcx
    let v34: i64;  // rdi
    let v35: i64;  // rdi

    v20 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a1, a2);
    v8 = a2;
    v19 = core::str::iter::SplitInternal<char> {
        start: 0
        end: a2
        matcher: core::str::pattern::CharSearcher {
            haystack: &str {
                data_ptr: <UNKNOWN>
                length: <UNKNOWN>
            }
            finger: <UNKNOWN>
            finger_back: <UNKNOWN>
            needle: <UNKNOWN>
            utf8_size: <UNKNOWN>
            utf8_encoded: <UNKNOWN>
        }
        finished: <UNKNOWN>
    };
    v21 = 1;
    v23 = core::str::iter::SplitInternal<P>::next(&v19) as u64;
    if let Some(_) = v23 {
        v24 = v23;
        v1 = a0 + 207;
        v2 = a0 + 193;
        v3 = a0 + 203;
        v4 = a0 + 202;
        v5 = a0 + 201;
        v6 = a0 + 200;
        v7 = a0 + 199;
        v9 = a0 + 198;
        v10 = a0 + 197;
        do {
            v27 = v26;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v27 as u32, "cio") as i8 {
                <T as alloc::slice::hack::ConvertVec>::to_vec(a1, v8, a2);
                *(v35 as &i64) = 11;
                return;
            }
            v29 = a0 + 195;
            if ... {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v27 as u32, "nolinks") as i8 {
                    <T as alloc::slice::hack::ConvertVec>::to_vec(v24, v27, a2);
                    *(v0 as &i64) = 11;
                    *((v0 + 8) as &u128) = v13;
                    *((v0 + 24) as &u64) = v14;
                    return;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v27 as u32, "binary") as i8 {
                    <T as alloc::slice::hack::ConvertVec>::to_vec(v24, v27, a2);
                    *(v0 as &i64) = 11;
                    *((v0 + 8) as &u128) = v15;
                    *((v0 + 24) as &u64) = v16;
                    return;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v27 as u32, "text") as i8 {
                    <T as alloc::slice::hack::ConvertVec>::to_vec(v24, v27, a2);
                    *(v0 as &i64) = 11;
                    *((v0 + 8) as &u128) = v17;
                    *((v0 + 24) as &u64) = v18;
                    return;
                }
                v29 = v2;
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v27 as u32, "append") as i8 || (v29 = v1, <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v27 as u32, "seek_bytes") as i8) {
                    goto LABEL_4d3ce0;
                }
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v27 as u32, "fullblock") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v27 as u32, "count_bytes") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v24, v27 as u32, "skip_bytes") as i8 {
                    <T as alloc::slice::hack::ConvertVec>::to_vec(v24, v27, a2);
                    *(v0 as &i64) = 5;
                    *((v0 + 8) as &u128) = v11;
                    *((v0 + 24) as &u64) = v12;
                    return;
                }
            } else {
LABEL_4d3ce0:
                *(v29 as &i8) = 1;
            }
        } while ((v24 = core::str::iter::SplitInternal<P>::next(&v19) as u64, v25 = v25, v24));
    }
    *(v34 as &i64) = 14;
    return;
}
