__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::swap_remove(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  _BYTE v3[56]; // [rsp+0h] [rbp-38h] BYREF

  alloc::vec::Vec<T,A>::swap_remove(v3, a1, a2);
  result = core::ptr::drop_in_place<zoxide::db::dir::Dir>(v3);
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}