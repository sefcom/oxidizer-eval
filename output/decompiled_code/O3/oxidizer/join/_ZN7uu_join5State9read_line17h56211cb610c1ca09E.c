fn uu_join::State::read_line(a0: void*, a1: &u64, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x78]
    let v1: i64;  // [sp-0x70]
    let v2: i64;  // [sp-0x68]
    let v3: i192;  // [sp-0x60], Other Possible Types: Enum
    let v4: i128;  // [sp-0x48]
    let v5: struct24;  // [sp-0x38], Other Possible Types: i192
    let v7: i64;  // r12
    let v8: i64;  // rax
    let v9: i64;  // rdx
    let v10: i64;  // rcx

    v7 = 0x8000000000000000;
    v3 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(a1 + 40);
    v8 = v3;
    if v8 != 9223372036854775809 {
        v9 = *((&v3 as &char + 8) as &i64);
        v10 = *((&v3 as &char + 16) as &i64);
        *((a1 + 80) as &i64) = *((a1 + 80) as &i64) + 1;
        if v8 == 0x8000000000000000 {
            *((a0 + 8) as &i64) = v1;
            v7 = 9223372036854775809;
        } else {
            v0 = v8;
            v1 = v9;
            v2 = v10;
            v5 = <uu_join::LineSep as uu_join::Separator>::field_ranges(a2, v1, v2);
            v4 = v5;
            v8 = *((&v5 as &char + 16) as &i64);
            if v8 > *((a1 + 72) as &i64) {
                *((a1 + 72) as &i64) = v8;
            }
            *((a0 + 40) as &i64) = v2;
            *((a0 + 24) as &i64) = v0;
            *(a0 as &i128) = v4;
            *((a0 + 16) as &i64) = v8;
            return v8;
        }
    }
    *(a0 as &i64) = v7;
    return v8;
}
