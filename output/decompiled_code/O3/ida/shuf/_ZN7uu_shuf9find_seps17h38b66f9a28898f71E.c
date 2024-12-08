void __fastcall uu_shuf::find_seps(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // r14
  __int64 v3; // rbx
  char *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r12
  char *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v18; // [rsp+10h] [rbp-58h]
  _QWORD v19[3]; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int8 v20; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = a1;
    if ( v2 == 1 && !*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) )
    {
      *(_QWORD *)(a1 + 16) = 0LL;
    }
    else
    {
      v4 = (char *)&v20;
      do
      {
        v5 = <usize as core::iter::range::Step>::backward_unchecked(v2);
        v2 = v5;
        v6 = *(_QWORD *)(v3 + 16);
        if ( v5 >= v6 )
          core::panicking::panic_bounds_check(v5, v6, &off_137D78);
        if ( core::slice::memchr::memchr(
               a2,
               *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16 * v5),
               *(_QWORD *)(*(_QWORD *)(v3 + 8) + 16 * v5 + 8)) == 1 )
        {
          v18 = v2;
          v7 = alloc::vec::Vec<T,A>::swap_remove(v3, v2);
          v9 = v8;
          v19[0] = v7;
          v19[1] = v7;
          v19[2] = v8 + v7;
          v20 = a2;
          v10 = v4;
          if ( memchr::arch::generic::memchr::Iter::next(v19, v4) )
          {
            v12 = v11;
            v13 = 0LL;
            v3 = a1;
            do
            {
              v14 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(
                      v13,
                      v12,
                      v7,
                      v9,
                      &off_137D90);
              alloc::vec::Vec<T,A>::push(a1, v14);
              v13 = v12 + 1;
              v15 = memchr::arch::generic::memchr::Iter::next(v19, v10);
              v12 = v16;
            }
            while ( v15 );
          }
          else
          {
            v13 = 0LL;
            v3 = a1;
          }
          v4 = v10;
          v2 = v18;
          if ( v9 > v13 )
            alloc::vec::Vec<T,A>::push(v3, v13 + v7);
        }
      }
      while ( v2 );
    }
  }
}
