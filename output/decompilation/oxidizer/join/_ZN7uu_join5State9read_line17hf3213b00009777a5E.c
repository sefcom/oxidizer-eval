fn uu_join::State::read_line(a1: i64, a2: i64) -> : struct48 {
    let a0: i64;  // rsi
    let v0: u64;  // [bp-0x80]
    let v1: struct8;  // [bp-0x78]
    let v2: u64;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: struct48;  // [bp-0x68]
    let v5: u64;  // [bp-0x60]
    let v6: u64;  // [bp-0x58]
    let v7: struct8;  // [bp-0x50]
    let v8: struct8;  // [bp-0x40]
    let v9: i8;  // [bp-0x30]
    let v11: i64;  // rdi
    let v12: i64;  // rdi
    let v13: u64;  // r8
    let v14: i64;  // rdi

    <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(a0 + 40, a1);
    if v0 == 9223372036854775809 {
        *(v11 as &i64) = 0x8000000000000000;
        return;
    }
    *((a0 + 80) as &i64) = *((a0 + 80) as &i64) + 1;
    if v0 == 0x8000000000000000 {
        *((v12 + 8) as &struct8) = v1;
        *(v12 as &i64) = 9223372036854775809;
        return;
    }
    v3 = v0;
    v5 = v1;
    v6 = v2;
    v4 = uu_join::Line::new(a1, *((a0 + 72) as &i64), v13);
    if *((&v4.field_24 as &char + 8) as &i64) > *((a0 + 72) as &i64) {
        *((a0 + 72) as &i64) = *((&v4.field_24 as &char + 8) as &i64);
    }
    *((v14 + 32) as &i128) = *(&v9 as &i128);
    *((v14 + 16) as &struct8) = v8;
    *(v14 as &struct8) = v7;
    return;
}
