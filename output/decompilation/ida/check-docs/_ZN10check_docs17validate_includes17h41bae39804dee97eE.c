__int64 __fastcall check_docs::validate_includes(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // [rsp+0h] [rbp-A8h] BYREF
  __int128 *v10; // [rsp+10h] [rbp-98h]
  __int128 v11; // [rsp+20h] [rbp-88h] BYREF
  __int128 *v12; // [rsp+30h] [rbp-78h]
  __int128 v13; // [rsp+38h] [rbp-70h]
  __int64 v14; // [rsp+48h] [rbp-60h]
  __int128 v15; // [rsp+50h] [rbp-58h] BYREF
  __int64 v16; // [rsp+60h] [rbp-48h]
  __int64 v17; // [rsp+70h] [rbp-38h]
  __int128 v18; // [rsp+78h] [rbp-30h] BYREF
  __int64 v19; // [rsp+88h] [rbp-20h]

  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v15);
  v17 = a3;
  itertools::Itertools::partition_map(&v11, &v15);
  v10 = v12;
  v9 = v11;
  v16 = v14;
  v15 = v13;
  v4 = *(_QWORD *)(a3 + 8) + 56LL * *(_QWORD *)(a3 + 16);
  *(_QWORD *)&v11 = *(_QWORD *)(a3 + 8);
  *((_QWORD *)&v11 + 1) = v4;
  v12 = &v9;
  core::iter::traits::iterator::Iterator::collect(&v18, &v11, v5, v4, v6, v7, v9, *((_QWORD *)&v9 + 1), v10);
  *(_QWORD *)(a1 + 16) = v16;
  *(_OWORD *)a1 = v15;
  *(_OWORD *)(a1 + 24) = v18;
  *(_QWORD *)(a1 + 40) = v19;
  core::ptr::drop_in_place<alloc::vec::Vec<check_docs::Anchor>>(&v9);
  core::ptr::drop_in_place<alloc::vec::Vec<check_docs::Anchor>>(a3);
  return a1;
}