fn ruff_python_formatter::other::commas::has_trailing_comma(a0: i32, a1: i32, a2: &str) -> u8 {
    let v0: struct12;  // [bp-0x44]
    let v1: struct21;  // [bp-0x38]
    let v3: u32;  // rcx

    v1 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a2, v3, a0);
    v0 = core::iter::traits::iterator::Iterator::try_fold(&v1);
    return v0.field_8 as i8 == 11;
}
