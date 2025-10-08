__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_update(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v10[5]; // [rsp+10h] [rbp-28h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  v10[2] = &v8;
  v10[3] = &v9;
  result = ((__int64 (__fastcall *)(_QWORD *, __int64, __int64, __int64, __int64, __int64, _QWORD, __int64))zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_update::{{closure}})(
             v10,
             a1,
             a3,
             a4,
             a5,
             a6,
             *(_QWORD *)&a7,
             a4);
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}