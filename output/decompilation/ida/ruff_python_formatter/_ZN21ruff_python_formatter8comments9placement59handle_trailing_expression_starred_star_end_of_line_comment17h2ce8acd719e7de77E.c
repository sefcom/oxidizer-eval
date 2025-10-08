void __fastcall ruff_python_formatter::comments::placement::handle_trailing_expression_starred_star_end_of_line_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  unsigned __int8 v8; // al
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  char v12; // al
  int v13; // ecx
  _BYTE v14[88]; // [rsp+0h] [rbp-58h] BYREF

  if ( *((_DWORD *)a2 + 8) == 94 )
    goto LABEL_4;
  v6 = *(_DWORD *)(a3 + 8);
  v7 = *((_DWORD *)a2 + 16);
  if ( v6 > v7 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D300);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v14, a4, a5, v6, v7);
  v8 = core::iter::traits::iterator::Iterator::try_fold(v14);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v8, 1LL) )
  {
LABEL_4:
    *(_OWORD *)(a1 + 64) = a2[4];
    v9 = *a2;
    v10 = a2[1];
    v11 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v11;
    *(_OWORD *)(a1 + 16) = v10;
    *(_OWORD *)a1 = v9;
  }
  else
  {
    v12 = *((_BYTE *)a2 + 72);
    v13 = *((_DWORD *)a2 + 17);
    *(_QWORD *)(a1 + 8) = 54LL;
    *(_QWORD *)(a1 + 16) = a3;
    *(_DWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 28) = v13;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v12;
    *(_QWORD *)a1 = 94LL;
  }
}