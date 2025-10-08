void __fastcall ruff_python_formatter::comments::placement::handle_import_from_comment(
        __int64 a1,
        __int128 *a2,
        __int64 a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  unsigned int v6; // ebx
  int v7; // eax

  if ( !*((_BYTE *)a2 + 72)
    && *(_QWORD *)(a3 + 16)
    && (v6 = *((_DWORD *)a2 + 16),
        (unsigned __int8)ruff_python_formatter::comments::placement::handle_import_from_comment::{{closure}}(
                           *(unsigned int *)(a3 + 64),
                           v6,
                           *(_QWORD *)(a3 + 8))) )
  {
    v7 = *((_DWORD *)a2 + 17);
    *(_OWORD *)(a1 + 8) = *a2;
    *(_DWORD *)(a1 + 24) = v6;
    *(_DWORD *)(a1 + 28) = v7;
    *(_WORD *)(a1 + 32) = 0;
    *(_QWORD *)a1 = 96LL;
  }
  else
  {
    *(_OWORD *)(a1 + 64) = a2[4];
    v3 = *a2;
    v4 = a2[1];
    v5 = a2[2];
    *(_OWORD *)(a1 + 48) = a2[3];
    *(_OWORD *)(a1 + 32) = v5;
    *(_OWORD *)(a1 + 16) = v4;
    *(_OWORD *)a1 = v3;
  }
}