__int64 __fastcall ruff_python_formatter::comments::placement::handle_slice_comments(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v10; // ebp
  unsigned __int8 v11; // r13
  __int64 result; // rax
  int v13; // edx
  __int64 v14; // rcx
  char v15; // al
  _QWORD *v16; // r12
  __int64 v17; // rdi
  unsigned int v18; // r15d
  _QWORD *v19; // rdx
  int v20; // [rsp+0h] [rbp-88h]
  _BYTE v21[8]; // [rsp+4h] [rbp-84h] BYREF
  unsigned __int8 v22; // [rsp+Ch] [rbp-7Ch]
  _BYTE v23[120]; // [rsp+10h] [rbp-78h] BYREF

  v10 = *(_DWORD *)(a2 + 64);
  ruff_python_trivia::tokenizer::BackwardsTokenizer::up_to(v23, v10, a6, a7, a4, a5);
  core::iter::traits::iterator::Iterator::try_fold(v21, v23);
  v11 = *(_BYTE *)(a2 + 72);
  if ( v22 == 90 || v11 | v22 ^ 9 )
  {
    v20 = *(_DWORD *)(a2 + 68);
    v15 = ruff_python_formatter::expression::expr_slice::assign_comment_in_slice(v10, a6, a7, a3);
    if ( v15 )
    {
      if ( v15 == 1 )
      {
        v16 = a3 + 2;
        v17 = a3[2];
        if ( v17 )
        {
LABEL_7:
          v18 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v17);
          result = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*v16);
          a3 = v19;
          v14 = 95LL - (v10 < v18);
LABEL_10:
          v13 = v20;
          goto LABEL_11;
        }
      }
      else
      {
        v16 = a3 + 3;
        v17 = a3[3];
        if ( v17 )
          goto LABEL_7;
      }
    }
    else
    {
      v16 = a3 + 1;
      v17 = a3[1];
      if ( v17 )
        goto LABEL_7;
    }
    v14 = 96LL;
    result = 58LL;
    goto LABEL_10;
  }
  result = *(_QWORD *)a2;
  a3 = *(_QWORD **)(a2 + 8);
  v13 = *(_DWORD *)(a2 + 68);
  v14 = 96LL;
  v11 = 0;
LABEL_11:
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 24) = v10;
  *(_DWORD *)(a1 + 28) = v13;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 33) = v11;
  *(_QWORD *)a1 = v14;
  return result;
}