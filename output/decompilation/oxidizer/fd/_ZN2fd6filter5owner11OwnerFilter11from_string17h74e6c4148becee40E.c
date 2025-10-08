fn fd::filter::owner::OwnerFilter::from_string(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct12;  // [bp-0xf8]
    let v1: u64;  // [bp-0xf0]
    let v2: u64;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: u128;  // [bp-0xa8]
    let v5: void*;  // [bp-0x90]
    let v6: u64;  // [bp-0x88]
    let v7: core::str::pattern::CharSearcher;  // [bp-0x80]
    let v8: u16;  // [bp-0x50]
    let v9: alloc::string::String;  // [bp-0x48]
    let v10: u64;  // [bp-0x18]
    let v12: u64;  // r14
    let v13: u64;  // rax
    let v14: u64;  // rax
    let v15: u64;  // rdx
    let v16: u64;  // rax
    let v17: alloc::string::String;  // rax

    v10 = v12;
    v2 = a1;
    v3 = a2;
    v7 = <char as core::str::pattern::Pattern>::into_searcher(0x3a, a1, a2);
    v5 = 0;
    v6 = a2;
    v8 = 1;
    v13 = core::str::iter::SplitInternal<P>::next(&v5);
    v14 = core::str::iter::SplitInternal<P>::next(&v5);
    if !core::str::iter::SplitInternal<P>::next(&v5) {
        v0 = fd::filter::owner::Check<T>::parse(v13, v15);
        if !(v0.field_0 as i8 & 1) {
            v4 = *((&v0.field_0 as &char + 4) as &i64);
            v16 = fd::filter::owner::Check<T>::parse(&v0, v14, v15);
            if v0.field_0 as i32 != 1 {
                return struct16 {
                    field_0: v4 & 18446744073709551615 | *((&v0.field_0 as &char + 4) as &i64) as u64 as u128 * 0x10000000000000000
                };
            }
        }
        v17 = v1;
    } else {
        v9 = format!("more than one ':' present in owner string '{}'. See 'fd --help'.", &v2);
        v17 = anyhow::error::<impl anyhow::Error>::msg(&v9);
    }
    return struct16 {
        field_0: 3
        padding_4: <UNKNOWN>
        field_8: v17
    };
}
