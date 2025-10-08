__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::dedup(__int64 a1)
{
  __int64 result; // rax
  _BYTE v2[9]; // [rsp+Fh] [rbp-9h] BYREF

  zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::sort_by_path();
  v2[0] = 0;
  zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::dedup::{{closure}}(v2, a1);
  result = v2[0];
  *(_BYTE *)(a1 + 56) |= v2[0];
  return result;
}