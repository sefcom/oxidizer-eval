__int64 __fastcall uu_sort::tokenize(__int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  if ( *(_QWORD *)(a4 + 16) )
    core::panicking::panic(aAssertionFaile_14, 41LL, &off_1FF9F8);
  if ( a3 == 1114112 )
    return uu_sort::tokenize_default(a1, a2, a4);
  else
    return uu_sort::tokenize_with_separator(a1, a2, a3, a4);
}
