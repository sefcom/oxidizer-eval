fn uu_pr::trailer_content(a0: &struct24, a1: u8, a2: u8) -> u64 {
    let v1: &struct_0;  // rax

    if !(a1 && !a2) {
        return struct24 {
            field_0: 0
            field_8: 8
            field_16: 0
        };
    }
    v1 = alloc::alloc::Global::alloc_impl(8, 120);
    v1->field_0 = 0;
    v1->field_8 = 1;
    v1->field_10 = 0;
    v1->field_20 = 1;
    *(&(&v1->field_20)[1] as &i128) = 0;
    *((&v1->field_28 as &char + 8) as &i64) = 1;
    *(&v1->field_38 as &i128) = 0;
    *(&v1->field_40 as &i64) = 1;
    *((&v1->field_40 as &char + 8) as &i128) = 0;
    (&v1->field_50)[1] = 1;
    *(&v1->field_58 as &i64) = 0;
    return alloc::slice::hack::into_vec(a0, v1, 5);
}
