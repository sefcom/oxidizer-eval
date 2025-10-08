fn just::lexer::Lexer::lex_body(a0: u64, a1: i64) -> long long {
    let v0: i64;  // [bp-0x90]
    let v1: struct16;  // [bp-0x88], Other Possible Types: struct65
    let v2: struct80;  // [bp-0x88], Other Possible Types: u640
    let v3: u128;  // [bp-0x78]
    let v4: u128;  // [bp-0x68]
    let v5: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x58]
    let v7: struct24;  // rax
    let v8: u64;  // rcx

    loop {
        while (just::lexer::Lexer::rest_starts_with(a1, "{{{{")) {
            v2 = just::lexer::Lexer::skip(a1);
            if &v2 as u8 != "%" {
                *((v0 + 64) as &i128) = *((&v2 as &char + 64) as &i128);
                *((v0 + 48) as &alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>) = v5;
                *((v0 + 32) as &u128) = v4;
                *((v0 + 16) as &u128) = v3;
                *(v0 as &struct16) = v1;
                return a0;
            }
        }
        if just::lexer::Lexer::rest_starts_with(a1, "\n") {
            if *((a1 + 160) as &i64) == *((a1 + 184) as &i64) {
                return just::lexer::Lexer::lex_single(a0, a1, 20);
            }
            just::lexer::Lexer::token(a1, 34);
            return just::lexer::Lexer::lex_single(a0, a1, 20);
        }
        if just::lexer::Lexer::rest_starts_with(a1, "\r\n") {
            if *((a1 + 160) as &i64) == *((a1 + 184) as &i64) {
                return just::lexer::Lexer::lex_double(a0, a1, 20);
            }
            just::lexer::Lexer::token(a1, 34);
            return just::lexer::Lexer::lex_double(a0, a1, 20);
        }
        if just::lexer::Lexer::rest_starts_with(a1, "{{") {
            if *((a1 + 160) as &i64) != *((a1 + 184) as &i64) {
                just::lexer::Lexer::token(a1, 34);
            }
            v2 = just::lexer::Lexer::lex_double(a1, 27);
            if &v2 as u8 != "%" {
                *((v0 + 64) as &i128) = *((&v2 as &char + 64) as &i128);
                *((v0 + 48) as &alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>) = v5;
                *((v0 + 32) as &u128) = v4;
                *((v0 + 16) as &u128) = v3;
                *(v0 as &struct16) = v1;
                return a0;
            }
            v7 = *((a1 + 80) as &i64);
            v8 = (*((a1 + 88) as &i64) - 1) * 9;
            v1 = struct65 {
                field_0: *((v7 + v8 * 8) as &i128)
                field_16: *((v7 + v8 * 8 + 16) as &i128)
                field_32: *((v7 + v8 * 8 + 32) as &i128)
                field_40: <UNKNOWN>
                field_48: *((v7 + v8 * 8 + 48) as &i128)
                field_64: *((v7 + v8 * 8 + 64) as &i64)
            };
            alloc::vec::Vec<T,A>::push(a1 + 24, &v1, "src/lexer.rs");
            goto LABEL_671fd2;
        } else if !just::lexer::Lexer::at_eof(a1) {
            v2 = just::lexer::Lexer::advance(a1);
            if &v2 as u8 != "%" {
                *((v0 + 64) as &i128) = *((&v2 as &char + 64) as &i128);
                *((v0 + 48) as &alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>) = v5;
                *((v0 + 32) as &u128) = v4;
                *((v0 + 16) as &u128) = v3;
                *(v0 as &struct16) = v1;
                return a0;
            }
        } else {
            if *((a1 + 160) as &i64) != *((a1 + 184) as &i64) {
                just::lexer::Lexer::token(a1, 34);
            }
LABEL_671fd2:
            *((v0 + 72) as &i8) = 37;
            break;
        }
    }
    return a0;
}
