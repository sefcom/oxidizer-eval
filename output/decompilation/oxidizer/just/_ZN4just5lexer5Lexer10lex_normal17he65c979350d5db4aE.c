fn just::lexer::Lexer::lex_normal(a0: i64, a1: core::option::Option<&str>, a2: u32) -> long long {
    let v0: struct16;  // [bp-0x80]
    let v1: u128;  // [bp-0x70]
    let v2: struct24;  // [bp-0x60]
    let v3: alloc::string::String;  // [bp-0x50]
    let v4: i8;  // [bp-0x40]
    let v5: i8;  // [bp-0x38]
    let v16: alloc::string::String;  // rdx
    let v17: struct80;  // rax
    let v18: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // xmm0

    match (a2) {
        11 | 12 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | 24 | 25 | 26 | 27 | 28 | 29 | 30 | 31 | 37 | 45 | 46 | 48 | 49 | 50 | 51 | 52 | 53 | 54 | 55 | 56 | 57 | 59 | 60 | 62 | 65 | 66 | 67 | 68 | 69 | 70 | 71 | 72 | 73 | 74 | 75 | 76 | 77 | 78 | 79 | 80 | 81 | 82 | 83 | 84 | 85 | 86 | 87 | 88 | 89 | 90 | 94 | 95 | 97 | 98 | 99 | 100 | 101 | 102 | 103 | 104 | 105 | 106 | 107 | 108 | 109 | 110 | 111 | 112 | 113 | 114 | 115 | 116 | 117 | 118 | 119 | 120 | 121 | 122 => {
            if a2 - 97 >= 26 && (a2 < 65 || !a2 == 95 && !a2 < 91) {
                v17 = just::lexer::Lexer::advance(a1);
                if &v5 != "%" {
                    v18 = *(&v0.field_0 as &i128);
                    return struct80 {
                        field_0: v18
                        field_16: v1
                        field_32: v2
                        field_48: v3
                        field_64: *(&v4 as &i128)
                    };
                }
            } else {
                return just::lexer::Lexer::lex_identifier(a0, a1);
            }
        }
        _ => {
            break;
        }
    }
    return just::lexer::Lexer::error(a0, a1, v16);
}
