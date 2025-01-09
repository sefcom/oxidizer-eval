fn uu_dd::is_stdout_redirected_to_seekable_file() -> u64 {
    let v0: i32;  // [sp-0x4c]
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x40]
    let v3: i96;  // [sp-0x38]
    let v4: i192;  // [sp-0x28], Other Possible Types: struct24
    let v6: i64;  // rdx
    let v7: i32;  // ebx

    v4 = uu_dd::stdout_canonicalized();
    v0 = std::fs::File::open(*((&v4 as &char + 8) as &i64), *((&v4 as &char + 16) as &i64))?;
    v1 = <std::fs::File as std::io::Seek>::seek(&v0, 2, 0);
    v2 = v6;
    if v1 {
        return v7;
    }
    v1 = <std::fs::File as std::io::Seek>::seek(&v0, 1, 0);
    v2 = v6;
    if !v1 {
        return v7;
    }
}
