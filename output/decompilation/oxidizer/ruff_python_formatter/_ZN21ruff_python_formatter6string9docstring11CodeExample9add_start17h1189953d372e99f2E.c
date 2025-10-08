fn ruff_python_formatter::string::docstring::CodeExample::add_start(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: struct16;  // [bp-0x138]
    let v1: u128;  // [bp-0x130]
    let v2: struct16;  // [bp-0x120]
    let v3: struct32;  // [bp-0x110]
    let v4: Option<struct32>;  // [bp-0xe8]
    let v5: &mut [u8];  // [bp-0xd8]
    let v6: struct21;  // [bp-0xc8]
    let v7: Option<struct49>;  // [bp-0xc0]
    let v8: &mut [u8];  // [bp-0xb0]
    let v9: u128;  // [bp-0xa0]
    let v10: u128;  // [bp-0x90]
    let v11: struct80;  // [bp-0x80]
    let v12: struct16;  // [bp-0x70]
    let v13: struct16;  // [bp-0x60]
    let v14: struct32;  // [bp-0x50]
    let v16: struct12;  // rdx
    let v17: iNone;  // xmm0

    if *(a0 as &i64) != 9223372036854775811 {
        panic!("expected no existing code example");
    }
    v4 = ruff_python_formatter::string::docstring::CodeExampleDoctest::new(a1);
    match v4 {
        None => {
            v11 = ruff_python_formatter::string::docstring::CodeExampleRst::new(*(a1 as &i64), a1[8] as i64);
            if v11.field_0 as i64 == 0x8000000000000000 {
                v7 = ruff_python_formatter::string::docstring::CodeExampleMarkdown::new(*(a1 as &i64), a1[8] as i64);
                match v7 {
                    None => {
                        v3 = a1[32] as i64;
                        v2 = a1[16] as i128;
                        v1 = *(a1 as &i128) as u128;
                        v0 = 9223372036854775811;
                        v16 = "crates/ruff_python_formatter/src/string/docstring.rs";
                    },
                    Some(_) => {
                        *(a0 as &i64) = 9223372036854775810;
                        *(&a0[8] as &i128) = v7 as i128;
                        *(&a0[24] as &&mut [u8]) = v8;
                        *(&a0[40] as &u128) = v9;
                        *(&a0[56] as &u128) = v10;
                        v3 = a1[32] as i64;
                        v2 = a1[16] as i128;
                        v1 = *(a1 as &i128) as u128;
                        v0 = 9223372036854775811;
                        v16 = "crates/ruff_python_formatter/src/string/docstring.rs";
                    },
                }
            } else {
                *(&a0[64] as &u128) = v11.field_64;
                v17 = v11.field_0;
                *(&a0[48] as &struct32) = v14;
                *(&a0[32] as &struct16) = v13;
                *(&a0[16] as &struct16) = v12;
                *(a0) = v17;
                v3 = a1[32] as i64;
                v2 = a1[16] as i128;
                v1 = *(a1 as &i128) as u128;
                v0 = 9223372036854775811;
                v16 = "crates/ruff_python_formatter/src/string/docstring.rs";
            }
        },
        Some(_) => {
            *(a0 as &i64) = 0x8000000000000000;
            *(&a0[8] as &i128) = v4 as i128;
            *(&a0[24] as &&mut [u8]) = v5;
            *(&a0[40] as &struct21) = v6;
            v0 = 9223372036854775812;
            v16 = "crates/ruff_python_formatter/src/string/docstring.rs";
        },
    }
    return alloc::collections::vec_deque::VecDeque<T,A>::push_back(a2, &v0, v16);
}
