__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::remove(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // r14d
  __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  _QWORD v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v6 = a2;
  v2 = *(_QWORD *)(a1 + 8) + 40LL * *(_QWORD *)(a1 + 16);
  v7[0] = *(_QWORD *)(a1 + 8);
  v7[1] = v2;
  v4 = ((__int64 (__fastcall *)(_QWORD *, __int64 *))<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::position)(
         v7,
         &v6);
  if ( (v4 & 1) != 0 )
    zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::swap_remove(a1, v3);
  LOBYTE(v4) = v4 & 1;
  return v4;
}