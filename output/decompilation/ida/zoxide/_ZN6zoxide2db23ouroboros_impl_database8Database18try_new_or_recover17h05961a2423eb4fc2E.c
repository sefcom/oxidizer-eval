__int64 __fastcall zoxide::db::ouroboros_impl_database::Database::try_new_or_recover(
        __int64 a1,
        __int128 *a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r12
  __int64 v5; // r15
  __int64 result; // rax
  __int128 v7; // [rsp+8h] [rbp-80h] BYREF
  __int64 v8; // [rsp+18h] [rbp-70h]
  __int128 v9; // [rsp+20h] [rbp-68h]
  __int64 v10; // [rsp+30h] [rbp-58h]
  __int128 v11; // [rsp+38h] [rbp-50h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  __int128 v13; // [rsp+50h] [rbp-38h]

  v3 = alloc::boxed::Box<T>::new(a3);
  zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir::{{closure}}(
    &v7,
    *(_QWORD *)(v3 + 8),
    *(_QWORD *)(v3 + 16));
  if ( __OFSUB__(0LL, (_QWORD)v7) )
  {
    v4 = *((_QWORD *)&v7 + 1);
    v13 = *a2;
    v5 = *((_QWORD *)a2 + 2);
    ouroboros::macro_help::unbox(a1 + 16, v3);
    *(_QWORD *)(a1 + 8) = v4;
    *(_OWORD *)(a1 + 40) = v13;
    result = 1LL;
    v3 = v5;
  }
  else
  {
    v10 = v8;
    v9 = v7;
    v12 = *((_QWORD *)a2 + 2);
    v11 = *a2;
    *(_OWORD *)(a1 + 8) = v7;
    *(_QWORD *)(a1 + 24) = v10;
    *(_OWORD *)(a1 + 32) = v11;
    *(_QWORD *)(a1 + 48) = v12;
    result = 0LL;
  }
  *(_QWORD *)(a1 + 56) = v3;
  *(_BYTE *)(a1 + 64) = 0;
  *(_QWORD *)a1 = result;
  return result;
}