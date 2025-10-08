fn ruff_python_formatter::pattern::pattern_arguments::is_single_argument_parenthesized(a0: void*, a1: u32, a2: u64, a3: u32) -> long long {
    let v2: struct21;  // [bp-0x40]
    let v4: u64;  // rax

    v4 = 0x8000000000000000 ^ *(a0 as &i64);
    if *((a0 as &u8 + (&g_48d590.field_0)[v4]) as &i32) > a1 {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v2 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a2, a3, *((a0 as &u8 + (&g_48d590.field_0)[v4]) as &i32), a1);
}
