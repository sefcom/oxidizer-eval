_OWORD *__fastcall uu_ln::link_files_in_dir(__int64 a1, __int64 a2, void *a3, size_t a4, __int64 a5)
{
  size_t v6; // r15
  void *v7; // r12
  _QWORD *v9; // rax
  __int128 *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rbx
  void *v21; // r14
  __int64 v22; // rax
  void *v23; // rdx
  void *v24; // r8
  void *v25; // rbx
  size_t v26; // r14
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // r14
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  void (__fastcall **v40)(__int64); // rdx
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r14
  void (__fastcall **v44)(__int64); // rax
  void (__fastcall *v45)(__int64); // rsi
  void *v46; // rbx
  size_t v47; // rbp
  __int64 v48; // r14
  void *v49; // r13
  size_t v50; // r12
  void *v51; // r15
  _OWORD *result; // rax
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  _OWORD *v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  _OWORD *v58; // rbx
  char v59; // [rsp+Ch] [rbp-56Ch]
  __int64 v60; // [rsp+10h] [rbp-568h] BYREF
  void (__fastcall **v61)(__int64); // [rsp+18h] [rbp-560h]
  char v62[8]; // [rsp+20h] [rbp-558h] BYREF
  void *src; // [rsp+28h] [rbp-550h]
  size_t n; // [rsp+30h] [rbp-548h] BYREF
  __int64 v65; // [rsp+38h] [rbp-540h]
  __int64 v66; // [rsp+40h] [rbp-538h] BYREF
  __int64 v67; // [rsp+48h] [rbp-530h] BYREF
  __int128 v68; // [rsp+50h] [rbp-528h] BYREF
  void *dest[2]; // [rsp+60h] [rbp-518h]
  __int128 v70; // [rsp+70h] [rbp-508h]
  __int128 v71; // [rsp+80h] [rbp-4F8h]
  __int64 v72; // [rsp+90h] [rbp-4E8h]
  __int128 v73; // [rsp+A0h] [rbp-4D8h]
  __int128 v74; // [rsp+B0h] [rbp-4C8h] BYREF
  __int128 v75; // [rsp+C0h] [rbp-4B8h]
  __int128 v76; // [rsp+D0h] [rbp-4A8h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-498h]
  _QWORD v78[2]; // [rsp+E8h] [rbp-490h] BYREF
  _QWORD v79[2]; // [rsp+F8h] [rbp-480h] BYREF
  _QWORD v80[2]; // [rsp+108h] [rbp-470h] BYREF
  _QWORD v81[2]; // [rsp+118h] [rbp-460h] BYREF
  _QWORD v82[2]; // [rsp+128h] [rbp-450h] BYREF
  _QWORD v83[2]; // [rsp+138h] [rbp-440h] BYREF
  _QWORD v84[2]; // [rsp+148h] [rbp-430h] BYREF
  _QWORD v85[2]; // [rsp+158h] [rbp-420h] BYREF
  _QWORD v86[2]; // [rsp+168h] [rbp-410h] BYREF
  _QWORD v87[2]; // [rsp+178h] [rbp-400h] BYREF
  _QWORD v88[2]; // [rsp+188h] [rbp-3F0h] BYREF
  _QWORD v89[2]; // [rsp+198h] [rbp-3E0h] BYREF
  _QWORD v90[2]; // [rsp+1A8h] [rbp-3D0h] BYREF
  _QWORD v91[2]; // [rsp+1B8h] [rbp-3C0h] BYREF
  _QWORD v92[3]; // [rsp+1C8h] [rbp-3B0h] BYREF
  _QWORD v93[4]; // [rsp+1E0h] [rbp-398h] BYREF
  _QWORD v94[3]; // [rsp+200h] [rbp-378h] BYREF
  char v95; // [rsp+218h] [rbp-360h]
  _QWORD v96[4]; // [rsp+220h] [rbp-358h] BYREF
  _QWORD v97[3]; // [rsp+240h] [rbp-338h] BYREF
  char v98; // [rsp+258h] [rbp-320h]
  _QWORD v99[3]; // [rsp+260h] [rbp-318h] BYREF
  char v100; // [rsp+278h] [rbp-300h]
  _QWORD v101[4]; // [rsp+280h] [rbp-2F8h] BYREF
  __int128 v102; // [rsp+2A0h] [rbp-2D8h]
  __int128 v103; // [rsp+2B0h] [rbp-2C8h]
  __int128 v104; // [rsp+2C0h] [rbp-2B8h]
  _OWORD v105[4]; // [rsp+2D0h] [rbp-2A8h] BYREF
  __int64 v106; // [rsp+310h] [rbp-268h]
  __int128 v107; // [rsp+320h] [rbp-258h] BYREF
  __int64 v108; // [rsp+330h] [rbp-248h]
  _QWORD v109[6]; // [rsp+338h] [rbp-240h] BYREF
  _QWORD v110[6]; // [rsp+368h] [rbp-210h] BYREF
  _QWORD v111[6]; // [rsp+398h] [rbp-1E0h] BYREF
  _QWORD v112[6]; // [rsp+3C8h] [rbp-1B0h] BYREF
  _QWORD v113[6]; // [rsp+3F8h] [rbp-180h] BYREF
  _QWORD v114[6]; // [rsp+428h] [rbp-150h] BYREF
  _QWORD v115[6]; // [rsp+458h] [rbp-120h] BYREF
  _QWORD v116[6]; // [rsp+488h] [rbp-F0h] BYREF
  _QWORD v117[6]; // [rsp+4B8h] [rbp-C0h] BYREF
  _QWORD v118[6]; // [rsp+4E8h] [rbp-90h] BYREF
  __int128 v119; // [rsp+518h] [rbp-60h]
  __int128 v120; // [rsp+528h] [rbp-50h]
  __int128 v121; // [rsp+538h] [rbp-40h]

  v6 = a4;
  v7 = a3;
  if ( !(unsigned __int8)std::path::Path::is_dir(a3, a4) )
  {
    std::path::Path::to_path_buf(&v107, v7, v6);
    *(_QWORD *)&v103 = v108;
    v102 = v107;
    *((_QWORD *)&v103 + 1) = 0x8000000000000000LL;
    result = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v53 = v102;
    v54 = v103;
    result[2] = v104;
    result[1] = v54;
    *result = v53;
    return result;
  }
  v9 = (_QWORD *)(__readfsqword(0) - 48);
  if ( *v9 == 1LL )
  {
    v10 = (__int128 *)(v9 + 1);
  }
  else if ( *v9
         || (v10 = (__int128 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(
                                 __readfsqword(0) - 48,
                                 0LL)) == 0LL )
  {
    core::result::unwrap_failed(
      anon_df683e64b8c9978a64b8f4e8e668b506_8_llvm_10436422061628228747,
      70LL,
      v105,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_df683e64b8c9978a64b8f4e8e668b506_10_llvm_10436422061628228747);
  }
  v73 = *v10;
  ++*(_QWORD *)v10;
  hashbrown::raw::RawTableInner::fallible_with_capacity(&v68, v105, 24LL, 16LL, a2, 1LL);
  v74 = v68;
  v75 = *(_OWORD *)dest;
  v76 = v73;
  if ( !a2 )
  {
    v58 = 0LL;
    goto LABEL_58;
  }
  v11 = 24 * a2;
  v59 = 1;
  v77 = a5;
  do
  {
    *(_QWORD *)&v73 = v11;
    if ( !a1 )
      break;
    if ( (*(_BYTE *)(a5 + 52) & 1) != 0
      && *(_BYTE *)(a5 + 54) == 2
      && (unsigned __int8)std::path::Path::is_symlink(v7, v6) )
    {
      if ( (unsigned __int8)std::path::Path::is_file(v7, v6) )
      {
        v12 = std::sys::pal::unix::fs::unlink(v7, v6);
        if ( v12 )
        {
          v66 = v12;
          v13 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v14 = *(_QWORD *)(v13 + 8);
          v15 = *(_QWORD *)(v13 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v14, 1LL, 1LL, v15);
          v79[0] = v14;
          v79[1] = v15;
          v78[0] = v79;
          v78[1] = <&T as core::fmt::Display>::fmt;
          v109[0] = &unk_117968;
          v109[1] = 2LL;
          v109[4] = 0LL;
          v109[2] = v78;
          v109[3] = 1LL;
          std::io::stdio::_eprint(v109);
          v94[0] = 1LL;
          v94[1] = v7;
          v94[2] = v6;
          v95 = 1;
          v93[0] = v94;
          v93[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v93[2] = &v66;
          v93[3] = <std::io::error::Error as core::fmt::Display>::fmt;
          v110[0] = &off_117988;
          v110[1] = 3LL;
          v110[4] = 0LL;
          v110[2] = v93;
          v110[3] = 2LL;
          std::io::stdio::_eprint(v110);
          std::io::error::repr_bitpacked::decode_repr(&v68, v66);
          if ( (unsigned __int8)v68 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v68 + 8);
        }
      }
      if ( (unsigned __int8)std::path::Path::is_dir(v7, v6) )
      {
        v16 = std::sys::pal::unix::fs::rmdir(v7, v6);
        if ( v16 )
        {
          v67 = v16;
          v17 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v18 = *(_QWORD *)(v17 + 8);
          v19 = *(_QWORD *)(v17 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v18, 1LL, 1LL, v19);
          v81[0] = v18;
          v81[1] = v19;
          v80[0] = v81;
          v80[1] = <&T as core::fmt::Display>::fmt;
          v111[0] = &unk_117968;
          v111[1] = 2LL;
          v111[4] = 0LL;
          v111[2] = v80;
          v111[3] = 1LL;
          std::io::stdio::_eprint(v111);
          v97[0] = 1LL;
          v97[1] = v7;
          v97[2] = v6;
          v98 = 1;
          v96[0] = v97;
          v96[1] = <os_display::Quoted as core::fmt::Display>::fmt;
          v96[2] = &v67;
          v96[3] = <std::io::error::Error as core::fmt::Display>::fmt;
          v112[0] = &off_117988;
          v112[1] = 3LL;
          v112[4] = 0LL;
          v112[2] = v96;
          v112[3] = 2LL;
          std::io::stdio::_eprint(v112);
          std::io::error::repr_bitpacked::decode_repr(&v68, v67);
          if ( (unsigned __int8)v68 >= 3u )
            core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v68 + 8);
        }
      }
      std::path::Path::to_path_buf(v62, v7, v6);
LABEL_28:
      v65 = a1;
      if ( !*((_QWORD *)&v75 + 1) )
        goto LABEL_38;
      v70 = v76;
      v68 = 0LL;
      *(_OWORD *)dest = 0LL;
      v71 = 0LL;
      v72 = 0LL;
      core::hash::sip::Hasher<S>::reset(&v68);
      v106 = v72;
      v105[3] = v71;
      v105[2] = v70;
      v105[1] = *(_OWORD *)dest;
      v105[0] = v68;
      v25 = src;
      v26 = n;
      core::slice::raw::from_raw_parts::precondition_check(src, 1LL, 1LL, n);
      <std::path::Path as core::hash::Hash>::hash(v25, v26, v105);
      v27 = <core::hash::sip::Hasher<S> as core::hash::Hasher>::finish(v105);
      if ( hashbrown::raw::RawTable<T,A>::find(&v74, v27, v62) )
      {
        v28 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
        v29 = *(_QWORD *)(v28 + 8);
        v30 = *(_QWORD *)(v28 + 16);
        core::slice::raw::from_raw_parts::precondition_check(v29, 1LL, 1LL, v30);
        v86[0] = v29;
        v86[1] = v30;
        v85[0] = v86;
        v85[1] = <&T as core::fmt::Display>::fmt;
        v115[0] = &unk_117968;
        v115[1] = 2LL;
        v115[4] = 0LL;
        v115[2] = v85;
        v115[3] = 1LL;
        std::io::stdio::_eprint(v115);
        if ( !src )
          goto LABEL_63;
        if ( (n & 0x8000000000000000LL) != 0LL )
          goto LABEL_63;
        v87[0] = src;
        v87[1] = n;
        if ( !*(_QWORD *)(v65 + 8) )
          goto LABEL_63;
        v31 = *(_QWORD *)(v65 + 16);
        if ( v31 < 0 )
          goto LABEL_63;
        v88[0] = *(_QWORD *)(v65 + 8);
        v88[1] = v31;
        v101[0] = v87;
        v101[1] = <std::path::Display as core::fmt::Display>::fmt;
        v101[2] = v88;
        v101[3] = <std::path::Display as core::fmt::Display>::fmt;
        v116[0] = &off_1179F8;
        v116[1] = 3LL;
        v116[4] = 0LL;
        v116[2] = v101;
        v116[3] = 2LL;
        std::io::stdio::_eprint(v116);
LABEL_47:
        v59 = 0;
      }
      else
      {
LABEL_38:
        v37 = *(_QWORD *)(v65 + 8);
        if ( !v37 )
          goto LABEL_63;
        v38 = *(_QWORD *)(v65 + 16);
        if ( v38 < 0 || !src || (n & 0x8000000000000000LL) != 0LL )
          goto LABEL_63;
        v39 = uu_ln::link(v37, v38, src, n, a5);
        if ( v39 )
        {
          v60 = v39;
          v61 = v40;
          v41 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
          v42 = *(_QWORD *)(v41 + 8);
          v43 = *(_QWORD *)(v41 + 16);
          core::slice::raw::from_raw_parts::precondition_check(v42, 1LL, 1LL, v43);
          v90[0] = v42;
          v90[1] = v43;
          v89[0] = v90;
          v89[1] = <&T as core::fmt::Display>::fmt;
          v117[0] = &unk_117968;
          v117[1] = 2LL;
          v117[4] = 0LL;
          v117[2] = v89;
          v117[3] = 1LL;
          std::io::stdio::_eprint(v117);
          v91[0] = &v60;
          v91[1] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
          v118[0] = &unk_1179D8;
          v118[1] = 2LL;
          v118[4] = 0LL;
          v118[2] = v91;
          v118[3] = 1LL;
          std::io::stdio::_eprint(v118);
          v44 = v61;
          if ( *v61 )
          {
            (*v61)(v60);
            v44 = v61;
          }
          v45 = v44[1];
          if ( v45 )
            _rust_dealloc(v60, v45, v44[2]);
          goto LABEL_47;
        }
      }
      v46 = src;
      v47 = n;
      core::slice::raw::from_raw_parts::precondition_check(src, 1LL, 1LL, n);
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v68, v47, 0LL);
      v48 = *((_QWORD *)&v68 + 1);
      if ( (_QWORD)v68 )
        alloc::raw_vec::handle_error(*((_QWORD *)&v68 + 1), dest[0]);
      v49 = v7;
      v50 = v6;
      v51 = dest[0];
      core::intrinsics::copy_nonoverlapping::precondition_check(v46, dest[0], 1LL, 1LL, v47);
      memcpy(v51, v46, v47);
      v92[0] = v48;
      v92[1] = v51;
      v92[2] = v47;
      hashbrown::map::HashMap<K,V,S,A>::insert(&v74, v92);
      v6 = v50;
      v7 = v49;
      a5 = v77;
      alloc::raw_vec::RawVec<T,A>::current_memory(&v68, v62);
      a1 = v65;
      if ( *((_QWORD *)&v68 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&n, v68, *((_QWORD *)&v68 + 1), dest[0]);
      goto LABEL_6;
    }
    if ( !*(_QWORD *)(a1 + 8) || *(__int64 *)(a1 + 16) < 0 )
LABEL_63:
      core::panicking::panic_nounwind(anon_df683e64b8c9978a64b8f4e8e668b506_19_llvm_10436422061628228747, 162LL);
    std::sys::os_str::bytes::Slice::to_str(&v68);
    if ( !(_QWORD)v68 )
    {
      v20 = *((_QWORD *)&v68 + 1);
      if ( *((_QWORD *)&v68 + 1) )
      {
        v21 = dest[0];
        v22 = std::path::Path::file_name(*((_QWORD *)&v68 + 1), dest[0]);
        v24 = v23;
        if ( v22 )
          v20 = v22;
        else
          v24 = v21;
        std::path::Path::_join(v62, v7, v6, v20, v24);
        goto LABEL_28;
      }
    }
    v32 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v33 = *(_QWORD *)(v32 + 8);
    v34 = *(_QWORD *)(v32 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v33, 1LL, 1LL, v34);
    v83[0] = v33;
    v83[1] = v34;
    v82[0] = v83;
    v82[1] = <&T as core::fmt::Display>::fmt;
    v113[0] = &unk_117968;
    v113[1] = 2LL;
    v113[4] = 0LL;
    v113[2] = v82;
    v113[3] = 1LL;
    std::io::stdio::_eprint(v113);
    v35 = *(_QWORD *)(a1 + 8);
    if ( !v35 )
      goto LABEL_63;
    v36 = *(_QWORD *)(a1 + 16);
    if ( v36 < 0 )
      goto LABEL_63;
    v99[0] = 1LL;
    v99[1] = v35;
    v99[2] = v36;
    v100 = 1;
    v84[0] = v99;
    v84[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v114[0] = &off_1179B8;
    v114[1] = 2LL;
    v114[4] = 0LL;
    v114[2] = v84;
    v114[3] = 1LL;
    std::io::stdio::_eprint(v114);
    v59 = 0;
LABEL_6:
    a1 += 24LL;
    v11 = v73 - 24;
  }
  while ( (_QWORD)v73 != 24LL );
  if ( (v59 & 1) != 0 )
  {
    v58 = 0LL;
  }
  else
  {
    *((_QWORD *)&v120 + 1) = 0x8000000000000001LL;
    v55 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 48LL, 0LL);
    if ( !v55 )
      alloc::alloc::handle_alloc_error(8LL, 48LL);
    v56 = v119;
    v57 = v120;
    v55[2] = v121;
    v55[1] = v57;
    v58 = v55;
    *v55 = v56;
  }
LABEL_58:
  hashbrown::raw::RawTableInner::drop_inner_table(&v74, &v76, 24LL, 16LL);
  return v58;
}
