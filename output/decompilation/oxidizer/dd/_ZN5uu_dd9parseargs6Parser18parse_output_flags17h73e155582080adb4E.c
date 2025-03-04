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
    let v14: struct16;  // [bp-0x78]
    let v15: struct41;  // [sp-0x68]
    let v16: i16;  // [sp-0x38]
    let v18: i64;  // rax
    let v19: i64;  // rbp
    let v20: i64;  // rdx
    let v21: i64;  // r13
    let v22: i64;  // rcx

    v15 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, a2, a3);
    v14 = struct16 {
        field_0: 0
        field_8: a3
    };
    v7 = a3;
    v16 = 1;
    v18 = core::str::iter::SplitInternal<P>::next(&v14);
    if !v18 {
        return struct8 {
            field_0: 14
        };
    }
    v19 = v18;
    v21 = v20;
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
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "cio") as i8 {
            <T as alloc::slice::hack::ConvertVec>::to_vec(a0 + 8, a2, v7);
            return struct8 {
                field_0: 11
            };
        }
        v22 = a1 + 195;
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "direct") as i8 {
LABEL_4d3ce0:
            *(v22 as &i8) = 1;
        } else {
            v22 = a1 + 196;
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "directory") as i8 && (v22 = v9, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "dsync") as i8)) {
                goto LABEL_4d3ce0;
            }
            v22 = v8;
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "sync") as i8 && (v22 = v6, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "nocache") as i8)) {
                goto LABEL_4d3ce0;
            }
            v22 = v5;
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "nonblock") as i8 && (v22 = v4, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "noatime") as i8)) {
                goto LABEL_4d3ce0;
            }
            v22 = v3;
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "noctty") as i8 && (v22 = v2, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "nofollow") as i8)) {
                goto LABEL_4d3ce0;
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "nolinks") as i8 {
                v11 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v21);
                return struct32 {
                    field_0: 11
                    field_8: *(&v11.field_0 as &i128)
                    field_24: v24
                };
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "binary") as i8 {
                v12 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v21);
                return struct32 {
                    field_0: 11
                    field_8: *(&v12.field_0 as &i128)
                    field_24: v24
                };
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "text") as i8 {
                v13 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v21);
                return struct32 {
                    field_0: 11
                    field_8: *(&v13.field_0 as &i128)
                    field_24: v24
                };
            }
            v22 = v1;
            if !(!<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "append") as i8 && (v22 = v0, !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "seek_bytes") as i8)) {
                goto LABEL_4d3ce0;
            }
            if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "fullblock") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "count_bytes") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v19, v21, "skip_bytes") as i8 {
                v10 = <T as alloc::slice::hack::ConvertVec>::to_vec(v19, v21);
                return Some(struct8 {
                    field_8: <UNKNOWN>
                });
            }
        }
    } while ((v19 = core::str::iter::SplitInternal<P>::next(&v14), v21 = v20, v19));
}
