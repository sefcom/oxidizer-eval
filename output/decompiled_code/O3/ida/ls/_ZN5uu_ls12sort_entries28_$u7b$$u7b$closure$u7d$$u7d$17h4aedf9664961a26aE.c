bool __fastcall uu_ls::sort_entries::{{closure}}(__int64 a1)
{
  int v1; // eax
  bool v2; // al
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  int dest; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v9; // [rsp+10h] [rbp-C8h]
  int v10; // [rsp+40h] [rbp-98h]

  if ( *(_BYTE *)(a1 + 296) && *(_DWORD *)(a1 + 72) < 2u )
  {
    v1 = *(_DWORD *)(a1 + 128) & 0xF000;
LABEL_13:
    v2 = v1 == 0x4000;
    return !v2;
  }
  std::sys::pal::unix::fs::stat(&dest);
  if ( dest != 2 )
  {
    v1 = v10 & 0xF000;
    goto LABEL_13;
  }
  v2 = 0;
  if ( (unsigned __int64)(v9 & 3) - 2 >= 2 && (v9 & 3) != 0 )
  {
    v3 = v9 - 1;
    v4 = *(_QWORD *)(v9 - 1);
    v5 = *(_QWORD *)(v9 + 7);
    if ( *(_QWORD *)v5 )
      (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v9 - 1));
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 )
      _rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16));
    _rust_dealloc(v3, 24LL, 8LL);
    v2 = 0;
  }
  return !v2;
}
