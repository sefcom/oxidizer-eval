fn uu_more::Pager::should_close(a0: i64) -> u64 {
    let v1: u64;  // rax
    let v2: u64;  // cc_ndep
    let v3: u64;  // rax

    v1 = *((a0 + 80) as &i64) + *((a0 + 88) as &i64);
    if _ccall(3, 4, *((a0 + 80) as &i64), *((a0 + 88) as &i64), v2) as char {
        v3 = v1;
    } else {
        v3 = -1;
    }
    return v1 & -0x100 | *((a0 + 112) as &i64) <= v3;
}
