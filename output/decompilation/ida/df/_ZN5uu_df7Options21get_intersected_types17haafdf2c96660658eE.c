__int64 __fastcall uu_df::Options::get_intersected_types(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _OWORD *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 result; // rax
  __int128 v11; // [rsp+8h] [rbp-80h] BYREF
  __int64 v12; // [rsp+18h] [rbp-70h]
  __int128 v13; // [rsp+20h] [rbp-68h] BYREF
  __int64 v14; // [rsp+30h] [rbp-58h]
  _OWORD *v15; // [rsp+40h] [rbp-48h]
  _QWORD v16[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = a1;
  *(_QWORD *)&v11 = 0LL;
  *((_QWORD *)&v11 + 1) = 8LL;
  v12 = 0LL;
  v16[0] = a2;
  v16[1] = a2 + 24 * a3;
  v8 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v16);
  if ( v8 )
  {
    v9 = v8;
    v15 = a1;
    do
    {
      if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(v9, a4, a5) )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v13, v9);
        alloc::vec::Vec<T,A>::push(&v11, &v13);
      }
      v9 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v16);
    }
    while ( v9 );
    v14 = v12;
    v13 = v11;
    v7 = v15;
    if ( v12 )
    {
      result = v12;
      *((_QWORD *)v15 + 2) = v12;
      *v7 = v11;
      return result;
    }
  }
  else
  {
    v14 = v12;
    v13 = v11;
  }
  *(_QWORD *)v7 = 0x8000000000000000LL;
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v13);
}
