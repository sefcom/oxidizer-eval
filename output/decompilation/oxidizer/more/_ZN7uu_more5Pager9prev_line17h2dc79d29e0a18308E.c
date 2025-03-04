fn uu_more::Pager::prev_line(a0: &struct8) -> u64 {
    let v1: u64;  // rax

    v1 = a0->field_18;
    *(&a0->field_18 as &i32) = (1 <= v1 ? v1 - 1 : 0);
    return v1 - 1;
}
