__int64 __fastcall ruff_python_formatter::string::normalize::StringNormalizer::normalize(
        __int64 a1,
        __int64 *a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // rbp
  __int64 v8; // r13
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // r12
  unsigned __int8 v17; // r14
  __int64 result; // rax
  int v19; // edx
  __int128 v21; // [rsp+8h] [rbp-80h] BYREF
  __int64 v22; // [rsp+18h] [rbp-70h]
  __int64 v23; // [rsp+20h] [rbp-68h]
  __int64 v24; // [rsp+28h] [rbp-60h]
  __int64 v25; // [rsp+30h] [rbp-58h]
  __int64 v26; // [rsp+38h] [rbp-50h]
  char v27[8]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+48h] [rbp-40h]
  unsigned __int8 v29; // [rsp+50h] [rbp-38h]

  v7 = *a2;
  v8 = a2[1];
  v9 = ruff_python_ast::expression::StringLikePart::content_range(a4, a5);
  v24 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
          v9,
          v10);
  v23 = v11;
  v26 = v7;
  v25 = v8;
  v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v24,
          v11,
          v7,
          v8);
  if ( !v12 )
    core::str::slice_error_fail(v26, v25, v24, v23, &off_57F6B8);
  v14 = v12;
  v15 = v13;
  ruff_python_formatter::string::normalize::StringNormalizer::choose_quotes((__int64)v27, a2, a3, a4, a5);
  v16 = a4;
  if ( (v27[0] & 1) != 0 )
  {
    v17 = v29;
    ruff_python_formatter::string::normalize::normalize_string(&v21, v14, v15, v28, v29, 0LL);
  }
  else
  {
    *((_QWORD *)&v21 + 1) = v14;
    v22 = v15;
    *(_QWORD *)&v21 = 0x8000000000000000LL;
    v17 = v29;
  }
  result = ruff_python_ast::expression::StringLikePart::content_range(v16, a5);
  *(_QWORD *)(a1 + 16) = v22;
  *(_OWORD *)a1 = v21;
  *(_BYTE *)(a1 + 32) = v17;
  *(_DWORD *)(a1 + 24) = result;
  *(_DWORD *)(a1 + 28) = v19;
  return result;
}