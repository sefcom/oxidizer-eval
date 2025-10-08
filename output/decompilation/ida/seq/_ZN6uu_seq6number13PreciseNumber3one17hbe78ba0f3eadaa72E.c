_QWORD *__fastcall uu_seq::number::PreciseNumber::one(_QWORD *a1)
{
  uucore::features::extendedbigdecimal::ExtendedBigDecimal::one(a1 + 2);
  a1[7] = 1LL;
  *a1 = 1LL;
  a1[1] = 0LL;
  return a1;
}