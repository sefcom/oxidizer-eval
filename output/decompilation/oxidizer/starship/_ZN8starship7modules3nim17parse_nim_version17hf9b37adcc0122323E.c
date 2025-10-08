fn starship::modules::nim::parse_nim_version(a0: u64, a1: i1536) -> long long {
    let v0: struct16;  // [bp-0x98]
    let v1: core::str::pattern::CharSearcher;  // [bp-0x88]
    let v2: Option<struct24>;  // [bp-0x58]
    let v3: struct24;  // [bp-0x50]
    let v4: struct192;  // [bp-0x48]
    let v5: core::str::pattern::CharSearcher;  // [bp-0x40]
    let v6: struct24;  // [bp-0x10]
    let v8: u64;  // rax
    let v9: u64;  // rdx
    let v11: &str;  // rax:rdx

    v5 = <char as core::str::pattern::Pattern>::into_searcher(0xa, a0, a1);
    v3 = 0;
    v4 = a1;
    v6 = 0;
    v8 = core::str::iter::SplitInternal<P>::next_inclusive(&v3);
    if !v8 {
        return 0;
    }
    v11 = <core::str::LinesMap as core::ops::function::Fn<(&str,)>>::call(v8, v9, v9);
    v1 = <char as core::str::pattern::Pattern>::into_searcher(0x20, v11.data_ptr, v11.length);
    v0 = struct16 {
        field_0: 0
        field_8: v11.length
    };
    v2 = 1;
    return core::iter::traits::iterator::Iterator::try_fold(&v0);
}
