fn check_docs::parse_md_files(a1: &struct24, a2: i64, a3: i64) -> : struct48 {
    let a0: u64;  // rdi
    let v0: u64;  // [bp-0xa8]
    let v1: u64;  // [bp-0xa0]
    let v2: Result<struct32, struct32>;  // [bp-0x98], Other Possible Types: struct32
    let v3: core::str::pattern::CharSearcher;  // [bp-0x78]
    let v4: u16;  // [bp-0x48]
    let v5: struct32;  // [bp-0x40]

    v0 = a2;
    v1 = a3;
    v2 = regex::regex::string::Regex::new("\\((.*\\.md)\\)");
    v5 = core::result::Result<T,E>::expect(&v2, "scripts/check-docs/src/lib.rs");
    v3 = <char as core::str::pattern::Pattern>::into_searcher(*((a1 + 8) as &i64), *((a1 + 16) as &i64), a3);
    v4 = 0;
    v2 = struct32 {
        field_0: &v0
        field_8: &v5
        field_16: 0
        field_24: *((a1 + 16) as &i64)
    };
    core::iter::traits::iterator::Iterator::collect(a0, &v2);
    return;
}
