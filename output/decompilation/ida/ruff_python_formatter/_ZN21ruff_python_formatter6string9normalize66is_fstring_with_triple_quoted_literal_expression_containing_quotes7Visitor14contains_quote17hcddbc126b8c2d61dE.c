__int64 __fastcall ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote(
        __int64 *a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rax

  v5 = *a1;
  v6 = a1[1];
  v7 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
         a2,
         a3);
  v9 = v8;
  v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v7,
          v8,
          v5,
          v6);
  if ( !v10 )
    core::str::slice_error_fail(v5, v6, v7, v9, &off_57F808);
  return <char as core::str::pattern::Pattern>::is_contained_in(5 * (unsigned int)((a4 & 1) == 0) + 34, v10);
}