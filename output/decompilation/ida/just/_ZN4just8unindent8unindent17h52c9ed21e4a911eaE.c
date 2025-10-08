__int64 __fastcall just::unindent::unindent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 v5; // r13
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rbx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rdx
  const char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rbp
  __int64 v23; // r13
  __int64 v24; // r14
  __int64 v26; // [rsp+10h] [rbp-88h] BYREF
  __int64 v27; // [rsp+18h] [rbp-80h]
  __int64 v28; // [rsp+20h] [rbp-78h]
  _QWORD v29[3]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v30; // [rsp+40h] [rbp-58h] BYREF
  __int64 v31; // [rsp+48h] [rbp-50h]
  __int64 v32; // [rsp+50h] [rbp-48h]
  __int64 v33; // [rsp+60h] [rbp-38h]

  v33 = a1;
  v26 = 0LL;
  v27 = 8LL;
  v28 = 0LL;
  v30 = a2;
  v31 = a2 + a3;
  v32 = 0LL;
  v4 = a3 - 1;
  v5 = 0LL;
  while ( 1 )
  {
    v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(&v30);
    v9 = 1LL;
    if ( v8 == 10 )
      goto LABEL_12;
    if ( v8 == (_DWORD)&unk_110000 )
      break;
    if ( v8 >= 0x80 )
    {
      v6 = (v8 < (unsigned int)&stru_10000) | 0xFFFFFFFFFFFFFFFCLL;
      if ( v8 < 0x800 )
        v6 = -2LL;
      if ( v7 == a3 + v6 )
      {
        v9 = 2LL;
        if ( v8 >= 0x800 )
          v9 = 4LL - (v8 < (unsigned int)&stru_10000);
LABEL_12:
        v10 = v7 + v9;
        v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
                v5,
                v10,
                a2,
                a3);
        if ( !v11 )
          core::str::slice_error_fail(a2, a3, v5, v10, &off_4318C8);
        alloc::vec::Vec<T,A>::push(&v26, v11, v12, &off_4318E0);
        v5 = v10;
      }
    }
    else if ( v7 == v4 )
    {
      goto LABEL_12;
    }
  }
  v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(v27, v27 + 16 * v28);
  v15 = v14;
  if ( !v13 )
    v15 = 0LL;
  v29[0] = alloc::raw_vec::RawVecInner<A>::with_capacity_in(v28, 8LL, 16LL, &off_431880);
  v29[1] = v16;
  v29[2] = 0LL;
  v30 = v27;
  v31 = v27 + 16 * v28;
  v32 = 0LL;
  while ( 1 )
  {
    v19 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v30);
    if ( !v20 )
      break;
    v21 = v19;
    v22 = *v20;
    v23 = v20[1];
    if ( (unsigned __int8)just::unindent::blank(*v20, v23) )
    {
      v17 = (_BYTE *)(&dword_0 + 1);
      if ( v21 != v28 - 1 && v21 != 0 )
        v17 = asc_6E198;
      v18 = (v21 != v28 - 1) & (unsigned __int8)(v21 != 0);
    }
    else
    {
      v17 = (const char *)core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                            v15,
                            v22,
                            v23);
      if ( !v17 )
        core::str::slice_error_fail(v22, v23, v15, v23, &off_431898);
    }
    alloc::vec::Vec<T,A>::push(v29, v17, v18, &off_4318B0);
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v30, v29);
  v24 = v33;
  core::iter::traits::iterator::Iterator::collect(v33, &v30);
  core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(
    v26,
    v27);
  return v24;
}