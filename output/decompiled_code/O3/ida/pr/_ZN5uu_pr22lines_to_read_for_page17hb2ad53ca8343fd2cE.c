__int64 __fastcall uu_pr::lines_to_read_for_page(__int64 a1)
{
  __int64 v1; // rdx

  v1 = 1LL;
  if ( *(_QWORD *)(a1 + 256) != 0x8000000000000000LL )
    v1 = *(_QWORD *)(a1 + 288);
  return v1 * (*(_QWORD *)(a1 + 312) >> *(_BYTE *)(a1 + 320));
}
