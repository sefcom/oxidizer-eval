__int64 __fastcall uu_uniq::Uniq::skip_fields(_QWORD *a1, __int64 a2, unsigned __int64 a3, _QWORD *a4, __int64 a5)
{
  char *v6; // r8
  unsigned __int64 v7; // r15
  __int64 result; // rax
  _QWORD **v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // [rsp+0h] [rbp-78h] BYREF
  char *v19; // [rsp+8h] [rbp-70h]
  __int128 v20; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-58h]
  __int128 v22; // [rsp+30h] [rbp-48h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h]

  if ( !a2 )
    return <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a4, a5);
  v6 = (char *)a4 + a5;
  v18 = a4;
  v19 = v6;
  if ( a3 )
  {
    v7 = <usize as core::iter::range::Step>::forward_unchecked(0LL);
    result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v18);
    if ( (_BYTE)result )
    {
      *a1 = 0LL;
      a1[1] = 1LL;
      a1[2] = 0LL;
      return result;
    }
    v9 = &v18;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v22, &v18, 0LL);
    v13 = v23;
    v21 = v23;
    v20 = v22;
    if ( !v23 )
      goto LABEL_13;
    a4 = (_QWORD *)*((_QWORD *)&v20 + 1);
    v6 = (char *)(*((_QWORD *)&v20 + 1) + v23);
    v18 = (_QWORD *)*((_QWORD *)&v20 + 1);
    v19 = (char *)(*((_QWORD *)&v20 + 1) + v23);
    if ( v7 < a3 )
    {
      while ( 1 )
      {
        v7 = <usize as core::iter::range::Step>::forward_unchecked(v7);
        if ( (unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v18) )
          break;
        v9 = &v18;
        <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v22, &v18, 0LL);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v20, &v18, v14, v15, v16, v17);
        v13 = v23;
        v21 = v23;
        v20 = v22;
        if ( !v23 )
          break;
        a4 = (_QWORD *)*((_QWORD *)&v20 + 1);
        v6 = (char *)(*((_QWORD *)&v20 + 1) + v23);
        v18 = (_QWORD *)*((_QWORD *)&v20 + 1);
        v19 = (char *)(*((_QWORD *)&v20 + 1) + v23);
        if ( v7 >= a3 )
          goto LABEL_11;
      }
LABEL_13:
      *a1 = 0LL;
      a1[1] = 1LL;
      a1[2] = 0LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v20, v9, v10, v11, v13, v12);
    }
  }
LABEL_11:
  v9 = (_QWORD **)a4;
  result = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1, a4, v6);
  if ( a3 )
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v20, v9, v10, v11, v13, v12);
  return result;
}
