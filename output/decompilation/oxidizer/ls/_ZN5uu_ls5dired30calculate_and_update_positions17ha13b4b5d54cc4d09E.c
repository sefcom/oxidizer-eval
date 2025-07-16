fn uu_ls::dired::calculate_and_update_positions(a1: i64, a2: i64) -> : struct8 {
    let a0: u64;  // rsi
    let v1: i64;  // rdi
    let v2: void*;  // rcx
    let v3: u64;  // rax

    v2 = (*((v1 + 16) as &i64) - 1) * 16 + *((v1 + 8) as &i64);
    v3 = core::option::Option<T>::map_or(v2);
    uu_ls::dired::update_positions(a0 + v3 + 2, a1 + a0 + v3 + 2, a0 + v3);
    return;
}
