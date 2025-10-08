fn uu_more::Pager::page_down() -> : struct8 {
    let a0: i64;  // rdi
    let v1: u64;  // rax
    let v2: u64;  // rcx
    let v4: u64;  // r8
    let v5: u64;  // rax

    v1 = *((a0 + 80) as &i64);
    v2 = *((a0 + 88) as &i64);
    v4 = v2 * 2 + v1;
    if v4 < *((a0 + 112) as &i64) {
        *((a0 + 80) as &u64) = v5;
    } else {
        *((a0 + 80) as &u64) = *((a0 + 112) as &i64) - v2;
    }
    return;
}
