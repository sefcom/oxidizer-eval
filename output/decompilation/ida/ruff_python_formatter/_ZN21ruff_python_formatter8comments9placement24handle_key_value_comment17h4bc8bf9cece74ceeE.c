__int64 __fastcall ruff_python_formatter::comments::placement::handle_key_value_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned int v11; // edx
  unsigned int v12; // ebp
  unsigned int v13; // eax
  unsigned __int8 v14; // al
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  _QWORD v18[2]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v19[2]; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v20[96]; // [rsp+28h] [rbp-60h] BYREF

  result = *((_QWORD *)a2 + 2);
  v8 = *((_QWORD *)a2 + 4);
  if ( result == 94 || v8 == 94 )
    goto LABEL_5;
  v9 = *((_QWORD *)a2 + 3);
  v10 = *((_QWORD *)a2 + 5);
  v18[0] = v8;
  v18[1] = v10;
  v19[0] = result;
  v19[1] = v9;
  <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v19);
  v12 = v11;
  v13 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v18);
  if ( v12 > v13 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D2A0);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v20, a3, a4, v12, v13);
  v14 = core::iter::traits::iterator::Iterator::try_fold(v20);
  result = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v14, 1LL);
  if ( (_BYTE)result )
  {
    result = *((unsigned __int8 *)a2 + 72);
    *(_OWORD *)(a1 + 8) = *a2;
    *(_QWORD *)(a1 + 24) = *((_QWORD *)a2 + 8);
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = result;
    *(_QWORD *)a1 = 96LL;
  }
  else
  {
LABEL_5:
    *(_OWORD *)(a1 + 64) = a2[4];
    v15 = *a2;
    v16 = a2[1];
    v17 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v17;
    *(_OWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
  }
  return result;
}