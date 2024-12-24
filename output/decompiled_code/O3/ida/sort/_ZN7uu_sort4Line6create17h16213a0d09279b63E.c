        __int64 a7)
{
  __int64 v9; // rcx
  __int64 i; // rax
  __int64 v11; // rbx
  double v12; // r14
  char v13; // cl
  _QWORD v17[2]; // [rsp+38h] [rbp-80h] BYREF
  _QWORD v18[3]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+60h] [rbp-58h] BYREF
  __int64 v20; // [rsp+68h] [rbp-50h]
  double v21; // [rsp+70h] [rbp-48h]
  __int64 v22; // [rsp+78h] [rbp-40h]
  char v23; // [rsp+80h] [rbp-38h]

  *(_QWORD *)(a6 + 16) = 0LL;
  if ( *(_BYTE *)(a7 + 96) )
    uu_sort::tokenize(a2, a3, *(_DWORD *)(a7 + 120), a6);
  v9 = *(_QWORD *)(a7 + 8) + 56LL * *(_QWORD *)(a7 + 16);
  v17[0] = *(_QWORD *)(a7 + 8);
  v17[1] = v9;
  v18[0] = a2;
  v18[1] = a3;
  v18[2] = a6;
  for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v17);
        i;
        i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v17) )
  {
    core::ops::function::impls::<impl core::ops::function::FnOnce<A> for &mut F>::call_once(&v19, v18, i);
    v11 = v20;
    v12 = v21;
    v13 = v23 - 2;
    if ( (unsigned __int8)(v23 - 2) >= 3u )
      v13 = 1;
    if ( v13 == 2 )
    {
      if ( *(_BYTE *)(v19 + 55) )
        goto LABEL_13;
    }
    else
    {
      if ( v13 == 1 )
      {
        alloc::vec::Vec<T,A>::push(a5 + 24, v22, v23 & 1);
LABEL_13:
        alloc::vec::Vec<T,A>::push(a5, v11, *(_QWORD *)&v12);
        continue;
      }
      alloc::vec::Vec<T,A>::push(a5 + 48, v20, v21);
    }
  }
  *a1 = a2;
  a1[1] = a3;
  a1[2] = a4;
  return a1;
}
