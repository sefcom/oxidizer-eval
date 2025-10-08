__int64 __fastcall uu_join::State::reset(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 16) = 0LL;
  core::ptr::drop_in_place<[uu_join::Line]>(v4, v5);
  result = 0LL;
  if ( !__OFSUB__(0LL, *a2) )
    return alloc::vec::Vec<T,A>::push(a1, a2);
  return result;
}