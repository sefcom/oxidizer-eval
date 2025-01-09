__int64 __fastcall uu_unexpand::expand_shortcuts(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r13
  unsigned __int8 v13; // al
  char v15; // [rsp+8h] [rbp-D0h]
  char v16; // [rsp+Ch] [rbp-CCh]
  _BYTE v17[24]; // [rsp+10h] [rbp-C8h] BYREF
  __int128 v18; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-A0h]
  __int128 v20; // [rsp+40h] [rbp-98h] BYREF
  __int64 v21; // [rsp+50h] [rbp-88h]
  __int64 v22; // [rsp+58h] [rbp-80h]
  _QWORD v23[2]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v24[48]; // [rsp+70h] [rbp-68h] BYREF
  __int16 v25; // [rsp+A0h] [rbp-38h]

  v4 = a1;
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(v17, a3, 0LL);
  if ( *(_QWORD *)v17 )
    alloc::raw_vec::handle_error(*(_QWORD *)&v17[8], *(_QWORD *)&v17[16]);
  v18 = *(_OWORD *)&v17[8];
  v19 = 0LL;
  *(_QWORD *)&v20 = a2;
  *((_QWORD *)&v20 + 1) = a2 + 24 * a3;
  v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v20);
  if ( v5 )
  {
    v6 = v5;
    v22 = a1;
    v15 = 0;
    v16 = 0;
    do
    {
      v7 = *(_QWORD *)(v6 + 8);
      v8 = *(_QWORD *)(v6 + 16);
      *(_DWORD *)v17 = 0;
      v9 = core::char::methods::encode_utf8_raw(45LL, v17);
      if ( !(unsigned __int8)core::slice::<impl [T]>::starts_with(v7, v8, v9, 1LL) )
        goto LABEL_10;
      v10 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
              v7,
              v8);
      if ( !v10 )
        core::str::slice_error_fail(v7, v8, 1LL, v8, &off_11CF48);
      v12 = v11;
      *(_QWORD *)v17 = v10;
      *(_QWORD *)&v17[8] = v11 + v10;
      v13 = core::iter::traits::iterator::Iterator::try_fold(v17);
      if ( (unsigned __int8)<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(v13) )
      {
        <char as core::str::pattern::Pattern>::into_searcher(v24);
        v23[0] = 0LL;
        v23[1] = v12;
        v25 = 1;
        v15 = 1;
        core::iter::traits::iterator::Iterator::fold(v23, &v18);
      }
      else
      {
LABEL_10:
        <alloc::string::String as core::clone::Clone>::clone(v17, v6);
        alloc::vec::Vec<T,A>::push(&v18, v17);
        if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aAll_0, 5LL)
          || (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v7, v8, aA, 2LL) )
        {
          v16 = 1;
        }
      }
      v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v20);
    }
    while ( v6 );
    v4 = v22;
    if ( (v15 & 1) != 0 && (v16 & 1) == 0 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(v17, aFirstOnly_0);
      v21 = *(_QWORD *)&v17[16];
      v20 = *(_OWORD *)v17;
      alloc::vec::Vec<T,A>::push(&v18, &v20);
    }
  }
  *(_QWORD *)(v4 + 16) = v19;
  *(_OWORD *)v4 = v18;
  return v4;
}
