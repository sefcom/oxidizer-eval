__int64 __fastcall flealib::commandprocessor::CommandProcessor::bytes_to_string(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rax
  __int64 result; // rax
  _OWORD *v5; // rcx
  __int128 v6; // [rsp+8h] [rbp-100h] BYREF
  __int64 v7; // [rsp+18h] [rbp-F0h]
  __int64 v8; // [rsp+20h] [rbp-E8h]
  _QWORD v9[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v11; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h]
  __int64 v13; // [rsp+58h] [rbp-B0h]
  __int64 v14; // [rsp+60h] [rbp-A8h]
  __int64 v15; // [rsp+68h] [rbp-A0h]
  char v16; // [rsp+70h] [rbp-98h]
  _QWORD v17[2]; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v18[6]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v19; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v20; // [rsp+D0h] [rbp-38h]

  v8 = a1;
  *(_QWORD *)&v6 = 0LL;
  *((_QWORD *)&v6 + 1) = 1LL;
  v7 = 0LL;
  v9[0] = a2;
  v9[1] = a2 + a3;
  for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v9);
        i;
        i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v9) )
  {
    v10 = i;
    v17[0] = &v10;
    v17[1] = <&T as core::fmt::LowerHex>::fmt;
    *(_QWORD *)&v11 = 2LL;
    v12 = 0LL;
    v13 = 2LL;
    v14 = 0LL;
    v15 = 0x800000020LL;
    v16 = 3;
    v18[0] = asc_4FB30;
    v18[1] = 1LL;
    v18[4] = &v11;
    v18[5] = 1LL;
    v18[2] = v17;
    v18[3] = 1LL;
    core::option::Option<T>::map_or_else(&v19, v18);
    v11 = v19;
    v12 = v20;
    alloc::vec::Vec<T,A>::append_elements(&v6, *((_QWORD *)&v19 + 1), v20, &off_708598);
    core::ptr::drop_in_place<alloc::string::String>(&v11);
  }
  result = v7;
  v5 = (_OWORD *)v8;
  *(_QWORD *)(v8 + 16) = v7;
  *v5 = v6;
  return result;
}