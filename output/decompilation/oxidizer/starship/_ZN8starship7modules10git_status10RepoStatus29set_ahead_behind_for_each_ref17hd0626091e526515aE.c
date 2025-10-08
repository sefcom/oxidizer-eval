fn starship::modules::git_status::RepoStatus::set_ahead_behind_for_each_ref(a1: &str) -> : struct16 {
    let a0: i64;  // rdi
    let v0: struct40;  // [bp-0x108]
    let v1: i64;  // [bp-0x100]
    let v2: void*;  // [bp-0xf8], Other Possible Types: <anon>, core::option::Option<(&str, &str)>, struct32, struct48
    let v3: struct16;  // [bp-0xf0]
    let v4: u64;  // [bp-0xe8]
    let v5: struct92;  // [bp-0xe0], Other Possible Types: unsigned long
    let v6: struct32;  // [bp-0xd0]
    let v7: Result<struct72, struct24>;  // [bp-0xc0]
    let v8: struct72;  // [bp-0xb0]
    let v9: struct280;  // [bp-0xa0]
    let v10: iNone;  // [bp-0x98]
    let v11: iNone;  // [bp-0x88]
    let v12: struct16;  // [bp-0x78]
    let v13: core::str::pattern::CharSearcher;  // [bp-0x68]
    let v14: struct32;  // [bp-0x38]
    let v16: struct24;  // rbx
    let v17: u64;  // rdx
    let v18: u32;  // esi
    let v20: struct56;  // rax
    let v21: struct8;  // rdx
    let v22: struct32;  // rbp
    let v23: struct24;  // rbx
    let v24: struct40;  // rax
    let v25: struct40;  // r12
    let v30: struct24;  // rax
    let v31: &str;  // rax:rdx
    let v32: &str;  // rax:rdx
    let v33: core::result::Result<usize, core::num::error::ParseIntError>;  // rax:rdx
    let v34: core::str::pattern::CharSearcher;  // [bp-0xa8]

    v16 = a0;
    if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a1, v17, &g_52d3e5) || core::slice::<impl [T]>::ends_with(v18, v17) {
        return struct24 {
            field_0: 0
            padding_8: <UNKNOWN>
            field_16: 0
        };
    }
    v2 = core::str::<impl str>::split_once(a1, v17);
    v2 = core::option::unwrap(v2);
    v31 = core::str::<impl str>::trim_matches(v4, v5, v17);
    v13 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, v31.data_ptr, v31.length);
    v12 = struct16 {
        field_0: 0
        field_8: v31.length
    };
    v14 = 1;
    v20 = core::str::iter::SplitInternal<P>::next(&v12);
    if v20 {
        v0 = a0 + 16;
        v1 = a0;
        do {
            v32 = core::str::<impl str>::trim_matches(v20, v21, v21);
            v34 = <char as core::str::pattern::Pattern>::into_searcher(0x20, v32.data_ptr, v32.length);
            v3 = struct16 {
                field_0: 0
                field_8: v32.length
            };
            v7 = v11;
            v6 = v10;
            v5 = *(&v34.haystack.data_ptr as &i128);
            v8 = 1;
            v2 = 1;
            v22 = core::str::iter::SplitInternal<P>::next(&v3);
            v23 = v16;
            v2 = 0;
            v24 = core::str::iter::SplitInternal<P>::get_end();
            v25 = v24;
            v23 = v16;
            if !!v25 && !!v22 {
                if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v17, "ahead") {
                    v16 = v0;
                    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v22, v17, "behind") {
                        return;
                    }
                }
                v33 = core::num::<impl usize>::from_ascii_radix(&v34, v25, v17);
                *(v16 as &u64) = v34.haystack.data_ptr as i8 ^ 1;
                *((v16 + 8) as &struct280) = v9;
                v23 = v1;
            }
            v16 = v23;
            v20 = core::str::iter::SplitInternal<P>::next(&v12);
        } while (v20);
    }
    v2 = struct32 {
        field_0: 0
        field_8: 2
        field_16: v16
        field_24: v16 + 16
    };
    v30 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v2);
    if !v30 {
        return;
    }
    do {
        if !*(v30 as &i64) {
            *(v30 as &i64) = 1;
            *((v30 + 8) as &i64) = 0;
        }
        v30 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v2);
    } while (v30);
    return;
    return struct24 {
        field_0: 0
        padding_8: <UNKNOWN>
        field_16: 0
    };
}
