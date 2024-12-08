fn uu_wc::Input::as_borrowed(a0: u64, a1: u64) -> int {
    let v2: u128;  // xmm0

    if a1->field_0 == 9223372036854775809 {
        return struct9 {
            field_0: 9223372036854775809
            field_8: a1->field_8
        };
    }
    v2 = *(&a1->field_8 as &i128);
    return struct24 {
        field_0: 0x8000000000000000
        field_8: v2
    };
}
