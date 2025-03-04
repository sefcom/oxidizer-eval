fn uu_pr::file_last_modified_time(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0xc8], Other Possible Types: struct24, int
    let v1: Result<struct176, struct8>;  // [sp-0xb8]

    v1 = std::fs::metadata(a1, a2);
    match v1 {
        Err(v0) => {
            v0 = 0x8000000000000000;
        },
        Ok(_) => {
            v0 = uu_pr::file_last_modified_time::{{closure}}(&v1);
        },
    }
    return core::result::Result<T,E>::unwrap_or_default(a0, &v0);
}
