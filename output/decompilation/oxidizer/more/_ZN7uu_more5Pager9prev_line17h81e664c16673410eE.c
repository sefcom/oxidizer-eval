fn uu_more::Pager::prev_line() -> : struct8 {
    let a0: i64;  // rdi

    if *((a0 + 80) as &i64) {
        *((a0 + 80) as &i64) = *((a0 + 80) as &i64) - 1;
    }
    return;
}
