fn uu_join::State::read_line(a1: i64, a2: i64) -> : struct48 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x80]
    let v1: struct24;  // [bp-0x80]
    let v2: u64;  // [bp-0x78]
    let v3: struct24;  // [bp-0x68]
    let v4: struct48;  // [bp-0x50]
    let v5: u128;  // [bp-0x40]

    v0 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(a1 + 40);
    if v0.field_0 as i64 == 9223372036854775809 {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
    *((a1 + 80) as &i64) = *((a1 + 80) as &i64) + 1;
    if v0.field_0 as i64 == 0x8000000000000000 {
        return struct16 {
            field_0: 9223372036854775809
            field_8: v2
        };
    }
    v3 = v1;
    v4 = uu_join::Line::new(&v3, a2, *((a1 + 72) as &i64));
    if v4.field_16 <= *((a1 + 72) as &i64) {
        return struct48 {
            field_0: v4.field_0
            field_16: v5
            field_32: *((&v4.field_24 as &char + 8) as &i128)
        };
    }
    *((a1 + 72) as &u64) = v4.field_16;
    return struct48 {
        field_0: v4.field_0
        field_16: v5
        field_32: *((&v4.field_24 as &char + 8) as &i128)
    };
}
