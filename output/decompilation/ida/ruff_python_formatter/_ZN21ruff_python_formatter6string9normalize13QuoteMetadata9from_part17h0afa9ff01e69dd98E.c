__int64 __fastcall ruff_python_formatter::string::normalize::QuoteMetadata::from_part(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 *a4,
        unsigned __int8 a5)
{
  __int64 v7; // r15
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // r14
  unsigned __int8 v18; // al
  unsigned __int8 v21; // al
  _BYTE *v22; // r15
  unsigned __int8 v23; // al
  _QWORD v24[2]; // [rsp+8h] [rbp-70h] BYREF
  __int64 v25; // [rsp+18h] [rbp-60h]
  __int64 v26; // [rsp+20h] [rbp-58h]
  _BYTE v27[16]; // [rsp+28h] [rbp-50h] BYREF
  _BYTE v28[64]; // [rsp+38h] [rbp-40h] BYREF

  v24[0] = a2;
  v24[1] = a3;
  if ( a2 >= 2 )
  {
    v21 = ruff_python_ast::expression::StringLikePart::flags(v24);
    if ( a2 == 2 )
    {
      v22 = v27;
      ruff_python_formatter::string::normalize::QuoteMetadata::from_str(v27, 1LL, 0LL, v21, a5);
      v23 = <ruff_python_ast::nodes::AnyStringFlags as core::convert::From<ruff_python_ast::nodes::FStringFlags>>::from(*(unsigned int *)(a3 + 36));
    }
    else
    {
      v22 = v28;
      ruff_python_formatter::string::normalize::QuoteMetadata::from_str(v28, 1LL, 0LL, v21, a5);
      v23 = <ruff_python_ast::nodes::AnyStringFlags as core::convert::From<ruff_python_ast::nodes::TStringFlags>>::from(*(unsigned int *)(a3 + 36));
    }
    return ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements(
             a1,
             v22,
             a3,
             v23,
             a4,
             a5);
  }
  else
  {
    v26 = a1;
    v7 = *a4;
    v8 = a4[1];
    v9 = ruff_python_ast::expression::StringLikePart::content_range(a2, a3);
    v11 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(
            v9,
            v10);
    v13 = v12;
    v25 = v8;
    v14 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            v11,
            v12,
            v7,
            v8);
    if ( !v14 )
      core::str::slice_error_fail(v7, v25, v11, v13, &off_57F6D0);
    v16 = v14;
    v17 = v15;
    v18 = ruff_python_ast::expression::StringLikePart::flags(v24);
    return ruff_python_formatter::string::normalize::QuoteMetadata::from_str(v26, v16, v17, v18, a5);
  }
}