fn uu_more::Pager::prev_line(a0: &struct8) -> u64 {
    let v1: u64;  // rax
    let v2: void*;  // rax

    v1 = a0->field_18;
    v2 = v1 - 1;
    if 1 > v1 {
        v2 = 0;
    }
    a0->field_18 = v2;
    return v1 - 1;
}
