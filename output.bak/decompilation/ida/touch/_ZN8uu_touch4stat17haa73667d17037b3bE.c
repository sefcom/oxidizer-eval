__int64 __fastcall uu_touch::stat(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // esi
  _QWORD v9[22]; // [rsp+0h] [rbp-178h] BYREF
  _QWORD src[25]; // [rsp+B0h] [rbp-C8h] BYREF

  if ( !a4 )
  {
    std::fs::symlink_metadata(v9, a2, a3);
    if ( LODWORD(v9[0]) == 2 )
      goto LABEL_6;
LABEL_8:
    v6 = v9[14];
    v7 = v9[15];
    v8 = v9[16];
    *(_QWORD *)(a1 + 8) = v9[13];
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 32) = v8;
    result = 0LL;
    goto LABEL_9;
  }
  std::fs::metadata(src, a2, a3);
  if ( LODWORD(src[0]) != 2 )
  {
    memcpy(v9, src, sizeof(v9));
    goto LABEL_8;
  }
  uu_touch::stat::{{closure}}(v9, a2, a3, src[1]);
  if ( LODWORD(v9[0]) != 2 )
    goto LABEL_8;
LABEL_6:
  *(_QWORD *)(a1 + 8) = v9[1];
  result = 1LL;
LABEL_9:
  *(_QWORD *)a1 = result;
  return result;
}
