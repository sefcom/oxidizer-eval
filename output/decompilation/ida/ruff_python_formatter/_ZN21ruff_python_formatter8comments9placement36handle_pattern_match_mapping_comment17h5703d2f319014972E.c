void __fastcall ruff_python_formatter::comments::placement::handle_pattern_match_mapping_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  unsigned int v8; // ebx
  char v9; // al
  int v10; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned __int8 v16; // al
  _OWORD v17[5]; // [rsp+0h] [rbp-58h] BYREF

  if ( *((_DWORD *)a2 + 8) != 94 || *(_BYTE *)(a3 + 79) == 0xDA )
    goto LABEL_3;
  v8 = *((_DWORD *)a2 + 16);
  if ( v8 > *(_DWORD *)(a3 + 52) )
    goto LABEL_5;
  if ( *((_QWORD *)a2 + 2) == 94LL )
  {
    v17[0] = *a2;
    v13 = (unsigned int)<ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v17);
  }
  else
  {
    v14 = *((_QWORD *)a2 + 3);
    *(_QWORD *)&v17[0] = *((_QWORD *)a2 + 2);
    *((_QWORD *)&v17[0] + 1) = v14;
    <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(v17);
    v13 = v15;
  }
  if ( (unsigned int)v13 > v8 )
    core::panicking::panic(aAssertionFaile_0, 38LL, &off_57D330);
  ruff_python_trivia::tokenizer::SimpleTokenizer::new(v17, a4, a5, v13, v8);
  v16 = core::iter::traits::iterator::Iterator::try_fold(v17);
  if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v16, 1LL) )
  {
LABEL_5:
    v9 = *((_BYTE *)a2 + 72);
    v10 = *((_DWORD *)a2 + 17);
    *(_OWORD *)(a1 + 8) = *a2;
    *(_DWORD *)(a1 + 24) = v8;
    *(_DWORD *)(a1 + 28) = v10;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v9;
    *(_QWORD *)a1 = 96LL;
  }
  else
  {
LABEL_3:
    *(_OWORD *)(a1 + 64) = a2[4];
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v7;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
  }
}