fn uu_join::State::reset_next_line(a0: &Option<struct24>, a1: u32, a2: u32) -> u64 {
    let v0: iNone;  // [sp-0x98]
    let v1: i64;  // [sp-0x88]
    let v2: struct48;  // [sp-0x78]
    let v3: i64;  // [sp-0x48]
    let v4: iNone;  // [sp-0x40]
    let v5: i64;  // [sp-0x30]
    let v6: iNone;  // [sp-0x28]
    let v9: i64;  // rax

    v2 = uu_join::State::next_line(a1, a2);
    v0 = *(&v2.field_8 as &i128);
    v1 = *((&v2.field_16 as &char + 8) as &i64);
    if v3 != 9223372036854775809 {
        v6 = v2.field_32;
        v3 = v2.field_0;
        v4 = v0;
        v5 = v1;
        v9 = uu_join::State::reset(a1, &v3);
        return struct8 {
            field_0: 9223372036854775809
        };
    }
    v9 = v1;
    return Some(struct24 {
        field_0: v0
        field_16: v9
    });
}
