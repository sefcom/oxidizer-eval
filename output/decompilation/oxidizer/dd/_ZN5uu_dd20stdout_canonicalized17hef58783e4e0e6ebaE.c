fn uu_dd::stdout_canonicalized(a0: i64) -> int {
    let v0: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x38]
    let v1: u64;  // [bp-0x28]
    let v2: struct24;  // [bp-0x20]
    let v4: u64;  // rsi
    let v5: u64;  // rdx

    v0 = std::fs::canonicalize(v4, v5);
    if !((((0 ^ v0 as i64) & (0 ^ -(v0 as i64))) >> 63) as char) {
        return struct24 {
            field_0: v0 as i128
            field_16: v1
        };
    }
    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("/dev/stdout");
    return struct24 {
        field_0: *(&v2.field_0 as &i128)
        field_16: v2.field_16
    };
}
