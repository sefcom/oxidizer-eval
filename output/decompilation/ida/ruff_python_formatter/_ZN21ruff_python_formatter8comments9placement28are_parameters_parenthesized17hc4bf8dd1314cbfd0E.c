__int64 __fastcall ruff_python_formatter::comments::placement::are_parameters_parenthesized(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  _DWORD v17[13]; // [rsp+0h] [rbp-34h] BYREF

  v17[0] = HIDWORD(v4);
  v7 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
         a1,
         a2);
  v9 = v8;
  v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v7,
          v8,
          a3,
          a4);
  if ( !v10 )
    core::str::slice_error_fail(a3, a4, v7, v9, &off_57D420);
  v12 = v10;
  v13 = v11;
  v17[0] = 0;
  v14 = core::char::methods::encode_utf8_raw(40LL, v17);
  return core::slice::<impl [T]>::starts_with(v12, v13, v14, v15);
}