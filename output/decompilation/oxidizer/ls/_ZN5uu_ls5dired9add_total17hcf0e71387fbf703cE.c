fn uu_ls::dired::add_total(a1: i64) -> : struct8 {
    let a0: i64;  // rdi
    let v1: u64;  // rax

    v1 = *((a0 + 48) as &i64);
    *((a0 + 48) as &u64) = v1 + a1 + 2;
    return v1 + a1 + 2;
}
