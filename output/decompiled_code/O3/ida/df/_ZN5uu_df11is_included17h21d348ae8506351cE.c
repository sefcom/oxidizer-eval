char __fastcall uu_df::is_included(__int64 a1, __int64 a2)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 144) && *(_BYTE *)(a2 + 80)
    || *(_BYTE *)(a1 + 145) && !*(_BYTE *)(a2 + 81)
    || *(_QWORD *)(a2 + 48) != 0x8000000000000000LL
    && (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(
                          a1 + 48,
                          *(_QWORD *)(a2 + 56),
                          *(_QWORD *)(a2 + 64)) )
  {
    return 0;
  }
  result = 1;
  if ( *(_QWORD *)(a2 + 24) != 0x8000000000000000LL )
    return <T as core::slice::cmp::SliceContains>::slice_contains(a1 + 48, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  return result;
}
