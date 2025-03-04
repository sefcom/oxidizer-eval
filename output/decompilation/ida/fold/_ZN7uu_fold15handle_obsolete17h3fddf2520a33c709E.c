__int64 __fastcall uu_fold::handle_obsolete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int128 v14; // [rsp+18h] [rbp-90h] BYREF
  __int64 v15; // [rsp+28h] [rbp-80h]
  __int128 v16; // [rsp+30h] [rbp-78h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  _QWORD v18[3]; // [rsp+48h] [rbp-60h] BYREF
  __int128 v19; // [rsp+60h] [rbp-48h] BYREF
  __int64 v20; // [rsp+70h] [rbp-38h]

  v18[0] = a2;
  v18[1] = a2 + 24 * a3;
  v18[2] = 0LL;
  v3 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v18);
  if ( v4 )
  {
    v5 = v3;
    while ( 1 )
    {
      v6 = *(_QWORD *)(v4 + 8);
      v7 = *(_QWORD *)(v4 + 16);
      LODWORD(v14) = 0;
      v8 = core::char::methods::encode_utf8_raw(45LL, &v14);
      if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v6, v7, v8, v9) )
      {
        *(_QWORD *)&v14 = v6;
        *((_QWORD *)&v14 + 1) = v7 + v6;
        if ( !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v14) )
          core::str::validations::next_code_point(&v14);
        if ( (unsigned __int8)core::option::Option<T>::map_or() )
          break;
      }
      v5 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v18);
      if ( !v4 )
        goto LABEL_8;
    }
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v19, a2, a3);
    alloc::vec::Vec<T,A>::remove(&v14, &v19, v5, &off_11A878);
    core::ptr::drop_in_place<alloc::string::String>(&v14);
    v17 = v20;
    v16 = v19;
    v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v6,
            v7);
    if ( !v11 )
      core::str::slice_error_fail(v6, v7, 1LL, v7, &off_11A890);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v14, v11);
    v10 = a1;
    *(_QWORD *)(a1 + 40) = v15;
    *(_OWORD *)(a1 + 24) = v14;
    *(_QWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = v16;
  }
  else
  {
LABEL_8:
    v10 = a1;
    <T as alloc::slice::hack::ConvertVec>::to_vec(a1, a2, a3);
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL;
  }
  return v10;
}
