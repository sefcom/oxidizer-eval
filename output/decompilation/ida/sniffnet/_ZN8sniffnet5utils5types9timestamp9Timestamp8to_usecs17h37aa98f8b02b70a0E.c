bool __fastcall sniffnet::utils::types::timestamp::Timestamp::to_usecs(unsigned __int64 a1, __int64 a2)
{
  bool result; // al

  result = 0;
  if ( is_mul_ok(0xF4240uLL, a1) )
    return !__OFADD__(a2, 1000000 * a1);
  return result;
}