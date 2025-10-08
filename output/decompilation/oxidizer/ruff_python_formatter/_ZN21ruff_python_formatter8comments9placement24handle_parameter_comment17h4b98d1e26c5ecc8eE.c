fn ruff_python_formatter::comments::placement::handle_parameter_comment(a0: i64, a1: void*, a2: i64, a3: u64, a4: u64) -> long long {
    let v0: u8;  // [bp-0x49]
    let v1: void*;  // [bp-0x48], Other Possible Types: struct12
    let v3: std::io::stdio::Stdin;  // rax

    if *((a2 + 8) as &i64) {
        v1 = ruff_python_trivia::tokenizer::first_non_trivia_token(*((a2 + 20) as &i32), a3, a4);
        if &v1 as u8 == "Z" {
            core::option::expect_failed("A annotated parameter should have a colon following its name when it is valid syntax."); /* do not return */
        }
        v0 = v1.field_8;
        if v0 != 12 {
            v1 = 0;
            core::panicking::assert_failed(0, &v0, &g_48a9b3, &v1, "crates/ruff_python_formatter/src/comments/placement.rs"); /* do not return */
        }
        if v3 as u32 >= v1.field_0 {
            return struct80 {
                field_0: *(a1 as &i128)
                field_16: a1[16] as i128
                field_32: a1[32] as i128
                field_48: a1[48] as i128
                field_64: a1[64] as i128
            };
        }
    } else if v3 as u32 >= *((a2 + 16) as &i32) {
        return struct80 {
            field_0: *(a1 as &i128)
            field_16: a1[16] as i128
            field_32: a1[32] as i128
            field_48: a1[48] as i128
            field_64: a1[64] as i128
        };
    }
    return struct40 {
        field_0: 94
        field_8: 80
        field_16: a2
        field_24: v3 as u32
        field_28: a1[68] as i32
        field_32: 0
        field_33: a1[72] as i8
    };
}
