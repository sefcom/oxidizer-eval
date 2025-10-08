__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+8h] [rbp-30h]
  __int64 v4; // [rsp+10h] [rbp-28h]
  _QWORD v5[4]; // [rsp+18h] [rbp-20h] BYREF

  zoxide::config::data_dir(&v2);
  result = v3;
  if ( __OFSUB__(-v2, 1LL) )
  {
    a1[1] = v3;
    *a1 = 1LL;
  }
  else
  {
    v5[0] = v2;
    v5[1] = v3;
    v5[2] = v4;
    return zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir(a1, v5);
  }
  return result;
}