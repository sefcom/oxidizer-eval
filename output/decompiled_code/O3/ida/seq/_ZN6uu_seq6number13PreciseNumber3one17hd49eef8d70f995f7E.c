__int64 __fastcall uu_seq::number::PreciseNumber::one(__int64 a1)
{
  uu_seq::extendedbigdecimal::ExtendedBigDecimal::one(a1);
  *(_QWORD *)(a1 + 40) = 1LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return a1;
}
