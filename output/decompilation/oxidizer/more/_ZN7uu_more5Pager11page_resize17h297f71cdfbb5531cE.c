fn uu_more::Pager::page_resize(a1: i64, a2: i16, a3: i16) -> : struct8 {
    let a0: i64;  // rdi
    let v1: u64;  // cc_ndep
    let v2: u32;  // edx

    if !a3 {
        *((a0 + 88) as &u64) = (_ccall(2, 6, a2 as u64, 1, v1) as char ? 0 : v2 & -0x10000 | a2 - 1);
    }
    return;
}
