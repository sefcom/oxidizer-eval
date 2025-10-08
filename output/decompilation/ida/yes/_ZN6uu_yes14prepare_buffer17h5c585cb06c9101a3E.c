__int64 __fastcall uu_yes::prepare_buffer(__int64 a1)
{
  unsigned __int64 v1; // rsi
  unsigned __int64 v2; // r14
  __int64 v3; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 <= 0x2000 )
  {
    if ( !v1 )
      core::panicking::panic(aAssertionFaile, 33LL, &off_D7EC0);
    v2 = (unsigned __int16)(0x4000 - 0x4000u % (unsigned __int16)v1);
    do
    {
      v3 = core::cmp::Ord::min(v2 - v1);
      result = alloc::vec::Vec<T,A>::extend_from_within(a1, v3);
      v1 = *(_QWORD *)(a1 + 16);
    }
    while ( v1 < v2 );
  }
  return result;
}