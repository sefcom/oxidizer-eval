__int64 __fastcall ruff_python_formatter::comments::placement::handle_pattern_keyword_comment(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v5; // ebp
  unsigned __int8 v6; // al
  __int64 result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  int v11; // ecx
  _BYTE v12[80]; // [rsp+8h] [rbp-50h] BYREF

  v5 = *((_DWORD *)a2 + 16);
  if ( a3 > v5 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D270);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v12, a4, a5, a3, v5);
  v6 = core::iter::traits::iterator::Iterator::try_fold(v12);
  result = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v6, 1LL);
  if ( (_BYTE)result )
  {
    *(_OWORD *)(a1 + 64) = a2[4];
    v8 = *a2;
    v9 = a2[1];
    v10 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_OWORD *)a1 = v8;
  }
  else
  {
    result = *((unsigned __int8 *)a2 + 72);
    v11 = *((_DWORD *)a2 + 17);
    *(_OWORD *)(a1 + 8) = *a2;
    *(_DWORD *)(a1 + 24) = v5;
    *(_DWORD *)(a1 + 28) = v11;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = result;
    *(_QWORD *)a1 = 94LL;
  }
  return result;
}