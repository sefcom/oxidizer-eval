__int64 __fastcall ruff_python_formatter::comments::placement::handle_pattern_match_class_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3)
{
  __int64 result; // rax
  unsigned int v5; // edx
  unsigned int v6; // ecx
  char v7; // dl
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2

  <ruff_python_ast::generated::Expr as ruff_text_size::traits::Ranged>::range(*(_QWORD *)(a3 + 64));
  result = *((unsigned int *)a2 + 16);
  if ( v5 >= (unsigned int)result || (v6 = *((_DWORD *)a2 + 17), v6 >= *(_DWORD *)(a3 + 48)) )
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
    v7 = *((_BYTE *)a2 + 72);
    *(_OWORD *)(a1 + 8) = *a2;
    *(_DWORD *)(a1 + 24) = result;
    *(_DWORD *)(a1 + 28) = v6;
    *(_BYTE *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 33) = v7;
    *(_QWORD *)a1 = 96LL;
  }
  return result;
}