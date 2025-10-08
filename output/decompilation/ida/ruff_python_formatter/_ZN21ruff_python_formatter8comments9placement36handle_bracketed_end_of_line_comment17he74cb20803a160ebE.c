void __fastcall ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  int v11; // eax
  _BYTE v12[8]; // [rsp+Ch] [rbp-7Ch] BYREF
  char v13; // [rsp+14h] [rbp-74h]
  __int128 v14; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v15[96]; // [rsp+28h] [rbp-60h] BYREF

  if ( *((_BYTE *)a2 + 72) )
    goto LABEL_4;
  v14 = *a2;
  v6 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v14);
  v7 = *((_DWORD *)a2 + 16);
  if ( v6 > v7 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D3A8);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v15, a3, a4, v6, v7);
  core::iter::traits::iterator::Iterator::try_fold(v12, v15);
  if ( v13 == 90 || (core::iter::traits::iterator::Iterator::try_fold(v12, v15), v13 != 90) )
  {
LABEL_4:
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
    v11 = *((_DWORD *)a2 + 17);
    *(_OWORD *)(a1 + 8) = v14;
    *(_DWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 28) = v11;
    *(_WORD *)(a1 + 32) = 0;
    *(_QWORD *)a1 = 96LL;
  }
}