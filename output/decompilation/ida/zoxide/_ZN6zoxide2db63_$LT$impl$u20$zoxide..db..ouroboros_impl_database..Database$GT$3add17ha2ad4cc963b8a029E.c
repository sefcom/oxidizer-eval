__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  __int64 result; // rax
  double v5; // [rsp+8h] [rbp-30h] BYREF
  __int64 v6; // [rsp+10h] [rbp-28h] BYREF
  _QWORD v7[4]; // [rsp+18h] [rbp-20h] BYREF

  v5 = a4;
  v6 = a3;
  v7[0] = a2;
  v7[1] = &v5;
  v7[2] = &v6;
  result = zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add::{{closure}}(v7, a1);
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}