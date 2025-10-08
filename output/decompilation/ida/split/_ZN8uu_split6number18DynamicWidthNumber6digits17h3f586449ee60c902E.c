__int64 __fastcall uu_split::number::DynamicWidthNumber::digits(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // r15
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  bool v9; // cf
  __int64 result; // rax
  _OWORD *v11; // rcx
  __int128 v12; // [rsp+8h] [rbp-50h] BYREF
  __int64 v13; // [rsp+18h] [rbp-40h]
  __int64 v14; // [rsp+20h] [rbp-38h]

  v3 = a2;
  v14 = a1;
  v4 = a3;
  v5 = a3 * (a3 - 1LL);
  v6 = 2LL;
  if ( a2 >= v5 )
  {
    do
    {
      v3 -= v5;
      ++v6;
      v5 *= a3;
    }
    while ( v3 >= v5 );
  }
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 1LL;
  v13 = 0LL;
  if ( v3 )
  {
    if ( !a3 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_10ABF0);
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
      alloc::vec::Vec<T,A>::push(&v12, (unsigned int)v7, &off_10AC08);
      v9 = v3 < v4;
      v3 = v8;
    }
    while ( !v9 );
  }
  alloc::vec::Vec<T,A>::resize(&v12, v6);
  core::slice::<impl [T]>::reverse(*((_QWORD *)&v12 + 1), v13);
  result = v13;
  v11 = (_OWORD *)v14;
  *(_QWORD *)(v14 + 16) = v13;
  *v11 = v12;
  return result;
}