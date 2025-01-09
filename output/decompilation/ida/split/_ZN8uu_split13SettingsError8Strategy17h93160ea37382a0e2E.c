__int64 __fastcall uu_split::SettingsError::Strategy(__int64 a1, __int128 *a2)
{
  __int64 result; // rax
  __int128 v3; // xmm0

  result = *((_QWORD *)a2 + 4);
  *(_QWORD *)(a1 + 32) = result;
  v3 = *a2;
  *(_OWORD *)(a1 + 16) = a2[1];
  *(_OWORD *)a1 = v3;
  return result;
}
