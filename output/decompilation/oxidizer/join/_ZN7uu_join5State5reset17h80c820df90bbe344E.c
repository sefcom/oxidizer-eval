fn uu_join::State::reset(a0: &struct8, a1: &struct48) -> u64 {
    let v0: struct48;  // [bp-0x48]
    let v2: u64;  // rdi
    let v3: u64;  // rsi
    let v4: u64;  // rax

    v2 = a0[1];
    v3 = a0[2];
    a0[2] = 0;
    v4 = core::ptr::drop_in_place<[uu_join::Line]>(v2, v3);
    if a1->field_0 != 0x8000000000000000 {
        v0 = struct48 {
            field_0: *(&a1->field_0 as &i128)
            field_16: a1->field_10
            field_32: a1->field_20
        };
        v4 = alloc::vec::Vec<T,A>::push(a0, &v0);
        return v4;
    }
    return v4;
}
