char __fastcall ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new::merge_flags(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int128 v7; // rax
  char v8; // bp
  unsigned int v9; // r13d
  char v10; // al
  char v11; // al
  __int64 v12; // r13
  _BOOL4 v13; // esi
  __int64 v14; // rax
  __int64 v15; // r13
  unsigned __int8 v16; // al
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v19; // r14d
  __int128 v20; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v21; // [rsp+10h] [rbp-D8h]
  _QWORD v22[2]; // [rsp+18h] [rbp-D0h] BYREF
  _BOOL4 v23; // [rsp+2Ch] [rbp-BCh]
  __int128 v24; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-A8h]
  __int128 v26; // [rsp+50h] [rbp-98h] BYREF
  _BYTE v27[16]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v28; // [rsp+70h] [rbp-78h]
  __int64 v29; // [rsp+78h] [rbp-70h]
  _QWORD v30[2]; // [rsp+80h] [rbp-68h] BYREF
  __int128 v31; // [rsp+90h] [rbp-58h] BYREF
  __int64 v32; // [rsp+A0h] [rbp-48h]
  _OWORD v33[4]; // [rsp+A8h] [rbp-40h] BYREF

  v22[0] = a1;
  v22[1] = a2;
  if ( (unsigned __int8)<ruff_python_ast::expression::StringLike as ruff_python_formatter::string::StringLikeExtensions>::is_multiline(
                          v22,
                          a3) )
    return 0;
  ruff_python_ast::expression::StringLike::parts(&v26, v22);
  v4 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v26);
  if ( v4 == 4 )
    return 0;
  v29 = v4;
  v30[0] = v4;
  v28 = v5;
  v30[1] = v5;
  ruff_python_ast::expression::StringLike::parts(&v31, v22);
  v25 = v32;
  v24 = v31;
  *(_QWORD *)&v7 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v24);
  v8 = 2;
  if ( (_QWORD)v7 != 4LL )
  {
    v12 = *(_QWORD *)(a3 + 16);
    v13 = *(_BYTE *)(a3 + 44) >= 3u;
    if ( *(_BYTE *)(a3 + 44) == 3 )
      v13 = *(_BYTE *)(a3 + 45) >= 0xCu;
    v23 = v13;
    v21 = v12;
    while ( 1 )
    {
      v20 = v7;
      if ( (ruff_python_ast::expression::StringLikePart::flags(&v20) & 2) != 0 )
        return 0;
      if ( (unsigned __int8)ruff_python_ast::expression::StringLikePart::flags(&v20) > 0x3Fu )
        return 0;
      ruff_python_formatter::comments::Comments::leading_trailing(&v26, v12, v20, *((_QWORD *)&v20 + 1));
      v14 = core::iter::adapters::chain::and_then_or_clear(&v26);
      if ( core::option::Option<T>::or_else(v14, v27) )
        return 0;
      if ( (unsigned __int64)v20 >= 2 )
        break;
LABEL_12:
      *(_QWORD *)&v7 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v24);
      if ( (_QWORD)v7 == 4LL )
        goto LABEL_5;
    }
    if ( (_DWORD)v20 == 2 )
    {
      if ( LODWORD(v22[0]) == 3 )
        return 0;
      v15 = *((_QWORD *)&v20 + 1);
      if ( !v23 )
      {
        if ( !(unsigned __int8)ruff_python_formatter::string::normalize::is_fstring_with_quoted_debug_expression(
                                 *((_QWORD *)&v20 + 1),
                                 a3)
          && !(unsigned __int8)ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes(
                                 *(_QWORD *)(v15 + 8),
                                 *(_QWORD *)(v15 + 16),
                                 a3) )
        {
LABEL_23:
          v12 = v21;
          goto LABEL_12;
        }
        goto LABEL_26;
      }
      v16 = <ruff_python_ast::nodes::AnyStringFlags as core::convert::From<ruff_python_ast::nodes::FStringFlags>>::from(*(unsigned int *)(*((_QWORD *)&v20 + 1) + 36LL));
    }
    else
    {
      v15 = *((_QWORD *)&v20 + 1);
      v16 = <ruff_python_ast::nodes::AnyStringFlags as core::convert::From<ruff_python_ast::nodes::TStringFlags>>::from(*(unsigned int *)(*((_QWORD *)&v20 + 1) + 36LL));
    }
    if ( !(unsigned __int8)ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug(
                             *(_QWORD *)(v15 + 8),
                             *(_QWORD *)(v15 + 16),
                             v16,
                             a3) )
      goto LABEL_23;
LABEL_26:
    v12 = v21;
    if ( v8 != 2
      && (((unsigned __int8)v8 ^ (unsigned __int8)ruff_python_ast::expression::StringLikePart::flags(&v20)) & 1) != 0 )
    {
      return 0;
    }
    v8 = ruff_python_ast::expression::StringLikePart::flags(&v20) & 1;
    goto LABEL_12;
  }
LABEL_5:
  BYTE12(v20) = 2;
  v9 = 0x2010003u >> (8 * LOBYTE(v22[0]));
  if ( v8 == 2 )
  {
    v10 = ruff_python_formatter::string::normalize::StringNormalizer::preferred_quote_style(a3, 3LL, v29, v28);
    if ( v10 == 2 )
    {
      v11 = ruff_python_ast::expression::StringLikePart::flags(v30);
    }
    else
    {
      LOBYTE(v21) = v10;
      ruff_python_ast::expression::StringLike::parts(&v26, v22);
      v17 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v26);
      if ( v17 != 4 )
      {
        v19 = (unsigned __int8)v21;
        do
        {
          while ( 1 )
          {
            ruff_python_formatter::string::normalize::QuoteMetadata::from_part(v33, v17, v18, a3, v19);
            if ( BYTE12(v20) != 2 )
              break;
            v20 = v33[0];
            v17 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v26);
            if ( v17 == 4 )
              goto LABEL_35;
          }
          ruff_python_formatter::string::normalize::QuoteMetadata::merge(&v24, v33, &v20);
          if ( BYTE12(v24) == 2 )
            return 0;
          v20 = v24;
          v17 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::iterator::Iterator>::next(&v26);
        }
        while ( v17 != 4 );
      }
LABEL_35:
      if ( BYTE12(v20) == 2 )
        return 0;
      v26 = v20;
      v11 = ruff_python_formatter::string::normalize::QuoteMetadata::choose(&v26, (unsigned __int8)v21);
    }
    v8 = v11;
  }
  ruff_python_ast::nodes::AnyStringFlags::new((unsigned __int8)v9, 2LL, v8 & 1, 1LL);
  return 1;
}