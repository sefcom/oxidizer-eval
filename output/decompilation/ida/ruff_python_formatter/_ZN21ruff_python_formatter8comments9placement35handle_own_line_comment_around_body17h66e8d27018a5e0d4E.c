__int64 __fastcall ruff_python_formatter::comments::placement::handle_own_line_comment_around_body(
        _OWORD *a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v10; // rcx
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v14; // [rsp+8h] [rbp-F0h]
  _QWORD v15[3]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v16[80]; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v17[128]; // [rsp+78h] [rbp-80h] BYREF

  if ( !*((_BYTE *)a2 + 72) )
    goto LABEL_3;
  result = *((_QWORD *)a2 + 2);
  if ( result == 94 )
    goto LABEL_3;
  v10 = *((_QWORD *)a2 + 3);
  v13 = *((_QWORD *)a2 + 2);
  v14 = v10;
  <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v13);
  v12 = *((unsigned int *)a2 + 16);
  if ( v11 > (unsigned int)v12 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D120);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v17, a3, a4, v11, v12);
  result = core::iter::traits::iterator::Iterator::try_fold(v16, v17);
  if ( v16[8] == 90 )
  {
    ruff_python_formatter::comments::placement::handle_own_line_comment_between_branches(v17, a2, v13, v14, a3, a4);
    v15[0] = &v13;
    v15[1] = a3;
    v15[2] = a4;
    ruff_python_formatter::comments::visitor::CommentPlacement::or_else(v16, v17, v15);
    return ruff_python_formatter::comments::visitor::CommentPlacement::or_else(a1, v16, a3, a4);
  }
  else
  {
LABEL_3:
    a1[4] = a2[4];
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    a1[3] = a2[3];
    a1[2] = v7;
    a1[1] = v6;
    *a1 = v5;
  }
  return result;
}