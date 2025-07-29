__int64 __fastcall flealib::commandprocessor::CommandProcessor::vec_to_string(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 i; // rax
  __int64 result; // rax
  _OWORD *v5; // rcx
  __int128 v6; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v7; // [rsp+18h] [rbp-B0h]
  __int64 v8; // [rsp+20h] [rbp-A8h]
  _QWORD v9[2]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-90h] BYREF
  __int128 v11; // [rsp+40h] [rbp-88h] BYREF
  _QWORD *v12; // [rsp+50h] [rbp-78h]
  __int64 v13; // [rsp+58h] [rbp-70h]
  __int64 v14; // [rsp+60h] [rbp-68h]
  _QWORD v15[2]; // [rsp+70h] [rbp-58h] BYREF
  __int128 v16; // [rsp+80h] [rbp-48h] BYREF
  _QWORD *v17; // [rsp+90h] [rbp-38h]

  v8 = a1;
  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 1LL;
  v7 = 0LL;
  v9[0] = <&alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(a2);
  v9[1] = v2;
  for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v9);
        i;
        i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v9) )
  {
    v10 = i;
    v15[0] = &v10;
    v15[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)&v11 = &unk_708608;
    *((_QWORD *)&v11 + 1) = 2LL;
    v14 = 0LL;
    v12 = v15;
    v13 = 1LL;
    core::option::Option<T>::map_or_else(&v16, &v11);
    v11 = v16;
    v12 = v17;
    alloc::vec::Vec<T,A>::append_elements(&v6, *((_QWORD *)&v16 + 1), v17, &off_708598);
    core::ptr::drop_in_place<alloc::string::String>(&v11);
  }
  result = v7;
  v5 = (_OWORD *)v8;
  *(_QWORD *)(v8 + 16) = v7;
  *v5 = v6;
  return result;
}