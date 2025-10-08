__int64 __fastcall uu_ls::dired::calculate_subdired(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = a1[2];
  if ( v2 )
    v3 = *(_QWORD *)(a1[1] + 16 * v2 - 8) + 3LL;
  else
    v3 = 2LL;
  return alloc::vec::Vec<T,A>::push(a1 + 3, v3 + 2LL * (a1[5] != 0LL), v3 + 2LL * (a1[5] != 0LL) + a2, &off_2866A8);
}