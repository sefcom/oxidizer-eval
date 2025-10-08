__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::sort_by_path(__int64 a1)
{
  __int64 result; // rax

  result = core::slice::<impl [T]>::sort_unstable_by(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  *(_BYTE *)(a1 + 56) = 1;
  return result;
}