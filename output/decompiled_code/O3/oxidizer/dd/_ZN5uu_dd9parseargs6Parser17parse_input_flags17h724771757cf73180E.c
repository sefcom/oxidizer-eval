fn uu_dd::parseargs::Parser::parse_input_flags(a0: void*, a1: &u64, a2: u32, a3: u32) -> u64 {
    let v0: i64;  // [sp-0x100]
    let v1: i64;  // [sp-0xf0]
    let v2: i64;  // [sp-0xe8]
    let v3: struct41;  // [sp-0xe0]
    let v4: i16;  // [sp-0xb0]
    let v5: i8;  // [bp-0xa8]
    let v6: i8;  // [bp-0x90]
    let v7: i8;  // [bp-0x78]
    let v8: i8;  // [bp-0x60]
    let v9: i8;  // [bp-0x48]
    let v11: struct8;  // rax
    let v13: i64;  // r13
    let v15: i64;  // r13
    let v16: i64;  // rax
    let v18: i64;  // rcx

    v3 = <char as core::str::pattern::Pattern>::into_searcher(44, a2, a3);
    v1 = 0;
    v2 = a3;
    v4 = 1;
    v11 = core::str::iter::SplitInternal<P>::next();
    if v11 {
        v0 = 11;
        do {
            v13 = v15;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "cio") as i8 {
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v6, v11, v13);
                vvar_359{reg 24} = a0;
                *(v18 as &i64) = v0;
                *((v18 + 8) as &i8) = v6;
                *((v18 + 24) as &i8) = (&v9)[16];
                return v16;
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "direct") as i8 {
                *((a1 + 177) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "directory") as i8 {
                *((a1 + 178) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "dsync") as i8 {
                *((a1 + 179) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "sync") as i8 {
                *((a1 + 180) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "nocache") as i8 {
                *((a1 + 181) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "nonblock") as i8 {
                *((a1 + 182) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "noatime") as i8 {
                *((a1 + 183) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "noctty") as i8 {
                *((a1 + 184) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "nofollow") as i8 {
                *((a1 + 185) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "nolinks") as i8 {
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v7, v11, v13);
                vvar_367{reg 24} = a0;
                *(v18 as &i64) = v0;
                *((v18 + 8) as &i8) = v7;
                *((v18 + 24) as &i8) = (&v9)[16];
                return v16;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "binary") as i8 {
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v8, v11, v13);
                vvar_375{reg 24} = a0;
                *(v18 as &i64) = v0;
                *((v18 + 8) as &i8) = v8;
                *((v18 + 24) as &i8) = (&v9)[16];
                return v16;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "text") as i8 {
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v9, v11, v13);
                v18 = a0;
                *(v18 as &i64) = v0;
                *((v18 + 8) as &i8) = v9;
                v16 = (&v9)[16];
                *((v18 + 24) as &i64) = v16;
                return v16;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "fullblock") as i8 {
                *((a1 + 189) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "count_bytes") as i8 {
                *((a1 + 190) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "skip_bytes") as i8 {
                *((a1 + 191) as &i8) = 1;
            } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "append") as i8 && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v11, v13, "seek_bytes") as i8 {
                v0 = 5;
                <T as alloc::slice::hack::ConvertVec>::to_vec(&v5, v11, v13);
                vvar_383{reg 24} = a0;
                *(v18 as &i64) = v0;
                *((v18 + 8) as &i8) = v5;
                *((v18 + 24) as &i8) = (&v9)[16];
                return v16;
            }
            v11 = core::str::iter::SplitInternal<P>::next();
        } while (v11);
    }
    v16 = a0;
    *(v16 as &i64) = 14;
    return v16;
}
