fn ruff_python_formatter::other::parameters::has_trailing_comma(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: struct12;  // [bp-0xb8], Other Possible Types: struct21
    let v1: struct12;  // [bp-0xb8], Other Possible Types: struct48
    let v2: struct12;  // [bp-0xb8]
    let v3: struct21;  // [bp-0x78]
    let v4: core::option::Option<&str>;  // [bp-0x70]
    let v5: u64;  // [bp-0x68]
    let v6: u32;  // [bp-0x60]
    let v7: struct16;  // [bp-0x58]
    let v8: struct48;  // [bp-0x48]
    let v9: u128;  // [bp-0x48]
    let v11: u32;  // edx
    let v12: u32;  // edx

    if a1 == 94 {
        return 0;
    }
    v7 = struct16 {
        field_0: a1
        field_8: a2
    };
    if !*((a0 + 16) as &i64) || *((a0 + 40) as &i64) || *((a0 + 80) as &i64) || *((a0 + 64) as &i64) {
        <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v7);
        v0 = ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(v12, a3, a4);
    } else {
        <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v7);
        v0 = ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(v11, a3, a4);
        v8 = v1;
        if !*((a0 + 88) as &i64) {
            v1 = core::iter::traits::iterator::Iterator::try_fold(&v8);
            if &v2 as u8 == "Z" {
                panic!("The last positional only argument must be separated by a `,` from the positional only parameters separator `/` but found '{}'.", &v3);
            }
            v3 = v1.field_0;
            v4 = v1.field_8;
            if v4 as u8 != 11 {
                panic!("The last positional only argument must be separated by a `,` from the positional only parameters separator `/` but found '{}'.", &v3);
            }
            v2 = core::iter::traits::iterator::Iterator::try_fold(&v8);
            if &v2 as u8 == "Z" {
                panic!("The positional argument separator must be present for a function that has positional only parameters but found '{}'.", &v5);
            }
            v5 = v2.field_0;
            v6 = v2.field_8;
            if v6 != 14 {
                panic!("The positional argument separator must be present for a function that has positional only parameters but found '{}'.", &v5);
            }
        }
    }
    v0 = core::iter::traits::iterator::Iterator::try_fold(&v9);
    if &v0 as u64 == "Z" {
        core::option::expect_failed("There must be a token after the argument list"); /* do not return */
    }
    return v0.field_8 as i8 == 11;
}
