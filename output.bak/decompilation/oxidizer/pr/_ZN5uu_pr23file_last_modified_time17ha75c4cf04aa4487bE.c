fn uu_pr::file_last_modified_time(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xd0], Other Possible Types: struct24
    let v1: i64;  // [sp-0xc8]
    let v2: struct16;  // [sp-0xb8], Other Possible Types: i128

    v2 = std::fs::metadata(a1, a2);
    if v2 == 2 {
        v1 = *((&v2 as &char + 8) as &i64);
        v0 = 0x8000000000000000;
    } else {
        v0 = uu_pr::file_last_modified_time::{{closure}}(&v2);
    }
    return core::result::Result<T,E>::unwrap_or_default(a0, &v0);
}
