fn uu_join::State::read_line(a0: &Option<Result<struct48, struct8>>, a1: &struct16) -> u64 {
    let v0: i192;  // [sp-0x80], Other Possible Types: Option<Result<struct24, struct8>>
    let v1: i64;  // [sp-0x68]
    let v2: i64;  // [sp-0x60]
    let v3: i64;  // [sp-0x58]
    let v4: struct48;  // [sp-0x50], Other Possible Types: i384
    let v6: i64;  // rax
    let v7: i64;  // rcx
    let v8: i64;  // rdx
    let v9: i64;  // rdx

    v0 = <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(a1 + 40);
    v6 = v0;
    match v0 {
        None => {
            return struct8 {
                field_0: 0x8000000000000000
            };
        },
        Some(_) => {
            v7 = *((&v0 as &char + 8) as &i64);
            v8 = *((&v0 as &char + 16) as &i64);
            *((a1 + 80) as &i64) = *((a1 + 80) as &i64) + 1;
            if v6 == 0x8000000000000000 {
                return struct16 {
                    field_0: 9223372036854775809
                    field_8: v2
                };
            }
            v1 = v6;
            v2 = v7;
            v3 = v8;
            v4 = uu_join::Line::new(&v1, v9, *((a1 + 72) as &i64));
            v6 = *((&v4 as &char + 16) as &i64);
            if v6 <= *((a1 + 72) as &i64) {
                return Some(struct48 {
                    field_0: v10
                    field_16: v11
                    field_32: *((&v4 as &char + 32) as &i128)
                });
            }
            *((a1 + 72) as &i64) = v6;
        },
    }
}
