__int64 __fastcall ruff_python_formatter::string::docstring::indent_with_suffix(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 result; // rax
  __int64 v10; // rdx

  v4 = <str as ruff_python_trivia::whitespace::PythonWhitespace>::trim_whitespace_start(a2, a3);
  v6 = a3 - v5;
  if ( a3 < v5 )
    core::option::expect_failed(aSuffixLine, 14LL, &off_57F5C0);
  v7 = v4;
  v8 = v5;
  result = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
             a3 - v5,
             a2,
             a3);
  if ( !result )
    core::str::slice_error_fail(a2, a3, 0LL, v6, &off_57F5A8);
  *a1 = result;
  a1[1] = v10;
  a1[2] = v7;
  a1[3] = v8;
  return result;
}