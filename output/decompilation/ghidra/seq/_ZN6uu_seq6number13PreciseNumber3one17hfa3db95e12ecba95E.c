long __rustcall uu_seq::number::PreciseNumber::one(long param_1)

{
  extendedbigdecimal::ExtendedBigDecimal::one();
  *(undefined8 *)(param_1 + 0x28) = 1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return param_1;
}