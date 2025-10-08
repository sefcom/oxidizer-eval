fn uu_ls::dired::calculate_and_update_positions(a0: i64, a1: u64, a2: u64) -> long long {
    let v1: i64;  // rdi
    let v2: u64;  // rax

    v1 = *((a0 + 8) as &i64) + *((a0 + 16) as &i64) * 16 - 16;
    v2 = core::option::Option<T>::map_or(v1);
    return uu_ls::dired::update_positions(a0, a1 + v2 + 2, a2 + a1 + v2 + 2);
}
