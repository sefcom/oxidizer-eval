__int64 __fastcall uu_df::table::Table::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // r14
  __int128 v23; // [rsp+8h] [rbp-450h] BYREF
  __int64 v24; // [rsp+18h] [rbp-440h]
  __int64 v25; // [rsp+20h] [rbp-438h] BYREF
  __int64 v26; // [rsp+28h] [rbp-430h]
  unsigned __int64 v27; // [rsp+30h] [rbp-428h]
  _BYTE *v28; // [rsp+38h] [rbp-420h] BYREF
  __int64 v29; // [rsp+40h] [rbp-418h]
  char v30; // [rsp+48h] [rbp-410h]
  __int64 v31; // [rsp+50h] [rbp-408h]
  __int64 v32; // [rsp+58h] [rbp-400h]
  __int64 v33; // [rsp+60h] [rbp-3F8h]
  __int64 v34; // [rsp+68h] [rbp-3F0h]
  __int64 v35; // [rsp+70h] [rbp-3E8h]
  __int128 v36; // [rsp+78h] [rbp-3E0h] BYREF
  __int64 v37; // [rsp+88h] [rbp-3D0h]
  _BYTE v38[32]; // [rsp+90h] [rbp-3C8h] BYREF
  _QWORD v39[3]; // [rsp+B0h] [rbp-3A8h] BYREF
  __int128 v40; // [rsp+C8h] [rbp-390h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-380h]
  __int128 *v42; // [rsp+E0h] [rbp-378h]
  __int64 v43; // [rsp+180h] [rbp-2D8h]
  _BYTE v44[208]; // [rsp+1B0h] [rbp-2A8h] BYREF
  __int64 dest[26]; // [rsp+280h] [rbp-1D8h] BYREF
  _BYTE src[264]; // [rsp+350h] [rbp-108h] BYREF

  uu_df::table::Header::get_headers(&v36, a2);
  v5 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)&v40 = *(_QWORD *)(a2 + 8);
  v4 = v40;
  *((_QWORD *)&v40 + 1) = v40 + v5;
  v41 = 0LL;
  v42 = &v36;
  core::iter::traits::iterator::Iterator::collect(&v25, &v40);
  v6 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
  if ( !v6 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  v33 = v5;
  v34 = v4;
  v32 = a1;
  v7 = v36;
  *(_QWORD *)(v6 + 16) = v37;
  *(_OWORD *)v6 = v7;
  *(_QWORD *)&v23 = 1LL;
  *((_QWORD *)&v23 + 1) = v6;
  v24 = 1LL;
  uu_df::table::Row::new((__int64)v44);
  v31 = a3;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v38, a3);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v40, v38);
  if ( !__OFSUB__(0LL, (_QWORD)v40) )
  {
    if ( *(_BYTE *)(a2 + 81) == 1 )
    {
      do
      {
        <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(src, &v40);
        v28 = src;
        v29 = a2;
        v30 = 0;
        uu_df::table::RowFormatter::get_values(v39, (__int64 *)&v28);
        memcpy(dest, src, sizeof(dest));
        <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(v44, dest);
        alloc::vec::Vec<T,A>::push(&v23, v39, &off_102F38);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v40, v38);
      }
      while ( (_QWORD)v40 != 0x8000000000000000LL );
    }
    else
    {
      do
      {
        if ( v43 )
        {
          <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(src, &v40);
          v28 = src;
          v29 = a2;
          v30 = 0;
          uu_df::table::RowFormatter::get_values(v39, (__int64 *)&v28);
          memcpy(dest, src, sizeof(dest));
          <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(v44, dest);
          alloc::vec::Vec<T,A>::push(&v23, v39, &off_102F38);
        }
        else
        {
          core::ptr::drop_in_place<uu_df::filesystem::Filesystem>(&v40);
        }
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v40, v38);
      }
      while ( (_QWORD)v40 != 0x8000000000000000LL );
    }
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_df::filesystem::Filesystem>>(v38);
  if ( *(_BYTE *)(a2 + 83) )
  {
    dest[0] = (__int64)v44;
    dest[1] = a2;
    LOBYTE(dest[2]) = 1;
    uu_df::table::RowFormatter::get_values(&v40, dest);
    alloc::vec::Vec<T,A>::push(&v23, &v40, &off_102F08);
  }
  if ( v24 )
  {
    v8 = *((_QWORD *)&v23 + 1);
    v35 = *((_QWORD *)&v23 + 1) + 24 * v24;
    v9 = *((_QWORD *)&v23 + 1) + 24LL;
    v10 = v26;
    v11 = v27;
    do
    {
      v12 = *(_QWORD *)(v8 + 8);
      v13 = *(_QWORD *)(v8 + 16);
      v8 = v9;
      *(_QWORD *)&v40 = v12;
      *((_QWORD *)&v40 + 1) = v12 + 24 * v13;
      v41 = 0LL;
      v14 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v40);
      if ( v15 )
      {
        v16 = v14;
        v17 = v15;
        do
        {
          v19 = core::iter::traits::double_ended::DoubleEndedIterator::rfold(
                  *(_QWORD *)(v17 + 8),
                  *(_QWORD *)(v17 + 8) + *(_QWORD *)(v17 + 16));
          if ( v16 >= v11 )
            core::panicking::panic_bounds_check(v16, v11, &off_102F20);
          if ( v19 > *(_QWORD *)(v10 + 8 * v16) )
            *(_QWORD *)(v10 + 8 * v16) = core::iter::traits::double_ended::DoubleEndedIterator::rfold(
                                           *(_QWORD *)(v17 + 8),
                                           *(_QWORD *)(v17 + 8) + *(_QWORD *)(v17 + 16));
          v16 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(&v40);
          v17 = v18;
        }
        while ( v18 );
      }
      v9 = v8 + 24;
    }
    while ( v8 != v35 );
  }
  else
  {
    v10 = v26;
    v11 = v27;
  }
  v20 = v25;
  uu_df::table::Table::get_alignments(&v40, v34, v33);
  v21 = v32;
  *(_QWORD *)(v32 + 16) = v41;
  *(_OWORD *)v21 = v40;
  *(_OWORD *)(v21 + 24) = v23;
  *(_QWORD *)(v21 + 40) = v24;
  *(_QWORD *)(v21 + 48) = v20;
  *(_QWORD *)(v21 + 56) = v10;
  *(_QWORD *)(v21 + 64) = v11;
  core::ptr::drop_in_place<uu_df::table::Row>(v44);
  return v21;
}