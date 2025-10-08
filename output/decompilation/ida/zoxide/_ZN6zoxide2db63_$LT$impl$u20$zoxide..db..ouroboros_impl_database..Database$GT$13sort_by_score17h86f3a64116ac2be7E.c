__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::sort_by_score(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v3 = a2;
  result = core::slice::<impl [T]>::sort_unstable_by(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), &v3);
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}