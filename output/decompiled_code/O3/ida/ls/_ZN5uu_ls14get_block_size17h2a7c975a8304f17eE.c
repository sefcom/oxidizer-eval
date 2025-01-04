unsigned __int64 __fastcall uu_ls::get_block_size(__int16 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 result; // rax

  if ( (a1 & 0xB000 | 0x4000) == 0x6000 )
  {
    result = 0LL;
    if ( a4 )
      return result;
  }
  else
  {
    result = a2 << 9;
    if ( a4 )
      return result;
  }
  if ( !a3 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_212670);
  if ( !((a3 | result) >> 32) )
    return (unsigned int)result / (unsigned int)a3;
  result /= a3;
  return result;
}
