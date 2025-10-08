__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::save(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+8h] [rbp-30h]
  __int64 v5; // [rsp+10h] [rbp-28h]
  _QWORD v6[4]; // [rsp+18h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 56) != 1 )
    return 0LL;
  zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::serialize(
    &v3,
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16));
  result = v4;
  if ( !__OFSUB__(-v3, 1LL) )
  {
    v6[0] = v3;
    v6[1] = v4;
    v6[2] = v5;
    v2 = zoxide::util::write(a1 + 24, v6);
    result = anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(
               v2,
               aCouldNotWriteT,
               27LL);
    if ( !result )
    {
      *(_BYTE *)(a1 + 56) = 0;
      return 0LL;
    }
  }
  return result;
}