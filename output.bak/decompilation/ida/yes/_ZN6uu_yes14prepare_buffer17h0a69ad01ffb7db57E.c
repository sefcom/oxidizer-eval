unsigned __int64 __fastcall uu_yes::prepare_buffer(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int64 i; // r14
  __int64 v5; // rax

  v1 = *(_QWORD *)(a1 + 16);
  result = 2 * v1;
  if ( 2 * v1 <= 0x4000 )
  {
    if ( !v1 )
      core::panicking::panic(aAssertionFaile_4, 33LL, &off_109B18);
    v3 = 0x4000LL;
    if ( v1 <= 0x4000 )
    {
      v3 = 0x4000 % (unsigned int)v1;
      result = 0x4000 / (unsigned int)v1;
    }
    for ( i = 0x4000 - v3; v1 < i; v1 = *(_QWORD *)(a1 + 16) )
    {
      v5 = core::cmp::min_by(i - v1);
      result = alloc::vec::Vec<T,A>::extend_from_within(a1, v5);
    }
  }
  return result;
}
