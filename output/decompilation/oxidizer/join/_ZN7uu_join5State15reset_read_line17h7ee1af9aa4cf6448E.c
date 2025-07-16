fn uu_join::State::reset_read_line(a0: i64, a1: i64) -> long long {
    let v0: struct8;  // [bp-0x68]
    let v1: u64;  // [bp-0x60]
    let v2: struct8;  // [bp-0x58]
    let v3: u8;  // [bp-0x48]
    let v4: struct8;  // [bp-0x38]
    let v5: u64;  // [bp-0x30]
    let v6: struct8;  // [bp-0x28]
    let v7: u8;  // [bp-0x18]
    let v9: void*;  // rcx
    let v10: u64;  // rdx

    uu_join::State::read_line(a0, a1 + 2, v9);
    if v0 == 9223372036854775809 {
        return v1;
    }
    memcpy(&v7, &v3, 16);
    v6 = v2;
    v4 = v0;
    v5 = v1;
    v4 = uu_join::State::reset(v10);
    return 0;
}
