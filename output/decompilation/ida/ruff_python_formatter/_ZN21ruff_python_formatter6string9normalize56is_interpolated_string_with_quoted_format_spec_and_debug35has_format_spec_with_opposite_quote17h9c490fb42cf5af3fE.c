__int64 __fastcall ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug::has_format_spec_with_opposite_quote(
        __int64 a1,
        char a2,
        __int64 a3,
        char a4)
{
  __int64 v4; // rcx
  char v6; // [rsp+Eh] [rbp-2Ah] BYREF
  char v7; // [rsp+Fh] [rbp-29h] BYREF
  _QWORD v8[2]; // [rsp+10h] [rbp-28h] BYREF
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a2;
  v7 = a4;
  v4 = *(_QWORD *)(a1 + 8) + 80LL * *(_QWORD *)(a1 + 16);
  v8[0] = *(_QWORD *)(a1 + 8);
  v8[1] = v4;
  v9[0] = a3;
  v9[1] = &v7;
  v9[2] = &v6;
  return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(v8, v9);
}