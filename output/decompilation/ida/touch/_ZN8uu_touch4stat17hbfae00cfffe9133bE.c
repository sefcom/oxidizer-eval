__int64 __fastcall uu_touch::stat(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v8; // esi
  _QWORD v9[22]; // [rsp+0h] [rbp-178h] BYREF
  _QWORD src[25]; // [rsp+B0h] [rbp-C8h] BYREF

  if ( !a4 )
  {
    std::fs::symlink_metadata(v9);
    if ( LODWORD(v9[0]) == 2 )
      goto LABEL_6;
LABEL_8:
    result = v9[13];
    v7 = v9[15];
    v8 = v9[16];
    *(_DWORD *)(a1 + 16) = v9[14];
    *(_QWORD *)(a1 + 24) = v7;
    *(_DWORD *)(a1 + 32) = v8;
    v6 = 0LL;
    goto LABEL_9;
  }
  std::fs::metadata(src);
  if ( LODWORD(src[0]) != 2 )
  {
    memcpy(v9, src, sizeof(v9));
    if ( LODWORD(v9[0]) == 2 )
      goto LABEL_6;
    goto LABEL_8;
  }
  uu_touch::stat::{{closure}}(v9, a2, a3, src[1]);
  if ( LODWORD(v9[0]) != 2 )
    goto LABEL_8;
LABEL_6:
  result = v9[1];
  v6 = 1LL;
LABEL_9:
  *(_QWORD *)(a1 + 8) = result;
  *(_QWORD *)a1 = v6;
  return result;
}