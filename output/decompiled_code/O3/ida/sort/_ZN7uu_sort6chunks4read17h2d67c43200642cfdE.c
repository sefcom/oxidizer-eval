        __int64 a10)
{
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v20; // r12
  char v21; // bp
  __int64 slice; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int128 v25; // [rsp+0h] [rbp-178h] BYREF
  unsigned __int64 v26; // [rsp+10h] [rbp-168h]
  __int128 v27; // [rsp+20h] [rbp-158h] BYREF
  __int64 v28; // [rsp+30h] [rbp-148h]
  __int128 v29; // [rsp+40h] [rbp-138h] BYREF
  __int64 v30; // [rsp+50h] [rbp-128h]
  __int128 v31; // [rsp+60h] [rbp-118h] BYREF
  __int64 v32; // [rsp+70h] [rbp-108h]
  __int128 v33; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v34; // [rsp+90h] [rbp-E8h]
  __int64 v35; // [rsp+98h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-D0h]
  _QWORD v38[6]; // [rsp+B0h] [rbp-C8h] BYREF
  __int128 v39; // [rsp+E0h] [rbp-98h]
  __int64 v40; // [rsp+F0h] [rbp-88h]
  __int128 v41; // [rsp+F8h] [rbp-80h]
  __int64 v42; // [rsp+108h] [rbp-70h]
  __int64 *v43; // [rsp+110h] [rbp-68h]
  char *v44; // [rsp+118h] [rbp-60h]
  __int64 v45; // [rsp+120h] [rbp-58h]
  __int128 v46; // [rsp+130h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+140h] [rbp-38h]

  v28 = *((_QWORD *)a3 + 2);
  v27 = *a3;
  v30 = *((_QWORD *)a3 + 5);
  v29 = *(__int128 *)((char *)a3 + 24);
  v32 = *((_QWORD *)a3 + 8);
  v31 = a3[3];
  v34 = *((_QWORD *)a3 + 11);
  v33 = *(__int128 *)((char *)a3 + 72);
  v15 = *((_QWORD *)a3 + 14);
  v26 = v15;
  v25 = a3[6];
  v16 = *(_QWORD *)(a6 + 16);
  if ( v15 < v16 )
  {
    alloc::vec::Vec<T,A>::resize(&v25, v16 + 10240, 0LL);
    v15 = v26;
  }
  v17 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(
          v16,
          *((_QWORD *)&v25 + 1),
          v15,
          &off_2017E0);
  core::slice::<impl [T]>::copy_from_slice(v17, v18, *(_QWORD *)(a6 + 8), v16, &off_2017F8);
  uu_sort::chunks::read_to_buffer((unsigned int)v38, a7, *a8, (unsigned int)&v25, a4, a5, *(_QWORD *)(a6 + 16), a9);
  if ( v38[0] )
  {
    *(_OWORD *)a1 = *(_OWORD *)&v38[1];
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v25);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::GeneralF64ParseResult>>(&v33);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::numeric_str_cmp::NumInfo>>(&v31);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v29);
LABEL_5:
    core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::Line>>(&v27);
    return a1;
  }
  v20 = v38[1];
  v21 = v38[2];
  v35 = v38[1];
  *(_QWORD *)(a6 + 16) = 0LL;
  if ( v20 > v26 )
    core::slice::index::slice_start_index_len_fail(v20, v26, &off_201828);
  slice = core::slice::iter::Iter<T>::make_slice(*((_QWORD *)&v25 + 1) + v20, *((_QWORD *)&v25 + 1) + v26);
  alloc::vec::Vec<T,A>::append_elements(a6, slice);
  if ( !v20 )
  {
    *(_BYTE *)(a1 + 8) = v21;
    *(_QWORD *)a1 = 0LL;
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v25);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::GeneralF64ParseResult>>(&v33);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::numeric_str_cmp::NumInfo>>(&v31);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v29);
    goto LABEL_5;
  }
  v47 = v26;
  v46 = v25;
  v38[2] = v30;
  *(_OWORD *)v38 = v29;
  *(_OWORD *)&v38[3] = v27;
  v38[5] = v28;
  v43 = &v35;
  v39 = v31;
  v40 = v32;
  v41 = v33;
  v42 = v34;
  v44 = &a9;
  v45 = a10;
  uu_sort::chunks::Chunk::try_new(&v36, &v46, v38);
  v23 = v37;
  if ( v36 )
  {
    *(_QWORD *)a1 = v36;
    *(_QWORD *)(a1 + 8) = v23;
  }
  else
  {
    v24 = std::sync::mpmc::Sender<T>::send(a2, v37);
    core::result::Result<T,E>::unwrap(v24);
    *(_BYTE *)(a1 + 8) = v21;
    *(_QWORD *)a1 = 0LL;
  }
  return a1;
}
