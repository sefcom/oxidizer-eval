__int64 __fastcall uu_tail::follow::watch::Observer::from(__int64 a1, __int64 a2)
{
  char v2; // bp
  char v3; // r15
  int v4; // r12d
  __int128 v6[8]; // [rsp+8h] [rbp-80h] BYREF

  v2 = *(_BYTE *)(a2 + 72);
  v3 = *(_BYTE *)(a2 + 73);
  v4 = *(_DWORD *)(a2 + 76);
  uu_tail::follow::files::FileHandling::from(v6);
  uu_tail::follow::watch::Observer::new(a1, v2, v4, v3, v6, *(_DWORD *)(a2 + 68));
  return a1;
}
