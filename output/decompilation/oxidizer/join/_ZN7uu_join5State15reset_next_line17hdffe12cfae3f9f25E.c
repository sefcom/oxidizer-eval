fn uu_join::State::reset_next_line(a1: i64, a2: i64) -> Option<struct24> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x98]
    let v1: u64;  // [bp-0x88]
    let v2: struct48;  // [bp-0x78]
    let v3: u64;  // [bp-0x60]
    let v4: struct8;  // [bp-0x58]
    let v5: u64;  // [bp-0x48]
    let v6: u8;  // [bp-0x40]
    let v7: u64;  // [bp-0x30]
    let v8: struct8;  // [bp-0x28]
    let v10: struct8;  // rax

    v2 = uu_join::State::next_line(a1, a2);
    memcpy(&v0, &v2 as u128, 16);
    v1 = v3;
    if v2.field_0 as i64 != 9223372036854775809 {
        v8 = v4;
        v5 = v2.field_0;
        memcpy(&v6, &v0, 16);
        v7 = v1;
        v10 = uu_join::State::reset(a2);
        return struct8 {
            field_0: 9223372036854775809
        };
    }
    return Some(struct24 {
        field_0: v0
        field_16: v1
    });
}
