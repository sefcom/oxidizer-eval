fn uu_more::Pager::next_line() -> : struct8 {
    let a0: i64;  // rdi
    let v1: i64;  // rcx

    v1 = *((a0 + 112) as &i64) - 1;
    if *((a0 + 80) as &i64) < v1 {
        *((a0 + 80) as &i64) = *((a0 + 80) as &i64) + 1;
    }
    return;
}
