__int64 __fastcall uu_split::number::Number::increment(_QWORD *a1)
{
  if ( !__OFSUB__(0LL, *a1) )
    return uu_split::number::FixedWidthNumber::increment();
  ++a1[1];
  return 0LL;
}