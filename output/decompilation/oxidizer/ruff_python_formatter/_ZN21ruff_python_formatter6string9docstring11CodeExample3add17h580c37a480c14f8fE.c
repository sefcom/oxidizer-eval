fn ruff_python_formatter::string::docstring::CodeExample::add(a1: i64, a2: i64) -> : struct80 {
    let a0: i64;  // rdi
    let v0: iNone;  // [bp-0x188], Other Possible Types: struct21, struct32
    let v1: core::fmt::Arguments;  // [bp-0x178], Other Possible Types: int
    let v2: iNone;  // [bp-0x168], Other Possible Types: core::fmt::Arguments, struct12
    let v3: u64;  // [bp-0x168]
    let v4: iNone;  // [bp-0x158], Other Possible Types: struct16
    let v5: iNone;  // [bp-0x148]
    let v6: Option<struct64>;  // [bp-0x138]
    let v7: iNone;  // [bp-0x128]
    let v8: u128;  // [bp-0x118]
    let v9: iNone;  // [bp-0x108], Other Possible Types: u128
    let v10: iNone;  // [bp-0xf8]
    let v11: struct40;  // [bp-0xe8]
    let v12: struct80;  // [bp-0xb8]
    let v13: struct64;  // [bp-0x68]
    let v15: u64;  // rcx
    let v16: u64;  // rax
    let v17: struct16;  // r13
    let v18: u64;  // rsi
    let v19: struct21;  // rdx
    let v20: core::option::Option<(usize, char)>;  // xmm0
    let v21: struct16;  // xmm1

    v15 = *(a0 as &i64);
    v16 = *((a0 + 72) as &i64);
    *(a0 as &i64) = 9223372036854775811;
    if v15 != 9223372036854775811 {
        v17 = a0 + 8;
        v18 = v15 ^ 0x8000000000000000;
        v19 = (v18 < 3 ? v18 : 1);
        if !v19 {
            v11 = struct40 {
                field_0: *(v17 as &i128)
                field_16: *((v17 + 16) as &i128)
                field_32: *((v17 + 32) as &i64)
            };
            v6 = ruff_python_formatter::string::docstring::CodeExampleDoctest::add_code_line(&v11, a1, a2);
            if let Some(_) = v6 {
                v2 = *((&v6 as &char + 32) as &i64);
                v1 = v7;
                v0 = v6 as i128;
                *(a0 as &i64) = 0x8000000000000000;
                *((v17 + 32) as &u64) = v3;
                v20 = v0;
                v21 = v1;
                *((v17 + 16) as &struct16) = v21;
                *(v17 as &core::option::Option<(usize, char)>) = v20;
                return;
            }
        } else if v19 == 1 {
            v12 = struct80 {
                field_0: v15
                field_8: *(v17 as &i128)
                field_24: *((v17 + 16) as &i128)
                field_40: *((v17 + 32) as &i128)
                field_56: *((v17 + 48) as &i128)
                field_72: v16
            };
            v6 = ruff_python_formatter::string::docstring::CodeExampleRst::add_code_line(&v12, a1, a2);
            if let Some(_) = v6 {
                v5 = v10;
                v4 = v9;
                v2 = v8;
                v1 = v7;
                v0 = v6 as i128;
                return struct80 {
                    field_0: v0
                    field_16: v1
                    field_32: v2
                    field_48: v4
                    field_64: v5
                };
            }
        } else {
            v13 = struct64 {
                field_0: *(v17 as &i128)
                field_16: *((v17 + 16) as &i128)
                field_32: *((v17 + 32) as &i128)
                field_48: *((v17 + 48) as &i128)
            };
            v6 = ruff_python_formatter::string::docstring::CodeExampleMarkdown::add_code_line(&v13, a1, a2);
            match v6 {
                None => {
                    return;
                },
                Some(_) => {
                    v4 = v9;
                    v2 = v8;
                    v1 = v7;
                    v0 = v6 as i128;
                    *(a0 as &i64) = 9223372036854775810;
                    v20 = v0;
                    v21 = v1;
                    *((v17 + 48) as void*) = v4;
                    *((v17 + 32) as void*) = v2;
                    *((v17 + 16) as &struct16) = v21;
                    *(v17 as &core::option::Option<(usize, char)>) = v20;
                    return;
                },
            }
        }
    }
    ruff_python_formatter::string::docstring::CodeExample::add_start(a0, a1, a2);
    return;
}
