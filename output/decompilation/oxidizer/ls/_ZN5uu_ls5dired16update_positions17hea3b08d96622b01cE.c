fn uu_ls::dired::update_positions(a0: &struct16, a1: i64, a2: i64) -> u64 {
    let v1: u64;  // rax

    v1 = alloc::vec::Vec<T,A>::push(a0, a1 + *((a0 + 48) as &i64), a2 + *((a0 + 48) as &i64), "src/uu/ls/src/dired.rs");
    *((a0 + 48) as &i64) = 0;
    return v1;
}
