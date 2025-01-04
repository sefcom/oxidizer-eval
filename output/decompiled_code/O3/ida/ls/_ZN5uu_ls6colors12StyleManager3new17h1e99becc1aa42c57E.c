void __fastcall uu_ls::colors::StyleManager::new(__int64 a1, __int64 a2)
{
  *(_BYTE *)(a1 + 8) = 2;
  *(_BYTE *)(a1 + 29) = 0;
  *(_QWORD *)a1 = a2;
}
