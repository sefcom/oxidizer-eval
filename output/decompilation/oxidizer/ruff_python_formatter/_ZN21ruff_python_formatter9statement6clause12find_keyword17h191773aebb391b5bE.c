fn ruff_python_formatter::statement::clause::find_keyword(a0: i64, a1: u32, a2: u8, a3: u64, a4: u64) -> long long {
    let v0: struct12;  // [bp-0x58]
    let v1: struct21;  // [bp-0x48]
    let v3: struct24;  // rax

    v1 = ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(a1, a3, a4);
    v0 = core::iter::traits::iterator::Iterator::try_fold(&v1);
    v3 = v0.field_8;
    if v3 as u8 == 90 || v0.field_8 as i8 == 90 {
        return struct24 {
            field_0: 0
            padding_4: <UNKNOWN>
            field_8: &g_48b27b
            field_16: 81
        };
    } else if a2 == v3 as u8 {
        return struct16 {
            field_0: 4
            field_4: <UNKNOWN>
        };
    } else {
        return struct24 {
            field_0: 0
            padding_4: <UNKNOWN>
            field_8: &g_48b240
            field_16: 59
        };
    }
}
