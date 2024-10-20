__int64 __fastcall uu_sort::merge::FileMerger::write_all_to(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbp
  _QWORD *v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // r15
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // rax
  __int64 v22; // rbp
  _QWORD *v23; // rdi
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  __int64 v28; // r15
  __int64 v29; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 *v35; // [rsp+8h] [rbp-240h]
  __int64 v36; // [rsp+10h] [rbp-238h] BYREF
  __int64 v37; // [rsp+18h] [rbp-230h]
  __int128 v38; // [rsp+20h] [rbp-228h] BYREF
  __int64 v39; // [rsp+30h] [rbp-218h]
  __int64 *v40; // [rsp+38h] [rbp-210h]
  _QWORD v41[3]; // [rsp+40h] [rbp-208h] BYREF
  __int128 v42; // [rsp+58h] [rbp-1F0h] BYREF
  __int128 v43; // [rsp+68h] [rbp-1E0h]
  __int128 v44; // [rsp+78h] [rbp-1D0h]
  __int128 v45; // [rsp+88h] [rbp-1C0h]
  __int128 v46; // [rsp+98h] [rbp-1B0h]
  __int128 v47; // [rsp+A8h] [rbp-1A0h]
  __int128 v48; // [rsp+B8h] [rbp-190h]
  __int64 v49; // [rsp+C8h] [rbp-180h]
  __int64 v50; // [rsp+D0h] [rbp-178h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-170h]
  __int64 v52; // [rsp+E0h] [rbp-168h]
  _QWORD v53[5]; // [rsp+E8h] [rbp-160h] BYREF
  _BYTE v54[24]; // [rsp+110h] [rbp-138h] BYREF
  __int128 v55; // [rsp+128h] [rbp-120h]
  __int128 v56; // [rsp+138h] [rbp-110h]
  __int128 v57; // [rsp+148h] [rbp-100h]
  __int128 v58; // [rsp+158h] [rbp-F0h]
  __int128 v59; // [rsp+168h] [rbp-E0h]
  __int128 v60; // [rsp+178h] [rbp-D0h]
  __int64 v61; // [rsp+188h] [rbp-C0h]
  _BYTE v62[8]; // [rsp+198h] [rbp-B0h] BYREF
  _QWORD v63[21]; // [rsp+1A0h] [rbp-A8h] BYREF

  v3 = a3;
  v40 = a2;
  v35 = a1 + 2;
  v5 = a1 + 9;
  v6 = a1[4];
  v37 = a3;
  do
  {
    v7 = a1[3];
    if ( !v7 || (v7 & 7) != 0 || v6 > 0x333333333333333LL )
      core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_33_llvm_17008735617955824143, 162LL);
    if ( v6 )
    {
      v8 = *(__int64 **)(v7 + 16);
      if ( !*v8 )
        core::panicking::panic_nounwind(anon_1b995ca2a79ea2192d4dd4b36beeda41_17_llvm_9151959338553233907, 104LL);
      v9 = *v8 + 1;
      *v8 = v9;
      if ( !v9 )
        BUG();
      v10 = *(_QWORD *)(v7 + 16);
      v11 = *(_OWORD *)(v7 + 24);
      v39 = v5[2];
      v38 = *(_OWORD *)v5;
      a1[9] = v10;
      *((_OWORD *)a1 + 5) = v11;
      v12 = *(_QWORD *)(v7 + 16);
      *(_QWORD *)&v42 = v7;
      *((_QWORD *)&v42 + 1) = v40;
      *(_QWORD *)&v43 = &v38;
      *((_QWORD *)&v43 + 1) = v3;
      uu_sort::merge::FileMerger::write_next::{{closure}}(&v42, a2, *(_QWORD *)(v12 + 16) + 24LL);
      if ( *(_QWORD *)(v7 + 24) == -1LL )
        core::panicking::panic_const::panic_const_add_overflow(&off_1D4D78, a2, v13, v14);
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 40LL) == *(_QWORD *)(v7 + 24) + 1LL )
      {
        v15 = *(_QWORD *)(v7 + 8);
        if ( *(_QWORD *)v7 )
        {
          if ( *(_QWORD *)v7 == 1LL )
            std::sync::mpmc::list::Channel<T>::recv(&v42, v15, v13, 1000000000LL);
          else
            std::sync::mpmc::zero::Channel<T>::recv(&v42, v15, v13, 1000000000LL);
        }
        else
        {
          std::sync::mpmc::array::Channel<T>::recv(&v42, v15, v13, 1000000000LL);
        }
        if ( (v42 & 1) != 0 )
          v18 = 0LL;
        else
          v18 = *((_QWORD *)&v42 + 1);
        v36 = v18;
        if ( v18 )
        {
          v41[2] = v18;
          if ( !a1[4] )
            core::option::unwrap_failed(&off_1D4DC0);
          *(_QWORD *)&v42 = 1LL;
          *((_QWORD *)&v42 + 1) = 1LL;
          *(_QWORD *)&v43 = v18;
          v19 = alloc::alloc::Global::alloc_impl(1LL, 8LL, 24LL, 0LL);
          v20 = v19;
          if ( !v19 )
            alloc::alloc::handle_alloc_error(8LL, 24LL);
          *(_QWORD *)(v19 + 16) = v43;
          *(_OWORD *)v19 = v42;
          v53[0] = v19;
          v21 = a1[4];
          if ( !v21 )
            core::panicking::panic(aAssertionFaile_24, 39LL, &off_1D4BC8);
          if ( v21 > 0x333333333333333LL )
            goto LABEL_64;
          v22 = a1[3];
          if ( !v22 || (v22 & 7) != 0 )
            goto LABEL_64;
          --**(_QWORD **)(v22 + 16);
          v23 = *(_QWORD **)(v22 + 16);
          if ( !*v23 )
          {
            self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(v23 + 2);
            --*(_QWORD *)(*(_QWORD *)(v22 + 16) + 8LL);
            v24 = *(_QWORD *)(v22 + 16);
            if ( !*(_QWORD *)(v24 + 8) )
              _rust_dealloc(v24, 24LL, 8LL);
          }
          *(_QWORD *)(v22 + 16) = v20;
          v25 = a1[4];
          if ( !v25 )
            core::panicking::panic(aAssertionFaile_24, 39LL, &off_1D4BC8);
          v3 = v37;
          if ( v25 > 0x333333333333333LL )
            goto LABEL_64;
          v26 = a1[3];
          if ( !v26 || (v26 & 7) != 0 )
            goto LABEL_64;
          *(_QWORD *)(v26 + 24) = 0LL;
          a2 = 0LL;
          binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(v35, 0LL, a1[4]);
        }
        else
        {
          a2 = v35;
          binary_heap_plus::binary_heap::BinaryHeap<T,C>::pop(v53, v35);
          if ( v53[0] != 3LL )
            core::ptr::drop_in_place<uu_sort::merge::MergeableFile>(v53);
          if ( v36 )
            self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(&v36);
        }
      }
      else
      {
        v16 = a1[4];
        if ( !v16 )
          core::option::unwrap_failed(&off_1D4D90);
        if ( v16 > 0x333333333333333LL || (v17 = a1[3]) == 0 || (v17 & 7) != 0 )
LABEL_64:
          core::panicking::panic_nounwind(anon_1499ffac6f47c489d51642f1e0e6062b_39_llvm_17008735617955824143, 166LL);
        if ( *(_QWORD *)(v17 + 24) == -1LL )
          core::panicking::panic_const::panic_const_add_overflow(&off_1D4DA8, a2, v13, 0LL);
        ++*(_QWORD *)(v17 + 24);
        a2 = 0LL;
        binary_heap_plus::binary_heap::BinaryHeap<T,C>::sift_down_range(v35, 0LL, a1[4]);
      }
      v27 = v38;
      if ( (_QWORD)v38 )
      {
        if ( *(_QWORD *)v38 == 1LL )
        {
          v28 = v39;
          v29 = *(_QWORD *)(v38 + 16);
          *(_QWORD *)v38 = 0LL;
          if ( v27 != -1 && (*(_QWORD *)(v27 + 8))-- == 1LL )
          {
            _rust_dealloc(v27, 24LL, 8LL);
            v3 = v37;
          }
          uu_sort::chunks::Chunk::recycle(&v42, v29);
          *(_QWORD *)v54 = v28;
          v61 = v49;
          v60 = v48;
          v59 = v47;
          v58 = v46;
          v57 = v45;
          v56 = v44;
          v55 = v43;
          *(_OWORD *)&v54[8] = v42;
          a2 = a1;
          std::sync::mpmc::Sender<T>::send(v62, a1, v54);
          if ( v63[0] != 0x8000000000000000LL )
            core::ptr::drop_in_place<uu_sort::chunks::RecycledChunk>(v63);
        }
        else
        {
          --*(_QWORD *)v38;
        }
      }
    }
    v6 = a1[4];
  }
  while ( v6 );
  v31 = *a1;
  v32 = a1[1];
  *(_QWORD *)v54 = v31;
  *(_QWORD *)&v54[8] = v32;
  if ( v31 )
  {
    if ( v31 == 1 )
      std::sync::mpmc::counter::Sender<C>::release(&v54[8]);
    else
      std::sync::mpmc::counter::Sender<C>::release(&v54[8]);
  }
  else
  {
    std::sync::mpmc::counter::Sender<C>::release(&v54[8]);
  }
  *(_QWORD *)&v54[16] = a1[8];
  *(_OWORD *)v54 = *((_OWORD *)a1 + 3);
  std::thread::JoinInner<T>::join(&v50, v54);
  v33 = v51;
  if ( v50 )
  {
    v41[0] = v51;
    v41[1] = v52;
    core::result::unwrap_failed(aCalledResultUn_6, 43LL, v41, &off_1D4AF8, &off_1D4D60);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<uu_sort::merge::MergeableFile>>(v35);
  if ( *v5 )
  {
    if ( !--*(_QWORD *)*v5 )
    {
      self_cell::unsafe_self_cell::UnsafeSelfCell<ContainedIn,Owner,DependentStatic>::drop_joined(*v5 + 16LL);
      if ( !--*(_QWORD *)(*v5 + 8LL) )
        _rust_dealloc(*v5, 24LL, 8LL);
    }
  }
  return v33;
}
