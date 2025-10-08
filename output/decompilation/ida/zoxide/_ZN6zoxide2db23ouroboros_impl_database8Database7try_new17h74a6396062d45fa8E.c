__int64 __fastcall zoxide::db::ouroboros_impl_database::Database::try_new(__int64 a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm2
  int v6; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v7[5]; // [rsp+8h] [rbp-50h] BYREF

  zoxide::db::ouroboros_impl_database::Database::try_new_or_recover(&v6);
  if ( v6 == 1 )
  {
    v1 = *(_QWORD *)&v7[0];
    core::ptr::drop_in_place<zoxide::db::ouroboros_impl_database::Heads>((char *)v7 + 8);
    *(_QWORD *)(a1 + 8) = v1;
    result = 1LL;
  }
  else
  {
    v3 = v7[0];
    v4 = v7[1];
    v5 = v7[2];
    *(_OWORD *)(a1 + 56) = v7[3];
    *(_OWORD *)(a1 + 40) = v5;
    *(_OWORD *)(a1 + 24) = v4;
    *(_OWORD *)(a1 + 8) = v3;
    result = 0LL;
  }
  *(_QWORD *)a1 = result;
  return result;
}