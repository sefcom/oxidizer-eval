__int64 __fastcall uu_ptx::read_input(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int128 *v8; // rax
  __int128 v9; // xmm0
  __int64 v10; // r14
  __int64 v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // r15
  _QWORD *v14; // rax
  __int64 v15; // r14
  const void *v16; // rbx
  size_t v17; // rbp
  __int64 v18; // r15
  __int64 *v19; // rax
  __int64 *v20; // r13
  __int64 (__fastcall **v21)(); // r15
  int v22; // r15d
  __int64 *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // r12
  __int64 v26; // r15
  void *v27; // r13
  bool v28; // cf
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v32; // r12
  __int64 v33; // r13
  _QWORD *v34; // rax
  __int64 v35; // r14
  __int64 v36; // rbp
  char *v37; // rax
  __int64 v38; // [rsp+8h] [rbp-1E0h] BYREF
  _QWORD *v39; // [rsp+10h] [rbp-1D8h]
  __int64 v40; // [rsp+18h] [rbp-1D0h]
  __int64 v41; // [rsp+20h] [rbp-1C8h] BYREF
  __int64 v42; // [rsp+28h] [rbp-1C0h]
  __int128 dest; // [rsp+30h] [rbp-1B8h]
  __int64 v44; // [rsp+40h] [rbp-1A8h]
  __int64 *v45; // [rsp+48h] [rbp-1A0h]
  __int64 (__fastcall **v46)(); // [rsp+50h] [rbp-198h]
  __int64 v47; // [rsp+58h] [rbp-190h]
  _QWORD *v48; // [rsp+60h] [rbp-188h] BYREF
  _QWORD *v49; // [rsp+68h] [rbp-180h]
  __int64 v50; // [rsp+70h] [rbp-178h]
  _QWORD *v51; // [rsp+78h] [rbp-170h]
  __int128 v52; // [rsp+80h] [rbp-168h] BYREF
  __int128 v53; // [rsp+90h] [rbp-158h]
  __int128 v54; // [rsp+A0h] [rbp-148h]
  __int64 v55; // [rsp+B8h] [rbp-130h]
  _DWORD v56[2]; // [rsp+C0h] [rbp-128h] BYREF
  char v57; // [rsp+C8h] [rbp-120h] BYREF
  __int128 v58; // [rsp+D0h] [rbp-118h]
  unsigned __int64 v59; // [rsp+E0h] [rbp-108h]
  __int128 v60; // [rsp+E8h] [rbp-100h] BYREF
  unsigned __int64 v61; // [rsp+F8h] [rbp-F0h]
  __int64 *v62; // [rsp+100h] [rbp-E8h]
  __int64 (__fastcall **v63)(); // [rsp+108h] [rbp-E0h]
  __int128 v64; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v65; // [rsp+120h] [rbp-C8h]
  _QWORD v66[3]; // [rsp+128h] [rbp-C0h] BYREF
  __int128 v67; // [rsp+140h] [rbp-A8h] BYREF
  unsigned __int64 v68; // [rsp+150h] [rbp-98h]
  __int128 v69; // [rsp+158h] [rbp-90h]
  __int64 v70; // [rsp+168h] [rbp-80h]
  __int64 v71; // [rsp+170h] [rbp-78h]
  _QWORD v72[3]; // [rsp+180h] [rbp-68h] BYREF
  char v73[80]; // [rsp+198h] [rbp-50h] BYREF

  v6 = a2;
  v7 = (_QWORD *)(__readfsqword(0) - 64);
  if ( *v7 == 1LL )
  {
    v8 = (__int128 *)(v7 + 1);
  }
  else if ( *v7
         || (v8 = (__int128 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 64, 0LL)) == 0LL )
  {
    core::result::unwrap_failed(
      anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
      70LL,
      &v41,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
  }
  v9 = *v8;
  ++*(_QWORD *)v8;
  v53 = xmmword_2AA7E0;
  v52 = *(_OWORD *)&off_2AA7D0;
  v54 = v9;
  v38 = 0LL;
  v39 = (_QWORD *)&byte_8;
  v40 = 0LL;
  v55 = a1;
  if ( !a3 )
  {
    alloc::raw_vec::RawVec<T,A>::grow_one(&v38);
    v12 = v39;
    *v39 = asc_62A99;
    v11 = 1LL;
LABEL_9:
    v12[1] = v11;
    v40 = 1LL;
    v13 = 1LL;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(a4 + 88) & 1) == 0 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    if ( !v10 || (v11 = *(_QWORD *)(a2 + 16), v11 < 0) )
LABEL_52:
      core::panicking::panic_nounwind(anon_23a8c89669b7e3966eab8f1d3c4cd90c_23_llvm_2187995499940452454, 162LL);
    alloc::raw_vec::RawVec<T,A>::grow_one(&v38);
    v12 = v39;
    *v39 = v10;
    goto LABEL_9;
  }
  v32 = a2 + 24 * a3;
  v33 = 1LL;
  v13 = 0LL;
  do
  {
    if ( !v6 )
      break;
    v35 = *(_QWORD *)(v6 + 8);
    if ( !v35 )
      goto LABEL_52;
    v36 = *(_QWORD *)(v6 + 16);
    if ( v36 < 0 )
      goto LABEL_52;
    if ( v13 == v38 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v38);
    v34 = v39;
    v39[v33 - 1] = v35;
    v34[v33] = v36;
    v40 = ++v13;
    v33 += 2LL;
    v6 += 24LL;
  }
  while ( v6 != v32 );
LABEL_10:
  v14 = v39;
  v48 = v39;
  v49 = v39;
  v50 = v38;
  v51 = &v39[2 * v13];
  v15 = v55;
  if ( v13 )
  {
    v47 = 0LL;
    do
    {
      v49 = v14 + 2;
      v16 = (const void *)*v14;
      if ( !*v14 )
        break;
      v17 = v14[1];
      if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*v14, v17, asc_62A99, 1LL) )
      {
        v18 = std::io::stdio::stdin();
        v19 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
        v20 = v19;
        if ( !v19 )
          alloc::alloc::handle_alloc_error(8LL, 8LL);
        *v19 = v18;
        v21 = (__int64 (__fastcall **)())&unk_2AAB78;
      }
      else
      {
        v41 = 0x1B600000000LL;
        WORD2(v42) = 0;
        LODWORD(v42) = 1;
        std::fs::OpenOptions::_open(v56, &v41);
        if ( v56[0] )
        {
          v37 = &v57;
          goto LABEL_41;
        }
        v22 = v56[1];
        v23 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
        v20 = v23;
        if ( !v23 )
          alloc::alloc::handle_alloc_error(4LL, 4LL);
        *(_DWORD *)v23 = v22;
        v21 = &off_2AAB20;
      }
      v62 = v20;
      v63 = v21;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v41, 0x2000LL, 0LL);
      if ( v41 )
        alloc::raw_vec::handle_error(v42, dest);
      v24 = dest;
      if ( !(_QWORD)dest )
        core::panicking::panic_nounwind(anon_3ea58ce9b04195e65e7596eb035a132b_2_llvm_3490124054932126836, 93LL);
      dest = 0LL;
      v44 = 0LL;
      v41 = v24;
      v42 = 0x2000LL;
      v45 = v20;
      v46 = v21;
      core::iter::adapters::try_process(&v60, &v41);
      if ( (_QWORD)v60 == 0x8000000000000000LL )
      {
        v37 = (char *)&v60 + 8;
LABEL_41:
        *(_QWORD *)(v15 + 8) = *(_QWORD *)v37;
        *(_QWORD *)v15 = 0LL;
        <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v48);
        if ( *((_QWORD *)&v52 + 1) )
        {
          hashbrown::raw::RawTableInner::drop_elements(&v52);
          hashbrown::raw::TableLayout::calculate_layout_for(&v41, 80LL, 16LL, *((_QWORD *)&v52 + 1) + 1LL);
          if ( v42 )
            _rust_dealloc(v52 - dest, v42, v41);
        }
        return v15;
      }
      v25 = v61;
      v58 = v60;
      v59 = v61;
      if ( !*((_QWORD *)&v60 + 1) || (BYTE8(v60) & 7) != 0 || v61 >= 0x555555555555556LL )
        core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(
        &v64,
        *((_QWORD *)&v60 + 1),
        *((_QWORD *)&v60 + 1) + 24 * v61);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v41, v17, 0LL);
      v26 = v42;
      if ( v41 )
        alloc::raw_vec::handle_error(v42, dest);
      v27 = (void *)dest;
      core::intrinsics::copy_nonoverlapping::precondition_check(v16, dest, 1LL, 1LL, v17);
      memcpy(v27, v16, v17);
      v66[0] = v26;
      v66[1] = v27;
      v66[2] = v17;
      v67 = v58;
      v68 = v59;
      v70 = v65;
      v69 = v64;
      v71 = v47;
      hashbrown::map::HashMap<K,V,S,A>::insert(v72, &v52, v66, &v67);
      if ( v72[0] != 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v72);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::vec::Vec<char>>>(v73);
      }
      v28 = __CFADD__(v25, v47);
      v47 += v25;
      if ( v28 )
        core::panicking::panic_const::panic_const_add_overflow(&off_2AABD0);
      v14 = v49;
    }
    while ( v49 != v51 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v48);
  v29 = v52;
  v30 = v53;
  *(_OWORD *)(v15 + 32) = v54;
  *(_OWORD *)(v15 + 16) = v30;
  *(_OWORD *)v15 = v29;
  return v15;
}
