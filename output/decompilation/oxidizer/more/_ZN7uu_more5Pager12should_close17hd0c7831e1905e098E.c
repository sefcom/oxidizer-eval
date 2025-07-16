fn uu_more::Pager::should_close(a0: i64) -> long long {
    let v1: u64;  // rax
    let v2: u64;  // rax
    let v3: u64;  // cc_ndep
    let v4: u64;  // rax

    v1 = *((a0 + 64) as &i16);
    v2 = v1 + *((a0 + 24) as &i64);
    if amd64g_calculate_condition(3, 4, v1, *((a0 + 24) as &i64), v3) as char {
        v4 = v2;
    } else {
        v4 = -1;
    }
    return v2 & -0x100 | *((a0 + 48) as &i64) <= v4;
}
