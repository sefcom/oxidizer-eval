__int64 __fastcall check_docs::filter_valid_anchors(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // [rsp+8h] [rbp-140h] BYREF
  __int128 v6; // [rsp+10h] [rbp-138h] BYREF
  __int64 v7; // [rsp+20h] [rbp-128h]
  __int128 v8; // [rsp+28h] [rbp-120h]
  __int64 v9; // [rsp+38h] [rbp-110h]
  __int128 v10; // [rsp+40h] [rbp-108h] BYREF
  __int64 v11; // [rsp+50h] [rbp-F8h]
  __int128 v12; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v13; // [rsp+70h] [rbp-D8h]
  __int128 v14; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v15; // [rsp+90h] [rbp-B8h]
  _BYTE v16[32]; // [rsp+98h] [rbp-B0h] BYREF
  __int64 *v17; // [rsp+B8h] [rbp-90h]
  _BYTE v18[24]; // [rsp+C0h] [rbp-88h] BYREF
  _BYTE v19[112]; // [rsp+D8h] [rbp-70h] BYREF

  v5 = a3;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v16);
  v17 = &v5;
  itertools::Itertools::partition_map(&v6, v16);
  v10 = v6;
  v11 = v7;
  v12 = v8;
  v13 = v9;
  check_docs::filter_unused_ends(v16, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16), *((_QWORD *)&v6 + 1));
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6, v16);
  core::iter::traits::iterator::Iterator::collect(v18, &v6);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6, &v10);
  core::iter::traits::iterator::Iterator::collect(&v14, &v6);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v16, &v12);
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v6, v18);
  core::iter::traits::iterator::Iterator::chain(v19, v16, &v6);
  core::iter::traits::iterator::Iterator::collect(&v6, v19);
  *(_QWORD *)(a1 + 16) = v15;
  *(_OWORD *)a1 = v14;
  *(_OWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 40) = v7;
  core::ptr::drop_in_place<alloc::vec::Vec<check_docs::Anchor>>(a3);
  return a1;
}