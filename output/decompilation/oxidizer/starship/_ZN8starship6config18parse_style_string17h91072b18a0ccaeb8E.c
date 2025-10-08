fn starship::config::parse_style_string(a0: u64, a1: u64, a2: u64, a3: i64) -> long long {
    let v0: struct19;  // [bp-0x70]
    let v1: std::io::stdio::Stdout;  // [bp-0x58]
    let v2: struct16;  // [bp-0x50]
    let v3: struct40;  // [bp-0x40]
    let v4: u16;  // [bp-0x18]

    v1 = a3;
    v3 = <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(a1, a2);
    v2 = struct16 {
        field_0: 0
        field_8: a2
    };
    v4 = 1;
    v0 = struct19 {
        field_0: 0
        field_8: 0
        field_9: 90194313237
        field_17: 514
    };
    core::iter::traits::iterator::Iterator::try_fold(a0, &v2, &v0, &v1);
    return a0;
}
