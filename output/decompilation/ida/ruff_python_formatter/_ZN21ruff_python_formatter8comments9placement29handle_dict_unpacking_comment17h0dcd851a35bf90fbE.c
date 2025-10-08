void __fastcall ruff_python_formatter::comments::placement::handle_dict_unpacking_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r15
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // ebp
  unsigned __int8 v11; // al
  char v12; // al
  int v13; // ecx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  _OWORD v18[3]; // [rsp+10h] [rbp-68h] BYREF
  char v19; // [rsp+40h] [rbp-38h]

  v4 = *((_QWORD *)a2 + 4);
  if ( v4 == 94 )
    goto LABEL_8;
  v6 = *((_QWORD *)a2 + 5);
  if ( *((_QWORD *)a2 + 2) == 94LL )
  {
    v18[0] = *a2;
    v7 = (unsigned int)<ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v18);
  }
  else
  {
    v8 = *((_QWORD *)a2 + 3);
    *(_QWORD *)&v18[0] = *((_QWORD *)a2 + 2);
    *((_QWORD *)&v18[0] + 1) = v8;
    <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v18);
    v7 = v9;
  }
  v10 = *((_DWORD *)a2 + 16);
  if ( (unsigned int)v7 > v10 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D288);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v18, a3, a4, v7, v10);
  v19 = 0;
  v11 = <core::iter::adapters::skip_while::SkipWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(v18);
  if ( !(unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v11, 1LL) )
  {
LABEL_8:
    *(_OWORD *)(a1 + 64) = a2[4];
    v14 = *a2;
    v15 = a2[1];
    v16 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = v15;
    *(_OWORD *)a1 = v14;
  }
  else
  {
    v12 = *((_BYTE *)a2 + 72);
    v13 = *((_DWORD *)a2 + 17);
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)(a1 + 16) = v6;
    *(_DWORD *)(a1 + 24) = v10;
    *(_DWORD *)(a1 + 28) = v13;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v12;
    *(_QWORD *)a1 = 94LL;
  }
}