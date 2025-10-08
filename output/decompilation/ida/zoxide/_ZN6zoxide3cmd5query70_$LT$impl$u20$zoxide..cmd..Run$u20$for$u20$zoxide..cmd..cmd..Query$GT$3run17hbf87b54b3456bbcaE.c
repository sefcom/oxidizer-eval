__int64 __fastcall zoxide::cmd::query::<impl zoxide::cmd::Run for zoxide::cmd::cmd::Query>::run(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // [rsp+8h] [rbp-90h] BYREF
  __int128 v8; // [rsp+10h] [rbp-88h]
  __int128 v9; // [rsp+20h] [rbp-78h]
  __int128 v10; // [rsp+30h] [rbp-68h]
  __int64 v11; // [rsp+40h] [rbp-58h]
  __int64 v12; // [rsp+48h] [rbp-50h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h]
  __int128 v14; // [rsp+58h] [rbp-40h]
  __int128 v15; // [rsp+68h] [rbp-30h]
  __int128 v16; // [rsp+78h] [rbp-20h]
  __int64 v17; // [rsp+88h] [rbp-10h]

  zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open(&v12);
  result = v13;
  if ( (_DWORD)v12 != 1 )
  {
    v11 = v17;
    v10 = v16;
    v9 = v15;
    v8 = v14;
    v7 = v13;
    v2 = zoxide::cmd::query::<impl zoxide::cmd::cmd::Query>::query(a1, &v7);
    v12 = v2;
    v5 = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(&v7, &v7, v3, v4);
    v6 = core::result::Result<T,E>::and(v2, v5);
    core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Database>(&v7, v5);
    return v6;
  }
  return result;
}