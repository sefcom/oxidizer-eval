fn uu_df::OptionsError::ColumnError(a1: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v1: u64;  // rax

    v1 = *((a1 + 16) as &i64);
    return struct32 {
        field_0: 3
        field_8: *(a1 as &i128)
        field_24: v1
    };
}
