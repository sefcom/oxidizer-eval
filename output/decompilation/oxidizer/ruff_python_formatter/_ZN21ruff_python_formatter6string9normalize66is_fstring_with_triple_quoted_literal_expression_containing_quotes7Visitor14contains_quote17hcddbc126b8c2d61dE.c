fn ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote(a0: i64, a1: u32, a2: u32, a3: u8) -> char {
    let v1: struct16;  // rax
    let v2: u64;  // rdx
    let v3: core::option::Option<&str>;  // rax

    v1 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(a1, a2);
    v3 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v1, v2, *(a0 as &i64), *((a0 + 8) as &i64)) as u64;
    return <char as core::str::pattern::Pattern>::is_contained_in((!(a3 & 1)) * 5 + 34, v3, a2);
}
