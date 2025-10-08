fn ruff_python_formatter::pattern::is_pattern_parenthesized(a0: void*, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: u8;  // [bp-0x7c]
    let v1: struct12;  // [bp-0x78], Other Possible Types: struct41
    let v3: u64;  // rax
    let v4: u64;  // rbp
    let v5: struct12;  // rax

    v3 = *(a0 as &i64) ^ 0x8000000000000000;
    v1 = ruff_python_trivia::tokenizer::first_non_trivia_token(*((a0 as &u8 + (&g_48d590.field_0)[v3]) as &i32), a3, a4);
    if v1.field_8 as i8 != 6 {
        return 0;
    }
    v1 = ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to(*((a0 as &u8 + (&g_48d5d0.field_0)[v4]) as &i32), a3, a4, a1, a2);
    v5 = core::iter::traits::iterator::Iterator::try_fold(&v1);
    return v5 & -0x100 | v0 == 5;
}
