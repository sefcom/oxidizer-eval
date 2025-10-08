__int64 __fastcall ruff_python_formatter::verbatim::Indentation::from_stmt(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebp
  unsigned int v6; // eax
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  int v12; // edx
  unsigned int v13; // ebx
  _QWORD v15[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = <ruff_python_ast::generated::Stmt as ruff_text_size::traits::Ranged>::range(a1);
  v5 = <str as ruff_source_file::line_ranges::LineRanges>::line_start(a2, a3, v4);
  v6 = <ruff_python_ast::generated::Stmt as ruff_text_size::traits::Ranged>::range(a1);
  if ( v5 > v6 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57FA68);
  v7 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
         v5,
         v6);
  v9 = v8;
  v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v7,
          v8,
          a2,
          a3);
  if ( !v10 )
    core::str::slice_error_fail(a2, a3, v7, v9, &off_57FA80);
  v15[0] = v10;
  v15[1] = v10 + v11;
  v13 = 0;
  if ( (core::str::validations::next_code_point(v15) & 1) != 0 )
  {
    v13 = 0;
    do
    {
      if ( v12 != 9 && v12 != 32 )
        break;
      ++v13;
    }
    while ( (core::str::validations::next_code_point(v15) & 1) != 0 );
  }
  return v13;
}