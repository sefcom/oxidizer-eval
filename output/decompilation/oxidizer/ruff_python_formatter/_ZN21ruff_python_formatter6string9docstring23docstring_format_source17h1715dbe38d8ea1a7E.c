fn ruff_python_formatter::string::docstring::docstring_format_source(a1: &struct16, a2: i256, a3: i64, a4: i64) -> : struct88 {
    let a0: i64;  // rdi
    let v0: struct24;  // [bp-0x2b0]
    let v1: struct24;  // [bp-0x298]
    let v2: &str;  // [bp-0x288]
    let v3: struct32;  // [bp-0x280]
    let v4: struct16;  // [bp-0x278], Other Possible Types: u128
    let v5: Result<struct76, struct16>;  // [bp-0x278]
    let v6: Result<struct8, struct12>;  // [bp-0x268]
    let v7: struct32;  // [bp-0x258]
    let v8: iNone;  // [bp-0x248]
    let v9: u128;  // [bp-0x238]
    let v10: i8;  // [bp-0x228]
    let v11: struct34;  // [bp-0x218]
    let v12: u16;  // [bp-0x1f0]
    let v13: struct32;  // [bp-0x1ee]
    let v14: u128;  // [bp-0x1ec]
    let v15: struct12;  // [bp-0x1dc]
    let v16: struct16;  // [bp-0x1d8]
    let v17: iNone;  // [bp-0x1d0]
    let v18: iNone;  // [bp-0x1c0]
    let v19: Result<struct16, struct1>;  // [bp-0x1b0]
    let v20: iNone;  // [bp-0x1a8]
    let v21: u128;  // [bp-0x198]
    let v22: u64;  // [bp-0x190]
    let v23: u128;  // [bp-0x188]
    let v24: iNone;  // [bp-0x178]
    let v25: u64;  // [bp-0x168]
    let v26: iNone;  // [bp-0x160]
    let v27: &str;  // [bp-0x150]
    let v28: iNone;  // [bp-0x148]
    let v29: core::option::Option<(usize, char)>;  // [bp-0x138]
    let v30: struct16;  // [bp-0x128]
    let v31: struct16;  // [bp-0x118]
    let v32: Result<struct112, struct48>;  // [bp-0x110], Other Possible Types: struct189
    let v33: Result<struct88, struct32>;  // [bp-0x110]
    let v34: struct24;  // [bp-0x109]
    let v35: struct16;  // [bp-0x101]
    let v36: &str;  // [bp-0xf9]
    let v37: u64;  // [bp-0xf8]
    let v38: i64;  // [bp-0xe8]
    let v39: iNone;  // [bp-0xe0]
    let v40: u128;  // [bp-0xd0]
    let v41: iNone;  // [bp-0xc0]
    let v43: core::option::Option<&str>;  // rax
    let v45: struct16;  // rsi
    let v46: struct12;  // rax
    let v47: struct16;  // rcx
    let v48: iNone;  // xmm1

    v32 = ruff_python_parser::parse(a3, a4, (2 <= *((a1 + 7) as &i8)) * 3 + 0x90300);
    v43 = v32 as i64;
    v4 = *((&v32 as &char + 8) as &i128);
    v6 = *((&v32 as &char + 24) as &i128);
    v7 = v38;
    if (((0 ^ v43) & (0 ^ -(v43))) >> 63) as char {
        return struct48 {
            field_0: 0x8000000000000000
            field_8: v4
            field_24: v6
            field_40: v7
        };
    }
    v24 = *((&v32 as &char + 96) as &i128);
    v23 = v41;
    v21 = v40;
    v20 = v39;
    v17 = v4;
    v18 = v6;
    v19 = v7;
    v16 = v43;
    v0 = ruff_python_parser::<impl core::convert::From<&ruff_python_parser::Tokens> for ruff_python_trivia::comment_ranges::CommentRanges>::from(&v16);
    v46 = ruff_python_formatter::comments::Comments::from_ast::collect_comments(v22 == 0x8000000000000000, v45, a3, a4, &v0);
    v14 = *(a1 as &i128);
    v11 = struct34 {
        field_0: a3
        field_8: a4
        field_16: v46
        field_24: &v16
        field_32: 0x100
    };
    v12 = 0;
    v15 = a2;
    v13 = 2;
    v3 = &v21;
    v4 = struct16 {
        field_0: &v3
        field_8: &g_97f528
    };
    v33 = ruff_formatter::format(&v11, &v4);
    v1 = *((&v33 as &char + 8) as &i128);
    v2 = v37;
    match v33 {
        Err(_) => {
            v36 = v2;
            v34 = v1;
            v47 = v36.ptr;
            return struct48 {
                field_0: 0x8000000000000000
                field_8: 41
                field_9: <UNKNOWN>
                field_24: v47
                field_32: <UNKNOWN>
            };
        },
        Ok(_) => {
            v31 = *((&v33 as &char + 80) as &i64);
            v30 = v40;
            v29 = v39;
            v28 = *((&v33 as &char + 32) as &i128);
            v26 = v1;
            v27 = v2;
            v25 = v33 as i64;
            v32 = ruff_formatter::Formatted<Context>::create_printer(&v25);
            v5 = ruff_formatter::printer::Printer::print(&v32, &v25);
            match v5 {
                Ok(_) => {
                    v48 = *((&v5 as &char + 32) as &i128);
                    return struct88 {
                        field_0: v5 as i64
                        field_8: &g_97f528
                        field_16: v6
                        field_32: v48
                        field_48: v8
                        field_64: v9
                        field_80: *(&v10 as &i64)
                    };
                },
                Err(_) => {
                    return struct24 {
                        field_0: 0x8000000000000000
                        field_8: 42
                        field_12: <UNKNOWN>
                    };
                },
            }
        },
    }
}
