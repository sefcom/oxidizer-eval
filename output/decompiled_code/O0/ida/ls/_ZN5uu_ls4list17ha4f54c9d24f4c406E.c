__int128 *__fastcall uu_ls::list(__int64 *a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  char v4; // al
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rax
  int v9; // ecx
  int *v10; // rax
  unsigned __int64 v11; // r14
  void **v12; // rax
  _BYTE *v13; // rsi
  unsigned __int64 *v14; // r12
  __int64 v15; // rbx
  _DWORD *v16; // r15
  void *v17; // rax
  __int128 *v18; // rax
  __int128 *v19; // r12
  __int128 v20; // xmm0
  _QWORD *v22; // rbp
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 v25; // r12
  __int64 v26; // r14
  void *v27; // rax
  const void *v28; // r12
  size_t v29; // r15
  __int64 v30; // r13
  void *v31; // rbx
  char v32; // al
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rbx
  __int64 v36; // r15
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // r15
  bool v41; // cf
  __int64 v42; // r15
  void *v43; // rax
  void *v44; // rax
  __int128 *v45; // rax
  __int128 v46; // xmm0
  __int64 v47; // rbx
  __int128 *v48; // rax
  __int128 v49; // xmm0
  __int128 *v50; // rax
  __int128 v51; // xmm0
  __int128 v52; // xmm0
  __int128 v53; // [rsp+0h] [rbp-838h] BYREF
  void *v54[2]; // [rsp+10h] [rbp-828h]
  __int64 v55; // [rsp+20h] [rbp-818h]
  __int64 v56; // [rsp+28h] [rbp-810h] BYREF
  void *v57; // [rsp+30h] [rbp-808h] BYREF
  unsigned __int64 v58; // [rsp+38h] [rbp-800h] BYREF
  __int64 v59; // [rsp+40h] [rbp-7F8h] BYREF
  void *v60; // [rsp+48h] [rbp-7F0h] BYREF
  unsigned __int64 v61; // [rsp+50h] [rbp-7E8h] BYREF
  _QWORD v62[3]; // [rsp+58h] [rbp-7E0h] BYREF
  char v63; // [rsp+70h] [rbp-7C8h]
  __int64 v64; // [rsp+78h] [rbp-7C0h] BYREF
  __int64 v65; // [rsp+80h] [rbp-7B8h]
  volatile signed __int64 *v66; // [rsp+88h] [rbp-7B0h] BYREF
  char v67; // [rsp+90h] [rbp-7A8h]
  __int64 *v68; // [rsp+98h] [rbp-7A0h]
  __int64 v69; // [rsp+A0h] [rbp-798h]
  _QWORD v70[2]; // [rsp+A8h] [rbp-790h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-780h] BYREF
  __int64 v72; // [rsp+C0h] [rbp-778h] BYREF
  char v73; // [rsp+C8h] [rbp-770h]
  char v74; // [rsp+DDh] [rbp-75Bh]
  _QWORD *v75; // [rsp+E0h] [rbp-758h] BYREF
  _QWORD *v76; // [rsp+E8h] [rbp-750h]
  __int64 v77; // [rsp+F0h] [rbp-748h]
  _QWORD *v78; // [rsp+F8h] [rbp-740h]
  __int64 v79; // [rsp+100h] [rbp-738h]
  unsigned __int64 v80; // [rsp+108h] [rbp-730h]
  _QWORD v81[2]; // [rsp+110h] [rbp-728h] BYREF
  __int128 v82; // [rsp+120h] [rbp-718h]
  __int64 v83; // [rsp+130h] [rbp-708h]
  __int128 v84; // [rsp+138h] [rbp-700h]
  __int64 v85; // [rsp+148h] [rbp-6F0h]
  _OWORD v86[2]; // [rsp+150h] [rbp-6E8h] BYREF
  __int128 v87; // [rsp+170h] [rbp-6C8h] BYREF
  _QWORD v88[2]; // [rsp+188h] [rbp-6B0h] BYREF
  _QWORD v89[2]; // [rsp+198h] [rbp-6A0h] BYREF
  _QWORD v90[4]; // [rsp+1A8h] [rbp-690h] BYREF
  _BYTE v91[8]; // [rsp+1C8h] [rbp-670h] BYREF
  __int64 v92; // [rsp+1D0h] [rbp-668h]
  __int64 v93; // [rsp+1D8h] [rbp-660h]
  void *v94; // [rsp+1E0h] [rbp-658h]
  size_t v95; // [rsp+1E8h] [rbp-650h]
  __int128 v96; // [rsp+200h] [rbp-638h] BYREF
  void *v97; // [rsp+210h] [rbp-628h]
  _QWORD v98[6]; // [rsp+218h] [rbp-620h] BYREF
  _QWORD v99[6]; // [rsp+248h] [rbp-5F0h] BYREF
  _QWORD v100[3]; // [rsp+278h] [rbp-5C0h] BYREF
  __int128 v101; // [rsp+290h] [rbp-5A8h]
  _QWORD v102[3]; // [rsp+2A8h] [rbp-590h] BYREF
  __int128 v103; // [rsp+2C0h] [rbp-578h]
  _QWORD v104[3]; // [rsp+2D8h] [rbp-560h] BYREF
  __int128 v105; // [rsp+2F0h] [rbp-548h]
  __int64 v106[3]; // [rsp+308h] [rbp-530h] BYREF
  __int64 v107[6]; // [rsp+320h] [rbp-518h] BYREF
  __int64 v108; // [rsp+350h] [rbp-4E8h] BYREF
  void *v109; // [rsp+358h] [rbp-4E0h]
  _BYTE v110[136]; // [rsp+360h] [rbp-4D8h] BYREF
  _QWORD src[38]; // [rsp+3E8h] [rbp-450h] BYREF
  void *v112; // [rsp+518h] [rbp-320h] BYREF
  _BYTE v113[136]; // [rsp+520h] [rbp-318h] BYREF
  _BYTE dest[304]; // [rsp+5A8h] [rbp-290h] BYREF
  _BYTE v115[352]; // [rsp+6D8h] [rbp-160h] BYREF

  v2 = a2;
  v68 = a1;
  v56 = 0LL;
  v57 = &byte_8;
  v58 = 0LL;
  v59 = 0LL;
  v60 = &byte_8;
  v61 = 0LL;
  v3 = std::io::stdio::stdout();
  alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v53, 0x2000LL, 0LL);
  if ( (_QWORD)v53 )
    alloc::raw_vec::handle_error(*((_QWORD *)&v53 + 1), v54[0]);
  v62[0] = *((_QWORD *)&v53 + 1);
  v62[1] = v54[0];
  v62[2] = 0LL;
  v63 = 0;
  v64 = v3;
  v81[0] = 0LL;
  v81[1] = 8LL;
  v82 = 0LL;
  v83 = 8LL;
  v84 = 0LL;
  v4 = 2;
  if ( *(_QWORD *)(a2 + 24) != 0x8000000000000000LL )
  {
    v72 = a2 + 24;
    v73 = 2;
    v4 = 0;
  }
  v74 = v4;
  v5 = v68[2];
  v6 = *v68;
  v7 = (_QWORD *)v68[1];
  v75 = v7;
  v76 = v7;
  v77 = v6;
  v78 = &v7[2 * v5];
  v80 = v5;
  v55 = v2;
  if ( v5 )
  {
    while ( 1 )
    {
      v76 = v7 + 2;
      if ( !*v7 )
        goto LABEL_27;
      std::sys::os_str::bytes::Slice::to_owned(&v53, *v7, v7[1]);
      v97 = v54[0];
      v96 = v53;
      v107[0] = 0LL;
      v106[0] = 0x8000000000000000LL;
      uu_ls::PathData::new((__int64)src, &v96, (__int64)v107, v106, v2, 1);
      v8 = src[9];
      if ( src[9] == 3LL )
        v8 = *(_QWORD *)core::cell::once::OnceCell<T>::try_init(&src[9], src, v62);
      if ( v8 != 2 )
        break;
      core::ptr::drop_in_place<uu_ls::PathData>(src);
LABEL_7:
      v7 = v76;
      if ( v76 == v78 )
        goto LABEL_27;
    }
    v9 = src[31];
    v10 = (int *)&src[31];
    if ( LODWORD(src[31]) == 2 )
    {
      v10 = (int *)core::cell::once::OnceCell<T>::try_init(&src[31], src, v62);
      v9 = *v10;
    }
    if ( v9 )
    {
      if ( (*(_BYTE *)(v2 + 232) & 1) == 0 && (v10[1] & 0xF000) == 0x4000 )
      {
        memcpy(dest, src, sizeof(dest));
        v11 = v61;
        if ( v61 == v59 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v59);
        v12 = &v60;
        v13 = dest;
        v14 = &v61;
LABEL_25:
        memmove((char *)*v12 + 304 * v11, v13, 0x130uLL);
        *v14 = v11 + 1;
        v2 = v55;
        goto LABEL_7;
      }
    }
    else
    {
      _InterlockedExchange(&uucore::mods::error::EXIT_CODE, 1);
    }
    memcpy(v115, src, 0x130uLL);
    v11 = v58;
    if ( v58 == v56 )
      alloc::raw_vec::RawVec<T,A>::grow_one(&v56);
    v12 = &v57;
    v13 = v115;
    v14 = &v58;
    goto LABEL_25;
  }
LABEL_27:
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v75);
  if ( !v57
    || ((unsigned __int8)v57 & 7) != 0
    || v58 > 0x6BCA1AF286BCA1LL
    || (uu_ls::sort_entries(v57), !v60)
    || ((unsigned __int8)v60 & 7) != 0
    || v61 > 0x6BCA1AF286BCA1LL )
  {
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_29_llvm_13257680528908953851, 166LL);
  }
  uu_ls::sort_entries(v60);
  if ( v74 != 2 && lscolors::LsColors::style_for_indicator(v72, 0LL) )
  {
    v74 = 1;
    v73 = 2;
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v53, 4LL, 0LL);
    v15 = *((_QWORD *)&v53 + 1);
    if ( (_QWORD)v53 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v53 + 1), v54[0]);
    v16 = v54[0];
    core::intrinsics::copy_nonoverlapping::precondition_check(
      anon_899730b44f50ab02bfd9ca63d23e76e8_61_llvm_11807341281290569930,
      v54[0],
      1LL,
      1LL,
      4LL);
    *v16 = 1831885595;
    v70[0] = v15;
    v70[1] = v16;
    v71 = 4LL;
    v88[0] = v70;
    v88[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v98[0] = &anon_899730b44f50ab02bfd9ca63d23e76e8_42_llvm_11807341281290569930;
    v98[1] = 1LL;
    v98[4] = 0LL;
    v98[2] = v88;
    v98[3] = 1LL;
    v17 = (void *)std::io::Write::write_fmt(v62, v98);
    if ( v17 )
    {
      *(_QWORD *)&v53 = 0x8000000000000000LL;
      v54[1] = v17;
      v18 = (__int128 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v19 = v18;
      if ( !v18 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v20 = v53;
      v18[1] = *(_OWORD *)v54;
      *v18 = v20;
      alloc::raw_vec::RawVec<T,A>::current_memory(&v53, v70);
      if ( *((_QWORD *)&v53 + 1) )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v71, v53, *((_QWORD *)&v53 + 1), v54[0]);
      goto LABEL_47;
    }
    alloc::raw_vec::RawVec<T,A>::current_memory(&v53, v70);
    if ( *((_QWORD *)&v53 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v71, v53, *((_QWORD *)&v53 + 1), v54[0]);
  }
  if ( !v57 || ((unsigned __int8)v57 & 7) != 0 || v58 > 0x6BCA1AF286BCA1LL )
    goto LABEL_105;
  v19 = (__int128 *)uu_ls::display_items(v57, v58, v55, v62, v81, &v72);
  if ( v19 )
    goto LABEL_47;
  v22 = v60;
  if ( !v60 || ((unsigned __int8)v60 & 7) != 0 || v61 > 0x6BCA1AF286BCA1LL )
LABEL_105:
    core::panicking::panic_nounwind(anon_d13c0a923ac77d86b5cd3d5212361a5f_28_llvm_13257680528908953851, 162LL);
  v23 = v55;
  if ( !v61 )
  {
LABEL_77:
    if ( (*(_BYTE *)(v23 + 238) & 1) != 0 && (*(_BYTE *)(v23 + 239) & 1) == 0 )
    {
      v19 = (__int128 *)uu_ls::dired::print_dired_output(v23, v81, v62);
      if ( v19 )
        goto LABEL_47;
    }
    core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(v81);
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v62);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v59);
    v19 = 0LL;
    goto LABEL_48;
  }
  v79 = -304LL * v61;
  v65 = 0LL;
  while ( 1 )
  {
    v24 = v22[4];
    v25 = v22[5];
    core::slice::raw::from_raw_parts::precondition_check(v24, 1LL, 1LL, v25);
    std::sys::pal::unix::fs::readdir(&v53, v24, v25);
    v26 = v53;
    if ( BYTE8(v53) != 2 )
      break;
    v69 = v53;
    v27 = (void *)std::io::buffered::bufwriter::BufWriter<W>::flush_buf(v62);
    if ( v27 || (v27 = (void *)<std::io::stdio::Stdout as std::io::Write>::flush(&v64)) != 0LL )
    {
      *(_QWORD *)&v53 = 0x8000000000000000LL;
      v54[1] = v27;
      v48 = (__int128 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
      v19 = v48;
      if ( !v48 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      v49 = v53;
      v48[1] = *(_OWORD *)v54;
      *v48 = v49;
      std::io::error::repr_bitpacked::decode_repr(&v53, v69);
      if ( (unsigned __int8)v53 >= 3u )
        core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>((char *)&v53 + 8);
      goto LABEL_47;
    }
    v85 = v26;
    v28 = (const void *)v22[4];
    v29 = v22[5];
    core::slice::raw::from_raw_parts::precondition_check(v28, 1LL, 1LL, v29);
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v53, v29, 0LL);
    v30 = *((_QWORD *)&v53 + 1);
    if ( (_QWORD)v53 )
      alloc::raw_vec::handle_error(*((_QWORD *)&v53 + 1), v54[0]);
    v31 = v54[0];
    core::intrinsics::copy_nonoverlapping::precondition_check(v28, v54[0], 1LL, 1LL, v29);
    memcpy(v31, v28, v29);
    v32 = *((_BYTE *)v22 + 297);
    v92 = v26;
    v93 = v30;
    v94 = v31;
    v95 = v29;
    v33 = v32 & 1;
    v91[1] = v33;
    v91[0] = 2;
    _InterlockedExchange(&uucore::mods::error::EXIT_CODE, v33 + 1);
    v34 = once_cell::sync::OnceCell<T>::get_or_try_init(&uucore::UTIL_NAME, &uucore::UTIL_NAME);
    v35 = *(_QWORD *)(v34 + 8);
    v36 = *(_QWORD *)(v34 + 16);
    core::slice::raw::from_raw_parts::precondition_check(v35, 1LL, 1LL, v36);
    v89[0] = v35;
    v89[1] = v36;
    v90[0] = v89;
    v90[1] = <&T as core::fmt::Display>::fmt;
    v90[2] = v91;
    v90[3] = <uu_ls::LsError as core::fmt::Display>::fmt;
    v99[0] = &unk_1FF1D8;
    v99[1] = 3LL;
    v99[4] = 0LL;
    v99[2] = v90;
    v99[3] = 2LL;
    std::io::stdio::_eprint(v99);
    core::ptr::drop_in_place<uu_ls::LsError>(v91);
    v23 = v55;
LABEL_54:
    v22 += 38;
    v65 -= 304LL;
    if ( v79 == v65 )
      goto LABEL_77;
  }
  v66 = (volatile signed __int64 *)v53;
  v67 = BYTE8(v53) & 1;
  v37 = v55;
  if ( v80 > 1 || (*(_BYTE *)(v55 + 230) & 1) != 0 )
  {
    if ( v65 | v58 )
    {
      v102[0] = &off_1FF240;
      v102[1] = 1LL;
      v102[2] = 8LL;
      v103 = 0LL;
      v43 = (void *)std::io::Write::write_fmt(v62, v102);
      if ( v43 )
      {
        *(_QWORD *)&v53 = 0x8000000000000000LL;
        v54[1] = v43;
        v19 = (__int128 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v19 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
      }
      else
      {
        uu_ls::show_dir_name((__int64)v22, (__int64)v62, v37);
        v104[0] = &off_1FF240;
        v104[1] = 1LL;
        v104[2] = 8LL;
        v105 = 0LL;
        v44 = (void *)std::io::Write::write_fmt(v62, v104);
        if ( !v44 )
          goto LABEL_73;
        *(_QWORD *)&v53 = 0x8000000000000000LL;
        v54[1] = v44;
        v19 = (__int128 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
        if ( !v19 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
      }
      v52 = v53;
      v19[1] = *(_OWORD *)v54;
      *v19 = v52;
      goto LABEL_94;
    }
    if ( (*(_BYTE *)(v55 + 238) & 1) != 0 )
    {
      v19 = (__int128 *)uu_ls::dired::indent(v62);
      if ( v19 )
        goto LABEL_94;
    }
    uu_ls::show_dir_name((__int64)v22, (__int64)v62, v37);
    v100[0] = &off_1FF240;
    v100[1] = 1LL;
    v100[2] = 8LL;
    v101 = 0LL;
    v38 = std::io::Write::write_fmt(v62, v100);
    if ( v38 )
    {
      v19 = (__int128 *)<core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                          v38,
                          &off_1FF250);
LABEL_94:
      if ( !_InterlockedDecrement64(v66) )
        alloc::sync::Arc<T,A>::drop_slow(&v66);
      goto LABEL_47;
    }
    if ( (*(_BYTE *)(v37 + 238) & 1) != 0 )
    {
      if ( !v22[1] )
        goto LABEL_105;
      v39 = v22[2];
      if ( v39 < 0 )
        goto LABEL_105;
      uu_ls::dired::calculate_subdired(v81, v22[2]);
      v40 = v39 + 3;
      v41 = __CFADD__(*((_QWORD *)&v84 + 1), v40);
      v42 = *((_QWORD *)&v84 + 1) + v40;
      if ( v41 )
        core::panicking::panic_const::panic_const_add_overflow(&anon_899730b44f50ab02bfd9ca63d23e76e8_49_llvm_11807341281290569930);
      *((_QWORD *)&v84 + 1) = v42;
    }
  }
LABEL_73:
  v45 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
  if ( !v45 )
    core::result::unwrap_failed(
      anon_df543e2d2046c902872e71158cd88749_39_llvm_18211893676318493667,
      70LL,
      &v53,
      &anon_a1269a763ab6fd2908d2f1c0d5e3c386_9_llvm_12412112173124066918,
      &anon_df543e2d2046c902872e71158cd88749_41_llvm_18211893676318493667);
  v46 = *v45;
  ++*(_QWORD *)v45;
  v86[1] = xmmword_1FFEE0;
  v86[0] = *(_OWORD *)&anon_b438c60d35a7a17c7dcbb87cc93b6afd_20_llvm_901017236515008548;
  v87 = v46;
  uucore::features::fs::FileInformation::from_path(&v108, v22 + 3, v22[37] & 1);
  v47 = v108;
  if ( !v108 )
  {
    memcpy(v113, v110, sizeof(v113));
    v112 = v109;
    hashbrown::map::HashMap<K,V,S,A>::insert(v86, &v112);
    v23 = v55;
    v19 = (__int128 *)uu_ls::enter_directory(
                        (_DWORD)v22,
                        (_DWORD)v66,
                        v67 & 1,
                        v55,
                        (unsigned int)v62,
                        (unsigned int)v86,
                        (__int64)v81,
                        (__int64)&v72);
    if ( v19 )
      goto LABEL_86;
    hashbrown::raw::RawTableInner::drop_inner_table(v86, &v87, 144LL, 16LL);
    goto LABEL_54;
  }
  *(_QWORD *)&v53 = 0x8000000000000000LL;
  v54[1] = v109;
  v50 = (__int128 *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
  v19 = v50;
  if ( !v50 )
    alloc::alloc::handle_alloc_error(8LL, 32LL);
  v51 = v53;
  v50[1] = *(_OWORD *)v54;
  *v50 = v51;
LABEL_86:
  hashbrown::raw::RawTableInner::drop_inner_table(v86, &v87, 144LL, 16LL);
  if ( v47 )
    goto LABEL_94;
LABEL_47:
  core::ptr::drop_in_place<uu_ls::dired::DiredOutput>(v81);
  core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::Stdout>>(v62);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v59);
LABEL_48:
  core::ptr::drop_in_place<alloc::vec::Vec<uu_ls::PathData>>(&v56);
  return v19;
}
