bool __fastcall uu_split::SettingsError::requires_usage(_QWORD *a1)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *a1 - 3LL;
  result = 0;
  if ( (unsigned __int64)(*a1 - 4LL) >= 5 )
    v1 = 0LL;
  if ( v1 == 1 )
    return a1[1] == 1LL;
  if ( v1 )
    return result;
  return *a1 == 3LL;
}
