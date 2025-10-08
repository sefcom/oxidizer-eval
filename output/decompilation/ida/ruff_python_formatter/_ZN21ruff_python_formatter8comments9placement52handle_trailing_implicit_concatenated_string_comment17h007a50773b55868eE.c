void __fastcall ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int64 back; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // ebp
  unsigned __int8 v26; // al
  int v27; // eax
  __int64 v28; // [rsp+18h] [rbp-90h] BYREF
  __int64 v29; // [rsp+20h] [rbp-88h]
  __int64 v30; // [rsp+28h] [rbp-80h]
  _BYTE v31[24]; // [rsp+30h] [rbp-78h] BYREF
  _BYTE v32[96]; // [rsp+48h] [rbp-60h] BYREF

  if ( *((_BYTE *)a2 + 72) )
    goto LABEL_4;
  v6 = *((_QWORD *)a2 + 2);
  if ( v6 == 94 )
    goto LABEL_4;
  v11 = ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment::{{closure}}(
          v6,
          *((_QWORD *)a2 + 3));
  if ( v11 == 4 )
    goto LABEL_4;
  v28 = v11;
  v29 = v12;
  ruff_python_ast::expression::StringLike::parts(v31, &v28);
  back = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(v31);
  v30 = v17;
  v18 = back;
  v19 = <ruff_python_ast::expression::StringLikePartIter as core::iter::traits::double_ended::DoubleEndedIterator>::next_back(v31);
  if ( v18 == 4 || v19 == 4 )
    goto LABEL_4;
  v21 = *(unsigned int *)(v20 + 8LL * (v19 >= 2) + 20);
  v22 = v30;
  v23 = *(unsigned int *)(v30 + 8LL * (v18 >= 2) + 16);
  if ( (unsigned int)v21 > (unsigned int)v23 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D3F0);
  if ( !(unsigned __int8)<str as ruff_source_file::line_ranges::LineRanges>::contains_line_break(a5, a6, v21, v23)
    || !(unsigned __int8)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(
                           qword_88BC0[v28],
                           v29,
                           a3,
                           a4,
                           a5,
                           a6) )
  {
    goto LABEL_4;
  }
  v24 = *(unsigned int *)(v22 + 8LL * (v18 >= 2) + 20);
  v25 = *((_DWORD *)a2 + 16);
  if ( (unsigned int)v24 > v25 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D408);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v32, a5, a6, v24, v25);
  v26 = core::iter::traits::iterator::Iterator::try_fold(v32);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v26, 1LL) )
  {
LABEL_4:
    *(_OWORD *)(a1 + 64) = a2[4];
    v13 = *a2;
    v14 = a2[1];
    v15 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v15;
    *(_OWORD *)(a1 + 16) = v14;
    *(_OWORD *)a1 = v13;
  }
  else
  {
    v27 = *((_DWORD *)a2 + 17);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)&asc_88E60[8 * v18];
    *(_QWORD *)(a1 + 16) = v22;
    *(_DWORD *)(a1 + 24) = v25;
    *(_DWORD *)(a1 + 28) = v27;
    *(_WORD *)(a1 + 32) = 0;
    *(_QWORD *)a1 = 95LL;
  }
}