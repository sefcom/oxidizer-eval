fn uu_more::Pager::next_line(a0: &struct8) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u64;  // cc_op
    let v4: u64;  // cc_dep1
    let v5: u64;  // cc_dep2
    let v6: u64;  // cc_ndep

    v1 = a0->field_18;
    v2 = v1 + 1;
    if !(amd64g_calculate_condition(5, 24, v1 + 1, 0, amd64g_calculate_rflags_c(v3, v4, v5, v6)) as char) {
        v2 = -1;
    }
    a0->field_18 = v2;
    return v1 + 1;
}
