fn uu_split::strategy::StrategyError::Bytes(a1: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v1: u128;  // xmm0

    v1 = *(a1 as &i128);
    return struct40 {
        field_0: 1
        field_8: v1
        field_24: *((a1 + 16) as &i128)
    };
}
