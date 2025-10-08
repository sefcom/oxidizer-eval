fn uu_join::State::reset_next_line(a0: i64, a1: u64, a2: void*) -> long long {
    let v0: iNone;  // [bp-0x98]
    let v1: u64;  // [bp-0x88]
    let v2: struct48;  // [bp-0x78]
    let v3: iNone;  // [bp-0x70]
    let v4: u64;  // [bp-0x60]
    let v5: u128;  // [bp-0x58]
    let v6: struct48;  // [bp-0x48]
    let v8: u64;  // rax

    v2 = uu_join::State::next_line(a1, a2);
    v0 = v3;
    v1 = v4;
    if v2.field_0 as i64 != 9223372036854775809 {
        v6 = struct48 {
            field_0: v2.field_0 as i64
            field_8: v0
            field_16: <UNKNOWN>
            field_32: v5
        };
        v8 = uu_join::State::reset(a1, &v6);
        return struct8 {
            field_0: 9223372036854775809
        };
    }
    return struct24 {
        field_0: v0
        field_16: v1
    };
}
