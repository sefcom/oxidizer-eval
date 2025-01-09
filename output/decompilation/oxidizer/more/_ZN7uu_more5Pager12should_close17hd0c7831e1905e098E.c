fn uu_more::Pager::should_close(a0: void*) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u64;  // cc_ndep
    let v4: u64;  // rax

    v1 = a0->field_40;
    v2 = v1 + a0->field_18;
    if amd64g_calculate_condition(3, 4, v1, a0->field_18, v3) as char {
        v4 = v2;
    } else {
        v4 = -1;
    }
    return v2 & -0x100 | a0->field_30 <= v4;
}
