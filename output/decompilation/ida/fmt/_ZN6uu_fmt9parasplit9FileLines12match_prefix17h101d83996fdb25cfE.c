char __fastcall uu_fmt::parasplit::FileLines::match_prefix(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_QWORD *)a1 == 0x8000000000000000LL )
    return 1;
  else
    return uu_fmt::parasplit::FileLines::match_prefix_generic(
             *(_QWORD *)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             a2,
             a3,
             *(_BYTE *)(a1 + 76));
}
