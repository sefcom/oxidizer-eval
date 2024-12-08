void __fastcall uu_split::SettingsError::Suffix(__int64 a1, __int128 *a2)
{
  __int128 v2; // xmm0

  v2 = *a2;
  *(_OWORD *)(a1 + 24) = a2[1];
  *(_OWORD *)(a1 + 8) = v2;
  *(_QWORD *)a1 = 4LL;
}
