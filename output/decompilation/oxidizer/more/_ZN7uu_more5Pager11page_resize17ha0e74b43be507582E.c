fn uu_more::Pager::page_resize(a0: &struct2, a1: u32, a2: iNone) -> u64 {
    let v1: void*;  // rax
    let v2: u64;  // cc_ndep

    if a2 != 1 {
        *(&a0->field_40 as &i32) = (amd64g_calculate_condition(2, 6, a1 & 65535, 1, v2) as char ? 0 : (a1 & -0x10000 | a1 - 1) & 4294967295 & 4294967295);
        return 0;
    }
    return v1;
}
