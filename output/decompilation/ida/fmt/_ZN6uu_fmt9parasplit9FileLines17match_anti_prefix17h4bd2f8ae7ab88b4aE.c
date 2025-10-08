char __fastcall uu_fmt::parasplit::FileLines::match_anti_prefix(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al

  v3 = 1;
  if ( !__OFSUB__(0LL, *(_QWORD *)(a1 + 24)) )
    v3 = uu_fmt::parasplit::FileLines::match_prefix_generic(
           *(_QWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 40),
           a2,
           a3,
           *(unsigned __int8 *)(a1 + 77)) ^ 1;
  return v3 & 1;
}