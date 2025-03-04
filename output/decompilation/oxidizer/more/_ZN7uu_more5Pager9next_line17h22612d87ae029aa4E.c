fn uu_more::Pager::next_line(a0: &struct8) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // cc_op
    let v3: u64;  // cc_dep1
    let v4: u64;  // cc_dep2
    let v5: u64;  // cc_ndep

    v1 = a0->field_18;
    *(&a0->field_18 as &i32) = (amd64g_calculate_condition(5, 24, v1 + 1, 0, amd64g_calculate_rflags_c(v2, v3, v4, v5)) as char ? v1 + 1 : -1);
    return v1 + 1;
}
