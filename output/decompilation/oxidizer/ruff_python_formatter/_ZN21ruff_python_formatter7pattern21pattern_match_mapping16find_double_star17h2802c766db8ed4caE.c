fn ruff_python_formatter::pattern::pattern_match_mapping::find_double_star(a0: i64, a1: i64, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x68]
    let v1: i8;  // [bp-0x60]
    let v2: struct21;  // [bp-0x58]
    let v5: u64;  // rax

    if *((a1 + 79) as &i8) != 218 {
        v2 = ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(core::option::Option<T>::map_or((!*((a1 + 40) as &i64) ? 0 : *((a1 + 32) as &i64) + *((a1 + 40) as &i64) * 104 - 104), *((a1 + 88) as &i32)), a2, a3);
        v5 = core::iter::traits::iterator::Iterator::try_fold(&v0, &v2);
        if &v1 != "Z" {
            return struct24 {
                field_0: 1
                field_4: <UNKNOWN>
                field_12: <UNKNOWN>
            };
        }
    }
    return struct4 {
        field_0: 0
    };
}
