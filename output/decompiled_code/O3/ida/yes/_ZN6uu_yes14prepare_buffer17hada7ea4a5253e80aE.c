__int64 __fastcall uu_yes::prepare_buffer(__int64 a1)
{
  unsigned __int64 v1; // r14
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int64 i; // r12
  size_t v5; // r15

  v1 = *(_QWORD *)(a1 + 16);
  result = 2 * v1;
  if ( 2 * v1 <= 0x4000 )
  {
    if ( !v1 )
      core::panicking::panic(aAssertionFaile_4, 33LL, &off_D6F20);
    v3 = 0x4000LL;
    if ( v1 <= 0x4000 )
    {
      v3 = 0x4000 % (unsigned int)v1;
      result = 0x4000 / (unsigned int)v1;
    }
    for ( i = 0x4000 - v3; v1 < i; *(_QWORD *)(a1 + 16) = v1 )
    {
      v5 = i - v1;
      if ( i - v1 >= v1 )
        v5 = v1;
      if ( *(_QWORD *)a1 - v1 < v5 )
      {
        alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a1, v1, v5);
        v1 = *(_QWORD *)(a1 + 16);
      }
      result = (__int64)memcpy((void *)(*(_QWORD *)(a1 + 8) + v1), *(const void **)(a1 + 8), v5);
      v1 += v5;
    }
  }
  return result;
}
