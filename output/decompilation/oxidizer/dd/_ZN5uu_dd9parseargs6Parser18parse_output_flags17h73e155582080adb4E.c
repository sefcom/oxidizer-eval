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
    let v10: struct24;  // [sp-0xd8]
    let v11: struct24;  // [sp-0xc0]
    let v12: struct24;  // [sp-0xa8]
    let v13: struct24;  // [sp-0x90]
    let v14: i64;  // [sp-0x78]
    let v15: i64;  // [sp-0x70]
    let v16: struct41;  // [sp-0x68]
    let v17: i16;  // [sp-0x38]
    let v19: struct8;  // rax
    let v23: i64;  // r13
    let v25: i64;  // r13
    let v26: i64;  // r12

    v16 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a2, a3);
    v14 = 0;
    v7 = a3;
    v15 = a3;
    v17 = 1;
    v19 = core::str::iter::SplitInternal<P>::next();
    if !v19 {
        return struct8 {
            field_0: 14
        };
    }
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
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a2, v7);
            return struct8 {
                field_0: 11
            };
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
                return struct32 {
                    field_0: 11
                    field_8: v11
                    field_24: v28
                };
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "binary") as i8 {
                v12 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v23);
                return struct32 {
                    field_0: 11
                    field_8: v12
                    field_24: v28
                };
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "text") as i8 {
                v13 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v23);
                return struct32 {
                    field_0: 11
                    field_8: v13
                    field_24: v28
                };
            }
            v26 = v1;
            if (v19 = core::str::iter::SplitInternal<P>::next(), v19) {
                goto LABEL_4d3ce0;
            }
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "fullblock") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "count_bytes") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v23, "skip_bytes") as i8 {
                v10 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v23);
                return Some(struct24 {
                    field_0: v10
                    field_16: v28
                });
            }
        }
    } while ((v19 = core::str::iter::SplitInternal<P>::next(), v19));
}
