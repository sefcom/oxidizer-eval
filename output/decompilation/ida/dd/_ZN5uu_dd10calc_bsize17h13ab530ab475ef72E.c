unsigned __int64 __fastcall uu_dd::calc_bsize(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rax

  v2 = gcd::binary_usize(a1);
  if ( !v2 )
    core::panicking::panic_const::panic_const_div_by_zero(&off_1611E8);
  if ( (a1 | v2) >> 32 )
    v3 = a1 / v2;
  else
    v3 = (unsigned int)a1 / (unsigned int)v2;
  return a2 * v3;
}
