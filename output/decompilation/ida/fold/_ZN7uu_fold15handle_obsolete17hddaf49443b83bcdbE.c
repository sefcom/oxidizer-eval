__int64 __fastcall uu_fold::handle_obsolete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // edx
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int128 v18; // [rsp+8h] [rbp-90h] BYREF
  __int64 v19; // [rsp+18h] [rbp-80h]
  __int64 v20; // [rsp+20h] [rbp-78h]
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  _QWORD v23[3]; // [rsp+38h] [rbp-60h] BYREF
  __int128 v24; // [rsp+50h] [rbp-48h] BYREF
  __int64 v25; // [rsp+60h] [rbp-38h]

  v20 = a1;
  v22 = a3;
  v21 = a2;
  v23[0] = a2;
  v23[1] = a2 + 24 * a3;
  v23[2] = 0LL;
  v3 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v23);
  if ( v4 )
  {
    v5 = v3;
    v6 = v4;
    while ( 1 )
    {
      v8 = *(_QWORD *)(v6 + 8);
      v9 = *(_QWORD *)(v6 + 16);
      LODWORD(v18) = 0;
      v10 = core::char::methods::encode_utf8_raw(&v18);
      if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(v8, v9, v10) )
      {
        v11 = *(_QWORD *)(v6 + 8) + *(_QWORD *)(v6 + 16);
        *(_QWORD *)&v18 = *(_QWORD *)(v6 + 8);
        *((_QWORD *)&v18 + 1) = v11;
        if ( !<core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v18)
          && (core::str::validations::next_code_point(&v18) & 1) != 0
          && (unsigned int)(v12 - 48) < 0xA )
        {
          break;
        }
      }
      v5 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v23);
      v6 = v7;
      if ( !v7 )
        goto LABEL_10;
    }
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v24, v21, v22);
    alloc::vec::Vec<T,A>::remove(&v18, &v24, v5);
    core::ptr::drop_in_place<alloc::string::String>(v18, *((_QWORD *)&v18 + 1));
    v13 = *(_QWORD *)(v6 + 8);
    v14 = *(_QWORD *)(v6 + 16);
    v15 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v13,
            v14);
    if ( !v15 )
      core::str::slice_error_fail(v13, v14, 1LL, v14, &off_E6AC8);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v18, v15);
    v16 = v20;
    *(_QWORD *)(v20 + 40) = v19;
    *(_OWORD *)(v16 + 24) = v18;
    *(_QWORD *)(v16 + 16) = v25;
    *(_OWORD *)v16 = v24;
  }
  else
  {
LABEL_10:
    v16 = v20;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v20, v21, v22);
    *(_QWORD *)(v16 + 24) = 0x8000000000000000LL;
  }
  return v16;
}