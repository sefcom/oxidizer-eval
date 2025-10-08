fn uu_dd::parseargs::Parser::parse_output_flags(a0: i64, a1: i64, a2: &str) -> u64 {
    let v0: i64;  // [bp-0xf0]
    let v1: u64;  // [bp-0xe0]
    let v2: struct24;  // [bp-0xd8]
    let v3: u64;  // [bp-0xc8]
    let v4: struct24;  // [bp-0xc0]
    let v5: u64;  // [bp-0xb0]
    let v6: struct24;  // [bp-0xa8]
    let v7: u64;  // [bp-0x98]
    let v8: struct24;  // [bp-0x90]
    let v9: u64;  // [bp-0x80]
    let v10: struct16;  // [bp-0x78]
    let v11: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v12: u16;  // [bp-0x38]
    let v14: u64;  // rdx
    let v15: u64;  // rcx
    let v16: void*;  // rax
    let v17: void*;  // r14
    let v19: u64;  // r15
    let v20: u64;  // rax

    v11 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, v14, v15);
    v1 = v15;
    v10 = struct16 {
        field_0: 0
        field_8: v15
    };
    v12 = 1;
    v16 = core::str::iter::SplitInternal<P>::next(&v10);
    if v16 {
        do {
            v19 = v14;
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "cio") {
                v20 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v0 + 8, v14, v1);
                *(v0 as &i64) = 11;
                return v20;
            }
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "direct") {
                *((a1 + 195) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "directory") {
                *((a1 + 196) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "dsync") {
                *((a1 + 197) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "sync") {
                *((a1 + 198) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "nocache") {
                *((a1 + 199) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "nonblock") {
                *((a1 + 200) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "noatime") {
                *((a1 + 201) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "noctty") {
                *((a1 + 202) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "nofollow") {
                *((a1 + 203) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "nolinks") {
                v4 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v19);
                *(v0 as &i64) = 11;
                *((v0 + 8) as &i128) = *(&v4.field_0 as &i128);
                *((v0 + 24) as &u64) = v5;
                return v5;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "binary") {
                v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v19);
                *(v0 as &i64) = 11;
                *((v0 + 8) as &i128) = *(&v6.field_0 as &i128);
                *((v0 + 24) as &u64) = v7;
                return v7;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "text") {
                v8 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v19);
                *(v0 as &i64) = 11;
                *((v0 + 8) as &i128) = *(&v8.field_0 as &i128);
                *((v0 + 24) as &u64) = v9;
                return v9;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "append") {
                *((a1 + 193) as &i8) = 1;
            } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "seek_bytes") {
                *((a1 + 207) as &i8) = 1;
            } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "fullblock") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "count_bytes") && !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v17, v19, "skip_bytes") {
                v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v17, v19);
                *(v0 as &i64) = 5;
                *((v0 + 8) as &i128) = *(&v2.field_0 as &i128);
                *((v0 + 24) as &u64) = v3;
                return v3;
            }
            v17 = core::str::iter::SplitInternal<P>::next(&v10);
        } while (v16);
    }
    *(v0 as &i64) = 14;
    return a0;
}
