fn uu_df::DfError::OptionsError(a0: u64, a1: u64) -> int {
    let v1: u128;  // xmm0

    v1 = *(&a1 as &i128);
    return struct32 {
        field_0: v1
        field_16: *(&a1[2] as &i128)
    };
}
