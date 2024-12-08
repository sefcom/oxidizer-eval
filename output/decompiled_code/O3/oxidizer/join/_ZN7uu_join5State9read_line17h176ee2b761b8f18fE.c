fn uu_join::State::read_line(a0: void*, a1: void*, a2: u32) -> u64 {
    let v0: Option<Result<struct24, struct16>>;  // [sp-0x80], Other Possible Types: i192
    let v1: struct24;  // [bp-0x68]
    let v3: i384;  // [sp-0x50], Other Possible Types: struct48
    let v5: i64;  // rax
    let v8: i128;  // xmm0
    let v9: i128;  // xmm1

    v0 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(a1 + 40);
    v5 = v0;
    match v0 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            *((a1 + 80) as &i64) = *((a1 + 80) as &i64) + 1;
            if v5 == 0x8000000000000000 {
                return struct16 {
                    field_0: 9223372036854775809
                    field_8: v2
                };
            }
            v1 = struct24 {
                field_0: v5
                field_8: v6
                field_16: v7
            };
            v3 = uu_join::Line::new(&v1, a2, *((a1 + 72) as &i64));
            v5 = *((&v3 as &char + 16) as &i64);
            if v5 > *((a1 + 72) as &i64) {
                *((a1 + 72) as &i64) = v5;
            }
            v8 = v3;
            v9 = *((&v3 as &char + 16) as &i128);
            return struct48 {
                field_0: v8
                field_16: v9
                field_32: *((&v3 as &char + 32) as &i128)
            };
        },
    }
}
