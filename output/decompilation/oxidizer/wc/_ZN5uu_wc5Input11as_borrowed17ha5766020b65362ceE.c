fn uu_wc::Input::as_borrowed(a0: &Result<struct16, struct1>, a1: u64) -> int {
    let v1: u128;  // xmm0

    if a1->field_0 == 9223372036854775809 {
        return Err(struct1 {
            field_0: a1->field_8
        });
    }
    v1 = *(&a1->field_8 as &i128);
    return Ok(struct16 {
        field_0: v1
    });
}
