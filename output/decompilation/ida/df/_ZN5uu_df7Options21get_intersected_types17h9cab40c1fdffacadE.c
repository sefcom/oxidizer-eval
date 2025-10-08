__int64 __fastcall uu_df::Options::get_intersected_types(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rbp
  __int64 result; // rax
  __int128 v10; // [rsp+8h] [rbp-70h] BYREF
  __int64 v11; // [rsp+18h] [rbp-60h]
  __int128 v12; // [rsp+20h] [rbp-58h] BYREF
  __int64 v13; // [rsp+30h] [rbp-48h]
  _OWORD *v14; // [rsp+40h] [rbp-38h]

  *(_QWORD *)&v10 = 0LL;
  *((_QWORD *)&v10 + 1) = 8LL;
  v11 = 0LL;
  if ( a3 )
  {
    v14 = a1;
    v8 = 24 * a3;
    do
    {
      if ( (unsigned __int8)<T as core::slice::cmp::SliceContains>::slice_contains(a2, a4, a5) )
      {
        <alloc::string::String as core::clone::Clone>::clone(&v12, a2);
        alloc::vec::Vec<T,A>::push(&v10, &v12, &off_103110);
      }
      a2 += 24LL;
      v8 -= 24LL;
    }
    while ( v8 );
    v13 = v11;
    v12 = v10;
    a1 = v14;
    if ( v11 )
    {
      result = v11;
      *((_QWORD *)v14 + 2) = v11;
      *a1 = v10;
      return result;
    }
  }
  else
  {
    v13 = v11;
    v12 = v10;
  }
  *(_QWORD *)a1 = 0x8000000000000000LL;
  return core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v12);
}