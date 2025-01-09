fn uu_numfmt::errors::NumfmtError::IllegalArgument(a0: &struct32, a1: u64) -> int {
    let v1: u128;  // xmm0

    v1 = a1->field_0;
    return struct32 {
        field_0: 1
        field_8: v1
        field_24: a1->field_10
    };
}
