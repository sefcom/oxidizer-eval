fn uu_dd::is_stdout_redirected_to_seekable_file() -> u64 {
    let v0: i32;  // [sp-0x4c]
    let v1: i64;  // [sp-0x48]
    let v2: i64;  // [sp-0x40]
    let v3: Result<struct4, struct8>;  // [sp-0x38]
    let v4: struct24;  // [sp-0x28]
    let v6: i64;  // rdx
    let v7: i32;  // ebx

    v4 = uu_dd::stdout_canonicalized();
    v0 = std::fs::File::open(*((&v4.field_0 as &char + 8) as &i64), v4.field_16)?;
    v1 = <std::fs::File as std::io::Seek>::seek(&v0, 2, 0);
    v2 = v6;
    if v1 {
        return v7 as u64;
    }
    v1 = <std::fs::File as std::io::Seek>::seek(&v0, 1, 0);
    v2 = v6;
    if !v1 {
        return v7 as u64;
    }
}
