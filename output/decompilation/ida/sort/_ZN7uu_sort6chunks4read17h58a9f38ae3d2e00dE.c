__int64 __fastcall uu_sort::chunks::read(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        char a10,
        __int64 a11)
{
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // r15
  char v20; // bp
  __int64 result; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // [rsp+0h] [rbp-198h]
  __int64 v25; // [rsp+8h] [rbp-190h]
  __int128 v26; // [rsp+10h] [rbp-188h] BYREF
  unsigned __int64 v27; // [rsp+20h] [rbp-178h]
  __int128 v28; // [rsp+30h] [rbp-168h] BYREF
  __int64 v29; // [rsp+40h] [rbp-158h]
  __int128 v30; // [rsp+50h] [rbp-148h] BYREF
  __int64 v31; // [rsp+60h] [rbp-138h]
  __int128 v32; // [rsp+70h] [rbp-128h] BYREF
  __int64 v33; // [rsp+80h] [rbp-118h]
  __int64 v34; // [rsp+90h] [rbp-108h]
  __int64 v35; // [rsp+98h] [rbp-100h]
  __int64 v36; // [rsp+A0h] [rbp-F8h]
  __int64 v37; // [rsp+A8h] [rbp-F0h] BYREF
  __int64 v38; // [rsp+B0h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-E0h]
  _QWORD v40[6]; // [rsp+C0h] [rbp-D8h] BYREF
  __int128 v41; // [rsp+F0h] [rbp-A8h]
  __int64 v42; // [rsp+100h] [rbp-98h]
  __int128 v43; // [rsp+108h] [rbp-90h]
  __int64 v44; // [rsp+118h] [rbp-80h]
  __int64 v45; // [rsp+120h] [rbp-78h]
  __int64 v46; // [rsp+128h] [rbp-70h]
  __int64 v47; // [rsp+130h] [rbp-68h]
  __int64 *v48; // [rsp+138h] [rbp-60h]
  char *v49; // [rsp+140h] [rbp-58h]
  __int64 v50; // [rsp+148h] [rbp-50h]
  __int128 v51; // [rsp+150h] [rbp-48h] BYREF
  unsigned __int64 v52; // [rsp+160h] [rbp-38h]

  v35 = a3;
  v34 = a2;
  v29 = *(_QWORD *)(a4 + 40);
  v28 = *(_OWORD *)(a4 + 24);
  v31 = *(_QWORD *)(a4 + 64);
  v30 = *(_OWORD *)(a4 + 48);
  v33 = *(_QWORD *)(a4 + 88);
  v32 = *(_OWORD *)(a4 + 72);
  v24 = *(_QWORD *)(a4 + 96);
  v25 = *(_QWORD *)(a4 + 104);
  v36 = *(_QWORD *)(a4 + 112);
  v14 = *(_QWORD *)(a4 + 136);
  v27 = v14;
  v26 = *(_OWORD *)(a4 + 120);
  v15 = *(_QWORD *)(a7 + 16);
  if ( v14 < v15 )
  {
    alloc::vec::Vec<T,A>::resize(&v26, v15 + 10240);
    v14 = v27;
  }
  v16 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(
          v15,
          *((_QWORD *)&v26 + 1),
          v14);
  core::slice::<impl [T]>::copy_from_slice(v16, v17, *(_QWORD *)(a7 + 8), v15);
  v18 = a8;
  uu_sort::chunks::read_to_buffer((unsigned int)v40, a8, a9, (unsigned int)&v26, a5, a6, *(_QWORD *)(a7 + 16), a10);
  if ( LODWORD(v40[0]) == 1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)&v40[1];
LABEL_10:
    core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v26, v18);
    core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpmc::array::Slot<uu_sort::chunks::Chunk>>>(v24, v25);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v32);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v30);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v28);
    return core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::Line>>(a4);
  }
  v19 = v40[1];
  v20 = v40[2];
  v37 = v40[1];
  *(_QWORD *)(a7 + 16) = 0LL;
  if ( v19 > v27 )
    core::slice::index::slice_start_index_len_fail(v19, v27, &off_18C510);
  v18 = *((_QWORD *)&v26 + 1) + v19;
  <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
    a7,
    *((_QWORD *)&v26 + 1) + v19,
    *((_QWORD *)&v26 + 1) + v27);
  if ( !v19 )
  {
    *(_BYTE *)(a1 + 8) = v20;
    *(_QWORD *)a1 = 0LL;
    goto LABEL_10;
  }
  v52 = v27;
  v51 = v26;
  v40[2] = v29;
  *(_OWORD *)v40 = v28;
  *(_OWORD *)&v40[3] = *(_OWORD *)a4;
  v40[5] = *(_QWORD *)(a4 + 16);
  v48 = &v37;
  v41 = v30;
  v42 = v31;
  v43 = v32;
  v44 = v33;
  v45 = v24;
  v46 = v25;
  v47 = v36;
  v49 = &a10;
  v50 = a11;
  uu_sort::chunks::Chunk::try_new(&v38, &v51, v40);
  result = v38;
  v22 = v39;
  if ( v38 )
  {
    *(_QWORD *)a1 = v38;
    *(_QWORD *)(a1 + 8) = v22;
  }
  else
  {
    v23 = std::sync::mpmc::Sender<T>::send(v34, v35, v39);
    result = core::result::Result<T,E>::unwrap(v23);
    *(_BYTE *)(a1 + 8) = v20;
    *(_QWORD *)a1 = 0LL;
  }
  return result;
}