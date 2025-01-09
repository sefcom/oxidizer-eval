fn uu_test::parser::Parser::lparen(a0: &struct32, a1: u32) -> u64 {
    let v0: i64;  // [sp-0x178], Other Possible Types: Option<struct24>
    let v1: i64;  // [sp-0x170]
    let v2: i64;  // [sp-0x168]
    let v3: i64;  // [sp-0x160]
    let v4: i64;  // [sp-0x158]
    let v5: Option<struct24>;  // [sp-0x148], Other Possible Types: i64
    let v6: i64;  // [bp-0x130]
    let v7: i192;  // [sp-0x128], Other Possible Types: struct24
    let v8: i8;  // [bp-0x110]
    let v9: i64;  // [sp-0x108]
    let v12: i8;  // [bp-0xd0]
    let v13: i8;  // [bp-0xa8]
    let v14: i8;  // [bp-0x80]
    let v15: i448;  // [sp-0x58], Other Possible Types: struct56
    let v16: i64;  // [sp-0x20]
    let v18: i64;  // rax
    let v19: i64;  // r15
    let v20: i64;  // rax

    v15 = <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(a1 + 24);
    v16 = 3;
    v7 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v15);
    v18 = *((&v7 as &char + 16) as &i64);
    switch (v18) {
    case 0:
        v0 = 0;
        uu_test::parser::Symbol::into_literal(&v8, &v0);
        v5 = uu_test::parser::Parser::literal(a1, &v8);
        return struct8 {
            field_0: 7
        };
    case 1:
        v5 = v19;
        v8 = &v5;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = &g_413dc0;
        v1 = 1;
        v4 = 0;
        v2 = &v8;
        v3 = 1;
        core::option::Option<T>::map_or_else();
        return struct32 {
            field_0: 3
            field_8: v10
            field_24: v11
        };
    case 2:
        if *(v19 as &i32) == 4 && *((v19 + 40) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v19 + 56) as &i64), *((v19 + 64) as &i64)) as i8 {
            v0 = 0;
            uu_test::parser::Symbol::into_literal(&v8, &v0);
            v5 = uu_test::parser::Parser::literal(a1, &v8);
            *((a0 + 24) as &i64) = v6;
        }
        if !(*((v19 + 40) as &i32) != 3 || !<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v19 + 56) as &i64), *((v19 + 64) as &i64)) as i8) {
LABEL_4af300:
            uu_test::parser::Parser::next_token(&v13, a1);
            v0 = uu_test::parser::Parser::literal(a1, &v13);
            if v0 != 7 {
                return struct32 {
                    field_0: v22
                    field_8: v23
                    field_24: v3
                };
            }
            v0 = uu_test::parser::Parser::expect(a1);
            break;
            return struct32 {
                field_0: v22
                field_8: v23
                field_24: v3
            };
        } else if *(v19 as &i32) == 4 {
            vvar_461{stack -376} = 0;
            uu_test::parser::Symbol::into_literal(&v8, &v0);
            vvar_463{stack -328} = uu_test::parser::Parser::literal(a1, &v8);
            *((a0 + 24) as &i64) = v6;
        }
    case 3:
        v20 = *(v19 as &i64);
        if v20 == 4 {
            if *((v19 + 40) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v19 + 56) as &i64), *((v19 + 64) as &i64)) as i8 {
                vvar_454{stack -376} = 0;
                uu_test::parser::Symbol::into_literal(&v8, &v0);
                vvar_456{stack -328} = uu_test::parser::Parser::literal(a1, &v8);
                *((a0 + 24) as &i64) = v6;
            }
        } else {
            if v20 == 5 && *((v19 + 80) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v19 + 96) as &i64), *((v19 + 104) as &i64)) as i8 {
                uu_test::parser::Parser::next_token(&v12, a1);
                uu_test::parser::Parser::uop(a1, &v12);
                v0 = uu_test::parser::Parser::expect(a1);
                break;
            }
        }
        if *((v19 + 40) as &i64) == 3 {
            if !(!(<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v19 + 56) as &i64), *((v19 + 64) as &i64)) & 255 & 255 & 255)) {
                goto LABEL_4af300;
            }
LABEL_4af33e:
            if *(v19 as &i64) == 4 {
                v0 = 0;
                uu_test::parser::Symbol::into_literal(&v8, &v0);
                v5 = uu_test::parser::Parser::literal(a1, &v8);
                *((a0 + 24) as &i64) = v6;
            }
        } else {
            if !(!(<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v19 + 56) as &i64), *((v19 + 64) as &i64)) & 255 & 255 & 255)) {
                goto LABEL_4af33e;
            }
            if *(v19 as &i32) == 4 {
                uu_test::parser::Parser::next_token(&v14, a1);
                v0 = uu_test::parser::Parser::literal(a1, &v14);
                if v0 != 7 {
                    return struct32 {
                        field_0: v22
                        field_8: v23
                        field_24: v3
                    };
                }
                v0 = uu_test::parser::Parser::expect(a1);
                break;
                break;
            }
        }
    default:
        v0 = uu_test::parser::Parser::expr(a1);
        if v0 != 7 {
            return struct32 {
                field_0: v22
                field_8: v23
                field_24: v3
            };
        }
        v0 = uu_test::parser::Parser::expect(a1);
        break;
    }
}
