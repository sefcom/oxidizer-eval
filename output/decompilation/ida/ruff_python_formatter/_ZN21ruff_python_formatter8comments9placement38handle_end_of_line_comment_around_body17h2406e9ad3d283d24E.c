void __fastcall ruff_python_formatter::comments::placement::handle_end_of_line_comment_around_body(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r12
  unsigned int v8; // ebp
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 child_in_body; // rax
  __int64 v13; // rdx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD v22[2]; // [rsp+8h] [rbp-80h] BYREF
  _BYTE v23[12]; // [rsp+1Ch] [rbp-6Ch] BYREF
  _QWORD v24[12]; // [rsp+28h] [rbp-60h] BYREF

  if ( *((_BYTE *)a2 + 72) == 1 )
    goto LABEL_9;
  if ( a2[4] != 94 )
  {
    v5 = a2[5];
    v22[0] = a2[4];
    v22[1] = v5;
    v6 = *a2;
    v7 = a2[1];
    if ( (unsigned __int8)ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::is_first_statement_in_body(
                            v22,
                            *a2,
                            v7) )
    {
      v8 = *((_DWORD *)a2 + 17);
      v9 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v22);
      if ( v8 > v9 )
        core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D108);
      ruff_python_trivia::tokenizer::SimpleTokenizer::new(v24, a3, a4, v8, v9);
      core::iter::traits::iterator::Iterator::try_fold(v23, v24);
      if ( v23[8] == 90 )
      {
        v10 = *((_DWORD *)a2 + 16);
        *(_QWORD *)(a1 + 8) = v6;
        *(_QWORD *)(a1 + 16) = v7;
        *(_DWORD *)(a1 + 24) = v10;
        *(_DWORD *)(a1 + 28) = v8;
        *(_WORD *)(a1 + 32) = 0;
        *(_QWORD *)a1 = 96LL;
        return;
      }
    }
  }
  if ( a2[2] == 94
    || (v11 = a2[3],
        v24[0] = a2[2],
        v24[1] = v11,
        child_in_body = ruff_python_ast::node::<impl ruff_python_ast::generated::AnyNodeRef>::last_child_in_body(v24),
        child_in_body == 94) )
  {
LABEL_9:
    *(_OWORD *)(a1 + 64) = *((_OWORD *)a2 + 4);
    v14 = *(_OWORD *)a2;
    v15 = *((_OWORD *)a2 + 1);
    v16 = *((_OWORD *)a2 + 2);
    *(_OWORD *)(a1 + 48) = *((_OWORD *)a2 + 3);
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
  }
  else
  {
    v17 = v13;
    v18 = child_in_body;
    v19 = core::iter::traits::iterator::Iterator::fold(child_in_body, v13);
    if ( v19 == 94 )
    {
      v19 = v18;
      v20 = v17;
    }
    *(_QWORD *)(a1 + 8) = v19;
    *(_QWORD *)(a1 + 16) = v20;
    *(_QWORD *)(a1 + 24) = a2[8];
    *(_WORD *)(a1 + 32) = 0;
    *(_QWORD *)a1 = 95LL;
  }
}