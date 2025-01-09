fn uu_dd::stdout_canonicalized(a0: &struct24) -> u64 {
    let v0: Result<struct24, struct8>;  // [sp-0x38]
    let v1: struct24;  // [sp-0x20]

    v0 = std::fs::canonicalize("/dev/stdout");
    return struct24 {
        field_0: v0
        field_16: v3
    };
    v1 = std::sys::os_str::bytes::Slice::to_owned("/dev/stdout");
    return v1;
}
