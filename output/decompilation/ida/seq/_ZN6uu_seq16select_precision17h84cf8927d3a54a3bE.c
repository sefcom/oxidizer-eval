__int64 __fastcall uu_seq::select_precision(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  __int64 result; // rax

  if ( *(_DWORD *)a1 != 1 || *(_DWORD *)a2 != 1 || !*a3 )
    return 0LL;
  v3 = *(_QWORD *)(a1 + 8);
  result = 1LL;
  if ( a3[1] | v3 | *(_QWORD *)(a2 + 8) )
  {
    core::cmp::Ord::max(v3);
    return 1LL;
  }
  return result;
}