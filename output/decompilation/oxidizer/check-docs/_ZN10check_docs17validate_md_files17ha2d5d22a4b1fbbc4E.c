fn check_docs::validate_md_files(a0: i64, a1: &struct48, a2: &struct24) -> u64 {
    let v0: struct24;  // [bp-0x70]
    let v1: core::str::pattern::CharSearcher;  // [bp-0x58]
    let v2: u16;  // [bp-0x28]
    let v4: u64;  // rcx

    v1 = <char as core::str::pattern::Pattern>::into_searcher(*((a2 + 8) as &i64), *((a2 + 16) as &i64), v4);
    v2 = 0;
    v0 = struct24 {
        field_0: a1
        field_8: 0
        field_16: *((a2 + 16) as &i64)
    };
    core::iter::traits::iterator::Iterator::collect(a0, &v0);
    return a0;
}
