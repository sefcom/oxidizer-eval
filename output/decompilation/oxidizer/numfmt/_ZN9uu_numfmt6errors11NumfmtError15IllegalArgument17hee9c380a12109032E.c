fn uu_numfmt::errors::NumfmtError::IllegalArgument(a1: i64) -> : struct32 {
    let a0: i64;  // rdi
    let v1: u64;  // rax

    v1 = *((a1 + 16) as &i64);
    return struct32 {
        field_0: 1
        field_8: *(a1 as &i128)
        field_24: v1
    };
}
