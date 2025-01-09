fn uu_ls::dired::calculate_subdired(a0: &u64, a1: u32) -> u64 {
    let v1: u64;  // rax

    v1 = a0[2];
    return alloc::vec::Vec<T,A>::push(a0 + 3, (!v1 ? 2 : *((v1 * 16 + a0[1] - 8) as &i64) + 3) + (a0[5]) * 2, a1 + (!v1 ? 2 : *((v1 * 16 + a0[1] - 8) as &i64) + 3) + (a0[5]) * 2);
}
