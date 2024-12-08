__int64 __fastcall uu_split::number::DynamicWidthNumber::digits(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r13
  bool v9; // cf
  __int64 result; // rax
  __int128 v11; // [rsp+0h] [rbp-48h] BYREF
  __int64 v12; // [rsp+10h] [rbp-38h]

  v3 = a2;
  v4 = a3;
  v5 = a3 * (a3 - 1LL);
  v6 = 2LL;
  if ( v5 <= a2 )
  {
    do
    {
      v3 -= v5;
      ++v6;
      v5 *= a3;
    }
    while ( v3 >= v5 );
  }
  *(_QWORD *)&v11 = 0LL;
  *((_QWORD *)&v11 + 1) = 1LL;
  v12 = 0LL;
  if ( v3 )
  {
    if ( !a3 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_149790);
    do
    {
      if ( HIDWORD(v3) )
      {
        v7 = v3 % v4;
        v8 = v3 / v4;
      }
      else
      {
        LODWORD(v7) = (unsigned int)v3 % (unsigned int)v4;
        v8 = (unsigned int)v3 / (unsigned int)v4;
      }
      alloc::vec::Vec<T,A>::push(&v11, (unsigned int)v7);
      v9 = v3 < v4;
      v3 = v8;
    }
    while ( !v9 );
  }
  alloc::vec::Vec<T,A>::resize(&v11, v6, 0LL);
  core::slice::<impl [T]>::reverse(*((_QWORD *)&v11 + 1), v12);
  result = v12;
  *(_QWORD *)(a1 + 16) = v12;
  *(_OWORD *)a1 = v11;
  return result;
}
