__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::serialize(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD v4[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v5[40]; // [rsp+10h] [rbp-28h] BYREF

  v4[0] = a2;
  v4[1] = a3;
  zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::serialize::{{closure}}(v5, v4);
  return anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(a1, v5);
}