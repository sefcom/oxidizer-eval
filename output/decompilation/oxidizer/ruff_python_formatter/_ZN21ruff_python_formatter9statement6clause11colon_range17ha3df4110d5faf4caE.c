fn ruff_python_formatter::statement::clause::colon_range(a0: i64, a1: u32, a2: u64, a3: u64) -> long long {
    let v0: struct12;  // [bp-0x58]
    let v1: struct21;  // [bp-0x48]
    let v2: std::io::stdio::Stdin;  // [bp-0x18]
    let v4: core::result::Result<usize, std::io::error::Error>;  // rax

    v1 = ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(a1, a2, a3);
    v2 = 0;
    v0 = core::iter::traits::iterator::Iterator::try_fold(&v1, &v2);
    v4 = v0.field_8;
    if v4 as u32 == 12 {
        return struct16 {
            field_0: 4
            field_4: <UNKNOWN>
        };
    } else if v4 as u32 == 90 {
        return struct24 {
            field_0: 0
            padding_4: <UNKNOWN>
            field_8: &g_48b31e
            field_16: 85
        };
    } else {
        return struct24 {
            field_0: 0
            padding_4: <UNKNOWN>
            field_8: &g_48b2cc
            field_16: 82
        };
    }
}
