fn uu_pr::file_last_modified_time(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0xd0], Other Possible Types: struct24
    let v1: i64;  // [sp-0xc8]
    let v2: Result<struct176, struct16>;  // [sp-0xb8], Other Possible Types: i1408
    let v4: i64;  // rdx
    let v5: i64;  // rcx
    let v6: i64;  // r8
    let v7: i64;  // r9

    v2 = std::fs::metadata(a1, a2);
    match v2 {
        Err(_) => {
            v1 = *((&v2 as &char + 8) as &i64);
            v0 = 0x8000000000000000;
        },
        Ok(_) => {
            v0 = uu_pr::file_last_modified_time::{{closure}}(&v2, v4, v5, v6, v7);
        },
    }
    return core::result::Result<T,E>::unwrap_or_default(a0, &v0);
}
