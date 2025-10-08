__int64 __fastcall ruff_python_formatter::comments::placement::handle_with_item_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdi
  __int64 result; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 *v14; // r15
  unsigned int v15; // edx
  unsigned int v16; // ebp
  unsigned int v17; // eax
  char v18; // cl
  __int64 v19; // rdx
  __int64 v20; // rsi
  int v21; // edi
  __int64 v22; // [rsp+0h] [rbp-68h] BYREF
  __int64 v23; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+18h] [rbp-50h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h]
  unsigned int v27[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v7 = *((_QWORD *)a2 + 2);
  result = *((_QWORD *)a2 + 4);
  if ( result != 94 && v7 != 94 )
  {
    v24 = a4;
    v12 = *((_QWORD *)a2 + 3);
    v13 = *((_QWORD *)a2 + 5);
    v25 = v7;
    v26 = v12;
    v22 = result;
    v23 = v13;
    v14 = &v25;
    <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v25);
    v16 = v15;
    v17 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v22);
    if ( v16 > v17 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D318);
    ruff_python_trivia::tokenizer::find_only_token_in_range(v27, v16, v17, 53LL, a3, v24);
    result = *((unsigned int *)a2 + 17);
    v18 = *((_BYTE *)a2 + 72);
    if ( (unsigned int)result >= v27[0] )
    {
      if ( v18 )
      {
        v19 = 94LL;
        v20 = v23;
        v14 = &v22;
      }
      else
      {
        v20 = *((_QWORD *)a2 + 1);
        v19 = 96LL;
        v18 = 0;
        v14 = (__int64 *)a2;
      }
    }
    else
    {
      v19 = 95LL;
      v20 = v26;
    }
    v21 = *((_DWORD *)a2 + 16);
    *(_QWORD *)(a1 + 8) = *v14;
    *(_QWORD *)(a1 + 16) = v20;
    *(_DWORD *)(a1 + 24) = v21;
    *(_DWORD *)(a1 + 28) = result;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v18;
    *(_QWORD *)a1 = v19;
  }
  else
  {
    *(_OWORD *)(a1 + 64) = a2[4];
    v9 = *a2;
    v10 = a2[1];
    v11 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
  }
  return result;
}