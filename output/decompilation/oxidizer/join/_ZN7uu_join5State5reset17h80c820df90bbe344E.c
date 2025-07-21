fn uu_join::State::reset(a1: &struct48) -> : struct8 {
    let a0: i64;  // rsi
    let v0: struct48;  // [bp-0x48]
    let v2: i64;  // rdi

    *((v2 + 16) as &i64) = 0;
    if *(a0 as &i64) == 0x8000000000000000 {
        return;
    }
    v0 = struct48 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
    };
    alloc::vec::Vec<T,A>::push(v2, &v0);
    return;
}
