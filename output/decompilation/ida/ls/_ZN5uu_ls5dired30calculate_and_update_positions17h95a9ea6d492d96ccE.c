__int64 __fastcall uu_ls::dired::calculate_and_update_positions(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax

  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 8) + 16 * v5 - 16;
  if ( !v5 )
    v6 = 0LL;
  v7 = core::option::Option<T>::map_or(v6);
  return uu_ls::dired::update_positions(a1, a2 + v7 + 2, a3 + a2 + v7 + 2);
}