fn ruff_python_formatter::statement::trailing_semicolon(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> long long {
    let v0: struct12;  // [bp-0x78]
    let v1: struct16;  // [bp-0x68]
    let v2: struct21;  // [bp-0x58]
    let v3: u8;  // [bp-0x28]
    let v5: u32;  // edx
    let v7: struct16;  // rax
    let v8: u64;  // rax

    v1 = struct16 {
        field_0: a1
        field_8: a2
    };
    <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v1);
    v2 = ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(v5, a3, a4);
    v3 = 0;
    v0 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(&v2);
    v7 = 1;
    return struct16 {
        field_0: v8 as u32
        field_4: <UNKNOWN>
    };
}
