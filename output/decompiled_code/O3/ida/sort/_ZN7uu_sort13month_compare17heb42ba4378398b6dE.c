__int64 __fastcall uu_sort::month_compare(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  unsigned int v8; // ecx
  bool v9; // cc
  __int64 result; // rax

  v6 = uu_sort::month_parse(a1, a2);
  v7 = uu_sort::month_parse(a3, a4);
  v8 = -(v6 < v7);
  v9 = v6 <= v7;
  result = 1LL;
  if ( v9 )
    return v8;
  return result;
}
