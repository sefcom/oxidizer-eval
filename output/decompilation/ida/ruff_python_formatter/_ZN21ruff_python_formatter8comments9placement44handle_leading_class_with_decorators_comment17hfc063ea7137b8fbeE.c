void __fastcall ruff_python_formatter::comments::placement::handle_leading_class_with_decorators_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3)
{
  unsigned int v3; // eax
  __int64 v4; // rcx
  int v5; // ecx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2

  if ( *((_BYTE *)a2 + 72) == 1
    && (v3 = *((_DWORD *)a2 + 16), v3 < *(_DWORD *)(a3 + 48))
    && (v4 = *(_QWORD *)(a3 + 16)) != 0
    && *(_DWORD *)(*(_QWORD *)(a3 + 8) + 96 * v4 - 12) < v3 )
  {
    v5 = *((_DWORD *)a2 + 17);
    *(_QWORD *)(a1 + 8) = 3LL;
    *(_QWORD *)(a1 + 16) = a3;
    *(_DWORD *)(a1 + 24) = v3;
    *(_DWORD *)(a1 + 28) = v5;
    *(_WORD *)(a1 + 32) = 256;
    *(_QWORD *)a1 = 96LL;
  }
  else
  {
    *(_OWORD *)(a1 + 64) = a2[4];
    v6 = *a2;
    v7 = a2[1];
    v8 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v8;
    *(_OWORD *)(a1 + 16) = v7;
    *(_OWORD *)a1 = v6;
  }
}