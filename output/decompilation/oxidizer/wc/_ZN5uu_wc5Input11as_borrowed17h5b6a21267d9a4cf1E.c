fn uu_wc::Input::as_borrowed(a0: i64, a1: void*) -> int {
    if *(a1 as &i64) != 9223372036854775809 {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: a1[8] as i128
        };
    }
    return struct24 {
        field_0: *(a1 as &i128)
        field_16: a1[16] as i64
    };
}
