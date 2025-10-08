char __fastcall uu_sort::month_compare(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al

  v6 = uu_sort::month_parse(a1, a2);
  v7 = uu_sort::month_parse(a3, a4);
  return (v6 > v7) - (v6 < v7);
}