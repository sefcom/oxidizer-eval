__int64 __fastcall uu_sort::tokenize(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  if ( *(_QWORD *)(a4 + 16) )
    core::panicking::panic(aAssertionFaile_0, 41LL, &off_1FEED0);
  if ( a3 == (_DWORD)&loc_110000 )
    return uu_sort::tokenize_default(a1, a2, a4);
  else
    return uu_sort::tokenize_with_separator();
}
