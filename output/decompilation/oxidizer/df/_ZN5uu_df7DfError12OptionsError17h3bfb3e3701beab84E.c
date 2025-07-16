fn uu_df::DfError::OptionsError(a0: i64, a1: i64) -> : struct32 {
    let v1: u128;  // xmm0

    v1 = *(a1 as &i128);
    return struct32 {
        field_0: v1
        field_16: *((a1 + 16) as &i128)
    };
}
