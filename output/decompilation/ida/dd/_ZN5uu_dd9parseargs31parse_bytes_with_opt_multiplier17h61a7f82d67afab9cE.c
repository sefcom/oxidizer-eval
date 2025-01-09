__int64 __fastcall uu_dd::parseargs::parse_bytes_with_opt_multiplier(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  _QWORD *v13; // rdx
  char v14[8]; // [rsp+8h] [rbp-D0h] BYREF
  __int64 v15; // [rsp+10h] [rbp-C8h]
  __int64 v16; // [rsp+18h] [rbp-C0h]
  __int64 v17; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v18[24]; // [rsp+28h] [rbp-B0h]
  _BYTE v19[32]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v20[2]; // [rsp+60h] [rbp-78h] BYREF
  char v21[48]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v22; // [rsp+A0h] [rbp-38h]

  <char as core::str::pattern::Pattern>::into_searcher(v21, 120LL);
  v20[0] = 0LL;
  v20[1] = a3;
  v22 = 1;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v14, v20);
  if ( v16 == 1 )
  {
    uu_dd::parseargs::parse_bytes_no_x(a1, a2, a3, *(_QWORD *)v15, *(_QWORD *)(v15 + 8));
    return core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v14);
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v19, v14);
    v5 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v19);
    if ( v5 )
    {
      v7 = v5;
      v8 = v6;
      v9 = 1LL;
      while ( 1 )
      {
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, a0_2, 1LL) )
          uu_dd::parseargs::show_zero_multiplier_warning();
        uu_dd::parseargs::parse_bytes_no_x((__int64)&v17, a2, a3, v7, v8);
        v10 = v17;
        v11 = *(_QWORD *)v18;
        if ( v17 != 14 )
        {
          v13 = (_QWORD *)a1;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v18[8];
          goto LABEL_15;
        }
        if ( !is_mul_ok(*(unsigned __int64 *)v18, v9) )
          break;
        v9 *= *(_QWORD *)v18;
        v7 = <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v19);
        v8 = v12;
        if ( !v7 )
          goto LABEL_12;
      }
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v17, a2, a3);
      v11 = v17;
      v13 = (_QWORD *)a1;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)v18;
      v10 = 13LL;
LABEL_15:
      *v13 = v10;
      v13[1] = v11;
      return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v19);
    }
    else
    {
      v9 = 1LL;
LABEL_12:
      core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<&str>>(v19);
      result = a1;
      *(_QWORD *)(a1 + 8) = v9;
      *(_QWORD *)a1 = 14LL;
    }
  }
  return result;
}
