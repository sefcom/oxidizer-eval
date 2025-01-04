fn uu_join::State::reset(a0: &struct8, a1: &struct48, a2: u32) -> u64 {
    let v0: struct48;  // [bp-0x48]
    let v2: u64;  // rdx
    let v3: u64;  // rax

    a0->field_10 = 0;
    if a1->field_0 != 0x8000000000000000 {
        v0 = struct48 {
            field_0: *(&a1->field_0 as &i128)
            field_16: a1->field_10
            field_32: a1->field_20
        };
        v3 = alloc::vec::Vec<T,A>::push(a0, &v0, v2);
        return v3;
    }
    return v3;
}
