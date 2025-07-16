fn uu_more::Pager::next_line() -> : struct8 {
    let a0: i64;  // rsi
    let v1: i64;  // rdi
    let v2: u64;  // rax

    v2 = *((v1 + 24) as &i64) + 1;
    *((v1 + 24) as &u64) = v2;
    return;
}
