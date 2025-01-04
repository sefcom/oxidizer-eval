fn uu_ls::dired::update_positions(a0: &struct8, a1: u32, a2: u32) -> u64 {
    let v1: u64;  // rax

    v1 = a0->field_30;
    a0->field_30 = 0;
    return alloc::vec::Vec<T,A>::push(a0, a1 + v1, a2 + v1);
}
