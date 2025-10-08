__int64 __fastcall uu_dd::parseargs::parse_bytes_with_opt_multiplier(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // r12
  __int64 result; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // r13
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD *v14; // rdx
  __int64 v15; // [rsp+8h] [rbp-B0h] BYREF
  __int64 *v16; // [rsp+10h] [rbp-A8h]
  __int64 v17; // [rsp+18h] [rbp-A0h]
  __int64 v18; // [rsp+20h] [rbp-98h] BYREF
  unsigned __int64 v19[7]; // [rsp+28h] [rbp-90h] BYREF
  __int16 v20; // [rsp+60h] [rbp-58h]
  _BYTE v21[80]; // [rsp+68h] [rbp-50h] BYREF

  <char as core::str::pattern::Pattern>::into_searcher(&v19[1], 120LL);
  v18 = 0LL;
  v19[0] = a3;
  v20 = 1;
  core::iter::traits::iterator::Iterator::collect(&v15, &v18);
  if ( v17 == 1 )
  {
    v4 = v16;
    uu_dd::parseargs::parse_bytes_no_x(a1, a2, a3, *v16, v16[1]);
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v15, v4);
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v21, &v15);
    v6 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v21);
    if ( v6 )
    {
      v8 = v6;
      v9 = v7;
      v10 = 1LL;
      while ( 1 )
      {
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v8, v9, a0, 1LL) )
          uu_dd::parseargs::show_zero_multiplier_warning();
        uu_dd::parseargs::parse_bytes_no_x((__int64)&v18, a2, a3, v8, v9);
        v11 = v18;
        v12 = v19[0];
        if ( v18 != 14 )
        {
          v14 = (_QWORD *)a1;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v19[1];
          goto LABEL_14;
        }
        if ( !is_mul_ok(v19[0], v10) )
          break;
        v10 *= v19[0];
        v8 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v21);
        v9 = v13;
        if ( !v8 )
          goto LABEL_12;
      }
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, a2, a3);
      v12 = v18;
      v14 = (_QWORD *)a1;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)v19;
      v11 = 13LL;
LABEL_14:
      *v14 = v11;
      v14[1] = v12;
      return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v21);
    }
    else
    {
      v10 = 1LL;
LABEL_12:
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v21);
      result = a1;
      *(_QWORD *)(a1 + 8) = v10;
      *(_QWORD *)a1 = 14LL;
    }
  }
  return result;
}