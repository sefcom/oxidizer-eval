__int64 __fastcall uu_uniq::Uniq::skip_fields(_QWORD *a1, char a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rbp
  __int64 v11; // [rsp+0h] [rbp-58h] BYREF
  __int64 v12; // [rsp+8h] [rbp-50h]
  __int64 v13; // [rsp+10h] [rbp-48h] BYREF
  __int64 v14; // [rsp+18h] [rbp-40h]
  __int64 v15; // [rsp+20h] [rbp-38h]

  v6 = a4;
  if ( (a2 & 1) == 0 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1, a4, a5);
  v8 = a4 + a5;
  v11 = a4;
  v12 = v8;
  if ( a3 )
  {
    result = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v11);
    if ( (_BYTE)result )
    {
      *a1 = 0LL;
      a1[1] = 1LL;
      a1[2] = 0LL;
      return result;
    }
    core::iter::traits::iterator::Iterator::collect(&v13, &v11);
    v5 = v13;
    v6 = v14;
    if ( !v15 )
      goto LABEL_15;
    v8 = v14 + v15;
    v11 = v14;
    v12 = v14 + v15;
    if ( a3 != 1 )
    {
      v10 = a3 - 1;
      while ( !(unsigned __int8)<core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::all(&v11) )
      {
        core::iter::traits::iterator::Iterator::collect(&v13, &v11);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v5, v6);
        v5 = v13;
        v6 = v14;
        if ( !v15 )
          break;
        v8 = v14 + v15;
        v11 = v14;
        v12 = v14 + v15;
        if ( !--v10 )
          goto LABEL_13;
      }
LABEL_15:
      *a1 = 0LL;
      a1[1] = 1LL;
      a1[2] = 0LL;
      return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v5, v6);
    }
  }
LABEL_13:
  result = core::iter::traits::iterator::Iterator::collect(a1, v6, v8);
  if ( a3 )
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v5, v6);
  return result;
}