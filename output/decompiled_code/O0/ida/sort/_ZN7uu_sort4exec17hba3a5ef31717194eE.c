__int64 __fastcall uu_sort::exec(__int64 a1, unsigned __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  bool v6; // zf
  __int128 v7; // xmm1
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  _BYTE *v14; // r15
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 *v17; // rax
  __int64 *v18; // rbp
  __int64 (__fastcall **v19)(); // rax
  __int128 v20; // xmm1
  __int64 v21; // rbx
  _OWORD *v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  int v26; // r13d
  __int64 *v27; // rax
  __int128 v28; // kr00_16
  __int128 v29; // kr10_16
  void *v30; // rsi
  _OWORD *v31; // r15
  __int64 v32; // r13
  void *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r12
  __int64 *v36; // rsi
  __int64 *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  bool v41; // cf
  unsigned __int64 v42; // rdx
  _QWORD *v43; // r13
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rax
  __int64 *v46; // rbx
  __int64 *v47; // r13
  __int64 *v48; // r15
  char v49; // al
  __int64 v50; // rbx
  const void *v51; // r13
  size_t v52; // r15
  __int64 v53; // rbx
  void *v54; // rbp
  char v55; // al
  _OWORD *v56; // rax
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm2
  char v60; // al
  __int64 v61; // rsi
  _QWORD *v62; // rbx
  char v64; // [rsp+Fh] [rbp-5D9h]
  char v65; // [rsp+Fh] [rbp-5D9h]
  __int64 v66; // [rsp+10h] [rbp-5D8h] BYREF
  _QWORD *v67; // [rsp+18h] [rbp-5D0h]
  char **v68; // [rsp+20h] [rbp-5C8h]
  __int128 v69; // [rsp+28h] [rbp-5C0h] BYREF
  __int64 v70; // [rsp+38h] [rbp-5B0h]
  _OWORD *v71; // [rsp+40h] [rbp-5A8h] BYREF
  __int64 v72; // [rsp+48h] [rbp-5A0h] BYREF
  char **v73; // [rsp+50h] [rbp-598h]
  __int128 v74; // [rsp+58h] [rbp-590h] BYREF
  void *v75[2]; // [rsp+68h] [rbp-580h]
  __m256i v76; // [rsp+78h] [rbp-570h]
  __int64 v77; // [rsp+98h] [rbp-550h] BYREF
  __int64 v78; // [rsp+A0h] [rbp-548h]
  _BYTE *v79; // [rsp+A8h] [rbp-540h]
  __int128 v80; // [rsp+B0h] [rbp-538h] BYREF
  void *v81; // [rsp+C0h] [rbp-528h]
  __int128 v82; // [rsp+D0h] [rbp-518h]
  __int128 v83; // [rsp+E0h] [rbp-508h]
  void *v84; // [rsp+F0h] [rbp-4F8h]
  _QWORD v85[4]; // [rsp+F8h] [rbp-4F0h] BYREF
  __int128 v86; // [rsp+118h] [rbp-4D0h]
  __int128 v87; // [rsp+128h] [rbp-4C0h]
  __int128 v88; // [rsp+138h] [rbp-4B0h]
  _QWORD v89[3]; // [rsp+148h] [rbp-4A0h] BYREF
  __int128 v90; // [rsp+160h] [rbp-488h] BYREF
  __int128 v91; // [rsp+170h] [rbp-478h]
  _OWORD dest[10]; // [rsp+180h] [rbp-468h] BYREF
  __int64 *v93; // [rsp+220h] [rbp-3C8h]
  char **v94; // [rsp+228h] [rbp-3C0h]
  __int128 v95; // [rsp+238h] [rbp-3B0h]
  _BYTE v96[80]; // [rsp+248h] [rbp-3A0h]
  __int128 v97; // [rsp+298h] [rbp-350h] BYREF
  __int64 v98; // [rsp+2A8h] [rbp-340h]
  __int128 v99; // [rsp+2B0h] [rbp-338h]
  __int128 v100; // [rsp+2C0h] [rbp-328h]
  __int128 v101; // [rsp+2D0h] [rbp-318h]
  __int128 v102; // [rsp+2E0h] [rbp-308h]
  __int64 v103; // [rsp+2F0h] [rbp-2F8h]
  __int64 v104; // [rsp+2F8h] [rbp-2F0h] BYREF
  __int64 v105; // [rsp+300h] [rbp-2E8h]
  __int64 v106; // [rsp+308h] [rbp-2E0h]
  _OWORD v107[2]; // [rsp+370h] [rbp-278h] BYREF
  _OWORD v108[2]; // [rsp+390h] [rbp-258h] BYREF
  __int64 v109; // [rsp+3B0h] [rbp-238h] BYREF
  int v110; // [rsp+3B8h] [rbp-230h]
  __int16 v111; // [rsp+3BCh] [rbp-22Ch]
  unsigned __int64 v112; // [rsp+3C0h] [rbp-228h]
  _OWORD src[10]; // [rsp+428h] [rbp-1C0h] BYREF
  _QWORD v114[15]; // [rsp+4C8h] [rbp-120h] BYREF
  _QWORD v115[21]; // [rsp+540h] [rbp-A8h] BYREF

  v6 = (*(_BYTE *)(a3 + 129) & 1) == 0;
  v67 = a4;
  if ( !v6 )
  {
    if ( *a4 == 0x8000000000000000LL )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = a4[1];
      if ( !v9 || (__int64)v67[2] < 0 )
        goto LABEL_112;
    }
    v11 = uu_sort::merge::replace_output_file_in_input_files(a1, a2, v9);
    v8 = v11;
    if ( v11 )
    {
      *((_QWORD *)&v97 + 1) = v11;
      v98 = v12;
      *(_QWORD *)&v97 = 3LL;
      goto LABEL_105;
    }
    v13 = a1 + 24 * a2;
    if ( *(_QWORD *)(a3 + 48) == 0x8000000000000000LL )
      uu_sort::merge::merge_with_file_limit(&v97, a1, v13, a3, a5);
    else
      uu_sort::merge::merge_with_file_limit(&v97, a1, v13, a3, a5);
    v8 = *((_QWORD *)&v97 + 1);
    if ( (_QWORD)v97 == 3LL )
      goto LABEL_105;
    *(_QWORD *)&v96[72] = v103;
    *(_OWORD *)&v96[56] = v102;
    *(_OWORD *)&v96[40] = v101;
    *(_OWORD *)&v96[24] = v100;
    *(_OWORD *)&v96[8] = v99;
    v95 = v97;
    *(_QWORD *)v96 = v98;
    v20 = *((_OWORD *)v67 + 1);
    v107[0] = *(_OWORD *)v67;
    v107[1] = v20;
    uu_sort::Output::into_write((__int64)src, (__int64 *)v107);
    dest[3] = *(_OWORD *)&v96[64];
    dest[2] = *(_OWORD *)&v96[48];
    dest[1] = *(_OWORD *)&v96[32];
    dest[0] = *(_OWORD *)&v96[16];
    v91 = *(_OWORD *)v96;
    v90 = v95;
    v8 = uu_sort::merge::FileMerger::write_all_to(&v90, a3, src);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<alloc::boxed::Box<dyn std::io::Write>>>(src);
    return v8;
  }
  if ( (*(_BYTE *)(a3 + 133) & 1) == 0 )
  {
    v85[0] = a1;
    v85[1] = a1 + 24 * a2;
    v7 = *((_OWORD *)v67 + 1);
    v108[0] = *(_OWORD *)v67;
    v108[1] = v7;
    return uu_sort::ext_sort::ext_sort(v85, a3, v108, a5);
  }
  if ( a2 > 1 )
  {
    v8 = uucore::mods::error::UUsageError::new(2LL, aOnlyOneFileAll, 29LL);
    goto LABEL_105;
  }
  if ( !a2 || !a1 )
    core::option::unwrap_failed(&off_1D3100);
  v14 = *(_BYTE **)(a1 + 8);
  if ( !v14 || (v15 = *(_QWORD *)(a1 + 16), v15 < 0) )
LABEL_112:
    core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
  v64 = *(_BYTE *)(a3 + 132);
  if ( v15 == 1 && *v14 == 45 )
  {
    v16 = std::io::stdio::stdin();
    v17 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    v18 = v17;
    if ( !v17 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v17 = v16;
    v19 = (__int64 (__fastcall **)())&unk_1D3500;
  }
  else
  {
    v109 = 0x1B600000000LL;
    v110 = 1;
    v111 = 0;
    std::fs::OpenOptions::_open(&v104, &v109, v14, v15);
    if ( (_DWORD)v104 )
    {
      v21 = v105;
      v115[0] = v105;
      std::path::Path::to_path_buf(src, v14, v15);
      *(_QWORD *)&dest[0] = *(_QWORD *)&src[1];
      v91 = src[0];
      *((_QWORD *)&v90 + 1) = v21;
      LOBYTE(v90) = 2;
      v22 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
      v8 = (__int64)v22;
      if ( !v22 )
        alloc::alloc::handle_alloc_error(8LL, 64LL);
      v23 = v90;
      v24 = v91;
      v25 = dest[0];
      v22[3] = dest[1];
      v22[2] = v25;
      v22[1] = v24;
      *v22 = v23;
      goto LABEL_105;
    }
    v26 = HIDWORD(v104);
    v27 = (__int64 *)alloc::alloc::Global::alloc_impl(1LL, 4LL, 4LL, 0LL);
    v18 = v27;
    if ( !v27 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *(_DWORD *)v27 = v26;
    v19 = &off_1D34A8;
  }
  v85[2] = v18;
  v73 = (char **)v19;
  v85[3] = v19;
  std::sync::mpmc::sync_channel(&v90, 2LL);
  v78 = v15;
  v79 = v14;
  v28 = v91;
  v69 = v90;
  v86 = v91;
  std::sync::mpmc::sync_channel(&v90, 2LL);
  v29 = v90;
  v87 = v90;
  v82 = v91;
  v88 = v91;
  <uu_sort::GlobalSettings as core::clone::Clone>::clone(src, a3);
  v93 = v18;
  v94 = v73;
  v90 = v28;
  v91 = v29;
  memcpy(dest, src, sizeof(dest));
  v112 = 0x8000000000000000LL;
  v109 = 0LL;
  LODWORD(v68) = 1;
  std::thread::Builder::spawn_unchecked_(&v104, &v109, &v90, 0LL);
  if ( !v104 )
  {
    v104 = v105;
    core::result::unwrap_failed(
      "failed to spawn threadmain",
      22LL,
      &v104,
      &anon_fe38f741e54badf7015918e7aa68e0c9_11_llvm_9495795450009312203,
      &anon_e73ee028dc74ef313b0965e1e543fc57_5_llvm_12031147188011335587);
  }
  v89[0] = v104;
  v89[1] = v105;
  v89[2] = v106;
  core::ptr::drop_in_place<std::thread::JoinInner<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>>(v89);
  v30 = &unk_19000;
  if ( *(_QWORD *)(a3 + 104) < (unsigned __int64)&unk_19000 )
    v30 = *(void **)(a3 + 104);
  uu_sort::chunks::RecycledChunk::new(v115, v30);
  v31 = (_OWORD *)*((_QWORD *)&v82 + 1);
  v32 = v82;
  std::sync::mpmc::Sender<T>::send(v114, &v69, v115);
  if ( v114[0] != 0x8000000000000000LL )
    core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v114);
  v33 = &unk_19000;
  if ( *(_QWORD *)(a3 + 104) < (unsigned __int64)&unk_19000 )
    v33 = *(void **)(a3 + 104);
  uu_sort::chunks::RecycledChunk::new(v115, v33);
  std::sync::mpmc::Sender<T>::send(v114, &v69, v115);
  if ( v114[0] != 0x8000000000000000LL )
    core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v114);
  v65 = -(v64 & 1);
  v66 = 0LL;
  v70 = v32;
  v71 = v31;
  v35 = 0LL;
  v68 = &off_1D2848;
  v73 = &off_1D2860;
  if ( !v32 )
    goto LABEL_42;
LABEL_40:
  v36 = (__int64 *)v31;
  if ( v32 == 1 )
    std::sync::mpmc::list::Channel<T>::recv(&v74, v31, v34, 1000000000LL);
  else
    std::sync::mpmc::zero::Channel<T>::recv(&v74, v31, v34, 1000000000LL);
LABEL_44:
  if ( (v74 & 1) != 0 || !*((_QWORD *)&v74 + 1) )
  {
    if ( v70 )
    {
      if ( v70 == 1 )
        std::sync::mpmc::counter::Receiver<C>::release(&v71);
      else
        std::sync::mpmc::counter::Receiver<C>::release(&v71);
    }
    else
    {
      std::sync::mpmc::counter::Receiver<C>::release(&v71);
    }
    if ( v66 )
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v66);
    if ( (_QWORD)v69 )
    {
      if ( (_QWORD)v69 == 1LL )
        std::sync::mpmc::counter::Sender<C>::release((char *)&v69 + 8);
      else
        std::sync::mpmc::counter::Sender<C>::release((char *)&v69 + 8);
    }
    else
    {
      std::sync::mpmc::counter::Sender<C>::release((char *)&v69 + 8);
    }
    v8 = 0LL;
    goto LABEL_105;
  }
  v72 = *((_QWORD *)&v74 + 1);
  if ( !++v35 )
    goto LABEL_111;
  v38 = v66;
  v66 = 0LL;
  if ( v38 )
  {
    v77 = v38;
    v39 = *(_QWORD *)(v38 + 32);
    if ( !v39 )
      goto LABEL_112;
    if ( (v39 & 7) != 0 )
      goto LABEL_112;
    v40 = *(_QWORD *)(v38 + 40);
    if ( v40 > 0x555555555555555LL )
      goto LABEL_112;
    v41 = v40 == 0;
    v42 = v40 - 1;
    if ( v41 )
      goto LABEL_115;
    v43 = *(_QWORD **)(*((_QWORD *)&v74 + 1) + 32LL);
    if ( !v43 )
      goto LABEL_112;
    if ( ((unsigned __int8)v43 & 7) != 0 )
      goto LABEL_112;
    v44 = *(_QWORD *)(*((_QWORD *)&v74 + 1) + 40LL);
    if ( v44 > 0x555555555555555LL )
      goto LABEL_112;
    if ( !v44 )
    {
      v73 = &off_1D2878;
LABEL_115:
      core::option::unwrap_failed(v73);
    }
    if ( (char)uu_sort::compare_by(v39 + 24 * v42, v43, a3, v38 + 48, *((_QWORD *)&v74 + 1) + 48LL) > v65 )
    {
      std::sys::os_str::bytes::Slice::to_owned(&v74, v79, v78);
      v84 = v75[0];
      v83 = v74;
      alloc::str::<impl alloc::borrow::ToOwned for str>::to_owned(&v80, *v43, v43[1]);
      v60 = *(_BYTE *)(a3 + 134) & 1;
      v76.m256i_i64[0] = (__int64)v84;
      *(_OWORD *)v75 = v83;
      *((_QWORD *)&v74 + 1) = v35;
      *(_OWORD *)&v76.m256i_u64[1] = v80;
      v76.m256i_i64[3] = (__int64)v81;
      BYTE1(v74) = v60;
      LOBYTE(v74) = 0;
      v8 = <T as core::convert::Into<U>>::into(&v74);
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v77);
      goto LABEL_79;
    }
    uu_sort::chunks::Chunk::recycle(&v109, v77);
    v36 = (__int64 *)&v69;
    std::sync::mpmc::Sender<T>::send(&v104, &v69, &v109);
    if ( v104 != 0x8000000000000000LL )
      core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(&v104);
  }
  v37 = *(__int64 **)(v72 + 32);
  if ( !v37 )
    goto LABEL_112;
  v34 = *(_QWORD *)(v72 + 32) & 7LL;
  if ( ((unsigned __int8)v37 & 7) != 0 )
    goto LABEL_112;
  v45 = *(_QWORD *)(v72 + 40);
  if ( v45 > 0x555555555555555LL )
    goto LABEL_112;
  v46 = &v37[3 * v45];
  v47 = 0LL;
  do
  {
    if ( v37 == v46 )
    {
LABEL_72:
      v50 = v72;
      if ( v66 )
        self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v66);
      v66 = v50;
      v32 = v70;
      v31 = v71;
      if ( v70 )
        goto LABEL_40;
LABEL_42:
      v36 = (__int64 *)v31;
      std::sync::mpmc::array::Channel<T>::recv(&v74, v31, v34, 1000000000LL);
      goto LABEL_44;
    }
    v48 = v37 + 3;
    if ( v47 )
    {
      v47 = v18;
      v6 = v18 == 0LL;
      v18 = v37;
      if ( v6 )
        goto LABEL_72;
      if ( !++v35 )
        goto LABEL_110;
    }
    else
    {
      if ( v48 == v46 )
        goto LABEL_72;
      v18 = v37 + 3;
      v48 = v37 + 6;
      v47 = v37;
      if ( !++v35 )
      {
LABEL_110:
        v68 = &off_1D2890;
LABEL_111:
        core::panicking::panic_const::panic_const_add_overflow(v68, v36, v34, v37);
      }
    }
    v36 = v18;
    v49 = uu_sort::compare_by(v47, v18, a3, v72 + 48, v72 + 48);
    v37 = v48;
  }
  while ( v49 <= v65 );
  std::sys::os_str::bytes::Slice::to_owned(&v74, v79, v78);
  v81 = v75[0];
  v80 = v74;
  v51 = (const void *)*v18;
  v52 = v18[1];
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v74, v52, 0LL);
  v53 = *((_QWORD *)&v74 + 1);
  if ( (_QWORD)v74 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v74 + 1), v75[0]);
  v54 = v75[0];
  core::intrinsics::copy_nonoverlapping::precondition_check(v51, v75[0], 1LL, 1LL, v52);
  memcpy(v54, v51, v52);
  v55 = *(_BYTE *)(a3 + 134) & 1;
  v76.m256i_i64[0] = (__int64)v81;
  *(_OWORD *)v75 = v80;
  *((_QWORD *)&v74 + 1) = v35;
  v76.m256i_i64[1] = v53;
  v76.m256i_i64[2] = (__int64)v54;
  v76.m256i_i64[3] = v52;
  BYTE1(v74) = v55;
  LOBYTE(v74) = 0;
  v56 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 64LL, 0LL);
  v8 = (__int64)v56;
  if ( !v56 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v57 = v74;
  v58 = *(_OWORD *)v75;
  v59 = *(_OWORD *)v76.m256i_i8;
  v56[3] = *(_OWORD *)&v76.m256i_u64[2];
  v56[2] = v59;
  v56[1] = v58;
  *v56 = v57;
LABEL_79:
  self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v72);
  if ( v70 )
  {
    if ( v70 == 1 )
      std::sync::mpmc::counter::Receiver<C>::release(&v71);
    else
      std::sync::mpmc::counter::Receiver<C>::release(&v71);
  }
  else
  {
    std::sync::mpmc::counter::Receiver<C>::release(&v71);
  }
  if ( v66 )
    self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v66);
  if ( (_QWORD)v69 )
  {
    if ( (_QWORD)v69 == 1LL )
      std::sync::mpmc::counter::Sender<C>::release((char *)&v69 + 8);
    else
      std::sync::mpmc::counter::Sender<C>::release((char *)&v69 + 8);
  }
  else
  {
    std::sync::mpmc::counter::Sender<C>::release((char *)&v69 + 8);
  }
LABEL_105:
  v61 = *v67;
  if ( *v67 != 0x8000000000000000LL )
  {
    if ( v61 )
      _rust_dealloc(v67[1], v61, 1LL);
    v62 = v67;
    std::sys::pal::unix::fs::debug_assert_fd_is_open(*((unsigned int *)v67 + 6));
    close(*((_DWORD *)v62 + 6));
  }
  return v8;
}
