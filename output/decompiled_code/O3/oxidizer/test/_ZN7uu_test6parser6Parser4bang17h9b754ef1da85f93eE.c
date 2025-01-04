fn uu_test::parser::Parser::bang(a0: &Option<struct32>, a1: u32, a2: u32) -> u64 {
    let v0: i64;  // [sp-0x148], Other Possible Types: Option<struct32>, struct8, struct56
    let v1: i192;  // [bp-0x110], Other Possible Types: Option<struct24>, struct24
    let v2: i8;  // [bp-0xe8]
    let v3: i8;  // [bp-0xc0]
    let v4: i192;  // [sp-0x98], Other Possible Types: Option<struct24>
    let v5: i512;  // [bp-0x78]
    let v6: i8;  // [bp-0x38]
    let v8: i64;  // rax
    let v9: i64;  // rdx
    let v10: i64;  // rdx
    let v11: i64;  // rax
    let v12: i128;  // xmm0
    let v13: i128;  // xmm1
    let v14: i128;  // xmm0

    uu_test::parser::Parser::peek(&v2, a1);
    v8 = v2;
    if v8 != 2 && v8 != 4 {
        if v8 == 6 {
            v0 = struct8 {
                field_0: 1
            };
            uu_test::parser::Symbol::into_literal(&v1, &v0);
            alloc::vec::Vec<T,A>::push(a1, &v1);
            return struct8 {
                field_0: 7
            };
        }
        v0 = <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(a1 + 24, v10);
        v5 = v0;
        v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v5);
        if *((&v1 as &char + 16) as &i64) != 3 || (v11 = *((&v1 as &char + 8) as &i64), !(*(v11 as &i32) == 3) || !(*((v11 + 40) as &i32) == 2) || !(*((v11 + 80) as &i32) == 3)) {
            v0 = uu_test::parser::Parser::term(a1, v10);
            match v0 {
                Some(_) => {
                    vvar_370{reg 224} = v0;
                    return struct32 {
                        field_0: v14
                        field_16: *((&v0 as &char + 16) as &i128)
                    };
                },
                None => {
                    v0 = 1;
                    alloc::vec::Vec<T,A>::push(a1, &v0);
                },
            }
        } else {
            v0 = uu_test::parser::Parser::expr(a1, v10);
            match v0 {
                Some(_) => {
                    v14 = v0;
                    return struct32 {
                        field_0: v14
                        field_16: *((&v0 as &char + 16) as &i128)
                    };
                },
                None => {
                    v0 = 1;
                    alloc::vec::Vec<T,A>::push(a1, &v0);
                },
            }
        }
        return struct8 {
            field_0: 7
        };
    }
    v0 = <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(a1 + 24, v9);
    v1 = <core::iter::adapters::peekable::Peekable<I> as core::iter::traits::iterator::Iterator>::nth(&v0);
    uu_test::parser::Symbol::new();
    if (v3 | 2) != 6 {
        v0 = struct8 {
            field_0: 1
        };
        uu_test::parser::Symbol::into_literal(&v1, &v0);
        v4 = uu_test::parser::Parser::literal(a1, &v1);
        match v4 {
            Some(_) => {
                v12 = v4;
                v13 = v4;
                return struct32 {
                    field_0: v12
                    field_16: v13
                };
            },
            None => {
                v0 = uu_test::parser::Parser::maybe_boolop(a1);
                if v0 != 7 {
                    return struct32 {
                        field_0: v12
                        field_16: v13
                    };
                }
            },
        }
    } else {
        uu_test::parser::Parser::next_token(&v0, a1);
        uu_test::parser::Symbol::into_literal(&v6, &v0);
        v0 = uu_test::parser::Parser::literal(a1, &v6);
        match v0 {
            Some(_) => {
                return struct32 {
                    field_0: v12
                    field_16: v13
                };
            },
            None => {
                v0 = 1;
                alloc::vec::Vec<T,A>::push(a1, &v0);
            },
        }
    }
    return struct8 {
        field_0: 7
    };
}
