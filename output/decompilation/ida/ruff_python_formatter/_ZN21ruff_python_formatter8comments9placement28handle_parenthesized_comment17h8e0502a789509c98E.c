void __fastcall ruff_python_formatter::comments::placement::handle_parenthesized_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r8
  __int64 v5; // r13
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 v9; // rbp
  unsigned int v10; // edx
  unsigned int v11; // ebx
  unsigned __int8 v12; // al
  char v13; // al
  unsigned int v14; // eax
  unsigned __int8 v15; // al
  char v16; // al
  unsigned int v17; // [rsp+4h] [rbp-D4h]
  _DWORD v20[2]; // [rsp+28h] [rbp-B0h] BYREF
  _DWORD v21[2]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+40h] [rbp-98h]
  _DWORD *v24; // [rsp+48h] [rbp-90h]
  __int128 v25; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v26[2]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v27[48]; // [rsp+70h] [rbp-68h] BYREF
  char v28; // [rsp+A0h] [rbp-38h]

  if ( *(_DWORD *)a2 == 44
    || *((_QWORD *)a2 + 2) == 94LL
    || (v4 = *((_QWORD *)a2 + 3),
        *(_QWORD *)&v25 = *((_QWORD *)a2 + 2),
        *((_QWORD *)&v25 + 1) = v4,
        v5 = *((_QWORD *)a2 + 4),
        v5 == 94) )
  {
LABEL_4:
    *(_OWORD *)(a1 + 64) = a2[4];
    v6 = *a2;
    v7 = a2[1];
    v8 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
    return;
  }
  v9 = *((_QWORD *)a2 + 5);
  v26[0] = *((_QWORD *)a2 + 4);
  v26[1] = v9;
  <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v25);
  v11 = *((_DWORD *)a2 + 16);
  if ( v10 > v11 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D0C0);
  v17 = *((_DWORD *)a2 + 17);
  v20[0] = v10;
  v20[1] = v11;
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v27, a3, a4, v10, v11);
  v28 = 0;
  v22 = a3;
  v23 = a4;
  v24 = v20;
  v12 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(
          v27,
          &v22);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v12, 1LL) )
  {
    v13 = *((_BYTE *)a2 + 72);
    *(_QWORD *)(a1 + 8) = v5;
    *(_QWORD *)(a1 + 16) = v9;
    *(_DWORD *)(a1 + 24) = v11;
    *(_DWORD *)(a1 + 28) = v17;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v13;
    *(_QWORD *)a1 = 94LL;
  }
  else
  {
    v14 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v26);
    if ( v17 > v14 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D0D8);
    v21[0] = v17;
    v21[1] = v14;
    ruff_python_trivia::tokenizer::SimpleTokenizer::new(v27, a3, a4, v17, v14);
    v28 = 0;
    v22 = a3;
    v23 = a4;
    v24 = v21;
    v15 = <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(
            v27,
            &v22);
    if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v15, 1LL) )
      goto LABEL_4;
    v16 = *((_BYTE *)a2 + 72);
    *(_OWORD *)(a1 + 8) = v25;
    *(_DWORD *)(a1 + 24) = v11;
    *(_DWORD *)(a1 + 28) = v17;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v16;
    *(_QWORD *)a1 = 95LL;
  }
}