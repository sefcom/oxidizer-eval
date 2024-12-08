fn uu_join::State::reset(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: struct48;  // [bp-0x48]
    let v2: i64;  // rdx
    let v3: i64;  // rax

    *((a0 + 16) as &i64) = 0;
    if *(a1 as &i64) != 0x8000000000000000 {
        v0 = struct48 {
            field_0: *(a1 as &i128)
            field_16: *((a1 + 16) as &i128)
            field_32: *((a1 + 32) as &i128)
        };
        v3 = alloc::vec::Vec<T,A>::push(a0, &v0, v2);
        return v3;
    }
    return v3;
}
