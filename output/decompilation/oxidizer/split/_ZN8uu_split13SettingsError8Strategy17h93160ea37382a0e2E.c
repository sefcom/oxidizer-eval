fn uu_split::SettingsError::Strategy(a1: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v1: u64;  // rax
    let v2: u128;  // xmm0

    v1 = *((a1 + 32) as &i64);
    v2 = *(a1 as &i128);
    return struct40 {
        field_0: v2
        field_16: *((a1 + 16) as &i128)
        field_32: v1
    };
}
