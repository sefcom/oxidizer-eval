char __fastcall ruff_python_formatter::comments::placement::handle_comprehension_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char v6; // r13
  unsigned int v7; // ebp
  __int64 v8; // r15
  __int64 (__fastcall *v9)(_QWORD); // rax
  unsigned int v10; // edx
  unsigned int v11; // ebp
  unsigned int v12; // eax
  bool v13; // cf
  unsigned int v14; // edx
  unsigned int v15; // r15d
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r13
  unsigned int v19; // edx
  unsigned int v20; // eax
  unsigned int v21; // r12d
  __int64 v22; // r13
  unsigned int v23; // edx
  unsigned int v24; // eax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  unsigned int v29; // [rsp+10h] [rbp-68h]
  unsigned int v30; // [rsp+14h] [rbp-64h]
  __int64 v31; // [rsp+18h] [rbp-60h]
  _DWORD v34[3]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v35[15]; // [rsp+3Ch] [rbp-3Ch] BYREF

  v6 = *((_BYTE *)a2 + 72);
  v29 = *((_DWORD *)a2 + 16);
  v7 = *((_DWORD *)a2 + 17);
  v8 = a3 + 24;
  LODWORD(v9) = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a3 + 24);
  if ( v7 < (unsigned int)v9 )
  {
    if ( !v6 )
    {
      *(_QWORD *)(a1 + 8) = 77LL;
      *(_QWORD *)(a1 + 16) = a3;
      LOBYTE(v9) = v29;
      *(_DWORD *)(a1 + 24) = v29;
      *(_DWORD *)(a1 + 28) = v7;
LABEL_4:
      *(_WORD *)(a1 + 32) = 0;
      *(_QWORD *)a1 = 96LL;
      return (char)v9;
    }
    goto LABEL_27;
  }
  v30 = v7;
  <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v8);
  v11 = v10;
  v31 = a3;
  v12 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a3 + 104);
  if ( v11 > v12 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D3C0);
  ruff_python_trivia::tokenizer::find_only_token_in_range(v35, v11, v12, 71LL, a4, a5);
  if ( v29 < v35[0] )
  {
    LOBYTE(v9) = v30;
    if ( v6 )
    {
      *(_QWORD *)(a1 + 8) = 77LL;
      *(_QWORD *)(a1 + 16) = a3;
      *(_DWORD *)(a1 + 24) = v29;
      *(_DWORD *)(a1 + 28) = v30;
      *(_WORD *)(a1 + 32) = 256;
      *(_QWORD *)a1 = 96LL;
      return (char)v9;
    }
    goto LABEL_27;
  }
  v13 = v29 < (unsigned int)<ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a3 + 104);
  LOBYTE(v9) = v30;
  if ( v13 )
  {
    if ( !v6 )
    {
      *(_QWORD *)(a1 + 8) = 77LL;
      *(_QWORD *)(a1 + 16) = a3;
      *(_DWORD *)(a1 + 24) = v29;
      *(_DWORD *)(a1 + 28) = v30;
      goto LABEL_4;
    }
LABEL_27:
    *(_OWORD *)(a1 + 64) = a2[4];
    v25 = *a2;
    v26 = a2[1];
    v27 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v27;
    *(_OWORD *)(a1 + 16) = v26;
    *(_OWORD *)a1 = v25;
    return (char)v9;
  }
  <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(a3 + 104);
  v9 = *(__int64 (__fastcall **)(_QWORD))(a3 + 16);
  if ( !v9 )
    goto LABEL_27;
  v15 = v14;
  v16 = *(_QWORD *)(a3 + 8);
  v17 = 16LL * (_QWORD)v9;
  if ( v6 )
  {
    v18 = 5 * v17;
    while ( 1 )
    {
      v20 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v16);
      if ( v15 > v20 )
        goto LABEL_28;
      ruff_python_trivia::tokenizer::find_only_token_in_range(v34, v15, v20, 69LL, a4, a5);
      v21 = v29;
      if ( v15 < v29 && v29 < v34[0] )
        break;
      LOBYTE(v9) = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v16);
      v15 = v19;
      v16 += 80LL;
      v18 -= 80LL;
      if ( !v18 )
        goto LABEL_27;
    }
    LOBYTE(v9) = 1;
  }
  else
  {
    v22 = 5 * v17;
    v21 = v29;
    while ( 1 )
    {
      v24 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v16);
      if ( v15 > v24 )
LABEL_28:
        core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D3D8);
      ruff_python_trivia::tokenizer::find_only_token_in_range(v34, v15, v24, 69LL, a4, a5);
      if ( v34[0] < v29
        && v29 < (unsigned int)<ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v16) )
      {
        break;
      }
      <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(v16);
      v9 = <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range;
      v15 = v23;
      v16 += 80LL;
      v22 -= 80LL;
      if ( !v22 )
        goto LABEL_27;
    }
    LOBYTE(v9) = 0;
  }
  *(_QWORD *)(a1 + 8) = 77LL;
  *(_QWORD *)(a1 + 16) = v31;
  *(_DWORD *)(a1 + 24) = v21;
  *(_DWORD *)(a1 + 28) = v30;
  *(_BYTE *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 33) = (_BYTE)v9;
  *(_QWORD *)a1 = 96LL;
  return (char)v9;
}