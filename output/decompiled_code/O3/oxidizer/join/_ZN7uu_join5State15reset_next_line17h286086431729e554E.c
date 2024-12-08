fn uu_join::State::reset_next_line(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: i128;  // [sp-0x98]
    let v1: i64;  // [sp-0x88]
    let v2: struct48;  // [sp-0x78], Other Possible Types: i384
    let v3: i64;  // [sp-0x48]
    let v4: i128;  // [sp-0x40]
    let v5: i64;  // [sp-0x30]
    let v6: i128;  // [sp-0x28]
    let v9: i64;  // rax
    let v10: i64;  // rdx

    v2 = uu_join::State::next_line(a1, a2);
    v0 = *((&v2 as &char + 8) as &i128);
    v1 = *((&v2 as &char + 24) as &i64);
    if v3 == 9223372036854775809 {
        v9 = v1;
        return struct24 {
            field_0: v0
            field_16: v9
        };
    }
    v6 = *((&v2 as &char + 32) as &i128);
    v3 = v2;
    v4 = v0;
    v5 = v1;
    v9 = uu_join::State::reset(a1, &v3, v10);
    *(a0 as &i64) = 9223372036854775809;
    return v9;
}
