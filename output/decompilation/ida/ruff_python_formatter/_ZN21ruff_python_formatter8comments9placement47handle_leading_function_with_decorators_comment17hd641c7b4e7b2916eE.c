char __fastcall ruff_python_formatter::comments::placement::handle_leading_function_with_decorators_comment(
        __int64 a1,
        __int128 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int8 v4; // cl
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  bool v8; // dl

  v2 = *((_QWORD *)a2 + 2);
  if ( v2 == 94 )
  {
    v3 = *((_QWORD *)a2 + 4);
    if ( v3 != 94 )
    {
      LOBYTE(v2) = 0;
      goto LABEL_5;
    }
  }
  else
  {
    LOBYTE(v2) = (_DWORD)v2 == 86;
    v3 = *((_QWORD *)a2 + 4);
    if ( v3 != 94 )
    {
LABEL_5:
      if ( (_DWORD)v3 == 79 )
      {
        v4 = *((_BYTE *)a2 + 72);
        if ( (v4 & (unsigned __int8)v2) == 0 )
          goto LABEL_7;
      }
      else
      {
        v8 = (_DWORD)v3 == 88;
        v4 = *((_BYTE *)a2 + 72);
        LOBYTE(v2) = v4 & v8 & v2;
        if ( (_BYTE)v2 != 1 )
          goto LABEL_7;
      }
      *(_OWORD *)(a1 + 8) = *a2;
      v2 = *((_QWORD *)a2 + 8);
      *(_QWORD *)(a1 + 24) = v2;
      *(_BYTE *)(a1 + 32) = 0;
      *(_BYTE *)(a1 + 33) = v4;
      *(_QWORD *)a1 = 96LL;
      return v2;
    }
  }
LABEL_7:
  *(_OWORD *)(a1 + 64) = a2[4];
  v5 = *a2;
  v6 = a2[1];
  v7 = a2[2];
  *(_OWORD *)(a1 + 48) = a2[3];
  *(_OWORD *)(a1 + 32) = v7;
  *(_OWORD *)(a1 + 16) = v6;
  *(_OWORD *)a1 = v5;
  return v2;
}