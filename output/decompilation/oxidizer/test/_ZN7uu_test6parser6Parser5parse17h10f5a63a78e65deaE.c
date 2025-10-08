fn uu_test::parser::Parser::parse(a0: i64, a1: i64) -> int {
    let v0: Option<struct32>;  // [bp-0x70], Other Possible Types: struct25
    let v1: Option<struct24>;  // [bp-0x50]
    let v2: u128;  // [bp-0x48]
    let v3: u64;  // [bp-0x40]
    let v4: struct24;  // [bp-0x38]
    let v6: u64;  // r14

    v0 = uu_test::parser::Parser::expr(a1);
    match v0 {
        Some(_) => {
            return struct32 {
                field_0: v0 as i128
                field_16: *((&v0 as &char + 16) as &i128)
            };
        },
        None => {
            v6 = *((a1 + 24) as &i64);
            *((a1 + 24) as &i64) = 9223372036854775809;
            if v6 == 9223372036854775809 {
                v1 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(a1 + 48);
                if let None = v1 {
                    return struct8 {
                        field_0: 7
                    };
                }
            } else {
                v2 = *((a1 + 32) as &i128) as u128;
                if v6 == 0x8000000000000000 {
                    return struct8 {
                        field_0: 7
                    };
                }
            }
            v0 = struct25 {
                field_0: 1
                field_8: *((&v1 as &char + 8) as &i64)
                field_16: v3
                field_24: 1
            };
            v4 = <T as alloc::string::SpecToString>::spec_to_string(&v0);
            return struct32 {
                field_0: 2
                field_8: v4.field_0
                field_24: v4.field_16
            };
        },
    }
}
