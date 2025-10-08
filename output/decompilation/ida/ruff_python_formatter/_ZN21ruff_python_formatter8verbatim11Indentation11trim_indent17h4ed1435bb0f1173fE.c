__int64 __fastcall ruff_python_formatter::verbatim::Indentation::trim_indent(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // r13
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // r14d
  int v16; // edx
  unsigned int v17; // r14d
  unsigned int v19; // [rsp+Ch] [rbp-4Ch]
  _QWORD v20[2]; // [rsp+10h] [rbp-48h] BYREF
  __int64 v21; // [rsp+20h] [rbp-38h]

  v6 = <&T as ruff_text_size::traits::Ranged>::range(a2);
  v8 = v7;
  v19 = v6;
  v9 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
         v6,
         v7);
  v11 = v10;
  v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v9,
          v10,
          a3,
          a4);
  if ( !v12 )
    core::str::slice_error_fail(a3, a4, v9, v11, &off_57FA98);
  v20[0] = v12;
  v20[1] = v12 + v13;
  if ( a1 )
  {
    v14 = a1;
    v15 = 0;
    do
    {
      v21 = v14 - 1;
      if ( (core::str::validations::next_code_point(v20) & 1) == 0 || v16 != 32 && v16 != 9 )
        break;
      ++v15;
      v14 = v21;
    }
    while ( v21 );
  }
  else
  {
    v15 = 0;
  }
  v17 = v19 + v15;
  if ( v17 > v8 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57FAB0);
  return v17;
}