fn uu_more::Pager::page_resize(a1: i16, a2: i16) -> : struct2 {
    let a0: u64;  // rsi
    let v1: i64;  // rdi
    let v2: u64;  // cc_ndep

    if a1 == 1 {
        return;
    }
    *((v1 + 64) as &i32) = (amd64g_calculate_condition(2, 6, a0 & 65535, 1, v2) as char ? 0 : a0 - 1);
    return;
}
