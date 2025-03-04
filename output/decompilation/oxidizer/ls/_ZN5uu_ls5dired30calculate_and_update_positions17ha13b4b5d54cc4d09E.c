fn uu_ls::dired::calculate_and_update_positions(a0: &struct16, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // rax
    let v3: u64;  // rax

    v1 = a0[2];
    v3 = core::option::Option<T>::map_or((1 <= v1 ? (v1 - 1) * 16 + a0[1] : 0));
    return uu_ls::dired::update_positions(a0, a1 + v3 + 2, a2 + a1 + v3 + 2);
}
