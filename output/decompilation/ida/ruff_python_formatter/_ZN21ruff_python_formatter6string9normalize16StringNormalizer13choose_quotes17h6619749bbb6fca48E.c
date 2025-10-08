_QWORD *__fastcall ruff_python_formatter::string::normalize::StringNormalizer::choose_quotes(
        __int64 a1,
        __int64 *a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  char v17; // r12
  __int64 v18; // rdx
  char v19; // bp
  unsigned __int8 v20; // al
  unsigned int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  unsigned __int8 v25; // al
  _QWORD *result; // rax
  __int64 v27; // [rsp+8h] [rbp-80h]
  __int64 v28; // [rsp+10h] [rbp-78h]
  __int64 v30; // [rsp+18h] [rbp-70h]
  unsigned __int64 v31; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h]
  _QWORD v33[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v34; // [rsp+40h] [rbp-48h]
  __int64 v35; // [rsp+48h] [rbp-40h]
  _QWORD v36[7]; // [rsp+50h] [rbp-38h] BYREF

  v35 = a1;
  v31 = a4;
  v32 = a5;
  v7 = *a2;
  v8 = a2[1];
  v9 = ruff_python_ast::expression::StringLikePart::content_range(a4, a5);
  v11 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
          v9,
          v10);
  v13 = v12;
  v34 = v11;
  v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          v11,
          v12,
          v7,
          v8);
  if ( !v14 )
    core::str::slice_error_fail(v7, v8, v34, v13, &off_57F688);
  v16 = v14;
  v28 = v15;
  v33[0] = v14;
  v33[1] = v15 + v14;
  v36[0] = 0LL;
  v17 = core::iter::traits::iterator::Iterator::try_fold(v33, v36);
  v27 = v18;
  v19 = ruff_python_ast::expression::StringLikePart::flags(&v31);
  v20 = ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style(a2, a3, a4, a5);
  if ( v20 != 2 )
  {
    if ( (v17 & 1) != 0 )
    {
      v21 = v20;
      if ( v31 >= 2 )
      {
        ruff_python_formatter::string::normalize::QuoteMetadata::from_part(v33, v31, v32, a2, v20);
      }
      else
      {
        v22 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                v27,
                v16,
                v28);
        v30 = v23;
        if ( !v22 )
          core::str::slice_error_fail(v16, v28, v27, v28, &off_57F6A0);
        v24 = v22;
        v25 = ruff_python_ast::expression::StringLikePart::flags(&v31);
        ruff_python_formatter::string::normalize::QuoteMetadata::from_str(v33, v24, v30, v25, v21);
      }
      v20 = ruff_python_formatter::string::normalize::QuoteMetadata::choose(v33, v21);
    }
    v19 = v20 | v19 & 0xFE;
  }
  result = (_QWORD *)v35;
  *(_BYTE *)(v35 + 16) = v19;
  *result = v17 & 1;
  result[1] = v27;
  return result;
}