fn uu_dd::parseargs::Parser::parse_input_flags(a0: i64, a1: i64, a2: &str) -> u64 {
    let v0: u64;  // [bp-0x100]
    let v1: i64;  // [bp-0xf8]
    let v2: struct16;  // [bp-0xf0]
    let v3: core::str::pattern::CharSearcher;  // [bp-0xe0]
    let v4: u16;  // [bp-0xb0]
    let v11: u64;  // rdx
    let v12: u64;  // rcx
    let v13: void*;  // rax
    let v14: void*;  // rbx
    let v16: u64;  // r13
    let v17: i64;  // r14
    let v18: u64;  // rax

    v3 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, v11, v12);
    v2 = struct16 {
        field_0: 0
        field_8: v12
    };
    v4 = 1;
    v13 = core::str::iter::SplitInternal<P>::next(&v2);
    if v13 {
        v0 = 11;
        do {
            v16 = v11;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "cio") {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v14, v16);
                *(v1 as &u64) = v0;
                *((v1 + 8) as &i128) = *(v17 as &i128);
                v18 = *((v17 + 16) as &i64);
                *((v1 + 24) as &u64) = v18;
                return v18;
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "direct") {
                *((a1 + 177) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "directory") {
                *((a1 + 178) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "dsync") {
                *((a1 + 179) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "sync") {
                *((a1 + 180) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "nocache") {
                *((a1 + 181) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "nonblock") {
                *((a1 + 182) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "noatime") {
                *((a1 + 183) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "noctty") {
                *((a1 + 184) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "nofollow") {
                *((a1 + 185) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "nolinks") {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v14, v16);
                *(v1 as &u64) = v0;
                *((v1 + 8) as &i128) = *(v17 as &i128);
                v18 = *((v17 + 16) as &i64);
                *((v1 + 24) as &u64) = v18;
                return v18;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "binary") {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v14, v16);
                *(v1 as &u64) = v0;
                *((v1 + 8) as &i128) = *(v17 as &i128);
                v18 = *((v17 + 16) as &i64);
                *((v1 + 24) as &u64) = v18;
                return v18;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "text") {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v14, v16);
                *(v1 as &u64) = v0;
                *((v1 + 8) as &i128) = *(v17 as &i128);
                v18 = *((v17 + 16) as &i64);
                *((v1 + 24) as &u64) = v18;
                return v18;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "fullblock") {
                *((a1 + 189) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "count_bytes") {
                *((a1 + 190) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "skip_bytes") {
                *((a1 + 191) as &i8) = 1;
            } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "append") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v14, v16, "seek_bytes") {
                <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v14, v16);
                *(v1 as &u64) = v0;
                *((v1 + 8) as &i128) = *(v17 as &i128);
                v18 = *((v17 + 16) as &i64);
                *((v1 + 24) as &u64) = v18;
                return v18;
            }
            v14 = core::str::iter::SplitInternal<P>::next(&v2);
        } while (v13);
    }
    *(v1 as &i64) = 14;
    return a0;
}
