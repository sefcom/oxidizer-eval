fn uu_test::parser::Parser::lparen(a0: void*, a1: u32, a2: u32) -> u64 {
    let v0: Option<struct24>;  // [bp-0x178], Other Possible Types: i64, struct8
    let v1: i64;  // [sp-0x160]
    let v2: i192;  // [sp-0x148], Other Possible Types: Option<struct24>
    let v3: i128;  // [bp-0x138]
    let v4: i8;  // [bp-0x130]
    let v5: i192;  // [sp-0x128], Other Possible Types: struct24
    let v6: i8;  // [bp-0x110]
    let v7: i192;  // [sp-0xe8]
    let v8: i8;  // [bp-0xd0]
    let v9: i8;  // [bp-0xa8]
    let v10: i8;  // [bp-0x80]
    let v11: struct56;  // [sp-0x58], Other Possible Types: i448
    let v12: i64;  // [sp-0x20]
    let v14: i64;  // rax
    let v15: i64;  // r15
    let v16: i64;  // rax
    let v17: i128;  // xmm0
    let v18: i128;  // xmm1
    let v20: i64;  // rdx
    let v21: i64;  // rax

    v11 = <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(a1 + 24, a2);
    v12 = 3;
    v5 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v11);
    v14 = *((&v5 as &char + 16) as &i64);
    switch (v14) {
    case 0:
        v0 = struct8 {
            field_0: 0
        };
        uu_test::parser::Symbol::into_literal(&v6, &v0);
        v2 = uu_test::parser::Parser::literal(a1, &v6);
        if v2 == 7 {
            goto LABEL_4af553;
        }
        v17 = v2;
        v18 = v3;
        goto LABEL_4af363;
    case 1:
        v2 = v15;
        v7 = format!("{:?}", &v2);
        *((a0 + 24) as &i64) = *((&v7 as &char + 16) as &i64);
        *((a0 + 8) as &i192) = v7;
        *(a0 as &i64) = 3;
        break;
    case 2:
        if *(v15 as &i32) == 4 && *((v15 + 40) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v15 + 56) as &i64), *((v15 + 64) as &i64)) as i8 {
            goto LABEL_4af408;
        }
        if !(*((v15 + 40) as &i32) == 3) || !(<std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v15 + 56) as &i64), *((v15 + 64) as &i64)) as i8) {
            if *(v15 as &i32) == 4 {
                goto LABEL_4af4e7;
            }
            goto LABEL_4af529;
        } else {
LABEL_4af4a3:
            uu_test::parser::Parser::next_token(&v9, a1);
            v0 = uu_test::parser::Parser::literal(a1, &v9);
            v21 = v0;
            if *(v15 as &i32) == 4 && *((v15 + 40) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v15 + 56) as &i64), *((v15 + 64) as &i64)) as i8 {
                goto LABEL_4af55c;
            }
            v0 = uu_test::parser::Parser::expect(a1);
            goto LABEL_4af549;
        }
    case 3:
        v16 = *(v15 as &i64);
        if v16 == 4 {
            if *(v15 as &i32) == 4 && *((v15 + 40) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v15 + 56) as &i64), *((v15 + 64) as &i64)) as i8 {
                goto LABEL_4af434;
            }
LABEL_4af408:
            v0 = struct8 {
                field_0: 0
            };
            uu_test::parser::Symbol::into_literal(&v6, &v0);
            v2 = uu_test::parser::Parser::literal(a1, &v6);
LABEL_4af50e:
            v21 = v2;
            if v21 == 7 {
LABEL_4af553:
                *(a0 as &i64) = 7;
                break;
            } else {
                *((a0 + 24) as &i8) = v4;
LABEL_4af56a:
                *((a0 + 8) as &i128) = *((&v2 as &char + 8) as &i128);
                *(a0 as &i64) = v21;
                break;
            }
        } else {
            if v16 == 5 && *((v15 + 80) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v15 + 96) as &i64), *((v15 + 104) as &i64)) as i8 {
                uu_test::parser::Parser::next_token(&v8, a1);
                uu_test::parser::Parser::uop(a1, &v8);
                v0 = uu_test::parser::Parser::expect(a1);
                if v0 == 7 {
                    goto LABEL_4af553;
                }
LABEL_4af363:
                *((a0 + 16) as &i128) = v18;
                *(a0 as &i128) = v17;
                break;
            }
LABEL_4af434:
            if *((v15 + 40) as &i64) == 3 {
                if *(v15 as &i32) == 4 && *((v15 + 40) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v15 + 56) as &i64), *((v15 + 64) as &i64)) as i8 {
                    goto LABEL_4af4a3;
                }
LABEL_4af4e1:
                if *(v15 as &i64) == 4 {
LABEL_4af4e7:
                    v0 = struct8 {
                        field_0: 0
                    };
                    uu_test::parser::Symbol::into_literal(&v6, &v0);
                    v2 = uu_test::parser::Parser::literal(a1, &v6);
                    goto LABEL_4af50e;
                }
            } else {
                if *(v15 as &i32) == 4 && *((v15 + 40) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v15 + 56) as &i64), *((v15 + 64) as &i64)) as i8 {
                    goto LABEL_4af4e1;
                }
                if *(v15 as &i32) == 4 && *((v15 + 40) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v15 + 56) as &i64), *((v15 + 64) as &i64)) as i8 {
                    goto LABEL_4af529;
                }
                uu_test::parser::Parser::next_token(&v10, a1);
                v0 = uu_test::parser::Parser::literal(a1, &v10);
                v21 = v0;
                if *(v15 as &i32) == 4 && *((v15 + 40) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v15 + 56) as &i64), *((v15 + 64) as &i64)) as i8 {
                    goto LABEL_4af55c;
                }
                v0 = uu_test::parser::Parser::expect(a1);
            }
LABEL_4af549:
            v21 = v0;
            if v21 == 7 {
                goto LABEL_4af553;
            }
LABEL_4af55c:
            *((a0 + 24) as &i64) = v1;
            goto LABEL_4af56a;
        }
    default:
LABEL_4af529:
        v0 = uu_test::parser::Parser::expr(a1, v20);
        v21 = v0;
        if *(v15 as &i32) == 4 && *((v15 + 40) as &i32) == 3 && <std::ffi::os_str::OsString as core::cmp::PartialEq<str>>::eq(*((v15 + 56) as &i64), *((v15 + 64) as &i64)) as i8 {
            goto LABEL_4af55c;
        }
        v0 = uu_test::parser::Parser::expect(a1);
        goto LABEL_4af549;
    }
    return;
}
