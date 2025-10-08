fn linera_summary::summary_options::SummaryOptions::workflows(a0: u64, a1: i64) -> long long {
    let v0: struct16;  // [bp-0x58]
    let v1: core::str::pattern::CharSearcher;  // [bp-0x48]
    let v2: u16;  // [bp-0x18]

    v1 = <char as core::str::pattern::Pattern>::into_searcher(0x2c, *((a1 + 24) as &i64), *((a1 + 32) as &i64));
    v0 = struct16 {
        field_0: 0
        field_8: *((a1 + 32) as &i64)
    };
    v2 = 1;
    core::iter::traits::iterator::Iterator::collect(a0, &v0);
    return a0;
}
