__int64 __fastcall ruff_python_formatter::string::docstring::contains_unescaped_newline(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // rdx
  unsigned int v6; // r13d
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD v14[7]; // [rsp-2h] [rbp-38h] BYREF

  v14[0] = v2;
  do
  {
    BYTE3(v14[0]) = 92;
    v6 = memchr::arch::generic::memchr::search_slice_with_raw(a1, a2, (char *)v14 + 3);
    if ( (v6 & 1) == 0 )
      break;
    v7 = v5 + 1;
    v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
           v5 + 1,
           a1,
           a2);
    if ( !v8 )
      core::str::slice_error_fail(a1, a2, v7, a2, &off_57F0C0);
    a1 = <str as ruff_python_trivia::whitespace::PythonWhitespace>::trim_whitespace_start(v8, v9);
    a2 = v10;
    HIDWORD(v14[0]) = 0;
    v11 = core::char::methods::encode_utf8_raw(10LL, (char *)v14 + 4);
  }
  while ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(a1, a2, v11, v12) );
  LOBYTE(v6) = v6 & 1;
  return v6;
}