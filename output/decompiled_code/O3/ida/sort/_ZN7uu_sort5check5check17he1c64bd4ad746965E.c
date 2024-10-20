_OWORD *__fastcall uu_sort::check::check(_BYTE *a1, __int64 a2, unsigned __int64 a3)
{
  char v4; // r14
  _OWORD *v5; // r15
  volatile signed __int64 *v6; // rax
  volatile signed __int64 *v7; // rbx
  void *v8; // rax
  void *v9; // r14
  char v10; // r15
  void *v11; // r15
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // r14
  __int64 i; // r13
  __int64 v20; // r15
  _QWORD *v21; // rax
  __int64 v22; // rdx
  unsigned __int8 **v23; // rbx
  unsigned __int64 v24; // rbx
  unsigned __int8 **v25; // rdi
  unsigned __int8 **v26; // r15
  __int64 v27; // r13
  __int64 v28; // r12
  unsigned __int8 **v29; // rbx
  char v30; // al
  __int64 v31; // r14
  unsigned __int8 *v32; // r12
  signed __int64 v33; // r15
  __int64 v34; // rax
  void *v35; // rbx
  _OWORD *v36; // rax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm2
  unsigned __int64 v40; // rbx
  int v41; // r14d
  char v42; // al
  volatile signed __int64 *v43; // rbx
  signed __int64 v44; // rax
  __int64 v45; // rcx
  signed __int64 v46; // rtt
  char v47; // al
  __int128 v49; // kr10_16
  __int64 v50; // r13
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm2
  unsigned __int64 v54; // rbx
  char v55; // al
  volatile signed __int64 *v56; // rbx
  signed __int64 v57; // rax
  __int64 v58; // rcx
  signed __int64 v59; // rtt
  char v60; // al
  _BYTE v61[9]; // [rsp+7Fh] [rbp-4A9h]
  unsigned __int64 v62; // [rsp+80h] [rbp-4A8h]
  char v63; // [rsp+8Fh] [rbp-499h]
  char v64; // [rsp+90h] [rbp-498h]
  char v65; // [rsp+90h] [rbp-498h]
  __int64 v66; // [rsp+90h] [rbp-498h]
  char v67; // [rsp+98h] [rbp-490h]
  _QWORD *v68; // [rsp+98h] [rbp-490h]
  __int64 v69; // [rsp+98h] [rbp-490h]
  __int64 v70; // [rsp+A0h] [rbp-488h] BYREF
  volatile signed __int64 *v71; // [rsp+A8h] [rbp-480h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-478h]
  __int128 v73; // [rsp+B8h] [rbp-470h] BYREF
  unsigned __int64 v74; // [rsp+C8h] [rbp-460h]
  __int128 v75; // [rsp+D0h] [rbp-458h] BYREF
  char **v76; // [rsp+E8h] [rbp-440h]
  __m128 v77; // [rsp+F0h] [rbp-438h]
  _BYTE *v78; // [rsp+108h] [rbp-420h]
  __int64 v79; // [rsp+110h] [rbp-418h]
  __int128 v80; // [rsp+118h] [rbp-410h]
  __int128 v81; // [rsp+128h] [rbp-400h] BYREF
  unsigned __int64 v82; // [rsp+138h] [rbp-3F0h]
  __int128 v83; // [rsp+140h] [rbp-3E8h] BYREF
  __int128 v84; // [rsp+150h] [rbp-3D8h]
  __int128 v85; // [rsp+160h] [rbp-3C8h] BYREF
  unsigned __int64 v86; // [rsp+170h] [rbp-3B8h] BYREF
  __int128 v87; // [rsp+178h] [rbp-3B0h]
  unsigned __int64 v88; // [rsp+188h] [rbp-3A0h]
  __int64 v89; // [rsp+1E0h] [rbp-348h]
  volatile signed __int64 *v90; // [rsp+1E8h] [rbp-340h]
  __int64 v91; // [rsp+1F0h] [rbp-338h]
  void *v92; // [rsp+1F8h] [rbp-330h]
  _OWORD src[50]; // [rsp+200h] [rbp-328h] BYREF

  v4 = *(_BYTE *)(a3 + 132);
  uu_sort::open(src, a1, a2);
  v5 = (_OWORD *)*((_QWORD *)&src[0] + 1);
  if ( *(_QWORD *)&src[0] )
    return v5;
  v64 = v4;
  v79 = a2;
  v80 = *(_OWORD *)((char *)src + 8);
  std::sync::mpmc::array::Channel<T>::with_capacity(src, 2LL);
  *(_QWORD *)&src[32] = 1LL;
  *((_QWORD *)&src[32] + 1) = 1LL;
  LOBYTE(src[33]) = 0;
  v6 = (volatile signed __int64 *)_rust_alloc(640LL, 128LL);
  if ( !v6 )
    alloc::alloc::handle_alloc_error(128LL, 640LL);
  v7 = v6;
  memcpy((void *)v6, src, 0x280uLL);
  v70 = 0LL;
  v71 = v7;
  v89 = 0LL;
  v90 = v7;
  std::sync::mpmc::array::Channel<T>::with_capacity(src, 2LL);
  *(_QWORD *)&src[32] = 1LL;
  *((_QWORD *)&src[32] + 1) = 1LL;
  LOBYTE(src[33]) = 0;
  v8 = (void *)_rust_alloc(640LL, 128LL);
  if ( !v8 )
    alloc::alloc::handle_alloc_error(128LL, 640LL);
  v9 = v8;
  memcpy(v8, src, 0x280uLL);
  v91 = 0LL;
  v92 = v9;
  *(_QWORD *)&v84 = 0LL;
  *((_QWORD *)&v84 + 1) = v9;
  if ( *(_BYTE *)(a3 + 135) )
  {
    v75 = *(_OWORD *)(a3 + 136);
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  v67 = *(_BYTE *)(a3 + 152);
  v77 = (__m128)*(unsigned __int64 *)(a3 + 124);
  LOBYTE(v72) = *(_BYTE *)(a3 + 133);
  v61[0] = *(_BYTE *)(a3 + 134);
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v81, a3);
  v61[1] = v10;
  v78 = a1;
  LODWORD(v76) = *(_DWORD *)(a3 + 120);
  <alloc::string::String as core::clone::Clone>::clone(&v73, a3 + 24);
  v63 = *(_BYTE *)(a3 + 153);
  v11 = *(void **)(a3 + 104);
  v12 = 0x8000000000000000LL;
  if ( *(_QWORD *)(a3 + 48) != 0x8000000000000000LL )
  {
    <alloc::string::String as core::clone::Clone>::clone(src, a3 + 48);
    v12 = *(_QWORD *)&src[0];
    v83 = *(_OWORD *)((char *)src + 8);
  }
  v85 = v81;
  v86 = v82;
  v88 = v74;
  *(_OWORD *)((char *)&src[10] + 8) = v75;
  *(_OWORD *)((char *)&src[5] + 8) = v83;
  src[12] = v80;
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = v7;
  v87 = v73;
  *(_QWORD *)&src[1] = 0LL;
  *((_QWORD *)&src[1] + 1) = v9;
  *((_QWORD *)&src[4] + 1) = v74;
  *(_QWORD *)&src[3] = v82;
  *(_OWORD *)((char *)&src[3] + 8) = v73;
  src[2] = v81;
  *(_QWORD *)&src[5] = v12;
  v13 = *(_QWORD *)(a3 + 88);
  *(_OWORD *)((char *)&src[6] + 8) = *(_OWORD *)(a3 + 72);
  *((_QWORD *)&src[7] + 1) = v13;
  LOBYTE(src[8]) = *(_BYTE *)(a3 + 96);
  v14 = *(_QWORD *)(a3 + 112);
  *((_QWORD *)&src[8] + 1) = v11;
  *(_QWORD *)&src[9] = v14;
  DWORD2(src[9]) = (_DWORD)v76;
  _mm_storel_ps((double *)((char *)&src[9] + 12), v77);
  BYTE4(src[10]) = v64;
  BYTE5(src[10]) = v72;
  WORD3(src[10]) = *(_WORD *)v61;
  BYTE8(src[11]) = v67;
  BYTE9(src[11]) = v63;
  v86 = 0x8000000000000000LL;
  *(_QWORD *)&v85 = 0LL;
  std::thread::Builder::spawn_unchecked(&v73, &v85, src);
  if ( !(_QWORD)v73 )
  {
    *(_QWORD *)&v85 = *((_QWORD *)&v73 + 1);
    core::result::unwrap_failed(aFailedToSpawnT_0, 22LL, &v85, &off_193B20, &off_193CC0);
  }
  v86 = v74;
  v85 = v73;
  <std::sys::pal::unix::thread::Thread as core::ops::drop::Drop>::drop(&v86);
  if ( !_InterlockedDecrement64((volatile signed __int64 *)v85) )
    alloc::sync::Arc<T,A>::drop_slow(&v85);
  if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v85 + 1)) )
    alloc::sync::Arc<T,A>::drop_slow((char *)&v85 + 8);
  v15 = &unk_19000;
  if ( v11 < &unk_19000 )
    v15 = v11;
  if ( v11 )
  {
    v16 = _rust_alloc_zeroed(v15, 1LL);
    if ( !v16 )
LABEL_22:
      alloc::raw_vec::handle_error(1LL, v15);
  }
  else
  {
    v16 = 1LL;
  }
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 8LL;
  src[1] = 0LL;
  src[2] = 8uLL;
  *((_QWORD *)&src[3] + 1) = 8LL;
  src[4] = 0LL;
  src[5] = 8uLL;
  *(_QWORD *)&src[6] = v15;
  *((_QWORD *)&src[6] + 1) = v16;
  *(_QWORD *)&src[7] = v15;
  std::sync::mpmc::Sender<T>::send(&v85, &v70, src);
  core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(&v85);
  if ( v11 )
  {
    v17 = _rust_alloc_zeroed(v15, 1LL);
    if ( !v17 )
      goto LABEL_22;
  }
  else
  {
    v17 = 1LL;
  }
  *(_QWORD *)&src[0] = 0LL;
  *((_QWORD *)&src[0] + 1) = 8LL;
  src[1] = 0LL;
  src[2] = 8uLL;
  *((_QWORD *)&src[3] + 1) = 8LL;
  src[4] = 0LL;
  src[5] = 8uLL;
  *(_QWORD *)&src[6] = v15;
  *((_QWORD *)&src[6] + 1) = v17;
  *(_QWORD *)&src[7] = v15;
  std::sync::mpmc::Sender<T>::send(&v85, &v70, src);
  v62 = a3;
  v65 = -v64;
  core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(&v85);
  *(_QWORD *)&v75 = 0LL;
  v72 = v84;
  v73 = v84;
  v77.m128_u64[0] = *((_QWORD *)&v84 + 1);
  v18 = 0LL;
  v76 = &off_193CD8;
  for ( i = 0LL; ; i = v20 )
  {
    v21 = (_QWORD *)std::sync::mpmc::Receiver<T>::recv(&v73);
    if ( !v21 )
    {
      if ( v72 )
      {
        if ( (_DWORD)v72 == 1 )
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v73 + 8);
        else
          std::sync::mpmc::counter::Receiver<C>::release((char *)&v73 + 8);
      }
      else
      {
        v54 = v77.m128_u64[0];
        if ( !_InterlockedDecrement64((volatile signed __int64 *)(v77.m128_u64[0] + 520)) )
        {
          std::sync::mpmc::array::Channel<T>::disconnect_receivers(v54);
          v55 = *(_BYTE *)(v54 + 528);
          *(_BYTE *)(v54 + 528) = 1;
          if ( v55 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v54);
        }
      }
      if ( (_QWORD)v75 )
        self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v75);
      if ( v70 == 2 )
      {
        std::sync::mpmc::counter::Sender<C>::release(&v71);
      }
      else if ( (_DWORD)v70 == 1 )
      {
        std::sync::mpmc::counter::Sender<C>::release(&v71);
      }
      else
      {
        v56 = v71;
        if ( !_InterlockedDecrement64(v71 + 64) )
        {
          v57 = *((_QWORD *)v56 + 16);
          v58 = *((_QWORD *)v56 + 50);
          do
          {
            v59 = v57;
            v57 = _InterlockedCompareExchange64(v56 + 16, v58 | v57, v57);
          }
          while ( v59 != v57 );
          if ( (v57 & v56[50]) == 0 )
            std::sync::mpmc::waker::SyncWaker::disconnect(v56 + 40);
          v60 = *((_BYTE *)v56 + 528);
          *((_BYTE *)v56 + 528) = 1;
          if ( v60 )
            core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::RecycledChunk>>>>(v56);
        }
      }
      return 0LL;
    }
    *(_QWORD *)&v83 = v21;
    v20 = i + 1;
    *(_QWORD *)&v75 = 0LL;
    v68 = v21;
    if ( v18 )
    {
      *(_QWORD *)&v81 = v18;
      v22 = v18[5];
      if ( !v22 )
        goto LABEL_90;
      if ( !v21[5] )
      {
        v76 = &off_193CF0;
LABEL_90:
        core::option::unwrap_failed(v76);
      }
      v23 = (unsigned __int8 **)v21[4];
      if ( (char)uu_sort::compare_by((unsigned __int8 **)(v18[4] + 24 * v22 - 24), v23, v62, v18 + 6, v21 + 6) > v65 )
      {
        std::sys::os_str::bytes::Slice::to_owned(src, v78, v79);
        v49 = src[0];
        v50 = *(_QWORD *)&src[1];
        <T as alloc::slice::hack::ConvertVec>::to_vec(&v85, *v23, v23[1]);
        *((_QWORD *)&src[3] + 1) = v86;
        *(_OWORD *)((char *)&src[2] + 8) = v85;
        src[1] = v49;
        *(_QWORD *)&src[2] = v50;
        *((_QWORD *)&src[0] + 1) = v20;
        BYTE1(src[0]) = v61[0];
        LOBYTE(src[0]) = 0;
        v5 = (_OWORD *)alloc::alloc::exchange_malloc();
        v51 = src[0];
        v52 = src[1];
        v53 = src[2];
        v5[3] = src[3];
        v5[2] = v53;
        v5[1] = v52;
        *v5 = v51;
        self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v81);
        goto LABEL_45;
      }
      uu_sort::chunks::Chunk::recycle(src, v18);
      std::sync::mpmc::Sender<T>::send(&v85, &v70, src);
      core::ptr::drop_in_place<core::result::Result<(),std::sync::mpsc::SendError<uu_sort::chunks::RecycledChunk>>>(&v85);
      v21 = v68;
    }
    v24 = v21[5];
    if ( v24 >= 2 )
      break;
LABEL_26:
    v18 = v68;
    *(_QWORD *)&v75 = v68;
  }
  v25 = (unsigned __int8 **)v68[4];
  v26 = v25 + 3;
  v27 = i + 2;
  if ( (char)uu_sort::compare_by(v25, v25 + 3, v62, v68 + 6, v68 + 6) <= v65 )
  {
    v28 = 24 * v24 - 48;
    while ( v28 )
    {
      v29 = v26 + 3;
      v30 = uu_sort::compare_by(v26, v26 + 3, v62, v68 + 6, v68 + 6);
      ++v27;
      v28 -= 24LL;
      v26 += 3;
      if ( v30 > v65 )
        goto LABEL_38;
    }
    v20 = v27;
    goto LABEL_26;
  }
  v29 = v25 + 3;
LABEL_38:
  std::sys::os_str::bytes::Slice::to_owned(src, v78, v79);
  *(_QWORD *)&v61[1] = *((_QWORD *)&src[0] + 1);
  v66 = *(_QWORD *)&src[0];
  v31 = *(_QWORD *)&src[1];
  v32 = *v29;
  v33 = (signed __int64)v29[1];
  if ( !v33 )
  {
    v35 = &dword_0 + 1;
    goto LABEL_43;
  }
  if ( v33 < 0 )
  {
    v69 = 0LL;
LABEL_96:
    alloc::raw_vec::handle_error(v69, v33);
  }
  v69 = 1LL;
  v34 = _rust_alloc(v33, 1LL);
  if ( !v34 )
    goto LABEL_96;
  v35 = (void *)v34;
LABEL_43:
  memcpy(v35, v32, v33);
  *(_QWORD *)&src[1] = v66;
  *((_QWORD *)&src[1] + 1) = *(_QWORD *)&v61[1];
  *(_QWORD *)&src[2] = v31;
  *((_QWORD *)&src[0] + 1) = v27;
  *((_QWORD *)&src[2] + 1) = v33;
  *(_QWORD *)&src[3] = v35;
  *((_QWORD *)&src[3] + 1) = v33;
  BYTE1(src[0]) = v61[0];
  LOBYTE(src[0]) = 0;
  v36 = (_OWORD *)_rust_alloc(64LL, 8LL);
  if ( !v36 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v5 = v36;
  v37 = src[0];
  v38 = src[1];
  v39 = src[2];
  v36[3] = src[3];
  v36[2] = v39;
  v36[1] = v38;
  *v36 = v37;
LABEL_45:
  v40 = v77.m128_u64[0];
  v41 = v72;
  self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v83);
  if ( v41 == 2 )
  {
    std::sync::mpmc::counter::Receiver<C>::release((char *)&v73 + 8);
  }
  else if ( v41 == 1 )
  {
    std::sync::mpmc::counter::Receiver<C>::release((char *)&v73 + 8);
  }
  else if ( !_InterlockedDecrement64((volatile signed __int64 *)(v40 + 520)) )
  {
    std::sync::mpmc::array::Channel<T>::disconnect_receivers(v40);
    v42 = *(_BYTE *)(v40 + 528);
    *(_BYTE *)(v40 + 528) = 1;
    if ( v42 )
      core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::Chunk>>>>(v40);
  }
  if ( (_QWORD)v75 )
    self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v75);
  if ( v70 == 2 )
  {
    std::sync::mpmc::counter::Sender<C>::release(&v71);
  }
  else if ( (_DWORD)v70 == 1 )
  {
    std::sync::mpmc::counter::Sender<C>::release(&v71);
  }
  else
  {
    v43 = v71;
    if ( !_InterlockedDecrement64(v71 + 64) )
    {
      v44 = *((_QWORD *)v43 + 16);
      v45 = *((_QWORD *)v43 + 50);
      do
      {
        v46 = v44;
        v44 = _InterlockedCompareExchange64(v43 + 16, v45 | v44, v44);
      }
      while ( v46 != v44 );
      if ( (v44 & v43[50]) == 0 )
        std::sync::mpmc::waker::SyncWaker::disconnect(v43 + 40);
      v47 = *((_BYTE *)v43 + 528);
      *((_BYTE *)v43 + 528) = 1;
      if ( v47 )
        core::ptr::drop_in_place<alloc::boxed::Box<std::sync::mpmc::counter::Counter<std::sync::mpmc::array::Channel<uu_sort::chunks::RecycledChunk>>>>(v43);
    }
  }
  return v5;
}
