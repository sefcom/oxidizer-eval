fn uu_dd::stdout_canonicalized(a0: i64) -> u64 {
    let v0: Result<struct24, struct16>;  // [sp-0x38], Other Possible Types: i192
    let v1: struct24;  // [sp-0x20], Other Possible Types: i192
    let v3: i64;  // rax

    v0 = std::fs::canonicalize("/dev/stdout");
    match v0 {
        Ok(_) => {
            v3 = *((&v0 as &char + 16) as &i64);
            return struct24 {
                field_0: v0
                field_16: v3
            };
        },
        Err(_) => {
            v1 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdout");
            *((a0 + 16) as &i64) = *((&v1 as &char + 16) as &i64);
            *(a0 as &i192) = v1;
            return v3;
        },
    }
}
