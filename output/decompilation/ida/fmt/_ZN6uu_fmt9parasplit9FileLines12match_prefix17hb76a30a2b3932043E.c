char __fastcall uu_fmt::parasplit::FileLines::match_prefix(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  result = 1;
  if ( !__OFSUB__(0LL, *(_QWORD *)a1) )
    return uu_fmt::parasplit::FileLines::match_prefix_generic(
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             a2,
             a3,
             *(unsigned __int8 *)(a1 + 76));
  return result;
}