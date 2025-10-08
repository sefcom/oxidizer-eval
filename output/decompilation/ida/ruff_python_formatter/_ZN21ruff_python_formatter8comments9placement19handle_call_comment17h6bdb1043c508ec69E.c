void __fastcall ruff_python_formatter::comments::placement::handle_call_comment(__int64 a1, __int128 *a2)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  unsigned int v5; // ebp
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _QWORD v9[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( *((_BYTE *)a2 + 72) != 1
    || *((_QWORD *)a2 + 2) == 94LL
    || (v2 = *((_QWORD *)a2 + 3), v9[0] = *((_QWORD *)a2 + 2), v9[1] = v2, v3 = *((_QWORD *)a2 + 4), v3 == 94)
    || (v4 = *((_DWORD *)a2 + 16),
        v5 = *((_DWORD *)a2 + 17),
        !(unsigned __int8)ruff_python_formatter::comments::placement::handle_call_comment::{{closure}}::{{closure}}(
                            v9,
                            v4,
                            v5,
                            v3,
                            *((_QWORD *)a2 + 5))) )
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
  else
  {
    *(_OWORD *)(a1 + 8) = *a2;
    *(_DWORD *)(a1 + 24) = v4;
    *(_DWORD *)(a1 + 28) = v5;
    *(_WORD *)(a1 + 32) = 256;
    *(_QWORD *)a1 = 96LL;
  }
}