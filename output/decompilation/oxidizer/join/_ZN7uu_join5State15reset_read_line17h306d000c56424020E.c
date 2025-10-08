fn uu_join::State::reset_read_line(a0: u64, a1: u64) -> long long {
    let v0: struct48;  // [bp-0x68]
    let v1: struct48;  // [bp-0x68]
    let v2: u64;  // [bp-0x60]
    let v3: struct48;  // [bp-0x38]

    v0 = uu_join::State::read_line(a0, a1);
    if v0.field_0 as i64 == 9223372036854775809 {
        return v2;
    }
    v3 = v1;
    uu_join::State::reset(a0, &v3);
    return 0;
}
