__int64 __fastcall ruff_python_formatter::comments::placement::handle_named_expr_comment(
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
  __int64 *v14; // r13
  unsigned int v15; // edx
  unsigned int v16; // ebp
  unsigned int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdx
  bool v20; // cf
  __int64 *v21; // rax
  char v22; // cl
  __int64 v23; // rdi
  __int64 v25; // [rsp+8h] [rbp-60h] BYREF
  __int64 v26; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v27[2]; // [rsp+18h] [rbp-50h] BYREF
  _DWORD v28[15]; // [rsp+2Ch] [rbp-3Ch] BYREF

  v7 = *((_QWORD *)a2 + 2);
  result = *((_QWORD *)a2 + 4);
  if ( result != 94 && v7 != 94 )
  {
    v12 = *((_QWORD *)a2 + 3);
    v13 = *((_QWORD *)a2 + 5);
    v25 = v7;
    v26 = v12;
    v27[0] = result;
    v27[1] = v13;
    v14 = &v25;
    <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v25);
    v16 = v15;
    v17 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v27);
    if ( v16 > v17 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D348);
    ruff_python_trivia::tokenizer::find_only_token_in_range(v28, v16, v17, 48LL, a3, a4);
    v18 = *((_DWORD *)a2 + 17);
    v19 = 96LL - (v18 < v28[0]);
    if ( v18 >= v28[0] )
      v14 = (__int64 *)a2;
    v20 = v18 < v28[0];
    v21 = &v26;
    v22 = *((_BYTE *)a2 + 72);
    v23 = *((_QWORD *)a2 + 8);
    if ( !v20 )
      v21 = (__int64 *)a2 + 1;
    result = *v21;
    *(_QWORD *)(a1 + 8) = *v14;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = v23;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v22;
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