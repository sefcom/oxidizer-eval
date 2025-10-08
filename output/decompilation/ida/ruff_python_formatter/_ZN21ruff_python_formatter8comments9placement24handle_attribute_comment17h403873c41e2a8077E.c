__int64 __fastcall ruff_python_formatter::comments::placement::handle_attribute_comment(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4,
        __int64 a5)
{
  char v8; // bp
  __int64 v9; // rdx
  __int64 result; // rax
  unsigned int v13; // edx
  unsigned int v14; // ebp
  __int64 v15; // rdi
  char v16; // r15
  int v17; // r14d
  __int64 v18; // rdx
  char v19; // bp
  unsigned int v20; // r12d
  unsigned int v21; // edx
  __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // ebp
  __int64 v25; // rdx
  unsigned int v26; // [rsp+8h] [rbp-80h] BYREF
  char v27; // [rsp+10h] [rbp-78h]
  _BYTE v28[12]; // [rsp+14h] [rbp-74h] BYREF
  _DWORD v29[12]; // [rsp+20h] [rbp-68h] BYREF
  char v30; // [rsp+50h] [rbp-38h]

  if ( *(_DWORD *)(a2 + 16) == 94 )
  {
    v8 = *(_BYTE *)(a2 + 72);
    *(_QWORD *)(a1 + 8) = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*((_QWORD *)a3 + 5));
    *(_QWORD *)(a1 + 16) = v9;
    result = *(_QWORD *)(a2 + 64);
    *(_QWORD *)(a1 + 24) = result;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v8;
    *(_QWORD *)a1 = 94LL;
    return result;
  }
  <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*((_QWORD *)a3 + 5));
  ruff_python_trivia::tokenizer::SimpleTokenizer::starts_at(v29, v13, a4, a5);
  v30 = 0;
  v28[8] = 90;
  <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v26, v29, v28);
  if ( v27 != 90 )
  {
    v14 = *(_DWORD *)(a2 + 64);
    if ( v14 < v26 )
    {
      v15 = *((_QWORD *)a3 + 5);
      v16 = *(_BYTE *)(a2 + 72);
      v17 = *(_DWORD *)(a2 + 68);
      result = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(v15);
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v18;
      *(_DWORD *)(a1 + 24) = v14;
      *(_DWORD *)(a1 + 28) = v17;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v16;
      *(_QWORD *)a1 = 95LL;
      return result;
    }
  }
  v19 = *(_BYTE *)(a2 + 72);
  if ( v19 )
  {
    v20 = *(_DWORD *)(a2 + 68);
  }
  else
  {
    <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*((_QWORD *)a3 + 5));
    v22 = v21;
    v23 = *a3;
    if ( (unsigned int)v22 > (unsigned int)v23 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D2B8);
    ruff_python_trivia::tokenizer::find_only_token_in_range(v29, v22, v23, 16LL, a4, a5);
    v20 = *(_DWORD *)(a2 + 68);
    if ( v20 < v29[0] )
    {
      v24 = *(_DWORD *)(a2 + 64);
      result = <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Expr>>::from(*((_QWORD *)a3 + 5));
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = v25;
      *(_DWORD *)(a1 + 24) = v24;
      *(_DWORD *)(a1 + 28) = v20;
      *(_WORD *)(a1 + 32) = 0;
      *(_QWORD *)a1 = 95LL;
      return result;
    }
  }
  result = *(unsigned int *)(a2 + 64);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 24) = result;
  *(_DWORD *)(a1 + 28) = v20;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 33) = v19;
  *(_QWORD *)a1 = 96LL;
  return result;
}