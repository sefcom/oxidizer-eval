fn uu_dd::parseargs::Parser::parse_output_flags(a0: &Option<struct24>, a1: u32, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x130]
    let v1: i64;  // [sp-0x128]
    let v2: i64;  // [sp-0x120]
    let v3: i64;  // [sp-0x118]
    let v4: i64;  // [sp-0x110]
    let v5: i64;  // [sp-0x108]
    let v6: i64;  // [sp-0x100]
    let v7: i64;  // [sp-0xf0]
    let v8: i64;  // [sp-0xe8]
    let v9: i64;  // [sp-0xe0]
    let v10: i192;  // [sp-0xd8], Other Possible Types: struct24
    let v11: struct24;  // [sp-0xc0], Other Possible Types: i192
    let v12: struct24;  // [sp-0xa8], Other Possible Types: i192
    let v13: struct24;  // [sp-0x90], Other Possible Types: i192
    let v14: i64;  // [sp-0x78]
    let v15: i64;  // [sp-0x70]
    let v16: struct41;  // [sp-0x68]
    let v17: i16;  // [sp-0x38]
    let v19: struct8;  // rax
    let v23: i64;  // r13
    let v25: i64;  // r13
    let v26: i64;  // r12
    let v27: i64;  // rbx
    let v28: i64;  // rax
    let v29: i64;  // rcx
    let v30: i64;  // rcx
    let v31: i64;  // rcx
    let v32: i64;  // rcx

    v16 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a2, a3);
    v14 = 0;
    v7 = a3;
    v15 = a3;
    v17 = 1;
    v19 = core::str::iter::SplitInternal<P>::next();
    if v19 {
        v0 = a1 + 207;
        v1 = a1 + 193;
        v2 = a1 + 203;
        v3 = a1 + 202;
        v4 = a1 + 201;
        v5 = a1 + 200;
        v6 = a1 + 199;
        v8 = a1 + 198;
        v9 = a1 + 197;
        do {
            v23 = v25;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "cio") as i8 {
                v27 = a0;
                v28 = <T as alloc::slice::hack::ConvertVec>::to_vec(v27 + 8, a2, v7);
                *(v27 as &i64) = 11;
                return v28;
            }
            v26 = a1 + 195;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "direct") as i8 {
LABEL_4d3ce0:
                *(v26 as &i8) = 1;
            } else {
                v26 = a1 + 196;
                if (v19 = core::str::iter::SplitInternal<P>::next(), v19) {
                    goto LABEL_4d3ce0;
                }
                v26 = v8;
                if (v19 = core::str::iter::SplitInternal<P>::next(), v19) {
                    goto LABEL_4d3ce0;
                }
                v26 = v5;
                if (v19 = core::str::iter::SplitInternal<P>::next(), v19) {
                    goto LABEL_4d3ce0;
                }
                v26 = v3;
                if (v19 = core::str::iter::SplitInternal<P>::next(), v19) {
                    goto LABEL_4d3ce0;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "nolinks") as i8 {
                    v11 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v23);
                    v29 = a0;
                    *(v29 as &i64) = 11;
                    *((v29 + 8) as &i192) = v11;
                    v28 = *((&v11 as &char + 16) as &i64);
                    *((v29 + 24) as &i64) = v28;
                    return v28;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "binary") as i8 {
                    v12 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v23);
                    v30 = a0;
                    *(v30 as &i64) = 11;
                    *((v30 + 8) as &i192) = v12;
                    v28 = *((&v12 as &char + 16) as &i64);
                    *((v30 + 24) as &i64) = v28;
                    return v28;
                }
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "text") as i8 {
                    v13 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v23);
                    v32 = a0;
                    *(v32 as &i64) = 11;
                    *((v32 + 8) as &i192) = v13;
                    v28 = *((&v13 as &char + 16) as &i64);
                    *((v32 + 24) as &i64) = v28;
                    return v28;
                }
                v26 = v1;
                if (v19 = core::str::iter::SplitInternal<P>::next(), v19) {
                    goto LABEL_4d3ce0;
                }
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "fullblock") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "count_bytes") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "skip_bytes") as i8 {
                    v10 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v23);
                    v31 = a0;
                    *(v31 as &i64) = 5;
                    *((v31 + 8) as &i192) = v10;
                    v28 = *((&v10 as &char + 16) as &i64);
                    *((v31 + 24) as &i64) = v28;
                    return v28;
                }
            }
        } while ((v19 = core::str::iter::SplitInternal<P>::next(), v19));
    }
    v28 = a0;
    *(v28 as &i64) = 14;
    return v28;
}
