__int64 __fastcall uu_tail::follow::watch::Observer::from(__int64 a1, __int64 a2)
{
  char v2; // bp
  char v3; // r15
  int v4; // r12d
  _OWORD v6[8]; // [rsp+8h] [rbp-80h] BYREF

  v2 = *(_BYTE *)(a2 + 72);
  v3 = *(_BYTE *)(a2 + 73);
  v4 = *(_DWORD *)(a2 + 76);
  uu_tail::follow::files::FileHandling::from((__int64)v6, *(_QWORD *)(a2 + 40), *(_BYTE *)(a2 + 74));
  return uu_tail::follow::watch::Observer::new(a1, v2, v4, v3, v6, *(_DWORD *)(a2 + 68));
}