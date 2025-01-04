__int64 __fastcall uu_df::table::Table::new(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 i; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r13
  unsigned __int64 v14; // rax
  __int64 v15; // r14
  __int128 v18; // [rsp+18h] [rbp-570h] BYREF
  __int64 v19; // [rsp+28h] [rbp-560h]
  _BYTE *v20; // [rsp+30h] [rbp-558h] BYREF
  __int64 v21; // [rsp+38h] [rbp-550h]
  char v22; // [rsp+40h] [rbp-548h]
  __int128 v23; // [rsp+48h] [rbp-540h] BYREF
  __int64 v24; // [rsp+58h] [rbp-530h]
  __int64 v25; // [rsp+60h] [rbp-528h]
  __int64 v26; // [rsp+68h] [rbp-520h]
  __int128 v27; // [rsp+70h] [rbp-518h] BYREF
  unsigned __int64 v28; // [rsp+80h] [rbp-508h]
  __int128 v29; // [rsp+88h] [rbp-500h] BYREF
  __int64 v30; // [rsp+98h] [rbp-4F0h]
  _QWORD v31[4]; // [rsp+A0h] [rbp-4E8h] BYREF
  _BYTE v32[32]; // [rsp+C0h] [rbp-4C8h] BYREF
  _OWORD dest[15]; // [rsp+E0h] [rbp-4A8h] BYREF
  _OWORD v34[15]; // [rsp+1D0h] [rbp-3B8h] BYREF
  _OWORD src[15]; // [rsp+2C0h] [rbp-2C8h] BYREF
  _BYTE v36[208]; // [rsp+3B0h] [rbp-1D8h] BYREF
  _BYTE v37[264]; // [rsp+480h] [rbp-108h] BYREF

  uu_df::table::Header::get_headers((__int64)&v29, a2);
  v4 = *(_QWORD *)(a2 + 16);
  v31[0] = *(_QWORD *)(a2 + 8);
  v3 = v31[0];
  v31[1] = v31[0] + v4;
  v31[2] = 0LL;
  v31[3] = &v29;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v27, v31);
  v5 = alloc::alloc::Global::alloc_impl();
  if ( !v5 )
    alloc::alloc::handle_alloc_error(8LL, 24LL);
  v25 = v4;
  v26 = v3;
  *(_QWORD *)(v5 + 16) = v30;
  *(_OWORD *)v5 = v29;
  alloc::slice::hack::into_vec(&v18, v5, 1LL);
  uu_df::table::Row::new((__int64)v36);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v32, a3);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v32);
  if ( *(_QWORD *)&src[0] != 0x8000000000000000LL )
  {
    if ( *(_BYTE *)(a2 + 81) )
    {
      do
      {
        memcpy(dest, src, 0xE8uLL);
        memcpy(v34, src, 0xE8uLL);
        <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(v37, v34);
        v20 = v37;
        v21 = a2;
        v22 = 0;
        uu_df::table::RowFormatter::get_values((__int64)&v23, (__int64 *)&v20);
        memcpy(v34, v37, 0xD0uLL);
        <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(v36, v34);
        *(_QWORD *)&v34[1] = v24;
        v34[0] = v23;
        alloc::vec::Vec<T,A>::push(&v18, v34);
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v32);
      }
      while ( *(_QWORD *)&src[0] != 0x8000000000000000LL );
    }
    else
    {
      do
      {
        memcpy(dest, src, 0xE8uLL);
        if ( *((_QWORD *)&dest[11] + 1) )
        {
          memcpy(v34, src, 0xE8uLL);
          <uu_df::table::Row as core::convert::From<uu_df::filesystem::Filesystem>>::from(v37, v34);
          v20 = v37;
          v21 = a2;
          v22 = 0;
          uu_df::table::RowFormatter::get_values((__int64)&v23, (__int64 *)&v20);
          memcpy(v34, v37, 0xD0uLL);
          <uu_df::table::Row as core::ops::arith::AddAssign>::add_assign(v36, v34);
          *(_QWORD *)&v34[1] = v24;
          v34[0] = v23;
          alloc::vec::Vec<T,A>::push(&v18, v34);
        }
        else
        {
          core::ptr::drop_in_place<uu_df::filesystem::Filesystem>(dest);
        }
        <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, v32);
      }
      while ( *(_QWORD *)&src[0] != 0x8000000000000000LL );
    }
  }
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<uu_df::filesystem::Filesystem>>(v32);
  if ( *(_BYTE *)(a2 + 83) )
  {
    *(_QWORD *)&dest[0] = v36;
    *((_QWORD *)&dest[0] + 1) = a2;
    LOBYTE(dest[1]) = 1;
    uu_df::table::RowFormatter::get_values((__int64)v34, (__int64 *)dest);
    alloc::vec::Vec<T,A>::push(&v18, v34);
  }
  *(_QWORD *)&dest[0] = *((_QWORD *)&v18 + 1);
  *((_QWORD *)&dest[0] + 1) = *((_QWORD *)&v18 + 1) + 24 * v19;
  for ( i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(dest);
        i;
        i = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(dest) )
  {
    v7 = *(_QWORD *)(i + 8);
    v8 = v7 + 24LL * *(_QWORD *)(i + 16);
    *(_QWORD *)&v34[0] = v7;
    *((_QWORD *)&v34[0] + 1) = v8;
    *(_QWORD *)&v34[1] = 0LL;
    v9 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v34);
    if ( v10 )
    {
      v11 = v9;
      do
      {
        v12 = *(_QWORD *)(v10 + 8);
        v13 = *(_QWORD *)(v10 + 16);
        v14 = unicode_width::str_width(v12, v13, 0LL);
        if ( v11 >= v28 )
          core::panicking::panic_bounds_check(v11, v28, &off_141B70);
        v15 = *((_QWORD *)&v27 + 1);
        if ( v14 > *(_QWORD *)(*((_QWORD *)&v27 + 1) + 8 * v11) )
          *(_QWORD *)(v15 + 8 * v11) = unicode_width::str_width(v12, v13, 0LL);
        v11 = <core::iter::adapters::enumerate::Enumerate<I> as core::iter::traits::iterator::Iterator>::next(v34);
      }
      while ( v10 );
    }
  }
  *(_QWORD *)&src[1] = v19;
  src[0] = v18;
  *(_QWORD *)&dest[1] = v28;
  dest[0] = v27;
  uu_df::table::Table::get_alignments(v34, v26, v25);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v34[1];
  *(_OWORD *)a1 = v34[0];
  *(_OWORD *)(a1 + 24) = src[0];
  *(_QWORD *)(a1 + 40) = *(_QWORD *)&src[1];
  *(_OWORD *)(a1 + 48) = dest[0];
  *(_QWORD *)(a1 + 64) = *(_QWORD *)&dest[1];
  core::ptr::drop_in_place<uu_df::table::Row>(v36);
  return a1;
}
