fn uu_join::State::reset(a1: &struct48) -> : struct8 {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x18]
    let v2: u64;  // rax

    v0 = v2;
    *((a0 + 16) as &i64) = 0;
    if !((((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63) as char) {
        alloc::vec::Vec<T,A>::push(a0, a1);
        return;
    }
    return;
}
