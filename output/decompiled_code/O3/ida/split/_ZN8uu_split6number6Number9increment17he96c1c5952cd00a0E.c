__int64 __fastcall uu_split::number::Number::increment(_QWORD *a1)
{
  if ( *a1 != 0x8000000000000000LL )
    return uu_split::number::FixedWidthNumber::increment((__int64)a1);
  ++a1[1];
  return 0LL;
}
