char __fastcall uu_fmt::parasplit::FileLines::match_anti_prefix(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al

  v3 = 1;
  if ( *(_QWORD *)(a1 + 24) != 0x8000000000000000LL )
    v3 = uu_fmt::parasplit::FileLines::match_prefix_generic(
           *(_QWORD *)(a1 + 32),
           *(_QWORD *)(a1 + 40),
           a2,
           a3,
           *(_BYTE *)(a1 + 77)) ^ 1;
  return v3 & 1;
}
