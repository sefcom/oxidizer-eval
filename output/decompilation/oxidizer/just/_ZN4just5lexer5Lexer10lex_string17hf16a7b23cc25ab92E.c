fn just::lexer::Lexer::lex_string(a0: &struct80, a1: i64) -> u64 {
    let v0: &mut [u8];  // [bp-0xb8]
    let v1: u32;  // [bp-0xac]
    let v2: u64;  // [bp-0xa8]
    let v3: u64;  // [bp-0xa0]
    let v4: u8;  // [bp-0x98]
    let v5: u128;  // [bp-0x88]
    let v6: u128;  // [bp-0x78]
    let v7: u128;  // [bp-0x68]
    let v8: i8;  // [bp-0x58]
    let v9: i8;  // [bp-0x50]
    let v11: u64;  // rdx
    let v12: struct16;  // rax
    let v14: struct16;  // rbp
    let v15: u64;  // rcx
    let v16: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // rsi
    let v17: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // rdx
    let v18: u32;  // r15d
    let v19: struct32;  // rsi
    let v20: struct80;  // eax
    let v21: u8;  // cl
    let v22: u64;  // r15
    let v23: u8;  // cc_dep1
    let v24: u8;  // r12b
    let v26: u64;  // rcx
    let v27: u64;  // rax

    v12 = just::string_kind::StringKind::from_token_start(just::lexer::Lexer::rest(a1), v11);
    if v12 as u8 == 2 {
        just::lexer::Lexer::advance(a1);
        if &v9 == "%" {
            return just::lexer::Lexer::internal_error(a0, a1, "Lexer::lex_string: invalid string start");
        }
        return struct80 {
            field_0: *(&v4 as &i128)
            field_16: v5
            field_32: v6
            field_48: v7
            field_64: *(&v8 as &i128)
        };
    } else {
        v14 = v11 & 4294967295;
        v18 = v12 as u32;
        if (v12 as u8 & 1) {
            v19 = v16;
        } else {
            v19 = v17;
        }
        just::lexer::Lexer::presume_str(&v4, a1, v16, v15);
        if &v9 != "%" {
            return struct80 {
                field_0: *(&v4 as &i128)
                field_16: v5
                field_32: v6
                field_48: v7
                field_64: *(&v8 as &i128)
            };
        } else if *((a1 + 192) as &i32) == 0x110000 {
            v4 = v26;
            return just::lexer::Lexer::error(a0, a1, &v4);
        } else {
            v21 = v18;
            v22 = v18 * 2 + 1;
            v23 = v21 & 1;
            v3 = ((v21 & 1) ? &g_471294.range.front : &g_46e9db.range.front);
            v0 = (v23 ? &g_47128e.range.front : &g_46e541.range.front);
            v2 = (v23 ? &g_471291.range.front : &g_46b312.range.front);
            v1 = v14 as u32;
            if v1 == 1 {
                while (v20 == 92 && !(v24 & 1) || !just::lexer::Lexer::rest_starts_with(a1, v2, v22) || (v24 & 1)) {
                    just::lexer::Lexer::advance(a1);
                    if &v9 != "%" {
                        return struct80 {
                            field_0: *(&v4 as &i128)
                            field_16: v5
                            field_32: v6
                            field_48: v7
                            field_64: *(&v8 as &i128)
                        };
                    }
                    if *((a1 + 192) as &i32) == 0x110000 {
                        v4 = v26;
                        return just::lexer::Lexer::error(a0, a1, &v4);
                    }
                }
            } else if !v1 {
                while (!just::lexer::Lexer::rest_starts_with(a1, v0, v22)) {
                    just::lexer::Lexer::advance(a1);
                    if &v9 != "%" {
                        return struct80 {
                            field_0: *(&v4 as &i128)
                            field_16: v5
                            field_32: v6
                            field_48: v7
                            field_64: *(&v8 as &i128)
                        };
                    } else if *((a1 + 192) as &i32) == 0x110000 {
                        v4 = v26;
                        return just::lexer::Lexer::error(a0, a1, &v4);
                    }
                }
            } else {
                while (!just::lexer::Lexer::rest_starts_with(a1, v3, v22)) {
                    just::lexer::Lexer::advance(a1);
                    if &v9 != "%" {
                        return struct80 {
                            field_0: *(&v4 as &i128)
                            field_16: v5
                            field_32: v6
                            field_48: v7
                            field_64: *(&v8 as &i128)
                        };
                    } else if *((a1 + 192) as &i32) == 0x110000 {
                        v4 = v26;
                        return just::lexer::Lexer::error(a0, a1, &v4);
                    }
                }
            }
            if v14 as u8 {
                v0 = v2;
                if v1 == 2 {
                    v0 = v3;
                }
            }
            just::lexer::Lexer::presume_str(&v4, a1, v0, v22);
            if &v9 != "%" {
                return struct80 {
                    field_0: *(&v4 as &i128)
                    field_16: v5
                    field_32: v6
                    field_48: v7
                    field_64: *(&v8 as &i128)
                };
            }
            v27 = just::lexer::Lexer::token(a1, (!(v14 & 255) ? 3 : 33));
            *((a0 + 72) as &i8) = 37;
            return v27;
        }
    }
}
