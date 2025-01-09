fn uu_join::parse_field_number_option(a0: &struct24, a1: u32, a2: u32) -> u64 {
    let v0: struct16;  // [sp-0x18], Other Possible Types: u128
    let v2: u64;  // rax
    let v3: u64;  // rcx

    return struct16 {
        field_0: 0
    };
    v0 = uu_join::parse_field_number(a1, a2);
    v2 = v0;
    if !v2 {
        v2 = *((&v0 as &char + 8) as &i64);
        return struct24 {
            field_0: 0
            field_8: 1
            field_16: v2
        };
    }
    v3 = *((&v0 as &char + 8) as &i64);
    return struct24 {
        field_0: 1
        field_8: v2
        field_16: v3
    };
}
