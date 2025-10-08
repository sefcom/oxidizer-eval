__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::add_unchecked(
        __int64 a1,
        double a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // rax
  _BYTE v7[24]; // [rsp+8h] [rbp-40h] BYREF
  double v8; // [rsp+20h] [rbp-28h]
  __int64 v9; // [rsp+28h] [rbp-20h]

  core::ops::function::FnOnce::call_once(v7);
  v8 = a2;
  v9 = a5;
  result = alloc::vec::Vec<T,A>::push(a1, v7, &off_134A60);
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}