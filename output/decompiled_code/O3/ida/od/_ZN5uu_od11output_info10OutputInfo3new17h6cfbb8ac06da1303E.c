        unsigned __int64 a6)
{
  unsigned __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r11
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r13
  unsigned __int64 *v22; // rdi
  __int64 v23; // [rsp+0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v25[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( a4 )
  {
    if ( a4 >= 4 )
    {
      v22 = (unsigned __int64 *)(a3 + 136);
      v10 = 1LL;
      v11 = 0LL;
      do
      {
        if ( v10 <= *(v22 - 15) )
          v10 = *(v22 - 15);
        if ( v10 <= *(v22 - 10) )
          v10 = *(v22 - 10);
        if ( v10 <= *(v22 - 5) )
          v10 = *(v22 - 5);
        if ( v10 <= *v22 )
          v10 = *v22;
        v11 += 4LL;
        v22 += 20;
      }
      while ( (a4 & 0xFFFFFFFFFFFFFFFCLL) != v11 );
    }
    else
    {
      v10 = 1LL;
      v11 = 0LL;
    }
    if ( (a4 & 3) != 0 )
    {
      v11 = a3 + 40 * v11 + 16;
      v12 = 0LL;
      do
      {
        if ( v10 <= *(_QWORD *)(v11 + v12) )
          v10 = *(_QWORD *)(v11 + v12);
        v12 += 40LL;
      }
      while ( 40 * (a4 & 3) != v12 );
    }
    v13 = (_QWORD *)(a3 + 24);
    v14 = 1LL;
    a6 = a4;
    do
    {
      v17 = *(v13 - 1);
      if ( !v17 )
        core::panicking::panic_const::panic_const_div_by_zero(&off_103548, v14, v11, a4, a3, a6);
      if ( (v17 | v10) >> 32 )
      {
        v15 = v10 / v17;
        v11 = v10 % v17;
      }
      else
      {
        v11 = (unsigned int)v10 % (unsigned int)v17;
        v15 = (unsigned int)v10 / (unsigned int)v17;
      }
      v16 = *v13 * v15;
      if ( v14 <= v16 )
        v14 = v16;
      v13 += 5;
      --a6;
    }
    while ( a6 );
  }
  else
  {
    v14 = 1LL;
    v10 = 1LL;
  }
  v18 = a3 + 40 * a4;
  if ( (v10 | a2) >> 32 )
  {
    v19 = a2 % v10;
    v20 = a2 / v10;
  }
  else
  {
    v19 = (unsigned int)a2 % (unsigned int)v10;
    v20 = (unsigned int)a2 / (unsigned int)v10;
  }
  v25[0] = a3;
  v25[1] = v18;
  v25[2] = &v23;
  v25[3] = &v24;
  ((void (__fastcall *)(__int64, _QWORD *, unsigned __int64, __int64, __int64, unsigned __int64, unsigned __int64, unsigned __int64))<alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter)(
    a1,
    v25,
    v19,
    v18,
    a3,
    a6,
    v10,
    v14);
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = v14 * v20;
  *(_QWORD *)(a1 + 40) = v10;
  *(_BYTE *)(a1 + 48) = a5;
  return a1;
}
