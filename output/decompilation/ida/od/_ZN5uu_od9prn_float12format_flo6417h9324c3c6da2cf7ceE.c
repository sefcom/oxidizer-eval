__int64 __fastcall uu_od::prn_float::format_flo64(__int64 a1, __m128 a2)
{
  return uu_od::prn_float::format_float(a1, (__int128 **)&off_18, (__int128 **)((char *)&word_10 + 1), a2);
}
