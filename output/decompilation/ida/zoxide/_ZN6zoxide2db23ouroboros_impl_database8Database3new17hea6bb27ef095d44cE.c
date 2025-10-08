__int64 __fastcall zoxide::db::ouroboros_impl_database::Database::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 result; // rax
  __int128 v5; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v6[24]; // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+28h] [rbp-20h]

  v3 = alloc::boxed::Box<T>::new(a3);
  zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::open_dir::{{closure}}(&v5);
  v7 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)&v6[8] = *(_OWORD *)a2;
  *(_OWORD *)a1 = v5;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)&v6[16];
  result = v7;
  *(_QWORD *)(a1 + 40) = v7;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)v6;
  *(_QWORD *)(a1 + 48) = v3;
  *(_BYTE *)(a1 + 56) = 0;
  return result;
}