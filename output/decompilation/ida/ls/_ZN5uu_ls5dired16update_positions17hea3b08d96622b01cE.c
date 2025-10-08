__int64 __fastcall uu_ls::dired::update_positions(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = alloc::vec::Vec<T,A>::push(a1, *(_QWORD *)(a1 + 48) + a2, *(_QWORD *)(a1 + 48) + a3, &off_286700);
  *(_QWORD *)(a1 + 48) = 0LL;
  return result;
}